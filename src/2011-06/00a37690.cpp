// roc 2011-06 00a37690  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a37690
//
// 00a37690  b9803dcc00           mov ecx, 0xcc3d80
// 00a37695  e9a6649dff           jmp 0x40db40
// auto-matched from its assembly shape

struct T_func_00a37690 { void m(); };
extern T_func_00a37690 G1_func_00a37690;
void func_00a37690()
{
    G1_func_00a37690.m();
}
