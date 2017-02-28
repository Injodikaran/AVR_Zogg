/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "//fs003/nobackup/Unterricht/zogg/DT_RA/AVR_NTB Grundversion/registers.vhd";
extern char *IEEE_P_2592010699;
extern char *IEEE_P_3620187407;

unsigned char ieee_p_2592010699_sub_1744673427_503743352(char *, char *, unsigned int , unsigned int );
int ieee_p_3620187407_sub_514432868_3965413181(char *, char *, char *);


static void work_a_0278921292_3212880686_p_0(char *t0)
{
    char t16[16];
    char t17[16];
    char t26[16];
    char t29[16];
    char *t1;
    char *t2;
    unsigned int t3;
    unsigned int t4;
    unsigned int t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    int t11;
    unsigned char t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t18;
    int t19;
    unsigned int t20;
    unsigned char t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t27;
    int t28;
    int t30;
    unsigned char t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;

LAB0:    xsi_set_current_line(33, ng0);
    t1 = (t0 + 2096U);
    t2 = *((char **)t1);
    t3 = (15 - 8);
    t4 = (t3 * 1U);
    t5 = (0 + t4);
    t1 = (t2 + t5);
    t6 = (t0 + 5928);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 5U);
    xsi_driver_first_trans_fast(t6);
    xsi_set_current_line(34, ng0);
    t1 = (t0 + 2096U);
    t2 = *((char **)t1);
    t11 = (9 - 15);
    t3 = (t11 * -1);
    t4 = (1U * t3);
    t5 = (0 + t4);
    t1 = (t2 + t5);
    t12 = *((unsigned char *)t1);
    t6 = (t0 + 2096U);
    t7 = *((char **)t6);
    t13 = (15 - 3);
    t14 = (t13 * 1U);
    t15 = (0 + t14);
    t6 = (t7 + t15);
    t9 = ((IEEE_P_2592010699) + 4024);
    t10 = (t17 + 0U);
    t18 = (t10 + 0U);
    *((int *)t18) = 3;
    t18 = (t10 + 4U);
    *((int *)t18) = 0;
    t18 = (t10 + 8U);
    *((int *)t18) = -1;
    t19 = (0 - 3);
    t20 = (t19 * -1);
    t20 = (t20 + 1);
    t18 = (t10 + 12U);
    *((unsigned int *)t18) = t20;
    t8 = xsi_base_array_concat(t8, t16, t9, (char)99, t12, (char)97, t6, t17, (char)101);
    t20 = (1U + 4U);
    t21 = (5U != t20);
    if (t21 == 1)
        goto LAB2;

LAB3:    t18 = (t0 + 5992);
    t22 = (t18 + 56U);
    t23 = *((char **)t22);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    memcpy(t25, t8, 5U);
    xsi_driver_first_trans_fast(t18);
    xsi_set_current_line(35, ng0);
    t1 = (t0 + 10995);
    t6 = (t0 + 6056);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 8U);
    xsi_driver_first_trans_fast(t6);
    xsi_set_current_line(36, ng0);
    t1 = (t0 + 3512U);
    t2 = *((char **)t1);
    t1 = (t2 + 0);
    *((unsigned char *)t1) = (unsigned char)0;
    xsi_set_current_line(37, ng0);
    t1 = (t0 + 2096U);
    t2 = *((char **)t1);
    t3 = (15 - 15);
    t4 = (t3 * 1U);
    t5 = (0 + t4);
    t1 = (t2 + t5);
    t6 = (t16 + 0U);
    t7 = (t6 + 0U);
    *((int *)t7) = 15;
    t7 = (t6 + 4U);
    *((int *)t7) = 12;
    t7 = (t6 + 8U);
    *((int *)t7) = -1;
    t11 = (12 - 15);
    t13 = (t11 * -1);
    t13 = (t13 + 1);
    t7 = (t6 + 12U);
    *((unsigned int *)t7) = t13;
    t7 = (t0 + 11003);
    t9 = (t17 + 0U);
    t10 = (t9 + 0U);
    *((int *)t10) = 0;
    t10 = (t9 + 4U);
    *((int *)t10) = 3;
    t10 = (t9 + 8U);
    *((int *)t10) = 1;
    t19 = (3 - 0);
    t13 = (t19 * 1);
    t13 = (t13 + 1);
    t10 = (t9 + 12U);
    *((unsigned int *)t10) = t13;
    t12 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t1, t16, t7, t17);
    if (t12 != 0)
        goto LAB4;

