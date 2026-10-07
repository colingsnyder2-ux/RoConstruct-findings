// roc 2009-06 0089d61f  unit: seg_00890000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0089d61f
//
// 0089d61f  b9c82ba500           mov ecx, 0xa52bc8
// 0089d624  e934d9f7ff           jmp 0x81af5d
// auto-matched from its assembly shape

struct T_func_0089d61f { void m(); };
extern T_func_0089d61f G1_func_0089d61f;
void func_0089d61f()
{
    G1_func_0089d61f.m();
}
