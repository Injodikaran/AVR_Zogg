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
static const char *ng0 = "D:/Unterricht/2Inf/DT/AVR_NTB Grundversion/alu.vhd";
extern char *IEEE_P_3620187407;
extern char *IEEE_P_2592010699;

char *ieee_p_3620187407_sub_767668596_3965413181(char *, char *, char *, char *, char *, char *);


static void work_a_0832606739_3212880686_p_0(char *t0)
{
    char t9[16];
    char t12[16];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    int t10;
    unsigned int t11;
    char *t13;
    char *t14;
    int t15;
    unsigned char t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;

LAB0:    xsi_set_current_line(31, ng0);
    t1 = (t0 + 4256);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(32, ng0);
    t1 = (t0 + 2152U);
    t2 = *((char **)t1);
    t6 = (15 - 15);
    t7 = (t6 * 1U);
    t8 = (0 + t7);
    t1 = (t2 + t8);
    t3 = (t9 + 0U);
    t4 = (t3 + 0U);
    *((int *)t4) = 15;
    t4 = (t3 + 4U);
    *((int *)t4) = 10;
    t4 = (t3 + 8U);
    *((int *)t4) = -1;
    t10 = (10 - 15);
    t11 = (t10 * -1);
    t11 = (t11 + 1);
    t4 = (t3 + 12U);
    *((unsigned int *)t4) = t11;
    t4 = (t0 + 7059);
    t13 = (t12 + 0U);
    t14 = (t13 + 0U);
    *((int *)t14) = 0;
    t14 = (t13 + 4U);
    *((int *)t14) = 5;
    t14 = (t13 + 8U);
    *((int *)t14) = 1;
    t15 = (5 - 0);
    t11 = (t15 * 1);
    t11 = (t11 + 1);
    t14 = (t13 + 12U);
    *((unsigned int *)t14) = t11;
    t16 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t1, t9, t4, t12);
    if (t16 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 2152U);
    t2 = *((char **)t1);
    t6 = (15 - 15);
    t7 = (t6 * 1U);
    t8 = (0 + t7);
    t1 = (t2 + t8);
    t3 = (t9 + 0U);
    t4 = (t3 + 0U);
    *((int *)t4) = 15;
    t4 = (t3 + 4U);
    *((int *)t4) = 10;
    t4 = (t3 + 8U);
    *((int *)t4) = -1;
    t10 = (10 - 15);
    t11 = (t10 * -1);
    t11 = (t11 + 1);
    t4 = (t3 + 12U);
    *((unsigned int *)t4) = t11;
    t4 = (t0 + 7065);
    t13 = (t12 + 0U);
    t14 = (t13 + 0U);
    *((int *)t14) = 0;
    t14 = (t13 + 4U);
    *((int *)t14) = 5;
    t14 = (t13 + 8U);
    *((int *)t14) = 1;
    t15 = (5 - 0);
    t11 = (t15 * 1);
    t11 = (t11 + 1);
    t14 = (t13 + 12U);
    *((unsigned int *)t14) = t11;
    t16 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t1, t9, t4, t12);
    if (t16 != 0)
        goto LAB5;

LAB6:
LAB3:    t1 = (t0 + 4160);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(33, ng0);
    t14 = (t0 + 4256);
    t17 = (t14 + 56U);
    t18 = *((char **)t17);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    *((unsigned char *)t20) = (unsigned char)1;
    xsi_driver_first_trans_fast(t14);
    goto LAB3;

LAB5:    xsi_set_current_line(35, ng0);
    t14 = (t0 + 4256);
    t17 = (t14 + 56U);
    t18 = *((char **)t17);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    *((unsigned char *)t20) = (unsigned char)2;
    xsi_driver_first_trans_fast(t14);
    goto LAB3;

}