LAB6:
LAB5:    xsi_set_current_line(43, ng0);
    t1 = (t0 + 2096U);
    t2 = *((char **)t1);
    t3 = (15 - 15);
    t4 = (t3 * 1U);
    t5 = (0 + t4);
    t1 = (t2 + t5);
    t6 = (t16 + 0U);
    t7 = (t6 + 0U);
    *((int *)t7) = 15;
    t7 = (t6 + 4U);
    *((int *)t7) = 10;
    t7 = (t6 + 8U);
    *((int *)t7) = -1;
    t11 = (10 - 15);
    t13 = (t11 * -1);
    t13 = (t13 + 1);
    t7 = (t6 + 12U);
    *((unsigned int *)t7) = t13;
    t7 = (t0 + 11008);
    t9 = (t17 + 0U);
    t10 = (t9 + 0U);
    *((int *)t10) = 0;
    t10 = (t9 + 4U);
    *((int *)t10) = 5;
    t10 = (t9 + 8U);
    *((int *)t10) = 1;
    t19 = (5 - 0);
    t13 = (t19 * 1);
    t13 = (t13 + 1);
    t10 = (t9 + 12U);
    *((unsigned int *)t10) = t13;
    t21 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t1, t16, t7, t17);
    if (t21 == 1)
        goto LAB11;

LAB12:    t10 = (t0 + 2096U);
    t18 = *((char **)t10);
    t13 = (15 - 15);
    t14 = (t13 * 1U);
    t15 = (0 + t14);
    t10 = (t18 + t15);
    t22 = (t26 + 0U);
    t23 = (t22 + 0U);
    *((int *)t23) = 15;
    t23 = (t22 + 4U);
    *((int *)t23) = 10;
    t23 = (t22 + 8U);
    *((int *)t23) = -1;
    t28 = (10 - 15);
    t20 = (t28 * -1);
    t20 = (t20 + 1);
    t23 = (t22 + 12U);
    *((unsigned int *)t23) = t20;
    t23 = (t0 + 11014);
    t25 = (t29 + 0U);
    t27 = (t25 + 0U);
    *((int *)t27) = 0;
    t27 = (t25 + 4U);
    *((int *)t27) = 5;
    t27 = (t25 + 8U);
    *((int *)t27) = 1;
    t30 = (5 - 0);
    t20 = (t30 * 1);
    t20 = (t20 + 1);
    t27 = (t25 + 12U);
    *((unsigned int *)t27) = t20;
    t31 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t10, t26, t23, t29);
    t12 = t31;

