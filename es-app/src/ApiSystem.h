#ifndef API_SYSTEM
#define API_SYSTEM

#include <string>
#include <functional>
#include <vector>

class Window;

namespace UpdateState
{
	enum State
	{
		NO_UPDATE,
		UPDATER_RUNNING,
		UPDATE_READY
	};
}

struct ThemeDownloadInfo
{
	bool installed;
	std::string name;
	std::string url;
};

class ApiSystem 
{
public:
	static UpdateState::State state;

	static std::pair<std::string, int> updateSystem(const std::function<void(const std::string)>& func = nullptr);
	static std::string checkUpdateVersion();
	static void startUpdate(Window* c);

	static std::vector<ThemeDownloadInfo> getThemesList();
	static std::pair<std::string, int> installTheme(std::string themeName, const std::function<void(const std::string)>& func = nullptr);

    static ApiSystem* getInstance();
	virtual void deinit() { };

    virtual bool launchKodi(Window *window);

	bool	getBrighness(int& value);
	void	setBrighness(int value);

protected:
    static ApiSystem* instance;
    void launchExternalWindow_before(Window *window);
    void launchExternalWindow_after(Window *window);
};

#endif

