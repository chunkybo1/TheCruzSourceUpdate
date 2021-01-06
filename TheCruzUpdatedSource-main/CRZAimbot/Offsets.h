#pragma once

//#define OFFSET_RAN 0//0x34LLU
#define TOFFSET(d1) d1 //((d1)+offset_ran_var)

extern unsigned long long offset_ran_var;

#define ENTITY_SIZE_DEF				0x42E0		    //biggest entity offset //0x42E0

#define OFFSET_ENTITYLIST		    0x18CDCE8		//cl_entitylist
#define OFFSET_LOCAL_ENT			0x1C7CF28		//LocalPlayer

#define OFFSET_TEAM					0x04b0			//m_iTeamNum
#define OFFSET_HEALTH				0x04a0			//m_iHealth
#define OFFSET_NAME					0x05e9			//m_iName
#define OFFSET_SIG_NAME				0x05e0			//m_iSignifierName
#define OFFSET_SHIELD				0x0170			//m_shieldHealth
#define OFFSET_MAX_SHIELD			0x0174			//m_shieldHealth +0x4
#define OFFSET_VISIBLE_TIME         0x1AEC          //m_visibletime // Can't find myself // 0x1A6C

#define OFFSET_LIFE_STATE			0x07f8			//m_lifeState
#define OFFSET_BLEED_OUT_STATE		0x26b0			//m_bleedoutState

#define OFFSET_ITEM_ID				0x1688			//m_customScriptInt

#define OFFSET_BULLET_SPEED			0x1ea8			//m_flProjectileSpeed
#define OFFSET_BULLET_GRAVITY		0x1eb0			//m_flProjectileScale

#define OFFSET_CURRENT_WEAPON		0x1a8c			//m_latestPrimaryWeapons
#define OFFSET_ORIGIN				0x14c			//m_vecAbsOrigin
#define OFFSET_BONES				0xF98			//m_nForceBone + 0x50 - 0x8 -> 48 8B 97 ?? ?? ?? ?? 48 8D 04 5B 48 C1
#define OFFSET_AIMPUNCH				0x2450			//m_vecPunchWeapon_Angle
#define OFFSET_CAMERAPOS			0x1EF0			// Search CameraPos, first Result
#define OFFSET_VIEWANGLES			0x2528			//m_ammoPoolCapacity - 0x14  -> 0F 57 C0 8B 86 ?? ?? ?? ?? F3 segundo uso de un 0x24AX
#define OFFSET_BREATH_ANGLES		(OFFSET_VIEWANGLES - 0x10)
#define OFFSET_OBSERVER_MODE		0x3364			//m_iObserverMode
#define OFFSET_OBSERVING_TARGET		0x3368			//m_hObserverTarget

#define OFFSET_HELMET_TYPE			0x4328			//m_helmetType

#define GLOW_CONTEXT 0x3C8 //Script_Highlight_SetCurrentContext
#define GLOW_LIFE_TIME 0x3A4 //Script_Highlight_SetLifeTime + 4
#define GLOW_DISTANCE 0x3B4 //Script_Highlight_SetFarFadeDist
#define GLOW_TYPE 0x2C4 //Script_Highlight_GetState + 4
#define GLOW_COLOR 0x1D0 //Script_CopyHighlightState 15th mov
#define GLOW_VISIBLE_TYPE 0x3D0 //Script_Highlight_SetVisibilityType 5th mov
#define GLOW_FADE 0x388 //Script_Highlight_GetCurrentInsideOpacity 3rd result of 3 offsets consecutive or first + 8

#define OFFSET_MATRIX				0x1b3bd0		//ViewMatrix
#define OFFSET_RENDER				0x407def8 	 	//ViewRender