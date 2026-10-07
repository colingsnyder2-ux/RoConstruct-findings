// roc 2009-06 0064afc0  unit: CPropGrid::UpdateItemsJob  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0064afc0
//
// 0064afc0  8b81c4010000         mov eax, dword ptr [ecx + 0x1c4]
// 0064afc6  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0064afc0 {
    char pad0[452];
    int m_x;
    int f();
};
int S_func_0064afc0::f()
{
    return m_x;
}