LAB13:    t27 = (t0 + 6120);
    t32 = (t27 + 56U);
    t33 = *((char **)t32);
    t34 = (t33 + 56U);
    t35 = *((char **)t34);
    *((unsigned char *)t35) = t12;
    xsi_driver_first_trans_fast(t27);
    xsi_set_current_line(47, ng0);
    t1 = (t0 + 3512U);
    t2 = *((char **)t1);
    t12 = *((unsigned char *)t2);
    t1 = (t0 + 6184);
    t6 = (t1 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = t12;
    xsi_driver_first_trans_fast(t1);
    t1 = (t0 + 5800);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_size_not_matching(5U, t20, 0);
    goto LAB3;

LAB4:    xsi_set_current_line(38, ng0);
    t10 = (t0 + 3512U);
    t18 = *((char **)t10);
    t10 = (t18 + 0);
    *((unsigned char *)t10) = (unsigned char)1;
    xsi_set_current_line(39, ng0);
    t1 = (t0 + 2096U);
    t2 = *((char **)t1);
    t3 = (15 - 11);
    t4 = (t3 * 1U);
    t5 = (0 + t4);
    t1 = (t2 + t5);
    t6 = (t0 + 2096U);
    t7 = *((char **)t6);
    t13 = (15 - 3);
    t14 = (t13 * 1U);
    t15 = (0 + t14);
    t6 = (t7 + t15);
    t9 = ((IEEE_P_2592010699) + 4024);
    t10 = (t17 + 0U);
    t18 = (t10 + 0U);
    *((int *)t18) = 11;
    t18 = (t10 + 4U);
    *((int *)t18) = 8;
    t18 = (t10 + 8U);
    *((int *)t18) = -1;
    t11 = (8 - 11);
    t20 = (t11 * -1);
    t20 = (t20 + 1);
    t18 = (t10 + 12U);
    *((unsigned int *)t18) = t20;
    t18 = (t26 + 0U);
    t22 = (t18 + 0U);
    *((int *)t22) = 3;
    t22 = (t18 + 4U);
    *((int *)t22) = 0;
    t22 = (t18 + 8U);
    *((int *)t22) = -1;
    t19 = (0 - 3);
    t20 = (t19 * -1);
    t20 = (t20 + 1);
    t22 = (t18 + 12U);
    *((unsigned int *)t22) = t20;
    t8 = xsi_base_array_concat(t8, t16, t9, (char)97, t1, t17, (char)97, t6, t26, (char)101);
    t20 = (4U + 4U);
    t12 = (8U != t20);
    if (t12 == 1)
        goto LAB7;

LAB8:    t22 = (t0 + 6056);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    t25 = (t24 + 56U);
    t27 = *((char **)t25);
    memcpy(t27, t8, 8U);
    xsi_driver_first_trans_fast(t22);
    xsi_set_current_line(40, ng0);
    t1 = (t0 + 11007);
    t6 = (t0 + 2096U);
    t7 = *((char **)t6);
    t3 = (15 - 7);
    t4 = (t3 * 1U);
    t5 = (0 + t4);
    t6 = (t7 + t5);
    t9 = ((IEEE_P_2592010699) + 4024);
    t10 = (t17 + 0U);
    t18 = (t10 + 0U);
    *((int *)t18) = 0;
    t18 = (t10 + 4U);
    *((int *)t18) = 0;
    t18 = (t10 + 8U);
    *((int *)t18) = 1;
    t11 = (0 - 0);
    t13 = (t11 * 1);
    t13 = (t13 + 1);
    t18 = (t10 + 12U);
    *((unsigned int *)t18) = t13;
    t18 = (t26 + 0U);
    t22 = (t18 + 0U);
    *((int *)t22) = 7;
    t22 = (t18 + 4U);
    *((int *)t22) = 4;
    t22 = (t18 + 8U);
    *((int *)t22) = -1;
    t19 = (4 - 7);
    t13 = (t19 * -1);
    t13 = (t13 + 1);
    t22 = (t18 + 12U);
    *((unsigned int *)t22) = t13;
    t8 = xsi_base_array_concat(t8, t16, t9, (char)97, t1, t17, (char)97, t6, t26, (char)101);
    t13 = (1U + 4U);
    t12 = (5U != t13);
    if (t12 == 1)
        goto LAB9;

LAB10:    t22 = (t0 + 5928);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    t25 = (t24 + 56U);
    t27 = *((char **)t25);
    memcpy(t27, t8, 5U);
    xsi_driver_first_trans_fast(t22);
    goto LAB5;

LAB7:    xsi_size_not_matching(8U, t20, 0);
    goto LAB8;

LAB9:    xsi_size_not_matching(5U, t13, 0);
    goto LAB10;

LAB11:    t12 = (unsigned char)1;
    goto LAB13;

}

static void work_a_0278921292_3212880686_p_1(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned char t8;
    unsigned int t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;

LAB0:    xsi_set_current_line(56, ng0);
    t1 = (t0 + 1296U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 1416U);
    t3 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t3 != 0)
        goto LAB7;

LAB8:
LAB3:    t1 = (t0 + 5816);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(57, ng0);
    t1 = xsi_get_transient_memory(256U);
    memset(t1, 0, 256U);
    t5 = t1;
    t6 = (t0 + 11020);
    t8 = (8U != 0);
    if (t8 == 1)
        goto LAB5;

LAB6:    t10 = (t0 + 6248);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t1, 256U);
    xsi_driver_first_trans_fast(t10);
    goto LAB3;

LAB5:    t9 = (256U / 8U);
    xsi_mem_set_data(t5, t6, 8U, t9);
    goto LAB6;

LAB7:    xsi_set_current_line(59, ng0);
    t2 = (t0 + 3216U);
    t5 = *((char **)t2);
    t2 = (t0 + 6248);
    t6 = (t2 + 56U);
    t7 = *((char **)t6);
    t10 = (t7 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t5, 256U);
    xsi_driver_first_trans_fast(t2);
    goto LAB3;

}

