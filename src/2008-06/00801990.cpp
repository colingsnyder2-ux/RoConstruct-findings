// roc 2008-06 00801990  unit: seg_00800000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00801990
//
// 00801990  b97cf39700           mov ecx, 0x97f37c
// 00801995  e996c8d0ff           jmp 0x50e230
// auto-matched from its assembly shape

struct T_func_00801990 { void m(); };
extern T_func_00801990 G1_func_00801990;
void func_00801990()
{
    G1_func_00801990.m();
}
