// roc 2011-06 00653c00  unit: CPropGrid::UpdateItemsJob  size: 3 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00653c00
//
// 00653c00  8b01                 mov eax, dword ptr [ecx]
// 00653c02  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00653c00 {
    int m_x;
    int f();
};
int S_func_00653c00::f()
{
    return m_x;
}
