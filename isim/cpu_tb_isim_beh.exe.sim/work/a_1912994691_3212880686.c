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
static const char *ng0 = "D:/RepositoryAvr/cpu_tb.vhd";



static void work_a_1912994691_3212880686_p_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    int64 t4;
    char *t5;
    char *t6;
    char *t7;
    int64 t8;
    double t9;
    int64 t10;
    int64 t11;

LAB0:    t1 = (t0 + 2712U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(34, ng0);
    t2 = (t0 + 1728U);
    t3 = *((char **)t2);
    t4 = *((int64 *)t3);
    t2 = (t0 + 2520);
    xsi_process_wait(t2, t4);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(35, ng0);

LAB8:
LAB9:    xsi_set_current_line(36, ng0);
    t2 = (t0 + 3344);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(37, ng0);
    t2 = (t0 + 1488U);
    t3 = *((char **)t2);
    t4 = *((int64 *)t3);
    t2 = (t0 + 1488U);
    t5 = *((char **)t2);
    t8 = *((int64 *)t5);
    t2 = (t0 + 1608U);
    t6 = *((char **)t2);
    t9 = *((double *)t6);
    t10 = (t8 * t9);
    t11 = (t4 - t10);
    t2 = (t0 + 2520);
    xsi_process_wait(t2, t11);

LAB14:    *((char **)t1) = &&LAB15;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB10:;
LAB11:    goto LAB2;

LAB12:    xsi_set_current_line(38, ng0);
    t2 = (t0 + 3344);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(39, ng0);
    t2 = (t0 + 1488U);
    t3 = *((char **)t2);
    t4 = *((int64 *)t3);
    t2 = (t0 + 1608U);
    t5 = *((char **)t2);
    t9 = *((double *)t5);
    t8 = (t4 * t9);
    t2 = (t0 + 2520);
    xsi_process_wait(t2, t8);

LAB18:    *((char **)t1) = &&LAB19;
    goto LAB1;

LAB13:    goto LAB12;

LAB15:    goto LAB13;

LAB16:    goto LAB8;

LAB17:    goto LAB16;

LAB19:    goto LAB17;

}

static void work_a_1912994691_3212880686_p_1(char *t0)
{
    char *t1;
    char *t2;
    int64 t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    t1 = (t0 + 2960U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(45, ng0);
    t3 = (20 * 1000LL);
    t2 = (t0 + 2768);
    xsi_process_wait(t2, t3);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(46, ng0);
    t2 = (t0 + 3408);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(48, ng0);

LAB10:    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB8:    goto LAB2;

LAB9:    goto LAB8;

LAB11:    goto LAB9;

}


extern void work_a_1912994691_3212880686_init()
{
	static char *pe[] = {(void *)work_a_1912994691_3212880686_p_0,(void *)work_a_1912994691_3212880686_p_1};
	xsi_register_didat("work_a_1912994691_3212880686", "isim/cpu_tb_isim_beh.exe.sim/work/a_1912994691_3212880686.didat");
	xsi_register_executes(pe);
}
