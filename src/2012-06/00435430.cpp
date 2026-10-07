// roc 2012-06 00435430  unit: CXTPToolBar::CControlButtonExpand  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00435430
//
// 00435430  8b8178010000         mov eax, dword ptr [ecx + 0x178]
// 00435436  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00435430 {
    char pad0[376];
    int m_x;
    int f();
};
int S_func_00435430::f()
{
    return m_x;
}
