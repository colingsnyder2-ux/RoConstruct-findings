// roc 2009-06 0089d60a  unit: seg_00890000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0089d60a
//
// 0089d60a  b9a02ba500           mov ecx, 0xa52ba0
// 0089d60f  e9cad6f7ff           jmp 0x81acde
// auto-matched from its assembly shape

struct T_func_0089d60a { void m(); };
extern T_func_0089d60a G1_func_0089d60a;
void func_0089d60a()
{
    G1_func_0089d60a.m();
}
