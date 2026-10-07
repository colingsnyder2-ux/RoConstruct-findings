// roc 2011-06 00a3aa20  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3aa20
//
// 00a3aa20  b98443c500           mov ecx, 0xc54384
// 00a3aa25  e9d66abaff           jmp 0x5e1500
// auto-matched from its assembly shape

struct T_func_00a3aa20 { void m(); };
extern T_func_00a3aa20 G1_func_00a3aa20;
void func_00a3aa20()
{
    G1_func_00a3aa20.m();
}
