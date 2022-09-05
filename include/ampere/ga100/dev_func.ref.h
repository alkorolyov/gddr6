// --------------------------------------------------------------------------------
// 
#define NV_FUNC_PRIV_JUMBO                         0x0042FFFF:0x00400000 /* RW--D */
#define NV_FUNC_PRIV                               0x0002FFFF:0x00000000 /* RW--D */
#define NV_FUNC_FULL_PHYS_OFFSET                   0x00BBFFFF:0x00B80000 /* RW--D */
#define NV_FUNC                                    0x0003FFFF:0x00030000 /* RW--D */
#define NV_FUNC_PRIV_L2_SYSMEM_INVALIDATE                   0x00000F00 /* RW-4R */
#define NV_FUNC_PRIV_L2_SYSMEM_INVALIDATE_PENDING                  0:0 /* RWIUF */
#define NV_FUNC_PRIV_L2_SYSMEM_INVALIDATE_PENDING_EMPTY     0x00000000 /* R-I-V */
#define NV_FUNC_PRIV_L2_SYSMEM_INVALIDATE_PENDING_BUSY      0x00000001 /* R---V */
#define NV_FUNC_PRIV_L2_SYSMEM_INVALIDATE_PENDING_ISSUE     0x00000001 /* -W--T */
#define NV_FUNC_PRIV_L2_SYSMEM_INVALIDATE_OUTSTANDING              1:1 /* R-IUF */
#define NV_FUNC_PRIV_L2_SYSMEM_INVALIDATE_OUTSTANDING_FALSE 0x00000000 /* R-I-V */
#define NV_FUNC_PRIV_L2_SYSMEM_INVALIDATE_OUTSTANDING_TRUE  0x00000001 /* R---V */
#define NV_FUNC_PRIV_L2_PEERMEM_INVALIDATE                   0x00000F04 /* RW-4R */
#define NV_FUNC_PRIV_L2_PEERMEM_INVALIDATE_PENDING                  0:0 /* RWIUF */
#define NV_FUNC_PRIV_L2_PEERMEM_INVALIDATE_PENDING_EMPTY     0x00000000 /* R-I-V */
#define NV_FUNC_PRIV_L2_PEERMEM_INVALIDATE_PENDING_BUSY      0x00000001 /* R---V */
#define NV_FUNC_PRIV_L2_PEERMEM_INVALIDATE_PENDING_ISSUE     0x00000001 /* -W--T */
#define NV_FUNC_PRIV_L2_PEERMEM_INVALIDATE_OUTSTANDING              1:1 /* R-IUF */
#define NV_FUNC_PRIV_L2_PEERMEM_INVALIDATE_OUTSTANDING_FALSE 0x00000000 /* R-I-V */
#define NV_FUNC_PRIV_L2_PEERMEM_INVALIDATE_OUTSTANDING_TRUE  0x00000001 /* R---V */
#define NV_FUNC_PRIV_BAR1_BLOCK                                           0x00000F40 /* RW-4R */
#define NV_FUNC_PRIV_BAR1_BLOCK_MAP                                             29:0 /*       */
#define NV_FUNC_PRIV_BAR1_BLOCK_PTR                                             27:0 /* RWIUF */
#define NV_FUNC_PRIV_BAR1_BLOCK_PTR_0                                     0x00000000 /* RWI-V */
#define NV_FUNC_PRIV_BAR1_BLOCK_TARGET                                         29:28 /* RWIUF */
#define NV_FUNC_PRIV_BAR1_BLOCK_TARGET_VID_MEM                            0x00000000 /* RWI-V */
#define NV_FUNC_PRIV_BAR1_BLOCK_TARGET_SYS_MEM_COHERENT                   0x00000002 /* RW--V */
#define NV_FUNC_PRIV_BAR1_BLOCK_TARGET_SYS_MEM_NONCOHERENT                0x00000003 /* RW--V */
#define NV_FUNC_PRIV_BAR1_BLOCK_MODE                                           31:31 /* RWIUF */
#define NV_FUNC_PRIV_BAR1_BLOCK_MODE_PHYSICAL                             0x00000000 /* RWI-V */
#define NV_FUNC_PRIV_BAR1_BLOCK_MODE_VIRTUAL                              0x00000001 /* RW--V */
#define NV_FUNC_PRIV_BAR2_BLOCK                                           0x00000F48 /* RW-4R */
#define NV_FUNC_PRIV_BAR2_BLOCK_MAP                                             29:0 /*       */
#define NV_FUNC_PRIV_BAR2_BLOCK_PTR                                             27:0 /* RWIUF */
#define NV_FUNC_PRIV_BAR2_BLOCK_PTR_0                                     0x00000000 /* RWI-V */
#define NV_FUNC_PRIV_BAR2_BLOCK_TARGET                                         29:28 /* RWIUF */
#define NV_FUNC_PRIV_BAR2_BLOCK_TARGET_VID_MEM                            0x00000000 /* RWI-V */
#define NV_FUNC_PRIV_BAR2_BLOCK_TARGET_SYS_MEM_COHERENT                   0x00000002 /* RW--V */
#define NV_FUNC_PRIV_BAR2_BLOCK_TARGET_SYS_MEM_NONCOHERENT                0x00000003 /* RW--V */
#define NV_FUNC_PRIV_BAR2_BLOCK_MODE                                           31:31 /* RWIUF */
#define NV_FUNC_PRIV_BAR2_BLOCK_MODE_PHYSICAL                             0x00000000 /* RWI-V */
#define NV_FUNC_PRIV_BAR2_BLOCK_MODE_VIRTUAL                              0x00000001 /* RW--V */
#define NV_FUNC_PRIV_BAR2_BLOCK_RESERVED                                  30:30 /*       */
#define NV_FUNC_PRIV_BAR2_BLOCK_RESERVED_DEFAULT                          0x00000001 /*       */
#define NV_FUNC_PRIV_BIND_STATUS                                          0x00000F50 /* R--4R */
#define NV_FUNC_PRIV_BIND_STATUS_BAR1_PENDING                                    0:0 /* R-IUF */
#define NV_FUNC_PRIV_BIND_STATUS_BAR1_PENDING_EMPTY                       0x00000000 /* R-I-V */
#define NV_FUNC_PRIV_BIND_STATUS_BAR1_PENDING_BUSY                        0x00000001 /* R---V */
#define NV_FUNC_PRIV_BIND_STATUS_BAR1_OUTSTANDING                                1:1 /* R-IUF */
#define NV_FUNC_PRIV_BIND_STATUS_BAR1_OUTSTANDING_FALSE                   0x00000000 /* R-I-V */
#define NV_FUNC_PRIV_BIND_STATUS_BAR1_OUTSTANDING_TRUE                    0x00000001 /* R---V */
#define NV_FUNC_PRIV_BIND_STATUS_BAR2_PENDING                                    2:2 /* R-IUF */
#define NV_FUNC_PRIV_BIND_STATUS_BAR2_PENDING_EMPTY                       0x00000000 /* R-I-V */
#define NV_FUNC_PRIV_BIND_STATUS_BAR2_PENDING_BUSY                        0x00000001 /* R---V */
#define NV_FUNC_PRIV_BIND_STATUS_BAR2_OUTSTANDING                                3:3 /* R-IUF */
#define NV_FUNC_PRIV_BIND_STATUS_BAR2_OUTSTANDING_FALSE                   0x00000000 /* R-I-V */
#define NV_FUNC_PRIV_BIND_STATUS_BAR2_OUTSTANDING_TRUE                    0x00000001 /* R---V */
#define NV_FUNC_PRIV_CPU_INTR_TOP(i)                                             (0x1600+(i)*4) /* R--4A */
#define NV_FUNC_PRIV_CPU_INTR_TOP__SIZE_1                                                     1 /*       */
#define NV_FUNC_PRIV_CPU_INTR_TOP_VALUE                                                    31:0 /* R--VF */
#define NV_FUNC_PRIV_CPU_INTR_TOP_SUBTREE(i)                                                (i) /*       */
#define NV_FUNC_PRIV_CPU_INTR_TOP_SUBTREE__SIZE_1                                            64 /*       */
#define NV_FUNC_PRIV_CPU_INTR_TOP_SUBTREE_INTR_PENDING                                        1 /*       */
#define NV_FUNC_PRIV_CPU_INTR_TOP_SUBTREE_INTR_NOT_PENDING                                    0 /*       */
#define NV_FUNC_PRIV_CPU_INTR_TOP_EN_SET(i)                                      (0x1608+(i)*4) /* RW-4A */
#define NV_FUNC_PRIV_CPU_INTR_TOP_EN_SET__SIZE_1                                              1 /*       */
#define NV_FUNC_PRIV_CPU_INTR_TOP_EN_SET_VALUE                                             31:0 /* RWIVF */
#define NV_FUNC_PRIV_CPU_INTR_TOP_EN_SET_VALUE_INIT                                  0x00000000 /* R-I-V */
#define NV_FUNC_PRIV_CPU_INTR_TOP_EN_SET_SUBTREE(i)                                         (i) /*       */
#define NV_FUNC_PRIV_CPU_INTR_TOP_EN_SET_SUBTREE__SIZE_1                                     64 /*       */
#define NV_FUNC_PRIV_CPU_INTR_TOP_EN_SET_SUBTREE_ENABLE                                       1 /*       */
#define NV_FUNC_PRIV_CPU_INTR_TOP_EN_SET_SUBTREE_ENABLED                                      1 /*       */
#define NV_FUNC_PRIV_CPU_INTR_TOP_EN_SET_SUBTREE_DISABLED                                     0 /*       */
#define NV_FUNC_PRIV_CPU_INTR_TOP_EN_CLEAR(i)                                    (0x1610+(i)*4) /* RW-4A */
#define NV_FUNC_PRIV_CPU_INTR_TOP_EN_CLEAR__SIZE_1                                            1 /*       */
#define NV_FUNC_PRIV_CPU_INTR_TOP_EN_CLEAR_VALUE                                           31:0 /* RWIVF */
#define NV_FUNC_PRIV_CPU_INTR_TOP_EN_CLEAR_VALUE_INIT                                0x00000000 /* R-I-V */
#define NV_FUNC_PRIV_CPU_INTR_TOP_EN_CLEAR_SUBTREE(i)                                       (i) /*       */
#define NV_FUNC_PRIV_CPU_INTR_TOP_EN_CLEAR_SUBTREE__SIZE_1                                   64 /*       */
#define NV_FUNC_PRIV_CPU_INTR_TOP_EN_CLEAR_SUBTREE_DISABLE                                    1 /*       */
#define NV_FUNC_PRIV_CPU_INTR_TOP_EN_CLEAR_SUBTREE_ENABLED                                    1 /*       */
#define NV_FUNC_PRIV_CPU_INTR_TOP_EN_CLEAR_SUBTREE_DISABLED                                   0 /*       */
#define NV_FUNC_PRIV_CPU_INTR_LEAF(i)                                            (0x1000+(i)*4) /* RW-4A */
#define NV_FUNC_PRIV_CPU_INTR_LEAF__SIZE_1                                                    8 /*       */
#define NV_FUNC_PRIV_CPU_INTR_LEAF_VALUE                                                   31:0 /* RWXVF */
#define NV_FUNC_PRIV_CPU_INTR_LEAF_VALUE_INIT                                        0x00000000 /* R---V */
#define NV_FUNC_PRIV_CPU_INTR_LEAF_EN_SET(i)                                     (0x1200+(i)*4) /* RW-4A */
#define NV_FUNC_PRIV_CPU_INTR_LEAF_EN_SET__SIZE_1                                             8 /*       */
#define NV_FUNC_PRIV_CPU_INTR_LEAF_EN_SET_VALUE                                            31:0 /* RWIVF */
#define NV_FUNC_PRIV_CPU_INTR_LEAF_EN_SET_VALUE_INIT                                 0x00000000 /* R-I-V */
#define NV_FUNC_PRIV_CPU_INTR_LEAF_EN_CLEAR(i)                                   (0x1400+(i)*4) /* RW-4A */
#define NV_FUNC_PRIV_CPU_INTR_LEAF_EN_CLEAR__SIZE_1                                           8 /*       */
#define NV_FUNC_PRIV_CPU_INTR_LEAF_EN_CLEAR_VALUE                                          31:0 /* RWIVF */
#define NV_FUNC_PRIV_CPU_INTR_LEAF_EN_CLEAR_VALUE_INIT                               0x00000000 /* R-I-V */
#define NV_FUNC_PRIV_INTR_COUNT                          0x1644 /* R--4R */
#define NV_FUNC_PRIV_INTR_COUNT_SIZE                       11:0 /* R--UF */
#define NV_FUNC_PRIV_CPU_INTR_PFIFO_INTR_0_VECTOR               136               /*       */
#define NV_FUNC_PRIV_CPU_INTR_PFIFO_INTR_1_VECTOR               137               /*       */
#define NV_FUNC_PRIV_CPU_INTR_PFB_VECTOR                        141                        /*       */
#define NV_FUNC_PRIV_CPU_INTR_IOCTRL_INTR_1_VECTOR              144              /*       */
#define NV_FUNC_PRIV_CPU_INTR_THERMAL_VECTOR                    146                    /*       */
#define NV_FUNC_PRIV_CPU_INTR_HDACODEC_VECTOR                   147                   /*       */
#define NV_FUNC_PRIV_CPU_INTR_PTIMER_VECTOR                     148                     /*       */
#define NV_FUNC_PRIV_CPU_INTR_PMGR_VECTOR                       149                       /*       */
#define NV_FUNC_PRIV_CPU_INTR_IOCTRL_INTR_0_VECTOR              150              /*       */
#define NV_FUNC_PRIV_CPU_INTR_DFD_VECTOR                        151                        /*       */
#define NV_FUNC_PRIV_CPU_INTR_PMU_VECTOR                        152                        /*       */
#define NV_FUNC_PRIV_CPU_INTR_LTC_ALL_VECTOR                    153                    /*       */
#define NV_FUNC_PRIV_CPU_INTR_PDISP_VECTOR                      154                      /*       */
#define NV_FUNC_PRIV_CPU_INTR_GSP_INTR_0_VECTOR                 155                 /*       */
#define NV_FUNC_PRIV_CPU_INTR_PBUS_VECTOR                       156                       /*       */
#define NV_FUNC_PRIV_CPU_INTR_XVE_VECTOR                        157                        /*       */
#define NV_FUNC_PRIV_CPU_INTR_PRIV_RING_VECTOR                  158                  /*       */
#define NV_FUNC_PRIV_CPU_INTR_PTIMER_ALARM_VECTOR               159               /*       */
#define NV_FUNC_PRIV_CPU_INTR_LEAF_TRIGGER                                0x00001640 /* -W-4R */
#define NV_FUNC_PRIV_CPU_INTR_LEAF_TRIGGER_VECTOR                               11:0 /* -W-VF */
#define NV_FUNC_PRIV_MAILBOX_SCRATCH(i)                        (0x2100+(i)*4) /* RW-4A */
#define NV_FUNC_PRIV_MAILBOX_SCRATCH__SIZE_1                               16 /*       */
#define NV_FUNC_PRIV_MAILBOX_SCRATCH_DATA                                31:0 /* RWXVF */
#define NV_FUNC_PRIV_DOORBELL                                          0x2200 /* -W-4R */
#define NV_FUNC_PRIV_DOORBELL_HANDLE                                     31:0 /* -W-VF */
#define NV_FUNC_PRIV_TIMER                          0x2300 /* RW-4R */
#define NV_FUNC_PRIV_TIMER_NSEC                       31:0 /*       */
#define NV_FUNC_PRIV_TIMER_USEC                      31:10 /* RWIUF */
#define NV_FUNC_PRIV_TIMER_USEC_INIT                   0x0 /* RWI-V */
#define NV_FUNC_PRIV_MMU_NON_REPLAY_FAULT_BUFFER               0 /*    */
#define NV_FUNC_PRIV_MMU_REPLAY_FAULT_BUFFER                   1 /*    */
#define NV_FUNC_PRIV_MMU_FAULT_BUFFER_LO(i)                     (0x00003000+(i)*32) /* RW-4A */
#define NV_FUNC_PRIV_MMU_FAULT_BUFFER_LO__SIZE_1          2 /*       */
#define NV_FUNC_PRIV_MMU_FAULT_BUFFER_LO_ADDR_MODE                      0:0 /* RWXVF */
#define NV_FUNC_PRIV_MMU_FAULT_BUFFER_LO_ADDR_MODE_VIRTUAL       0x00000000 /* RW--V */
#define NV_FUNC_PRIV_MMU_FAULT_BUFFER_LO_ADDR_MODE_PHYSICAL      0x00000001 /* RW--V */
#define NV_FUNC_PRIV_MMU_FAULT_BUFFER_LO_PHYS_APERTURE                  2:1 /* RWXVF */
#define NV_FUNC_PRIV_MMU_FAULT_BUFFER_LO_PHYS_APERTURE_LOCAL     0x00000000 /* RW--V */
#define NV_FUNC_PRIV_MMU_FAULT_BUFFER_LO_PHYS_APERTURE_SYS_COH   0x00000002 /* RW--V */
#define NV_FUNC_PRIV_MMU_FAULT_BUFFER_LO_PHYS_APERTURE_SYS_NCOH  0x00000003 /* RW--V */
#define NV_FUNC_PRIV_MMU_FAULT_BUFFER_LO_PHYS_VOL                       3:3 /* RWXVF */
#define NV_FUNC_PRIV_MMU_FAULT_BUFFER_LO_ADDR                         31:12 /* RWXVF */
#define NV_FUNC_PRIV_MMU_FAULT_BUFFER_HI(i)                     (0x00003004+(i)*32) /* RW-4A */
#define NV_FUNC_PRIV_MMU_FAULT_BUFFER_HI__SIZE_1          2 /*       */
#define NV_FUNC_PRIV_MMU_FAULT_BUFFER_HI_ADDR                          31:0 /* RWXVF */
#define NV_FUNC_PRIV_MMU_FAULT_BUFFER_GET(i)                (0x00003008+(i)*32) /* RW-4A */
#define NV_FUNC_PRIV_MMU_FAULT_BUFFER_GET__SIZE_1     2 /*       */
#define NV_FUNC_PRIV_MMU_FAULT_BUFFER_GET_PTR                              19:0 /* RWEVF */
#define NV_FUNC_PRIV_MMU_FAULT_BUFFER_GET_PTR_RESET                  0x00000000 /* RWE-V */
#define NV_FUNC_PRIV_MMU_FAULT_BUFFER_GET_GETPTR_CORRUPTED                30:30 /* RWEVF */
#define NV_FUNC_PRIV_MMU_FAULT_BUFFER_GET_GETPTR_CORRUPTED_NO        0x00000000 /* RWE-V */
#define NV_FUNC_PRIV_MMU_FAULT_BUFFER_GET_GETPTR_CORRUPTED_YES       0x00000001 /* RW--V */
#define NV_FUNC_PRIV_MMU_FAULT_BUFFER_GET_GETPTR_CORRUPTED_CLEAR     0x00000001 /* RW--V */
#define NV_FUNC_PRIV_MMU_FAULT_BUFFER_GET_OVERFLOW                        31:31 /* RWEVF */
#define NV_FUNC_PRIV_MMU_FAULT_BUFFER_GET_OVERFLOW_NO                0x00000000 /* RWE-V */
#define NV_FUNC_PRIV_MMU_FAULT_BUFFER_GET_OVERFLOW_YES               0x00000001 /* RW--V */
#define NV_FUNC_PRIV_MMU_FAULT_BUFFER_GET_OVERFLOW_CLEAR             0x00000001 /* RW--V */
#define NV_FUNC_PRIV_MMU_FAULT_BUFFER_PUT(i)                 (0x0000300C+(i)*32) /* R--4A */
#define NV_FUNC_PRIV_MMU_FAULT_BUFFER_PUT__SIZE_1      2 /*       */
#define NV_FUNC_PRIV_MMU_FAULT_BUFFER_PUT_PTR                               19:0 /* R-EVF */
#define NV_FUNC_PRIV_MMU_FAULT_BUFFER_PUT_PTR_RESET                   0x00000000 /* R-E-V */
#define NV_FUNC_PRIV_MMU_FAULT_BUFFER_PUT_GETPTR_CORRUPTED                 30:30 /* R-EVF */
#define NV_FUNC_PRIV_MMU_FAULT_BUFFER_PUT_GETPTR_CORRUPTED_NO         0x00000000 /* R-E-V */
#define NV_FUNC_PRIV_MMU_FAULT_BUFFER_PUT_GETPTR_CORRUPTED_YES        0x00000001 /* R---V */
#define NV_FUNC_PRIV_MMU_FAULT_BUFFER_PUT_OVERFLOW                         31:31 /* R-EVF */
#define NV_FUNC_PRIV_MMU_FAULT_BUFFER_PUT_OVERFLOW_NO                 0x00000000 /* R-E-V */
#define NV_FUNC_PRIV_MMU_FAULT_BUFFER_PUT_OVERFLOW_YES                0x00000001 /* R---V */
#define NV_FUNC_PRIV_MMU_FAULT_BUFFER_SIZE(i)            (0x00003010+(i)*32) /* RW-4A */
#define NV_FUNC_PRIV_MMU_FAULT_BUFFER_SIZE__SIZE_1 2 /*       */
#define NV_FUNC_PRIV_MMU_FAULT_BUFFER_SIZE_VAL                          19:0 /* RWEVF */
#define NV_FUNC_PRIV_MMU_FAULT_BUFFER_SIZE_VAL_RESET              0x00000000 /* RWE-V */
#define NV_FUNC_PRIV_MMU_FAULT_BUFFER_SIZE_OVERFLOW_INTR               29:29 /* RWEVF */
#define NV_FUNC_PRIV_MMU_FAULT_BUFFER_SIZE_OVERFLOW_INTR_DISABLE  0x00000000 /* RWE-V */
#define NV_FUNC_PRIV_MMU_FAULT_BUFFER_SIZE_OVERFLOW_INTR_ENABLE   0x00000001 /* RW--V */
#define NV_FUNC_PRIV_MMU_FAULT_BUFFER_SIZE_SET_DEFAULT                 30:30 /* RWEVF */
#define NV_FUNC_PRIV_MMU_FAULT_BUFFER_SIZE_SET_DEFAULT_NO         0x00000000 /* RWE-V */
#define NV_FUNC_PRIV_MMU_FAULT_BUFFER_SIZE_SET_DEFAULT_YES        0x00000001 /* RW--V */
#define NV_FUNC_PRIV_MMU_FAULT_BUFFER_SIZE_ENABLE                      31:31 /* RWEVF */
#define NV_FUNC_PRIV_MMU_FAULT_BUFFER_SIZE_ENABLE_FALSE           0x00000000 /* RWE-V */
#define NV_FUNC_PRIV_MMU_FAULT_BUFFER_SIZE_ENABLE_TRUE            0x00000001 /* RW--V */
#define NV_FUNC_PRIV_MMU_PAGE_FAULT_CTRL                                        0x00003070 /* RW-4R */
#define NV_FUNC_PRIV_MMU_PAGE_FAULT_CTRL_PRF_FILTER                                    1:0 /* RWEVF */
#define NV_FUNC_PRIV_MMU_PAGE_FAULT_CTRL_PRF_FILTER_SEND_ALL                    0x00000000 /* RW--V */
#define NV_FUNC_PRIV_MMU_PAGE_FAULT_CTRL_PRF_FILTER_SEND_NONE                   0x00000003 /* RWE-V */
#define NV_FUNC_PRIV_MMU_FAULT_ADDR_LO                                      0x00003080 /* R--4R */
#define NV_FUNC_PRIV_MMU_FAULT_ADDR_LO_PHYS_APERTURE                               1:0 /* R-EVF */
#define NV_FUNC_PRIV_MMU_FAULT_ADDR_LO_PHYS_APERTURE_LOCAL                  0x00000000 /* R-E-V */
#define NV_FUNC_PRIV_MMU_FAULT_ADDR_LO_PHYS_APERTURE_PEER                   0x00000001 /* R---V */
#define NV_FUNC_PRIV_MMU_FAULT_ADDR_LO_PHYS_APERTURE_SYS_COH                0x00000002 /* R---V */
#define NV_FUNC_PRIV_MMU_FAULT_ADDR_LO_PHYS_APERTURE_SYS_NCOH               0x00000003 /* R---V */
#define NV_FUNC_PRIV_MMU_FAULT_ADDR_LO_ADDR                                      31:12 /* R-EVF */
#define NV_FUNC_PRIV_MMU_FAULT_ADDR_LO_ADDR_RESET                           0x00000000 /* R-E-V */
#define NV_FUNC_PRIV_MMU_FAULT_ADDR_HI                                      0x00003084 /* R--4R */
#define NV_FUNC_PRIV_MMU_FAULT_ADDR_HI_ADDR                                       31:0 /* R-EVF */
#define NV_FUNC_PRIV_MMU_FAULT_ADDR_HI_ADDR_RESET                           0x00000000 /* R-E-V */
#define NV_FUNC_PRIV_MMU_FAULT_INST_LO                                      0x00003088 /* R--4R */
#define NV_FUNC_PRIV_MMU_FAULT_INST_LO_ENGINE_ID                                   8:0 /* R-EVF */
#define NV_FUNC_PRIV_MMU_FAULT_INST_LO_ENGINE_ID_RESET                      0x00000000 /* R-E-V */
#define NV_FUNC_PRIV_MMU_FAULT_INST_LO_APERTURE                                  11:10 /* R-EVF */
#define NV_FUNC_PRIV_MMU_FAULT_INST_LO_APERTURE_VID_MEM                     0x00000000 /* R---V */
#define NV_FUNC_PRIV_MMU_FAULT_INST_LO_APERTURE_SYS_MEM_COHERENT            0x00000002 /* R---V */
#define NV_FUNC_PRIV_MMU_FAULT_INST_LO_APERTURE_SYS_MEM_NONCOHERENT         0x00000003 /* R---V */
#define NV_FUNC_PRIV_MMU_FAULT_INST_LO_APERTURE_RESET                       0x00000000 /* R-E-V */
#define NV_FUNC_PRIV_MMU_FAULT_INST_LO_ADDR                                      31:12 /* R-EVF */
#define NV_FUNC_PRIV_MMU_FAULT_INST_LO_ADDR_RESET                           0x00000000 /* R-E-V */
#define NV_FUNC_PRIV_MMU_FAULT_INST_HI                                      0x0000308C /* R--4R */
#define NV_FUNC_PRIV_MMU_FAULT_INST_HI_ADDR                                       31:0 /* R-EVF */
#define NV_FUNC_PRIV_MMU_FAULT_INST_HI_ADDR_RESET                           0x00000000 /* R-E-V */
#define NV_FUNC_PRIV_MMU_FAULT_INFO                                         0x00003090 /* R--4R */
#define NV_FUNC_PRIV_MMU_FAULT_INFO_FAULT_TYPE                                     4:0 /* R-EVF */
#define NV_FUNC_PRIV_MMU_FAULT_INFO_FAULT_TYPE_RESET                        0x00000000 /* R-E-V */
#define NV_FUNC_PRIV_MMU_FAULT_INFO_REPLAYABLE_FAULT                               7:7 /* R-EVF */
#define NV_FUNC_PRIV_MMU_FAULT_INFO_REPLAYABLE_FAULT_RESET                  0x00000000 /* R-E-V */
#define NV_FUNC_PRIV_MMU_FAULT_INFO_CLIENT                                        14:8 /* R-EVF */
#define NV_FUNC_PRIV_MMU_FAULT_INFO_CLIENT_RESET                            0x00000000 /* R-E-V */
#define NV_FUNC_PRIV_MMU_FAULT_INFO_ACCESS_TYPE                                  19:16 /* R-EVF */
#define NV_FUNC_PRIV_MMU_FAULT_INFO_ACCESS_TYPE_READ                        0x00000000 /* R---V */
#define NV_FUNC_PRIV_MMU_FAULT_INFO_ACCESS_TYPE_WRITE                       0x00000001 /* R---V */
#define NV_FUNC_PRIV_MMU_FAULT_INFO_ACCESS_TYPE_ATOMIC                      0x00000002 /* R---V */
#define NV_FUNC_PRIV_MMU_FAULT_INFO_ACCESS_TYPE_PREFETCH                    0x00000003 /* R---V */
#define NV_FUNC_PRIV_MMU_FAULT_INFO_ACCESS_TYPE_VIRT_READ                   0x00000000 /* R---V */
#define NV_FUNC_PRIV_MMU_FAULT_INFO_ACCESS_TYPE_VIRT_WRITE                  0x00000001 /* R---V */
#define NV_FUNC_PRIV_MMU_FAULT_INFO_ACCESS_TYPE_VIRT_ATOMIC                 0x00000002 /* R---V */
#define NV_FUNC_PRIV_MMU_FAULT_INFO_ACCESS_TYPE_VIRT_ATOMIC_STRONG          0x00000002 /* R---V */
#define NV_FUNC_PRIV_MMU_FAULT_INFO_ACCESS_TYPE_VIRT_PREFETCH               0x00000003 /* R---V */
#define NV_FUNC_PRIV_MMU_FAULT_INFO_ACCESS_TYPE_VIRT_ATOMIC_WEAK            0x00000004 /* R---V */
#define NV_FUNC_PRIV_MMU_FAULT_INFO_ACCESS_TYPE_PHYS_READ                   0x00000008 /* R---V */
#define NV_FUNC_PRIV_MMU_FAULT_INFO_ACCESS_TYPE_PHYS_WRITE                  0x00000009 /* R---V */
#define NV_FUNC_PRIV_MMU_FAULT_INFO_ACCESS_TYPE_PHYS_ATOMIC                 0x0000000a /* R---V */
#define NV_FUNC_PRIV_MMU_FAULT_INFO_ACCESS_TYPE_PHYS_PREFETCH               0x0000000b /* R---V */
#define NV_FUNC_PRIV_MMU_FAULT_INFO_ACCESS_TYPE_RESET                       0x00000000 /* R-E-V */
#define NV_FUNC_PRIV_MMU_FAULT_INFO_CLIENT_TYPE                                  20:20 /* R-EVF */
#define NV_FUNC_PRIV_MMU_FAULT_INFO_CLIENT_TYPE_RESET                       0x00000000 /* R-E-V */
#define NV_FUNC_PRIV_MMU_FAULT_INFO_GPC_ID                                       28:24 /* R-EVF */
#define NV_FUNC_PRIV_MMU_FAULT_INFO_GPC_ID_RESET                            0x00000000 /* R-E-V */
#define NV_FUNC_PRIV_MMU_FAULT_INFO_PROTECTED_MODE                               29:29 /* R-EVF */
#define NV_FUNC_PRIV_MMU_FAULT_INFO_PROTECTED_MODE_RESET                    0x00000000 /* R-E-V */
#define NV_FUNC_PRIV_MMU_FAULT_INFO_REPLAYABLE_FAULT_EN                          30:30 /* R-EVF */
#define NV_FUNC_PRIV_MMU_FAULT_INFO_REPLAYABLE_FAULT_EN_RESET               0x00000000 /* R-E-V */
#define NV_FUNC_PRIV_MMU_FAULT_INFO_VALID                                        31:31 /* R-EVF */
#define NV_FUNC_PRIV_MMU_FAULT_INFO_VALID_RESET                             0x00000000 /* R-E-V */
#define NV_FUNC_PRIV_MMU_FAULT_STATUS                                           0x00003094 /* RW-4R */
#define NV_FUNC_PRIV_MMU_FAULT_STATUS_DROPPED_BAR1_PHYS                                0:0 /* RWEVF */
#define NV_FUNC_PRIV_MMU_FAULT_STATUS_DROPPED_BAR1_PHYS_RESET                   0x00000000 /* RWE-V */
#define NV_FUNC_PRIV_MMU_FAULT_STATUS_DROPPED_BAR1_PHYS_CLEAR                   0x00000001 /* RW--V */
#define NV_FUNC_PRIV_MMU_FAULT_STATUS_DROPPED_BAR1_PHYS_SET                     0x00000001 /* RW--V */
#define NV_FUNC_PRIV_MMU_FAULT_STATUS_DROPPED_BAR1_VIRT                                1:1 /* RWEVF */
#define NV_FUNC_PRIV_MMU_FAULT_STATUS_DROPPED_BAR1_VIRT_RESET                   0x00000000 /* RWE-V */
#define NV_FUNC_PRIV_MMU_FAULT_STATUS_DROPPED_BAR1_VIRT_CLEAR                   0x00000001 /* RW--V */
#define NV_FUNC_PRIV_MMU_FAULT_STATUS_DROPPED_BAR1_VIRT_SET                     0x00000001 /* RW--V */
#define NV_FUNC_PRIV_MMU_FAULT_STATUS_DROPPED_BAR2_PHYS                                2:2 /* RWEVF */
#define NV_FUNC_PRIV_MMU_FAULT_STATUS_DROPPED_BAR2_PHYS_RESET                   0x00000000 /* RWE-V */
#define NV_FUNC_PRIV_MMU_FAULT_STATUS_DROPPED_BAR2_PHYS_CLEAR                   0x00000001 /* RW--V */
#define NV_FUNC_PRIV_MMU_FAULT_STATUS_DROPPED_BAR2_PHYS_SET                     0x00000001 /* RW--V */
#define NV_FUNC_PRIV_MMU_FAULT_STATUS_DROPPED_BAR2_VIRT                                3:3 /* RWEVF */
#define NV_FUNC_PRIV_MMU_FAULT_STATUS_DROPPED_BAR2_VIRT_RESET                   0x00000000 /* RWE-V */
#define NV_FUNC_PRIV_MMU_FAULT_STATUS_DROPPED_BAR2_VIRT_CLEAR                   0x00000001 /* RW--V */
#define NV_FUNC_PRIV_MMU_FAULT_STATUS_DROPPED_BAR2_VIRT_SET                     0x00000001 /* RW--V */
#define NV_FUNC_PRIV_MMU_FAULT_STATUS_DROPPED_IFB_PHYS                                 4:4 /* RWEVF */
#define NV_FUNC_PRIV_MMU_FAULT_STATUS_DROPPED_IFB_PHYS_RESET                    0x00000000 /* RWE-V */
#define NV_FUNC_PRIV_MMU_FAULT_STATUS_DROPPED_IFB_PHYS_CLEAR                    0x00000001 /* RW--V */
#define NV_FUNC_PRIV_MMU_FAULT_STATUS_DROPPED_IFB_PHYS_SET                      0x00000001 /* RW--V */
#define NV_FUNC_PRIV_MMU_FAULT_STATUS_DROPPED_IFB_VIRT                                 5:5 /* RWEVF */
#define NV_FUNC_PRIV_MMU_FAULT_STATUS_DROPPED_IFB_VIRT_RESET                    0x00000000 /* RWE-V */
#define NV_FUNC_PRIV_MMU_FAULT_STATUS_DROPPED_IFB_VIRT_CLEAR                    0x00000001 /* RW--V */
#define NV_FUNC_PRIV_MMU_FAULT_STATUS_DROPPED_IFB_VIRT_SET                      0x00000001 /* RW--V */
#define NV_FUNC_PRIV_MMU_FAULT_STATUS_DROPPED_OTHER_PHYS                               6:6 /* RWEVF */
#define NV_FUNC_PRIV_MMU_FAULT_STATUS_DROPPED_OTHER_PHYS_RESET                  0x00000000 /* RWE-V */
#define NV_FUNC_PRIV_MMU_FAULT_STATUS_DROPPED_OTHER_PHYS_CLEAR                  0x00000001 /* RW--V */
#define NV_FUNC_PRIV_MMU_FAULT_STATUS_DROPPED_OTHER_PHYS_SET                    0x00000001 /* RW--V */
#define NV_FUNC_PRIV_MMU_FAULT_STATUS_DROPPED_OTHER_VIRT                               7:7 /* RWEVF */
#define NV_FUNC_PRIV_MMU_FAULT_STATUS_DROPPED_OTHER_VIRT_RESET                  0x00000000 /* RWE-V */
#define NV_FUNC_PRIV_MMU_FAULT_STATUS_DROPPED_OTHER_VIRT_CLEAR                  0x00000001 /* RW--V */
#define NV_FUNC_PRIV_MMU_FAULT_STATUS_DROPPED_OTHER_VIRT_SET                    0x00000001 /* RW--V */
#define NV_FUNC_PRIV_MMU_FAULT_STATUS_REPLAYABLE                                       8:8 /* R-EVF */
#define NV_FUNC_PRIV_MMU_FAULT_STATUS_REPLAYABLE_RESET                          0x00000000 /* R-E-V */
#define NV_FUNC_PRIV_MMU_FAULT_STATUS_REPLAYABLE_SET                            0x00000001 /* R---V */
#define NV_FUNC_PRIV_MMU_FAULT_STATUS_NON_REPLAYABLE                                   9:9 /* R-EVF */
#define NV_FUNC_PRIV_MMU_FAULT_STATUS_NON_REPLAYABLE_RESET                      0x00000000 /* R-E-V */
#define NV_FUNC_PRIV_MMU_FAULT_STATUS_NON_REPLAYABLE_SET                        0x00000001 /* R---V */
#define NV_FUNC_PRIV_MMU_FAULT_STATUS_REPLAYABLE_ERROR                               10:10 /* R-EVF */
#define NV_FUNC_PRIV_MMU_FAULT_STATUS_REPLAYABLE_ERROR_RESET                    0x00000000 /* R-E-V */
#define NV_FUNC_PRIV_MMU_FAULT_STATUS_REPLAYABLE_ERROR_SET                      0x00000001 /* R---V */
#define NV_FUNC_PRIV_MMU_FAULT_STATUS_NON_REPLAYABLE_ERROR                           11:11 /* R-EVF */
#define NV_FUNC_PRIV_MMU_FAULT_STATUS_NON_REPLAYABLE_ERROR_RESET                0x00000000 /* R-E-V */
#define NV_FUNC_PRIV_MMU_FAULT_STATUS_NON_REPLAYABLE_ERROR_SET                  0x00000001 /* R---V */
#define NV_FUNC_PRIV_MMU_FAULT_STATUS_REPLAYABLE_OVERFLOW                            12:12 /* R-EVF */
#define NV_FUNC_PRIV_MMU_FAULT_STATUS_REPLAYABLE_OVERFLOW_RESET                 0x00000000 /* R-E-V */
#define NV_FUNC_PRIV_MMU_FAULT_STATUS_REPLAYABLE_OVERFLOW_SET                   0x00000001 /* R---V */
#define NV_FUNC_PRIV_MMU_FAULT_STATUS_NON_REPLAYABLE_OVERFLOW                        13:13 /* R-EVF */
#define NV_FUNC_PRIV_MMU_FAULT_STATUS_NON_REPLAYABLE_OVERFLOW_RESET             0x00000000 /* R-E-V */
#define NV_FUNC_PRIV_MMU_FAULT_STATUS_NON_REPLAYABLE_OVERFLOW_SET               0x00000001 /* R---V */
#define NV_FUNC_PRIV_MMU_FAULT_STATUS_REPLAYABLE_GETPTR_CORRUPTED                    14:14 /* R-EVF */
#define NV_FUNC_PRIV_MMU_FAULT_STATUS_REPLAYABLE_GETPTR_CORRUPTED_RESET         0x00000000 /* R-E-V */
#define NV_FUNC_PRIV_MMU_FAULT_STATUS_REPLAYABLE_GETPTR_CORRUPTED_SET           0x00000001 /* R---V */
#define NV_FUNC_PRIV_MMU_FAULT_STATUS_NON_REPLAYABLE_GETPTR_CORRUPTED                15:15 /* R-EVF */
#define NV_FUNC_PRIV_MMU_FAULT_STATUS_NON_REPLAYABLE_GETPTR_CORRUPTED_RESET     0x00000000 /* R-E-V */
#define NV_FUNC_PRIV_MMU_FAULT_STATUS_NON_REPLAYABLE_GETPTR_CORRUPTED_SET       0x00000001 /* R---V */
#define NV_FUNC_PRIV_MMU_FAULT_STATUS_BUSY_TYPE                                 29:28 /* R-EVF */
#define NV_FUNC_PRIV_MMU_FAULT_STATUS_BUSY_TYPE_RESET                           0x00000000 /* R-E-V */
#define NV_FUNC_PRIV_MMU_FAULT_STATUS_BUSY                                           30:30 /* R-EVF */
#define NV_FUNC_PRIV_MMU_FAULT_STATUS_BUSY_FALSE                                0x00000000 /* R-E-V */
#define NV_FUNC_PRIV_MMU_FAULT_STATUS_BUSY_TRUE                                 0x00000001 /* R---V */
#define NV_FUNC_PRIV_MMU_FAULT_STATUS_VALID                                          31:31 /* RWEVF */
#define NV_FUNC_PRIV_MMU_FAULT_STATUS_VALID_RESET                               0x00000000 /* RWE-V */
#define NV_FUNC_PRIV_MMU_FAULT_STATUS_VALID_CLEAR                               0x00000001 /* RW--V */
#define NV_FUNC_PRIV_MMU_FAULT_STATUS_VALID_SET                                 0x00000001 /* RW--V */
#define NV_FUNC_PRIV_MMU_INVALIDATE_PDB                               0x000030A0 /* RW-4R */
#define NV_FUNC_PRIV_MMU_INVALIDATE_PDB_APERTURE                             1:1 /* RWEVF */
#define NV_FUNC_PRIV_MMU_INVALIDATE_PDB_APERTURE_INIT                 0x00000000 /* RWE-V */
#define NV_FUNC_PRIV_MMU_INVALIDATE_PDB_APERTURE_VID_MEM              0x00000000 /* RW--V */
#define NV_FUNC_PRIV_MMU_INVALIDATE_PDB_APERTURE_SYS_MEM              0x00000001 /* RW--V */
#define NV_FUNC_PRIV_MMU_INVALIDATE_PDB_ADDR                                31:4 /* RWEVF */
#define NV_FUNC_PRIV_MMU_INVALIDATE_PDB_ADDR_INIT                     0x00000000 /* RWE-V */
#define NV_FUNC_PRIV_MMU_INVALIDATE_PDB_ADDR_ALIGNMENT                0x0000000c /*       */
#define NV_FUNC_PRIV_MMU_INVALIDATE_UPPER_PDB                         0x000030A4 /* RW-4R */
#define NV_FUNC_PRIV_MMU_INVALIDATE_UPPER_PDB_ADDR                          19:0 /* RWEVF */
#define NV_FUNC_PRIV_MMU_INVALIDATE_UPPER_PDB_ADDR_INIT               0x00000000 /* RWE-V */
#define NV_FUNC_PRIV_MMU_INVALIDATE                                   0x000030B0 /* RW-4R */
#define NV_FUNC_PRIV_MMU_INVALIDATE_ALL_VA                                   0:0 /* RWXVF */
#define NV_FUNC_PRIV_MMU_INVALIDATE_ALL_VA_FALSE                      0x00000000 /* RW--V */
#define NV_FUNC_PRIV_MMU_INVALIDATE_ALL_VA_TRUE                       0x00000001 /* RW--V */
#define NV_FUNC_PRIV_MMU_INVALIDATE_ALL_PDB                                  1:1 /* RWXVF */
#define NV_FUNC_PRIV_MMU_INVALIDATE_ALL_PDB_FALSE                     0x00000000 /* RW--V */
#define NV_FUNC_PRIV_MMU_INVALIDATE_ALL_PDB_TRUE                      0x00000001 /* RW--V */
#define NV_FUNC_PRIV_MMU_INVALIDATE_HUBTLB_ONLY                              2:2 /* RWXVF */
#define NV_FUNC_PRIV_MMU_INVALIDATE_HUBTLB_ONLY_FALSE                 0x00000000 /* RW--V */
#define NV_FUNC_PRIV_MMU_INVALIDATE_HUBTLB_ONLY_TRUE                  0x00000001 /* RW--V */
#define NV_FUNC_PRIV_MMU_INVALIDATE_REPLAY                                   5:3 /* RWXVF */
#define NV_FUNC_PRIV_MMU_INVALIDATE_REPLAY_NONE                       0x00000000 /* RW--V */
#define NV_FUNC_PRIV_MMU_INVALIDATE_REPLAY_START                      0x00000001 /* RW--V */
#define NV_FUNC_PRIV_MMU_INVALIDATE_REPLAY_START_ACK_ALL              0x00000002 /* RW--V */
#define NV_FUNC_PRIV_MMU_INVALIDATE_REPLAY_CANCEL_TARGETED            0x00000003 /* RW--V */
#define NV_FUNC_PRIV_MMU_INVALIDATE_REPLAY_CANCEL_GLOBAL              0x00000004 /* RW--V */
#define NV_FUNC_PRIV_MMU_INVALIDATE_REPLAY_CANCEL_VA_GLOBAL           0x00000005 /* RW--V */
#define NV_FUNC_PRIV_MMU_INVALIDATE_SYS_MEMBAR                              6:6 /* RWXVF */
#define NV_FUNC_PRIV_MMU_INVALIDATE_SYS_MEMBAR_FALSE                 0x00000000 /* RW--V */
#define NV_FUNC_PRIV_MMU_INVALIDATE_SYS_MEMBAR_TRUE                  0x00000001 /* RW--V */
#define NV_FUNC_PRIV_MMU_INVALIDATE_ACK                                     8:7 /* RWXVF */
#define NV_FUNC_PRIV_MMU_INVALIDATE_ACK_NONE_REQUIRED                0x00000000 /* RW--V */
#define NV_FUNC_PRIV_MMU_INVALIDATE_ACK_INTRANODE                    0x00000002 /* RW--V */
#define NV_FUNC_PRIV_MMU_INVALIDATE_ACK_GLOBALLY                     0x00000001 /* RW--V */
#define NV_FUNC_PRIV_MMU_INVALIDATE_CANCEL_CLIENT_ID                       14:9 /* RWXVF */
#define NV_FUNC_PRIV_MMU_INVALIDATE_CANCEL_GPC_ID                         19:15 /* RWXVF */
#define NV_FUNC_PRIV_MMU_INVALIDATE_CANCEL_GPC_ID       19:15 /*       */
#define NV_FUNC_PRIV_MMU_INVALIDATE_INVAL_SCOPE                           16:15 /* RWXVF */
#define NV_FUNC_PRIV_MMU_INVALIDATE_INVAL_SCOPE_ALL_TLBS             0x00000000 /* RW--V */
#define NV_FUNC_PRIV_MMU_INVALIDATE_INVAL_SCOPE_LINK_TLBS            0x00000001 /* RW--V */
#define NV_FUNC_PRIV_MMU_INVALIDATE_INVAL_SCOPE_NON_LINK_TLBS        0x00000002 /* RW--V */
#define NV_FUNC_PRIV_MMU_INVALIDATE_CANCEL_CLIENT_TYPE                    20:20 /* RWXVF */
#define NV_FUNC_PRIV_MMU_INVALIDATE_CANCEL_CLIENT_TYPE_GPC           0x00000000 /* RW--V */
#define NV_FUNC_PRIV_MMU_INVALIDATE_CANCEL_CLIENT_TYPE_HUB           0x00000001 /* RW--V */
#define NV_FUNC_PRIV_MMU_INVALIDATE_USE_PASID                             21:21 /* RWXVF */
#define NV_FUNC_PRIV_MMU_INVALIDATE_USE_PASID_FALSE                  0x00000000 /* RW--V */
#define NV_FUNC_PRIV_MMU_INVALIDATE_USE_PASID_TRUE                   0x00000001 /* RW--V */
#define NV_FUNC_PRIV_MMU_INVALIDATE_USE_SIZE                              22:22 /* RWXVF */
#define NV_FUNC_PRIV_MMU_INVALIDATE_USE_SIZE_FALSE                   0x00000000 /* RW--V */
#define NV_FUNC_PRIV_MMU_INVALIDATE_USE_SIZE_TRUE                    0x00000001 /* RW--V */
#define NV_FUNC_PRIV_MMU_INVALIDATE_PROP_FLUSH                            23:23 /* RWXVF */
#define NV_FUNC_PRIV_MMU_INVALIDATE_PROP_FLUSH_FALSE                 0x00000000 /* RW--V */
#define NV_FUNC_PRIV_MMU_INVALIDATE_PROP_FLUSH_TRUE                  0x00000001 /* RW--V */
#define NV_FUNC_PRIV_MMU_INVALIDATE_CACHE_LEVEL                           26:24 /* RWXVF */
#define NV_FUNC_PRIV_MMU_INVALIDATE_CACHE_LEVEL_ALL                  0x00000000 /* RW--V */
#define NV_FUNC_PRIV_MMU_INVALIDATE_CACHE_LEVEL_PTE_ONLY             0x00000001 /* RW--V */
#define NV_FUNC_PRIV_MMU_INVALIDATE_CACHE_LEVEL_UP_TO_PDE0           0x00000002 /* RW--V */
#define NV_FUNC_PRIV_MMU_INVALIDATE_CACHE_LEVEL_UP_TO_PDE1           0x00000003 /* RW--V */
#define NV_FUNC_PRIV_MMU_INVALIDATE_CACHE_LEVEL_UP_TO_PDE2           0x00000004 /* RW--V */
#define NV_FUNC_PRIV_MMU_INVALIDATE_CACHE_LEVEL_UP_TO_PDE3           0x00000005 /* RW--V */
#define NV_FUNC_PRIV_MMU_INVALIDATE_CACHE_LEVEL_UP_TO_PDE4           0x00000006 /* RW--V */
#define NV_FUNC_PRIV_MMU_INVALIDATE_CACHE_LEVEL_UP_TO_PDE5           0x00000007 /* RW--V */
#define NV_FUNC_PRIV_MMU_INVALIDATE_CACHE_LEVEL_CANCEL_READ          0x00000000 /* RW--V */
#define NV_FUNC_PRIV_MMU_INVALIDATE_CACHE_LEVEL_CANCEL_WRITE         0x00000001 /* RW--V */
#define NV_FUNC_PRIV_MMU_INVALIDATE_CACHE_LEVEL_CANCEL_ATOMIC_STRONG 0x00000002 /* RW--V */
#define NV_FUNC_PRIV_MMU_INVALIDATE_CACHE_LEVEL_CANCEL_RSVRVD        0x00000003 /* RW--V */
#define NV_FUNC_PRIV_MMU_INVALIDATE_CACHE_LEVEL_CANCEL_ATOMIC_WEAK   0x00000004 /* RW--V */
#define NV_FUNC_PRIV_MMU_INVALIDATE_CACHE_LEVEL_CANCEL_ATOMIC_ALL    0x00000005 /* RW--V */
#define NV_FUNC_PRIV_MMU_INVALIDATE_CACHE_LEVEL_CANCEL_WRITE_AND_ATOMIC 0x00000006 /* RW--V */
#define NV_FUNC_PRIV_MMU_INVALIDATE_CACHE_LEVEL_CANCEL_ALL           0x00000007 /* RW--V */
#define NV_FUNC_PRIV_MMU_INVALIDATE_TRIGGER                                31:31 /* -WEVF */
#define NV_FUNC_PRIV_MMU_INVALIDATE_TRIGGER_FALSE                     0x00000000 /* -WE-V */
#define NV_FUNC_PRIV_MMU_INVALIDATE_TRIGGER_TRUE                      0x00000001 /* -W--V */
#define NV_FUNC_PRIV_MMU_INVALIDATE_MAX_CACHELINE_SIZE                0x00000010 /*       */
#define NV_FUNC_PRIV_ACCESS_COUNTER_CONFIG                                      0x00003100 /* RW-4R */
#define NV_FUNC_PRIV_ACCESS_COUNTER_CONFIG_THRESHOLD                                  15:0 /* RWIVF */
#define NV_FUNC_PRIV_ACCESS_COUNTER_CONFIG_THRESHOLD_INIT                       0x00000080 /* RWI-V */
#define NV_FUNC_PRIV_ACCESS_COUNTER_CONFIG_MIMC_GRANULARITY                          17:16 /* RWIVF */
#define NV_FUNC_PRIV_ACCESS_COUNTER_CONFIG_MIMC_GRANULARITY_INIT                0x00000000 /* RWI-V */
#define NV_FUNC_PRIV_ACCESS_COUNTER_CONFIG_MIMC_GRANULARITY_64K                 0x00000000 /* RW--V */
#define NV_FUNC_PRIV_ACCESS_COUNTER_CONFIG_MIMC_GRANULARITY_2M                  0x00000001 /* RW--V */
#define NV_FUNC_PRIV_ACCESS_COUNTER_CONFIG_MIMC_GRANULARITY_16M                 0x00000002 /* RW--V */
#define NV_FUNC_PRIV_ACCESS_COUNTER_CONFIG_MIMC_GRANULARITY_16G                 0x00000003 /* RW--V */
#define NV_FUNC_PRIV_ACCESS_COUNTER_CONFIG_MOMC_GRANULARITY                          19:18 /* RWIVF */
#define NV_FUNC_PRIV_ACCESS_COUNTER_CONFIG_MOMC_GRANULARITY_INIT                0x00000000 /* RWI-V */
#define NV_FUNC_PRIV_ACCESS_COUNTER_CONFIG_MOMC_GRANULARITY_64K                 0x00000000 /* RW--V */
#define NV_FUNC_PRIV_ACCESS_COUNTER_CONFIG_MOMC_GRANULARITY_2M                  0x00000001 /* RW--V */
#define NV_FUNC_PRIV_ACCESS_COUNTER_CONFIG_MOMC_GRANULARITY_16M                 0x00000002 /* RW--V */
#define NV_FUNC_PRIV_ACCESS_COUNTER_CONFIG_MOMC_GRANULARITY_16G                 0x00000003 /* RW--V */
#define NV_FUNC_PRIV_ACCESS_COUNTER_CONFIG_GVA_NOTIFY                                20:20 /* RWIVF */
#define NV_FUNC_PRIV_ACCESS_COUNTER_CONFIG_GVA_NOTIFY_TRUE                      0x00000001 /* RWI-V */
#define NV_FUNC_PRIV_ACCESS_COUNTER_CONFIG_GVA_NOTIFY_FALSE                     0x00000000 /* RW--V */
#define NV_FUNC_PRIV_ACCESS_COUNTER_CONFIG_COUNT_PD                                  30:30 /* RWIVF */
#define NV_FUNC_PRIV_ACCESS_COUNTER_CONFIG_COUNT_PD_TRUE                        0x00000001 /* RWI-V */
#define NV_FUNC_PRIV_ACCESS_COUNTER_CONFIG_COUNT_PD_FALSE                       0x00000000 /* RW--V */
#define NV_FUNC_PRIV_ACCESS_COUNTER_CONFIG_COUNT_PCIE                                31:31 /* RWIVF */
#define NV_FUNC_PRIV_ACCESS_COUNTER_CONFIG_COUNT_PCIE_TRUE                      0x00000001 /* RWI-V */
#define NV_FUNC_PRIV_ACCESS_COUNTER_CONFIG_COUNT_PCIE_FALSE                     0x00000000 /* RW--V */
#define NV_FUNC_PRIV_ACCESS_COUNTER_NOTIFY_BUFFER_LO               0x00003108 /* RW-4R */
#define NV_FUNC_PRIV_ACCESS_COUNTER_NOTIFY_BUFFER_LO_EN                   0:0 /* RWIVF */
#define NV_FUNC_PRIV_ACCESS_COUNTER_NOTIFY_BUFFER_LO_EN_FALSE      0x00000000 /* RWI-V */
#define NV_FUNC_PRIV_ACCESS_COUNTER_NOTIFY_BUFFER_LO_EN_TRUE       0x00000001 /* RW--V */
#define NV_FUNC_PRIV_ACCESS_COUNTER_NOTIFY_BUFFER_LO_BASE               31:12 /* RWXVF */
#define NV_FUNC_PRIV_ACCESS_COUNTER_NOTIFY_BUFFER_LO_BASE_RESET    0x00000000 /* RW--V */
#define NV_FUNC_PRIV_ACCESS_COUNTER_NOTIFY_BUFFER_HI               0x0000310C /* RW-4R */
#define NV_FUNC_PRIV_ACCESS_COUNTER_NOTIFY_BUFFER_HI_BASE                31:0 /* RWXVF */
#define NV_FUNC_PRIV_ACCESS_COUNTER_NOTIFY_BUFFER_HI_BASE_RESET    0x00000000 /* RW--V */
#define NV_FUNC_PRIV_ACCESS_COUNTER_NOTIFY_BUFFER_SIZE                   0x00003110 /* R--4R */
#define NV_FUNC_PRIV_ACCESS_COUNTER_NOTIFY_BUFFER_SIZE_FIELD                   31:0 /*       */
#define NV_FUNC_PRIV_ACCESS_COUNTER_NOTIFY_BUFFER_SIZE_HW                      12:0 /* R-IUF */
#define NV_FUNC_PRIV_ACCESS_COUNTER_NOTIFY_BUFFER_SIZE_HW_ENTRIES              4096 /* R-I-V */
#define NV_FUNC_PRIV_ACCESS_COUNTER_NOTIFY_BUFFER_GET                0x00003114 /* RW-4R */
#define NV_FUNC_PRIV_ACCESS_COUNTER_NOTIFY_BUFFER_GET_OFFSET               31:0 /*       */
#define NV_FUNC_PRIV_ACCESS_COUNTER_NOTIFY_BUFFER_GET_OFFSET_HW            11:0 /* RWIVF */
#define NV_FUNC_PRIV_ACCESS_COUNTER_NOTIFY_BUFFER_GET_OFFSET_HW_INIT 0x00000000 /* RWI-V */
#define NV_FUNC_PRIV_ACCESS_COUNTER_NOTIFY_BUFFER_PUT                 0x00003118 /* R--4R */
#define NV_FUNC_PRIV_ACCESS_COUNTER_NOTIFY_BUFFER_PUT_OFFSET                31:0 /*       */
#define NV_FUNC_PRIV_ACCESS_COUNTER_NOTIFY_BUFFER_PUT_OFFSET_HW             11:0 /* R-IVF */
#define NV_FUNC_PRIV_ACCESS_COUNTER_NOTIFY_BUFFER_PUT_OFFSET_HW_INIT  0x00000000 /* R-I-V */
#define NV_FUNC_PRIV_ACCESS_COUNTER_NOTIFY_BUFFER_INFO                               0x0000311C /* R--4R */
#define NV_FUNC_PRIV_ACCESS_COUNTER_NOTIFY_BUFFER_INFO_FULL                                 0:0 /* R-IVF */
#define NV_FUNC_PRIV_ACCESS_COUNTER_NOTIFY_BUFFER_INFO_FULL_FALSE                           0x0 /* R-I-V */
#define NV_FUNC_PRIV_ACCESS_COUNTER_NOTIFY_BUFFER_INFO_FULL_TRUE                            0x1 /* R---V */
#define NV_FUNC_PRIV_ACCESS_COUNTER_NOTIFY_BUFFER_INFO_PUSHED                               1:1 /* R-IVF */
#define NV_FUNC_PRIV_ACCESS_COUNTER_NOTIFY_BUFFER_INFO_PUSHED_FALSE                         0x0 /* R---V */
#define NV_FUNC_PRIV_ACCESS_COUNTER_NOTIFY_BUFFER_INFO_PUSHED_TRUE                          0x1 /* R-I-V */
#define NV_FUNC_PRIV_ACCESS_COUNTER_NOTIFY_BUFFER_INFO_WRITE_NACK                         24:24 /* R-IVF */
#define NV_FUNC_PRIV_ACCESS_COUNTER_NOTIFY_BUFFER_INFO_WRITE_NACK_FALSE                     0x0 /* R-I-V */
#define NV_FUNC_PRIV_ACCESS_COUNTER_NOTIFY_BUFFER_INFO_WRITE_NACK_TRUE                      0x1 /* R---V */
#define NV_FUNC_PRIV_MSIX_TABLE_ADDR_LO(i)                              (0x00010000+(i)*16) /* RW-4A */
#define NV_FUNC_PRIV_MSIX_TABLE_ADDR_LO__SIZE_1                 6 /*       */
#define NV_FUNC_PRIV_MSIX_TABLE_ADDR_LO_RSVD                                            1:0 /* C--VF */
#define NV_FUNC_PRIV_MSIX_TABLE_ADDR_LO_RSVD_VALUE                               0x00000000 /* C---V */
#define NV_FUNC_PRIV_MSIX_TABLE_ADDR_LO_BITS                                           31:2 /* RWXVF */
#define NV_FUNC_PRIV_MSIX_TABLE_ADDR_HI(i)                              (0x00010004+(i)*16) /* RW-4A */
#define NV_FUNC_PRIV_MSIX_TABLE_ADDR_HI__SIZE_1                 6 /*       */
#define NV_FUNC_PRIV_MSIX_TABLE_ADDR_HI_BITS                                           31:0 /* RWXVF */
#define NV_FUNC_PRIV_MSIX_TABLE_DATA(i)                                 (0x00010008+(i)*16) /* RW-4A */
#define NV_FUNC_PRIV_MSIX_TABLE_DATA__SIZE_1                    6 /*       */
#define NV_FUNC_PRIV_MSIX_TABLE_DATA_BITS                                              31:0 /* RWXVF */
#define NV_FUNC_PRIV_MSIX_TABLE_VECTOR_CONTROL(i)                       (0x0001000C+(i)*16) /* RW-4A */
#define NV_FUNC_PRIV_MSIX_TABLE_VECTOR_CONTROL__SIZE_1          6 /*       */
#define NV_FUNC_PRIV_MSIX_TABLE_VECTOR_CONTROL_MASK_BIT                                 0:0 /* RWIVF */
#define NV_FUNC_PRIV_MSIX_TABLE_VECTOR_CONTROL_MASK_BIT_UNMASKED                 0x00000000 /* RW--V */
#define NV_FUNC_PRIV_MSIX_TABLE_VECTOR_CONTROL_MASK_BIT_MASKED                   0x00000001 /* RWI-V */
#define NV_FUNC_PRIV_MSIX_TABLE_VECTOR_CONTROL_RSVD                                    31:1 /* C--VF */
#define NV_FUNC_PRIV_MSIX_TABLE_VECTOR_CONTROL_RSVD_VALUE                        0x00000000 /* C---V */
#define NV_FUNC_PRIV_JUMBO_MSIX_TABLE_ADDR_LO(i)                              (0x00410000+(i)*16) /* RW-4A */
#define NV_FUNC_PRIV_JUMBO_MSIX_TABLE_ADDR_LO__SIZE_1                 6 /*       */
#define NV_FUNC_PRIV_JUMBO_MSIX_TABLE_ADDR_LO_RSVD                                            1:0 /* C--VF */
#define NV_FUNC_PRIV_JUMBO_MSIX_TABLE_ADDR_LO_RSVD_VALUE                               0x00000000 /* C---V */
#define NV_FUNC_PRIV_JUMBO_MSIX_TABLE_ADDR_LO_BITS                                           31:2 /* RWXVF */
#define NV_FUNC_PRIV_JUMBO_MSIX_TABLE_ADDR_HI(i)                              (0x00410004+(i)*16) /* RW-4A */
#define NV_FUNC_PRIV_JUMBO_MSIX_TABLE_ADDR_HI__SIZE_1                 6 /*       */
#define NV_FUNC_PRIV_JUMBO_MSIX_TABLE_ADDR_HI_BITS                                           31:0 /* RWXVF */
#define NV_FUNC_PRIV_JUMBO_MSIX_TABLE_DATA(i)                                 (0x00410008+(i)*16) /* RW-4A */
#define NV_FUNC_PRIV_JUMBO_MSIX_TABLE_DATA__SIZE_1                    6 /*       */
#define NV_FUNC_PRIV_JUMBO_MSIX_TABLE_DATA_BITS                                              31:0 /* RWXVF */
#define NV_FUNC_PRIV_JUMBO_MSIX_TABLE_VECTOR_CONTROL(i)                       (0x0041000C+(i)*16) /* RW-4A */
#define NV_FUNC_PRIV_JUMBO_MSIX_TABLE_VECTOR_CONTROL__SIZE_1          6 /*       */
#define NV_FUNC_PRIV_JUMBO_MSIX_TABLE_VECTOR_CONTROL_MASK_BIT                                 0:0 /* RWIVF */
#define NV_FUNC_PRIV_JUMBO_MSIX_TABLE_VECTOR_CONTROL_MASK_BIT_UNMASKED                 0x00000000 /* RW--V */
#define NV_FUNC_PRIV_JUMBO_MSIX_TABLE_VECTOR_CONTROL_MASK_BIT_MASKED                   0x00000001 /* RWI-V */
#define NV_FUNC_PRIV_JUMBO_MSIX_TABLE_VECTOR_CONTROL_RSVD                                    31:1 /* C--VF */
#define NV_FUNC_PRIV_JUMBO_MSIX_TABLE_VECTOR_CONTROL_RSVD_VALUE                        0x00000000 /* C---V */
#define NV_FUNC_PRIV_MSIX_PBA                                                   0x00020000 /* R--4R */
#define NV_FUNC_PRIV_MSIX_PBA_BITS                                                    31:0 /* R-IVF */
#define NV_FUNC_PRIV_MSIX_PBA_BITS_INIT                                         0x00000000 /* R-I-V */
#define NV_FUNC_PRIV_JUMBO_MSIX_PBA                                             0x00420000 /* R--4R */
#define NV_FUNC_PRIV_JUMBO_MSIX_PBA_BITS                                              31:0 /* R-IVF */
#define NV_FUNC_PRIV_JUMBO_MSIX_PBA_BITS_INIT                                   0x00000000 /* R-I-V */
#define NV_FUNC_PRIV_MSIX_PBA_SHADOW                                            0x00002400 /* RW-4R */
#define NV_FUNC_PRIV_MSIX_PBA_SHADOW_BITS                                              7:0 /* RWIVF */
#define NV_FUNC_PRIV_MSIX_PBA_SHADOW_BITS_NOT_ACTIVE                            0x00000000 /* RWI-V */
#define NV_FUNC_PRIV_MSIX_PBA_SHADOW_BITS_CLEAR                                 0x00000001 /* RW--V */
#define NV_FUNC_PRIV_MSIX_PBA_SHADOW_BIT                                              31:8 /* C--VF */
#define NV_FUNC_PRIV_MSIX_PBA_SHADOW_BIT_NOT_ACTIVE                             0x00000000 /* C---V */
#define NV_FUNC_CFG0                                          0x00030000 /* C--4R */
#define NV_FUNC_CFG0_USERMODE_CLASS_ID                              15:0 /* C--UF */
#define NV_FUNC_CFG0_USERMODE_CLASS_ID_VALUE 50529 /* C---V */
#define NV_FUNC_TIME_0                           0x30080 /* R--4R */
#define NV_FUNC_TIME_0_NSEC                         31:5 /* R-XUF */
#define NV_FUNC_TIME_1                           0x30084 /* R--4R */
#define NV_FUNC_TIME_1_NSEC                         28:0 /* R-XUF */
#define NV_FUNC_DOORBELL                         0x30090 /* -W-4R */
#define NV_FUNC_DOORBELL_HANDLE                     31:0 /* -W-VF */
#define NV_FUNC_ERR_CONT                         0x30094 /* R--4R */
#define NV_FUNC_ERR_CONT_GRAPHICS                    0:0 /* R--VF */
#define NV_FUNC_ERR_CONT_GRAPHICS_NOT_PENDING          0 /* R---V */
#define NV_FUNC_ERR_CONT_GRAPHICS_PENDING              1 /* R---V */
#define NV_FUNC_ERR_CONT_MMU_ECC                     1:1 /* R--VF */
#define NV_FUNC_ERR_CONT_MMU_ECC_NOT_PENDING           0 /* R---V */
#define NV_FUNC_ERR_CONT_MMU_ECC_PENDING               1 /* R---V */
#define NV_FUNC_ERR_CONT_NVLINK_0                    2:2 /* R--VF */
#define NV_FUNC_ERR_CONT_NVLINK_0_NOT_PENDING          0 /* R---V */
#define NV_FUNC_ERR_CONT_NVLINK_0_PENDING              1 /* R---V */
#define NV_FUNC_ERR_CONT_NVLINK_1                    3:3 /* R--VF */
#define NV_FUNC_ERR_CONT_NVLINK_1_NOT_PENDING          0 /* R---V */
#define NV_FUNC_ERR_CONT_NVLINK_1_PENDING              1 /* R---V */
#define NV_FUNC_ERR_CONT_LTC                         4:4 /* R--VF */
#define NV_FUNC_ERR_CONT_LTC_NOT_PENDING               0 /* R---V */
#define NV_FUNC_ERR_CONT_LTC_PENDING                   1 /* R---V */
#define NV_FUNC_ERR_CONT_PFB                         5:5 /* R--VF */
#define NV_FUNC_ERR_CONT_PFB_NOT_PENDING               0 /* R---V */
#define NV_FUNC_ERR_CONT_PFB_PENDING                   1 /* R---V */
#define NV_FUNC_ERR_CONT_FBHUB_0                     6:6 /* R--VF */
#define NV_FUNC_ERR_CONT_FBHUB_0_NOT_PENDING           0 /* R---V */
#define NV_FUNC_ERR_CONT_FBHUB_0_PENDING               1 /* R---V */
#define NV_FUNC_ERR_CONT_SMC_ENG_HW_IMPL     (8+8-1):8 /* R--VF */
#define NV_FUNC_ERR_CONT_SMC_ENG(i)                                     ((i)+8):((i)+8) /*       */
#define NV_FUNC_ERR_CONT_SMC_ENG__SIZE_1             8 /*       */
#define NV_FUNC_ERR_CONT_SMC_ENG_NOT_PENDING                                          0 /*       */
#define NV_FUNC_ERR_CONT_SMC_ENG_PENDING                                              1 /*       */
// 
// --------------------------------------------------------------------------------