static void work_a_0832606739_3212880686_p_1(char *t0)
{
    char t9[16];
    char t15[16];
    char t26[16];
    char t35[16];
    char t36[16];
    char t37[16];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned char t8;
    int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned char t14;
    char *t16;
    char *t17;
    char *t18;
    int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned char t23;
    char *t24;
    char *t25;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    unsigned int t33;
    unsigned int t34;
    char *t38;
    char *t39;
    int t40;
    char *t41;
    char *t42;
    char *t43;
    static char *nl0[] = {&&LAB5, &&LAB3, &&LAB4, &&LAB5, &&LAB5, &&LAB5, &&LAB5, &&LAB5, &&LAB5, &&LAB5, &&LAB5, &&LAB5, &&LAB5, &&LAB5, &&LAB5, &&LAB5, &&LAB5, &&LAB5};

LAB0:    xsi_set_current_line(43, ng0);
    t1 = (t0 + 4320);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(44, ng0);
    t1 = (t0 + 4384);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(45, ng0);
    t1 = (t0 + 4448);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(46, ng0);
    t1 = (t0 + 7071);
    t3 = (t0 + 4512);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t1, 8U);
    xsi_driver_first_trans_fast_port(t3);
    xsi_set_current_line(48, ng0);
    t1 = (t0 + 2312U);
    t2 = *((char **)t1);
    t8 = *((unsigned char *)t2);
    t1 = (char *)((nl0) + t8);
    goto **((char **)t1);

LAB2:    t1 = (t0 + 4176);
    *((int *)t1) = 1;

LAB1:    return;
LAB3:    xsi_set_current_line(50, ng0);
    t3 = (t0 + 1032U);
    t4 = *((char **)t3);
    t10 = (7 - 7);
    t11 = (t10 * -1);
    t12 = (1U * t11);
    t13 = (0 + t12);
    t3 = (t4 + t13);
    t14 = *((unsigned char *)t3);
    t5 = (t0 + 1032U);
    t6 = *((char **)t5);
    t7 = ((IEEE_P_2592010699) + 4024);
    t16 = (t0 + 6928U);
    t5 = xsi_base_array_concat(t5, t15, t7, (char)99, t14, (char)97, t6, t16, (char)101);
    t17 = (t0 + 1032U);
    t18 = *((char **)t17);
    t19 = (7 - 7);
    t20 = (t19 * -1);
    t21 = (1U * t20);
    t22 = (0 + t21);
    t17 = (t18 + t22);
    t23 = *((unsigned char *)t17);
    t24 = (t0 + 1192U);
    t25 = *((char **)t24);
    t27 = ((IEEE_P_2592010699) + 4024);
    t28 = (t0 + 6944U);
    t24 = xsi_base_array_concat(t24, t26, t27, (char)99, t23, (char)97, t25, t28, (char)101);
    t29 = ieee_p_3620187407_sub_767668596_3965413181(IEEE_P_3620187407, t9, t5, t15, t24, t26);
    t30 = (t0 + 2608U);
    t31 = *((char **)t30);
    t30 = (t31 + 0);
    t32 = (t9 + 12U);
    t33 = *((unsigned int *)t32);
    t34 = (1U * t33);
    memcpy(t30, t29, t34);
    xsi_set_current_line(51, ng0);
    t1 = (t0 + 2608U);
    t2 = *((char **)t1);
    t11 = (8 - 7);
    t12 = (t11 * 1U);
    t13 = (0 + t12);
    t1 = (t2 + t13);
    t3 = (t0 + 4512);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t1, 8U);
    xsi_driver_first_trans_fast_port(t3);
    xsi_set_current_line(52, ng0);
    t1 = (t0 + 2608U);
    t2 = *((char **)t1);
    t10 = (8 - 8);
    t11 = (t10 * -1);
    t12 = (1U * t11);
    t13 = (0 + t12);
    t1 = (t2 + t13);
    t8 = *((unsigned char *)t1);
    t3 = (t0 + 4320);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t8;
    xsi_driver_first_trans_fast_port(t3);
    xsi_set_current_line(53, ng0);
    t1 = (t0 + 2608U);
    t2 = *((char **)t1);
    t10 = (7 - 8);
    t11 = (t10 * -1);
    t12 = (1U * t11);
    t13 = (0 + t12);
    t1 = (t2 + t13);
    t8 = *((unsigned char *)t1);
    t3 = (t0 + 4448);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t8;
    xsi_driver_first_trans_fast_port(t3);
    xsi_set_current_line(54, ng0);
    t1 = (t0 + 2608U);
    t2 = *((char **)t1);
    t11 = (8 - 7);
    t12 = (t11 * 1U);
    t13 = (0 + t12);
    t1 = (t2 + t13);
    t3 = (t9 + 0U);
    t4 = (t3 + 0U);
    *((int *)t4) = 7;
    t4 = (t3 + 4U);
    *((int *)t4) = 0;
    t4 = (t3 + 8U);
    *((int *)t4) = -1;
    t10 = (0 - 7);
    t20 = (t10 * -1);
    t20 = (t20 + 1);
    t4 = (t3 + 12U);
    *((unsigned int *)t4) = t20;
    t4 = (t0 + 7079);
    t6 = (t15 + 0U);
    t7 = (t6 + 0U);
    *((int *)t7) = 0;
    t7 = (t6 + 4U);
    *((int *)t7) = 7;
    t7 = (t6 + 8U);
    *((int *)t7) = 1;
    t19 = (7 - 0);
    t20 = (t19 * 1);
    t20 = (t20 + 1);
    t7 = (t6 + 12U);
    *((unsigned int *)t7) = t20;
    t8 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t1, t9, t4, t15);
    if (t8 != 0)
        goto LAB6;

