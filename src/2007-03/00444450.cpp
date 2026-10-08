// roc 2007-03 00444450  unit: seg_00440000  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00444450
//
// 00444450  d981f8000000         fld dword ptr [ecx + 0xf8]
// 00444456  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00444450 {
    char pad[248];
    float m_x;
    float f();
};
float S_func_00444450::f()
{
    return m_x;
}
