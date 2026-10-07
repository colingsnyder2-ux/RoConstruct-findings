// roc 2009-06 00896640  unit: seg_00890000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00896640
//
// 00896640  b92018a400           mov ecx, 0xa41820
// 00896645  e9d68cc8ff           jmp 0x51f320
// auto-matched from its assembly shape

struct T_func_00896640 { void m(); };
extern T_func_00896640 G1_func_00896640;
void func_00896640()
{
    G1_func_00896640.m();
}
