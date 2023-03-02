#pragma once
#ifndef ES_APP_PLATFORM_ID_H
#define ES_APP_PLATFORM_ID_H

#include <string>

namespace PlatformIds
{
	enum PlatformId : unsigned int
	{
		PLATFORM_UNKNOWN = 0,

		THREEDO, // name can't start with a constant
		AMIGA,
		AMSTRAD_CPC,
		APPLE_II,
		ARCADE,
		ATARI_800,
		ATARI_2600,
		ATARI_5200,
		ATARI_7800,
		ATARI_LYNX,
		ATARI_ST, // Atari ST/STE/Falcon
		ATARI_JAGUAR,
		ATARI_JAGUAR_CD,
		ATARI_XE,
		COLECOVISION,
		COMMODORE_16,
		COMMODORE_64,
		COMMODORE_VIC20,
		INTELLIVISION,
		MAC_OS,
		XBOX,
		XBOX_360,
		MSX,
		NEOGEO,
		NEOGEO_POCKET,
		NEOGEO_POCKET_COLOR,
		NINTENDO_3DS,
		NINTENDO_64,
		NINTENDO_64_DISK_DRIVE,
		NINTENDO_DS,
		FAMICOM_DISK_SYSTEM,
		NINTENDO_ENTERTAINMENT_SYSTEM,
		SUPER_GAME_BOY,
		GAME_BOY,
		GAME_BOY_ADVANCE,
		GAME_BOY_COLOR,
		NINTENDO_GAMECUBE,
		NINTENDO_WII,
		NINTENDO_WII_U,
		NINTENDO_VIRTUAL_BOY,
		NINTENDO_SWITCH,
		NINTENDO_GAME_AND_WATCH,
		PC,
		PC_88,
		PC_98,
		PICO8,
		SEGA_32X,
		SEGA_CD,
		SEGA_DREAMCAST,
		SEGA_GAME_GEAR,
		SEGA_GENESIS,
		SEGA_MASTER_SYSTEM,
		SEGA_MEGA_DRIVE,
		SEGA_SATURN,
		SEGA_SG1000,
		SHARP_X1,
		PLAYSTATION,
		PLAYSTATION_2,
		PLAYSTATION_3,
		PLAYSTATION_4,
		PLAYSTATION_VITA,
		PLAYSTATION_PORTABLE,
		QUAKE,
		SUPER_NINTENDO,
		SUPER_NINTENDO_MSU1,
		SCUMMVM,
		SHARP_X6800,
		TURBOGRAFX_16, // (aka PC Engine) HuCards only
		TURBOGRAFX_CD, // (aka PC Engine) CD-ROMs only
		WONDERSWAN,
		WONDERSWAN_COLOR,
		ZX_SPECTRUM,
		VIDEOPAC_ODYSSEY2,
		VECTREX,
		TRS80_COLOR_COMPUTER,
		TANDY,		
		SUPERGRAFX,
		WATARA_SUPERVISION,
		MODEL3,
		MEGADUCK,
		AMIGACD32,
		AMIGACDTV,
		ATOMISWAVE,
		CAVESTORY,
		GX4000,
		LUTRO,
		MOONLIGHT,
		SONIC,
		NAOMI,
		NEOGEO_CD,
		PCFX,
		POKEMINI,
		PRBOOM,
		SATELLAVIEW,
		SUFAMITURBO,
		ZX81,
		TIC80,
		TI99,
		SEGA_PICO,

		// Windows Specific
		VISUALPINBALL,
		FUTUREPINBALL,

		// Misc systems
		CHANNELF,
		ORICATMOS,
		THOMSON_TO_MO,
		SAMCOUPE,
		OPENBOR,
		UZEBOX,
		APPLE2GS,
		SPECTRAVIDEO,
		PALMOS,
		ALG,
		DAPHNE,
		SOLARUS,

		SUPER_CASSETTE_VISION,
		EASYRPG,
		COMMODORE_PET,
		ACORN_ATOM,
		ACORN_BBC_MICRO,
		ACORN_ELECTRON,
		NOKIA_NGAGE,
		ASTROCADE,
		ARCHIMEDES,
		ADAM,

		FMTOWNS,
		PHILIPS_CDI,
		FUJITSU_FM7,
		CASIO_PV1000,
		TIGER_GAMECOM,
		ENTEX_ADVENTURE_VISION,
		EMERSON_ARCADIA_2001,
		LCD_GAMES,
		VTECH_CREATIVISION,
		VTECH_VSMILE,

		PLATFORM_IGNORE, // do not allow scraping for this system
		PLATFORM_COUNT
	};

	PlatformId		getPlatformId(const char* str);
	std::string		getPlatformName(PlatformId id);
}

#endif // ES_APP_PLATFORM_ID_H
