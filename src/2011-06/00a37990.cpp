// roc 2011-06 00a37990  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a37990
//
// 00a37990  b90015cc00           mov ecx, 0xcc1500
// 00a37995  e9a6619dff           jmp 0x40db40
// auto-matched from its assembly shape

struct T_func_00a37990 { void m(); };
extern T_func_00a37990 G1_func_00a37990;
void func_00a37990()
{
    G1_func_00a37990.m();
}
