    //GameVersion=v3.0.48.47
    //LastUpdated=31/10/2023
    //UpdatedBy:DAHUSTLA
    #pragma once
    namespace offsets
    {
        // buttons
        ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        const long IN_ATTACK = 0x020ebfd0;              // Buttons.in_attack
        // core
        ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        const long REGION = 0x140000000;
        const long LEVEL = 0x168F670;                   // Miscellaneous.LevelName
        const long LOCAL_PLAYER = 0x2118848;            // Miscellaneous.LocalPlayer 
        const long ENTITY_LIST = 0x1d6a5d8;             // Miscellaneous.cl_entitylist
        const long HIGHLIGHT_SETTINGS = 0xB5C4090;      // Miscellaneous.?
        const long HIGHLIGHT_TYPE_SIZE = 0x28;          // Miscellaneous.?
        // entity
        ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        const long LOCAL_ORIGIN = 0x0188;               //[DataMap.CBaseViewModel]->m_localOrigin
        // player
        ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        const long GLOW_ENABLE = 0x294;                 // DT_HighlightSettings.?
        const long GLOW_THROUGH_WALL = 0x278;           // DT_HighlightSettings.?
        const long GLOW_ACTIVE_STATES = 0x298;          // DT_HighlightSettings.m_highlightServerActiveStates
        const long TEAM_NUMBER = 0x037c;                // C_BaseEntity.m_iTeamNum
        const long NAME = 0x04b9;                       // C_BaseEntity.m_iName
        const long LIFE_STATE = 0x06c8;                 // DT_Player.m_lifeState
        const long VEC_PUNCH_WEAPON_ANGLE = 0x2468;     // C_Player.m_currentFrameLocalPlayer.m_vecPunchWeapon_Angle
        const long VIEW_ANGLE = (0x2564 - 0x14);        // DT_Player.m_ammoPoolCapacity - 0x14
        const long BLEEDOUT_STATE = 0x2710;             // DT_Player.m_bleedoutState
        const long ZOOMING = 0x1c01;                    // DT_Player.m_bZooming
        const long LAST_VISIBLE_TIME = 0x19b0;          // Miscellaneous.CPlayer!lastVisibleTime
        const long LAST_CROSSHAIR_TIME = (0x19b0 + 0x8);// Miscellaneous.CPlayer!lastVisibleTime + 0x8
        const long CURRENT_SHIELDS = 0x01a0;            // DT_BaseEntity.m_shieldHealth
        const long CURRENT_HEALTH = 0x036c;             // DT_Player.m_iHealth
        const long OFFSET_WEAPON = 0x1964;              // DT_BaseCombatCharacter.m_latestPrimaryWeapons
        const long OFFSET_WEAPON_AMMO = 0x1584;         // DT_WeaponX_LocalWeaponData.m_ammoInClip
        const long OFFSET_WEAPON_SPEED = (0x19e0 + 0x04dc);        // WeaponSettingsMeta.base + projectile_launch_speed
        const long OFFSET_WEAPON_SEMIAUTO = (0x19e0 + 0x018c);     // WeaponSettingsMeta.base + is_semi_auto
    }
