// roc 2010-06 009e1040  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e1040
//
// 009e1040  b94066c100           mov ecx, 0xc16640
// 009e1045  e946cbbcff           jmp 0x5adb90
// auto-matched from its assembly shape

struct T_func_009e1040 { void m(); };
extern T_func_009e1040 G1_func_009e1040;
void func_009e1040()
{
    G1_func_009e1040.m();
}