static void work_a_0278921292_3212880686_p_2(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    unsigned char t7;
    unsigned char t8;
    int t9;
    int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    static char *nl0[] = {&&LAB7, &&LAB6};

LAB0:    xsi_set_current_line(66, ng0);
    t1 = (t0 + 3056U);
    t2 = *((char **)t1);
    t1 = (t0 + 6312);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 256U);
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(67, ng0);
    t1 = (t0 + 2736U);
    t2 = *((char **)t1);
    t7 = *((unsigned char *)t2);
    if (t7 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 5832);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(68, ng0);
    t1 = (t0 + 2256U);
    t3 = *((char **)t1);
    t8 = *((unsigned char *)t3);
    t1 = (char *)((nl0) + t8);
    goto **((char **)t1);

LAB5:    goto LAB3;

LAB6:    xsi_set_current_line(70, ng0);
    t4 = (t0 + 2896U);
    t5 = *((char **)t4);
    t4 = (t0 + 2416U);
    t6 = *((char **)t4);
    t4 = (t0 + 10284U);
    t9 = ieee_p_3620187407_sub_514432868_3965413181(IEEE_P_3620187407, t6, t4);
    t10 = (t9 - 0);
    t11 = (t10 * 1);
    t12 = (8U * t11);
    t13 = (0U + t12);
    t14 = (t0 + 6312);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    memcpy(t18, t5, 8U);
    xsi_driver_first_trans_delta(t14, t13, 8U, 0LL);
    goto LAB5;

LAB7:    xsi_set_current_line(72, ng0);
    t1 = (t0 + 1616U);
    t2 = *((char **)t1);
    t1 = (t0 + 2416U);
    t3 = *((char **)t1);
    t1 = (t0 + 10284U);
    t9 = ieee_p_3620187407_sub_514432868_3965413181(IEEE_P_3620187407, t3, t1);
    t10 = (t9 - 0);
    t11 = (t10 * 1);
    t12 = (8U * t11);
    t13 = (0U + t12);
    t4 = (t0 + 6312);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t14 = (t6 + 56U);
    t15 = *((char **)t14);
    memcpy(t15, t2, 8U);
    xsi_driver_first_trans_delta(t4, t13, 8U, 0LL);
    goto LAB5;

LAB8:    goto LAB5;

}

static void work_a_0278921292_3212880686_p_3(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    int t4;
    int t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;

LAB0:    xsi_set_current_line(81, ng0);
    t1 = (t0 + 3056U);
    t2 = *((char **)t1);
    t1 = (t0 + 2416U);
    t3 = *((char **)t1);
    t1 = (t0 + 10284U);
    t4 = ieee_p_3620187407_sub_514432868_3965413181(IEEE_P_3620187407, t3, t1);
    t5 = (t4 - 0);
    t6 = (t5 * 1);
    xsi_vhdl_check_range_of_index(0, 31, 1, t4);
    t7 = (8U * t6);
    t8 = (0 + t7);
    t9 = (t2 + t8);
    t10 = (t0 + 6376);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t9, 8U);
    xsi_driver_first_trans_fast_port(t10);
    xsi_set_current_line(82, ng0);
    t1 = (t0 + 3056U);
    t2 = *((char **)t1);
    t1 = (t0 + 2576U);
    t3 = *((char **)t1);
    t1 = (t0 + 10300U);
    t4 = ieee_p_3620187407_sub_514432868_3965413181(IEEE_P_3620187407, t3, t1);
    t5 = (t4 - 0);
    t6 = (t5 * 1);
    xsi_vhdl_check_range_of_index(0, 31, 1, t4);
    t7 = (8U * t6);
    t8 = (0 + t7);
    t9 = (t2 + t8);
    t10 = (t0 + 6440);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t9, 8U);
    xsi_driver_first_trans_fast_port(t10);
    t1 = (t0 + 5848);
    *((int *)t1) = 1;

LAB1:    return;
}


extern void work_a_0278921292_3212880686_init()
{
	static char *pe[] = {(void *)work_a_0278921292_3212880686_p_0,(void *)work_a_0278921292_3212880686_p_1,(void *)work_a_0278921292_3212880686_p_2,(void *)work_a_0278921292_3212880686_p_3};
	xsi_register_didat("work_a_0278921292_3212880686", "isim/register_file_isim_beh.exe.sim/work/a_0278921292_3212880686.didat");
	xsi_register_executes(pe);
}
