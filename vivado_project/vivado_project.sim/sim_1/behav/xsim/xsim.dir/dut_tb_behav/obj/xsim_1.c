/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                         */
/*  \   \        Copyright (c) 2003-2013 Xilinx, Inc.                 */
/*  /   /        All Right Reserved.                                  */
/* /---/   /\                                                         */
/* \   \  /  \                                                        */
/*  \___\/\___\                                                       */
/**********************************************************************/


#include "iki.h"
#include <string.h>
#include <math.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                         */
/*  \   \        Copyright (c) 2003-2013 Xilinx, Inc.                 */
/*  /   /        All Right Reserved.                                  */
/* /---/   /\                                                         */
/* \   \  /  \                                                        */
/*  \___\/\___\                                                       */
/**********************************************************************/


#include "iki.h"
#include <string.h>
#include <math.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
typedef void (*funcp)(char *, char *);
extern int main(int, char**);
extern void execute_2(char*, char *);
extern void execute_3(char*, char *);
extern void execute_22(char*, char *);
extern void execute_23(char*, char *);
extern void execute_24(char*, char *);
extern void execute_25(char*, char *);
extern void execute_603(char*, char *);
extern void execute_604(char*, char *);
extern void execute_605(char*, char *);
extern void execute_606(char*, char *);
extern void execute_687(char*, char *);
extern void execute_688(char*, char *);
extern void execute_689(char*, char *);
extern void execute_690(char*, char *);
extern void execute_691(char*, char *);
extern void execute_692(char*, char *);
extern void execute_693(char*, char *);
extern void execute_694(char*, char *);
extern void execute_695(char*, char *);
extern void execute_696(char*, char *);
extern void execute_697(char*, char *);
extern void execute_698(char*, char *);
extern void execute_699(char*, char *);
extern void execute_700(char*, char *);
extern void execute_701(char*, char *);
extern void execute_702(char*, char *);
extern void execute_703(char*, char *);
extern void execute_704(char*, char *);
extern void execute_705(char*, char *);
extern void execute_708(char*, char *);
extern void execute_713(char*, char *);
extern void execute_717(char*, char *);
extern void execute_721(char*, char *);
extern void execute_722(char*, char *);
extern void execute_739(char*, char *);
extern void execute_740(char*, char *);
extern void execute_741(char*, char *);
extern void execute_742(char*, char *);
extern void execute_743(char*, char *);
extern void execute_744(char*, char *);
extern void execute_745(char*, char *);
extern void execute_746(char*, char *);
extern void execute_747(char*, char *);
extern void execute_748(char*, char *);
extern void execute_749(char*, char *);
extern void execute_750(char*, char *);
extern void execute_751(char*, char *);
extern void execute_752(char*, char *);
extern void execute_753(char*, char *);
extern void execute_754(char*, char *);
extern void execute_755(char*, char *);
extern void execute_756(char*, char *);
extern void execute_757(char*, char *);
extern void execute_758(char*, char *);
extern void execute_759(char*, char *);
extern void execute_760(char*, char *);
extern void execute_761(char*, char *);
extern void execute_762(char*, char *);
extern void execute_763(char*, char *);
extern void execute_764(char*, char *);
extern void execute_765(char*, char *);
extern void execute_766(char*, char *);
extern void execute_767(char*, char *);
extern void execute_768(char*, char *);
extern void execute_769(char*, char *);
extern void execute_770(char*, char *);
extern void execute_771(char*, char *);
extern void execute_772(char*, char *);
extern void execute_773(char*, char *);
extern void execute_774(char*, char *);
extern void execute_775(char*, char *);
extern void execute_776(char*, char *);
extern void execute_777(char*, char *);
extern void execute_778(char*, char *);
extern void execute_779(char*, char *);
extern void execute_780(char*, char *);
extern void execute_781(char*, char *);
extern void execute_782(char*, char *);
extern void execute_783(char*, char *);
extern void execute_784(char*, char *);
extern void execute_785(char*, char *);
extern void execute_786(char*, char *);
extern void execute_787(char*, char *);
extern void execute_788(char*, char *);
extern void execute_5(char*, char *);
extern void execute_714(char*, char *);
extern void execute_7(char*, char *);
extern void execute_8(char*, char *);
extern void execute_715(char*, char *);
extern void execute_10(char*, char *);
extern void execute_11(char*, char *);
extern void execute_12(char*, char *);
extern void execute_716(char*, char *);
extern void execute_596(char*, char *);
extern void execute_597(char*, char *);
extern void execute_598(char*, char *);
extern void execute_599(char*, char *);
extern void execute_600(char*, char *);
extern void execute_601(char*, char *);
extern void execute_602(char*, char *);
extern void execute_70(char*, char *);
extern void execute_115(char*, char *);
extern void execute_124(char*, char *);
extern void execute_161(char*, char *);
extern void execute_170(char*, char *);
extern void execute_179(char*, char *);
extern void execute_208(char*, char *);
extern void execute_217(char*, char *);
extern void execute_226(char*, char *);
extern void execute_235(char*, char *);
extern void execute_264(char*, char *);
extern void execute_273(char*, char *);
extern void execute_282(char*, char *);
extern void execute_319(char*, char *);
extern void execute_328(char*, char *);
extern void execute_373(char*, char *);
extern void execute_379(char*, char *);
extern void execute_381(char*, char *);
extern void execute_383(char*, char *);
extern void execute_385(char*, char *);
extern void execute_389(char*, char *);
extern void execute_391(char*, char *);
extern void execute_393(char*, char *);
extern void execute_395(char*, char *);
extern void execute_399(char*, char *);
extern void execute_401(char*, char *);
extern void execute_403(char*, char *);
extern void execute_405(char*, char *);
extern void execute_409(char*, char *);
extern void execute_411(char*, char *);
extern void execute_413(char*, char *);
extern void execute_415(char*, char *);
extern void execute_420(char*, char *);
extern void execute_422(char*, char *);
extern void execute_424(char*, char *);
extern void execute_426(char*, char *);
extern void execute_430(char*, char *);
extern void execute_432(char*, char *);
extern void execute_434(char*, char *);
extern void execute_436(char*, char *);
extern void execute_440(char*, char *);
extern void execute_442(char*, char *);
extern void execute_444(char*, char *);
extern void execute_446(char*, char *);
extern void execute_450(char*, char *);
extern void execute_452(char*, char *);
extern void execute_454(char*, char *);
extern void execute_456(char*, char *);
extern void execute_466(char*, char *);
extern void execute_467(char*, char *);
extern void execute_59(char*, char *);
extern void execute_60(char*, char *);
extern void execute_61(char*, char *);
extern void execute_608(char*, char *);
extern void execute_723(char*, char *);
extern void execute_610(char*, char *);
extern void execute_611(char*, char *);
extern void execute_724(char*, char *);
extern void execute_613(char*, char *);
extern void execute_614(char*, char *);
extern void execute_615(char*, char *);
extern void execute_725(char*, char *);
extern void execute_617(char*, char *);
extern void execute_618(char*, char *);
extern void execute_619(char*, char *);
extern void execute_620(char*, char *);
extern void execute_726(char*, char *);
extern void execute_634(char*, char *);
extern void execute_635(char*, char *);
extern void execute_636(char*, char *);
extern void execute_637(char*, char *);
extern void execute_638(char*, char *);
extern void execute_730(char*, char *);
extern void execute_655(char*, char *);
extern void execute_656(char*, char *);
extern void execute_657(char*, char *);
extern void execute_658(char*, char *);
extern void execute_659(char*, char *);
extern void execute_660(char*, char *);
extern void execute_734(char*, char *);
extern void execute_680(char*, char *);
extern void execute_681(char*, char *);
extern void execute_682(char*, char *);
extern void execute_683(char*, char *);
extern void execute_684(char*, char *);
extern void execute_685(char*, char *);
extern void execute_686(char*, char *);
extern void execute_738(char*, char *);
extern void execute_710(char*, char *);
extern void execute_711(char*, char *);
extern void execute_712(char*, char *);
extern void execute_789(char*, char *);
extern void execute_790(char*, char *);
extern void execute_791(char*, char *);
extern void execute_792(char*, char *);
extern void execute_793(char*, char *);
extern void transaction_4(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_5(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_6(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_7(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_8(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_9(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_12(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_13(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_14(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_18(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_20(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_25(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_26(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_27(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_29(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_30(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_31(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_33(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_34(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_35(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_37(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_38(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_39(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_41(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_42(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_43(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_45(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_46(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_47(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_49(char*, char*, unsigned, unsigned, unsigned);
extern void vhdl_transfunc_eventcallback(char*, char*, unsigned, unsigned, unsigned, char *);
extern void transaction_127(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_128(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_129(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_131(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_132(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_133(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_135(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_136(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_137(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_139(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_140(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_141(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_143(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_144(char*, char*, unsigned, unsigned, unsigned);
extern void vlog_transfunc_eventcallback(char*, char*, unsigned, unsigned, unsigned, char *);
extern void transaction_147(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_148(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_151(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_152(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_155(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_156(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_157(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_159(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_160(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_163(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_164(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_167(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_168(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_171(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_172(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_173(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_175(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_176(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_179(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_180(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_183(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_184(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_187(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_188(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_189(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_0(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_1(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_2(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_3(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_10(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_11(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_15(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_16(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_17(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_19(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_21(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_22(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_23(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_24(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_28(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_32(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_36(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_40(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_44(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_48(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_130(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_134(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_138(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_142(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_146(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_150(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_154(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_158(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_162(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_166(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_170(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_174(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_178(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_182(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_186(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_190(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_191(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_192(char*, char*, unsigned, unsigned, unsigned);
funcp funcTab[305] = {(funcp)execute_2, (funcp)execute_3, (funcp)execute_22, (funcp)execute_23, (funcp)execute_24, (funcp)execute_25, (funcp)execute_603, (funcp)execute_604, (funcp)execute_605, (funcp)execute_606, (funcp)execute_687, (funcp)execute_688, (funcp)execute_689, (funcp)execute_690, (funcp)execute_691, (funcp)execute_692, (funcp)execute_693, (funcp)execute_694, (funcp)execute_695, (funcp)execute_696, (funcp)execute_697, (funcp)execute_698, (funcp)execute_699, (funcp)execute_700, (funcp)execute_701, (funcp)execute_702, (funcp)execute_703, (funcp)execute_704, (funcp)execute_705, (funcp)execute_708, (funcp)execute_713, (funcp)execute_717, (funcp)execute_721, (funcp)execute_722, (funcp)execute_739, (funcp)execute_740, (funcp)execute_741, (funcp)execute_742, (funcp)execute_743, (funcp)execute_744, (funcp)execute_745, (funcp)execute_746, (funcp)execute_747, (funcp)execute_748, (funcp)execute_749, (funcp)execute_750, (funcp)execute_751, (funcp)execute_752, (funcp)execute_753, (funcp)execute_754, (funcp)execute_755, (funcp)execute_756, (funcp)execute_757, (funcp)execute_758, (funcp)execute_759, (funcp)execute_760, (funcp)execute_761, (funcp)execute_762, (funcp)execute_763, (funcp)execute_764, (funcp)execute_765, (funcp)execute_766, (funcp)execute_767, (funcp)execute_768, (funcp)execute_769, (funcp)execute_770, (funcp)execute_771, (funcp)execute_772, (funcp)execute_773, (funcp)execute_774, (funcp)execute_775, (funcp)execute_776, (funcp)execute_777, (funcp)execute_778, (funcp)execute_779, (funcp)execute_780, (funcp)execute_781, (funcp)execute_782, (funcp)execute_783, (funcp)execute_784, (funcp)execute_785, (funcp)execute_786, (funcp)execute_787, (funcp)execute_788, (funcp)execute_5, (funcp)execute_714, (funcp)execute_7, (funcp)execute_8, (funcp)execute_715, (funcp)execute_10, (funcp)execute_11, (funcp)execute_12, (funcp)execute_716, (funcp)execute_596, (funcp)execute_597, (funcp)execute_598, (funcp)execute_599, (funcp)execute_600, (funcp)execute_601, (funcp)execute_602, (funcp)execute_70, (funcp)execute_115, (funcp)execute_124, (funcp)execute_161, (funcp)execute_170, (funcp)execute_179, (funcp)execute_208, (funcp)execute_217, (funcp)execute_226, (funcp)execute_235, (funcp)execute_264, (funcp)execute_273, (funcp)execute_282, (funcp)execute_319, (funcp)execute_328, (funcp)execute_373, (funcp)execute_379, (funcp)execute_381, (funcp)execute_383, (funcp)execute_385, (funcp)execute_389, (funcp)execute_391, (funcp)execute_393, (funcp)execute_395, (funcp)execute_399, (funcp)execute_401, (funcp)execute_403, (funcp)execute_405, (funcp)execute_409, (funcp)execute_411, (funcp)execute_413, (funcp)execute_415, (funcp)execute_420, (funcp)execute_422, (funcp)execute_424, (funcp)execute_426, (funcp)execute_430, (funcp)execute_432, (funcp)execute_434, (funcp)execute_436, (funcp)execute_440, (funcp)execute_442, (funcp)execute_444, (funcp)execute_446, (funcp)execute_450, (funcp)execute_452, (funcp)execute_454, (funcp)execute_456, (funcp)execute_466, (funcp)execute_467, (funcp)execute_59, (funcp)execute_60, (funcp)execute_61, (funcp)execute_608, (funcp)execute_723, (funcp)execute_610, (funcp)execute_611, (funcp)execute_724, (funcp)execute_613, (funcp)execute_614, (funcp)execute_615, (funcp)execute_725, (funcp)execute_617, (funcp)execute_618, (funcp)execute_619, (funcp)execute_620, (funcp)execute_726, (funcp)execute_634, (funcp)execute_635, (funcp)execute_636, (funcp)execute_637, (funcp)execute_638, (funcp)execute_730, (funcp)execute_655, (funcp)execute_656, (funcp)execute_657, (funcp)execute_658, (funcp)execute_659, (funcp)execute_660, (funcp)execute_734, (funcp)execute_680, (funcp)execute_681, (funcp)execute_682, (funcp)execute_683, (funcp)execute_684, (funcp)execute_685, (funcp)execute_686, (funcp)execute_738, (funcp)execute_710, (funcp)execute_711, (funcp)execute_712, (funcp)execute_789, (funcp)execute_790, (funcp)execute_791, (funcp)execute_792, (funcp)execute_793, (funcp)transaction_4, (funcp)transaction_5, (funcp)transaction_6, (funcp)transaction_7, (funcp)transaction_8, (funcp)transaction_9, (funcp)transaction_12, (funcp)transaction_13, (funcp)transaction_14, (funcp)transaction_18, (funcp)transaction_20, (funcp)transaction_25, (funcp)transaction_26, (funcp)transaction_27, (funcp)transaction_29, (funcp)transaction_30, (funcp)transaction_31, (funcp)transaction_33, (funcp)transaction_34, (funcp)transaction_35, (funcp)transaction_37, (funcp)transaction_38, (funcp)transaction_39, (funcp)transaction_41, (funcp)transaction_42, (funcp)transaction_43, (funcp)transaction_45, (funcp)transaction_46, (funcp)transaction_47, (funcp)transaction_49, (funcp)vhdl_transfunc_eventcallback, (funcp)transaction_127, (funcp)transaction_128, (funcp)transaction_129, (funcp)transaction_131, (funcp)transaction_132, (funcp)transaction_133, (funcp)transaction_135, (funcp)transaction_136, (funcp)transaction_137, (funcp)transaction_139, (funcp)transaction_140, (funcp)transaction_141, (funcp)transaction_143, (funcp)transaction_144, (funcp)vlog_transfunc_eventcallback, (funcp)transaction_147, (funcp)transaction_148, (funcp)transaction_151, (funcp)transaction_152, (funcp)transaction_155, (funcp)transaction_156, (funcp)transaction_157, (funcp)transaction_159, (funcp)transaction_160, (funcp)transaction_163, (funcp)transaction_164, (funcp)transaction_167, (funcp)transaction_168, (funcp)transaction_171, (funcp)transaction_172, (funcp)transaction_173, (funcp)transaction_175, (funcp)transaction_176, (funcp)transaction_179, (funcp)transaction_180, (funcp)transaction_183, (funcp)transaction_184, (funcp)transaction_187, (funcp)transaction_188, (funcp)transaction_189, (funcp)transaction_0, (funcp)transaction_1, (funcp)transaction_2, (funcp)transaction_3, (funcp)transaction_10, (funcp)transaction_11, (funcp)transaction_15, (funcp)transaction_16, (funcp)transaction_17, (funcp)transaction_19, (funcp)transaction_21, (funcp)transaction_22, (funcp)transaction_23, (funcp)transaction_24, (funcp)transaction_28, (funcp)transaction_32, (funcp)transaction_36, (funcp)transaction_40, (funcp)transaction_44, (funcp)transaction_48, (funcp)transaction_130, (funcp)transaction_134, (funcp)transaction_138, (funcp)transaction_142, (funcp)transaction_146, (funcp)transaction_150, (funcp)transaction_154, (funcp)transaction_158, (funcp)transaction_162, (funcp)transaction_166, (funcp)transaction_170, (funcp)transaction_174, (funcp)transaction_178, (funcp)transaction_182, (funcp)transaction_186, (funcp)transaction_190, (funcp)transaction_191, (funcp)transaction_192};
const int NumRelocateId= 305;

void relocate(char *dp)
{
	iki_relocate(dp, "xsim.dir/dut_tb_behav/xsim.reloc",  (void **)funcTab, 305);
	iki_vhdl_file_variable_register(dp + 52064);
	iki_vhdl_file_variable_register(dp + 52120);


	/*Populate the transaction function pointer field in the whole net structure */
}

void sensitize(char *dp)
{
	iki_sensitize(dp, "xsim.dir/dut_tb_behav/xsim.reloc");
}

void simulate(char *dp)
{
		iki_schedule_processes_at_time_zero(dp, "xsim.dir/dut_tb_behav/xsim.reloc");
	// Initialize Verilog nets in mixed simulation, for the cases when the value at time 0 should be propagated from the mixed language Vhdl net

	iki_vlog_schedule_transaction_signal_fast_vhdl_value_time_0(dp + 81960, dp + 53960, 0, 3, 0, 3, 4, 1);

	iki_vlog_schedule_transaction_signal_fast_vhdl_value_time_0(dp + 82000, dp + 54016, 0, 1, 0, 1, 2, 1);

	iki_vlog_schedule_transaction_signal_fast_vhdl_value_time_0(dp + 82040, dp + 54072, 0, 1, 0, 1, 2, 1);

	iki_vlog_schedule_transaction_signal_fast_vhdl_value_time_0(dp + 82080, dp + 54128, 0, 3, 0, 3, 4, 1);

	iki_vlog_schedule_transaction_signal_fast_vhdl_value_time_0(dp + 82200, dp + 54408, 0, 255, 0, 255, 256, 1);

	iki_vlog_schedule_transaction_signal_fast_vhdl_value_time_0(dp + 82240, dp + 54744, 0, 15, 0, 15, 16, 1);
	iki_execute_processes();

	// Schedule resolution functions for the multiply driven Verilog nets that have strength
	// Schedule transaction functions for the singly driven Verilog nets that have strength

}
#include "iki_bridge.h"
void relocate(char *);

void sensitize(char *);

void simulate(char *);

extern SYSTEMCLIB_IMP_DLLSPEC void local_register_implicit_channel(int, char*);
extern void implicit_HDL_SCinstatiate();

extern SYSTEMCLIB_IMP_DLLSPEC int xsim_argc_copy ;
extern SYSTEMCLIB_IMP_DLLSPEC char** xsim_argv_copy ;

int main(int argc, char **argv)
{
    iki_heap_initialize("ms", "isimmm", 0, 2147483648) ;
    iki_set_sv_type_file_path_name("xsim.dir/dut_tb_behav/xsim.svtype");
    iki_set_crvs_dump_file_path_name("xsim.dir/dut_tb_behav/xsim.crvsdump");
    void* design_handle = iki_create_design("xsim.dir/dut_tb_behav/xsim.mem", (void *)relocate, (void *)sensitize, (void *)simulate, 0, isimBridge_getWdbWriter(), 0, argc, argv);
     iki_set_rc_trial_count(100);
    (void) design_handle;
    return iki_simulate_design();
}
