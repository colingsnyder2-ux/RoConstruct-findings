// roc 2009-06 00896600  unit: seg_00890000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00896600
//
// 00896600  b96816a400           mov ecx, 0xa41668
// 00896605  e9a689c8ff           jmp 0x51efb0
// auto-matched from its assembly shape

struct T_func_00896600 { void m(); };
extern T_func_00896600 G1_func_00896600;
void func_00896600()
{
    G1_func_00896600.m();
}
