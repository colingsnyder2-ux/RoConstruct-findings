// roc 2009-06 0089ca30  unit: seg_00890000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0089ca30
//
// 0089ca30  b910f5a400           mov ecx, 0xa4f510
// 0089ca35  e9c651dbff           jmp 0x651c00
// auto-matched from its assembly shape

struct T_func_0089ca30 { void m(); };
extern T_func_0089ca30 G1_func_0089ca30;
void func_0089ca30()
{
    G1_func_0089ca30.m();
}
