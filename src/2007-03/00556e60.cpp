// roc 2007-03 00556e60  unit: seg_00550000  size: 5 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00556e60
//
// 00556e60  c6411400             mov byte ptr [ecx + 0x14], 0
// 00556e64  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00556e60 {
    char pad0[20];
    char m_x;
    void f();
};
void S_func_00556e60::f()
{
    m_x = (char)0;
}
