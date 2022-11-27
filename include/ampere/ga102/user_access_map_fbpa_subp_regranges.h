


#ifndef ACCESS_MAP_REGISTER_RANGE
#define ACCESS_MAP_REGISTER_RANGE(start, end) 
#endif
#ifdef MEM_FBPA_SUBP_UNICAST_FULL
    ACCESS_MAP_REGISTER_RANGE(0x9001e0, 0x9001e4)  // (NV_PFB_FBPA_0_PM_SUBP(0), NV_PFB_FBPA_0_PM_SUBP(1))
    ACCESS_MAP_REGISTER_RANGE(0x9041e0, 0x9041e4)  // (NV_PFB_FBPA_1_PM_SUBP(0), NV_PFB_FBPA_1_PM_SUBP(1))
    ACCESS_MAP_REGISTER_RANGE(0x9081e0, 0x9081e4)  // (NV_PFB_FBPA_2_PM_SUBP(0), NV_PFB_FBPA_2_PM_SUBP(1))
    ACCESS_MAP_REGISTER_RANGE(0x90c1e0, 0x90c1e4)  // (NV_PFB_FBPA_3_PM_SUBP(0), NV_PFB_FBPA_3_PM_SUBP(1))
    ACCESS_MAP_REGISTER_RANGE(0x9101e0, 0x9101e4)  // (NV_PFB_FBPA_4_PM_SUBP(0), NV_PFB_FBPA_4_PM_SUBP(1))
    ACCESS_MAP_REGISTER_RANGE(0x9141e0, 0x9141e4)  // (NV_PFB_FBPA_5_PM_SUBP(0), NV_PFB_FBPA_5_PM_SUBP(1))
#endif
#ifdef MEM_FBPA_SUBP_UNICAST_HALF
    ACCESS_MAP_REGISTER_RANGE(0x9001e0, 0x9001e4)  // (NV_PFB_FBPA_0_PM_SUBP(0), NV_PFB_FBPA_0_PM_SUBP(1))
    ACCESS_MAP_REGISTER_RANGE(0x9041e0, 0x9041e4)  // (NV_PFB_FBPA_1_PM_SUBP(0), NV_PFB_FBPA_1_PM_SUBP(1))
    ACCESS_MAP_REGISTER_RANGE(0x9081e0, 0x9081e4)  // (NV_PFB_FBPA_2_PM_SUBP(0), NV_PFB_FBPA_2_PM_SUBP(1))
    ACCESS_MAP_REGISTER_RANGE(0x90c1e0, 0x90c1e4)  // (NV_PFB_FBPA_3_PM_SUBP(0), NV_PFB_FBPA_3_PM_SUBP(1))
    ACCESS_MAP_REGISTER_RANGE(0x9101e0, 0x9101e4)  // (NV_PFB_FBPA_4_PM_SUBP(0), NV_PFB_FBPA_4_PM_SUBP(1))
    ACCESS_MAP_REGISTER_RANGE(0x9141e0, 0x9141e4)  // (NV_PFB_FBPA_5_PM_SUBP(0), NV_PFB_FBPA_5_PM_SUBP(1))
#endif
#ifdef MEM_FBPA_SUBP_UNICAST_QUARTER
    ACCESS_MAP_REGISTER_RANGE(0x9001e0, 0x9001e4)  // (NV_PFB_FBPA_0_PM_SUBP(0), NV_PFB_FBPA_0_PM_SUBP(1))
    ACCESS_MAP_REGISTER_RANGE(0x9081e0, 0x9081e4)  // (NV_PFB_FBPA_2_PM_SUBP(0), NV_PFB_FBPA_2_PM_SUBP(1))
    ACCESS_MAP_REGISTER_RANGE(0x9101e0, 0x9101e4)  // (NV_PFB_FBPA_4_PM_SUBP(0), NV_PFB_FBPA_4_PM_SUBP(1))
#endif
#ifdef MEM_FBPA_SUBP_UNICAST_EIGHTH
    ACCESS_MAP_REGISTER_RANGE(0x9001e0, 0x9001e0)  // (NV_PFB_FBPA_0_PM_SUBP(0), NV_PFB_FBPA_0_PM_SUBP(0))
    ACCESS_MAP_REGISTER_RANGE(0x9081e0, 0x9081e0)  // (NV_PFB_FBPA_2_PM_SUBP(0), NV_PFB_FBPA_2_PM_SUBP(0))
    ACCESS_MAP_REGISTER_RANGE(0x9101e0, 0x9101e0)  // (NV_PFB_FBPA_4_PM_SUBP(0), NV_PFB_FBPA_4_PM_SUBP(0))
#endif

#ifdef MEM_FBPA_SUBP_BROADCAST_FULL
    ACCESS_MAP_REGISTER_RANGE(0x9a01e0, 0x9a01e4)  // (NV_PFB_FBPA_PM_SUBP(0), NV_PFB_FBPA_PM_SUBP(1))
#endif
#ifdef MEM_FBPA_SUBP_BROADCAST_HALF
    ACCESS_MAP_REGISTER_RANGE(0x9a01e0, 0x9a01e4)  // (NV_PFB_FBPA_PM_SUBP(0), NV_PFB_FBPA_PM_SUBP(1))
#endif
#ifdef MEM_FBPA_SUBP_BROADCAST_QUARTER
    ACCESS_MAP_REGISTER_RANGE(0x9a01e0, 0x9a01e4)  // (NV_PFB_FBPA_PM_SUBP(0), NV_PFB_FBPA_PM_SUBP(1))
#endif
#ifdef MEM_FBPA_SUBP_BROADCAST_EIGHTH
    ACCESS_MAP_REGISTER_RANGE(0x9a01e0, 0x9a01e0)  // (NV_PFB_FBPA_PM_SUBP(0), NV_PFB_FBPA_PM_SUBP(0))
#endif