LAB8:
LAB7:    goto LAB2;

LAB4:    xsi_set_current_line(58, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t10 = (7 - 7);
    t11 = (t10 * -1);
    t12 = (1U * t11);
    t13 = (0 + t12);
    t1 = (t2 + t13);
    t8 = *((unsigned char *)t1);
    t3 = (t0 + 1032U);
    t4 = *((char **)t3);
    t5 = ((IEEE_P_2592010699) + 4024);
    t6 = (t0 + 6928U);
    t3 = xsi_base_array_concat(t3, t26, t5, (char)99, t8, (char)97, t4, t6, (char)101);
    t7 = (t0 + 1032U);
    t16 = *((char **)t7);
    t19 = (7 - 7);
    t20 = (t19 * -1);
    t21 = (1U * t20);
    t22 = (0 + t21);
    t7 = (t16 + t22);
    t14 = *((unsigned char *)t7);
    t17 = (t0 + 1192U);
    t18 = *((char **)t17);
    t24 = ((IEEE_P_2592010699) + 4024);
    t25 = (t0 + 6944U);
    t17 = xsi_base_array_concat(t17, t35, t24, (char)99, t14, (char)97, t18, t25, (char)101);
    t27 = ieee_p_3620187407_sub_767668596_3965413181(IEEE_P_3620187407, t15, t3, t26, t17, t35);
    t28 = (t0 + 7087);
    t30 = (t0 + 1512U);
    t31 = *((char **)t30);
    t23 = *((unsigned char *)t31);
    t32 = ((IEEE_P_2592010699) + 4024);
    t38 = (t37 + 0U);
    t39 = (t38 + 0U);
    *((int *)t39) = 0;
    t39 = (t38 + 4U);
    *((int *)t39) = 7;
    t39 = (t38 + 8U);
    *((int *)t39) = 1;
    t40 = (7 - 0);
    t33 = (t40 * 1);
    t33 = (t33 + 1);
    t39 = (t38 + 12U);
    *((unsigned int *)t39) = t33;
    t30 = xsi_base_array_concat(t30, t36, t32, (char)97, t28, t37, (char)99, t23, (char)101);
    t39 = ieee_p_3620187407_sub_767668596_3965413181(IEEE_P_3620187407, t9, t27, t15, t30, t36);
    t41 = (t0 + 2608U);
    t42 = *((char **)t41);
    t41 = (t42 + 0);
    t43 = (t9 + 12U);
    t33 = *((unsigned int *)t43);
    t34 = (1U * t33);
    memcpy(t41, t39, t34);
    xsi_set_current_line(59, ng0);
    t1 = (t0 + 2608U);
    t2 = *((char **)t1);
    t11 = (8 - 7);
    t12 = (t11 * 1U);
    t13 = (0 + t12);
    t1 = (t2 + t13);
    t3 = (t0 + 4512);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t1, 8U);
    xsi_driver_first_trans_fast_port(t3);
    xsi_set_current_line(60, ng0);
    t1 = (t0 + 2608U);
    t2 = *((char **)t1);
    t10 = (8 - 8);
    t11 = (t10 * -1);
    t12 = (1U * t11);
    t13 = (0 + t12);
    t1 = (t2 + t13);
    t8 = *((unsigned char *)t1);
    t3 = (t0 + 4320);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t8;
    xsi_driver_first_trans_fast_port(t3);
    xsi_set_current_line(61, ng0);
    t1 = (t0 + 2608U);
    t2 = *((char **)t1);
    t10 = (7 - 8);
    t11 = (t10 * -1);
    t12 = (1U * t11);
    t13 = (0 + t12);
    t1 = (t2 + t13);
    t8 = *((unsigned char *)t1);
    t3 = (t0 + 4448);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t8;
    xsi_driver_first_trans_fast_port(t3);
    xsi_set_current_line(62, ng0);
    t1 = (t0 + 2608U);
    t2 = *((char **)t1);
    t11 = (8 - 7);
    t12 = (t11 * 1U);
    t13 = (0 + t12);
    t1 = (t2 + t13);
    t3 = (t9 + 0U);
    t4 = (t3 + 0U);
    *((int *)t4) = 7;
    t4 = (t3 + 4U);
    *((int *)t4) = 0;
    t4 = (t3 + 8U);
    *((int *)t4) = -1;
    t10 = (0 - 7);
    t20 = (t10 * -1);
    t20 = (t20 + 1);
    t4 = (t3 + 12U);
    *((unsigned int *)t4) = t20;
    t4 = (t0 + 7095);
    t6 = (t15 + 0U);
    t7 = (t6 + 0U);
    *((int *)t7) = 0;
    t7 = (t6 + 4U);
    *((int *)t7) = 7;
    t7 = (t6 + 8U);
    *((int *)t7) = 1;
    t19 = (7 - 0);
    t20 = (t19 * 1);
    t20 = (t20 + 1);
    t7 = (t6 + 12U);
    *((unsigned int *)t7) = t20;
    t8 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t1, t9, t4, t15);
    if (t8 != 0)
        goto LAB9;

LAB11:
LAB10:    goto LAB2;

LAB5:    goto LAB2;

LAB6:    xsi_set_current_line(55, ng0);
    t7 = (t0 + 4384);
    t16 = (t7 + 56U);
    t17 = *((char **)t16);
    t18 = (t17 + 56U);
    t24 = *((char **)t18);
    *((unsigned char *)t24) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t7);
    goto LAB7;

LAB9:    xsi_set_current_line(63, ng0);
    t7 = (t0 + 4384);
    t16 = (t7 + 56U);
    t17 = *((char **)t16);
    t18 = (t17 + 56U);
    t24 = *((char **)t18);
    *((unsigned char *)t24) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t7);
    goto LAB10;

}


extern void work_a_0832606739_3212880686_init()
{
	static char *pe[] = {(void *)work_a_0832606739_3212880686_p_0,(void *)work_a_0832606739_3212880686_p_1};
	xsi_register_didat("work_a_0832606739_3212880686", "isim/alu_tb_isim_beh.exe.sim/work/a_0832606739_3212880686.didat");
	xsi_register_executes(pe);
}
