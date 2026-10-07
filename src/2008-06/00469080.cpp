// roc 2008-06 00469080  unit: DxUserInput  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00469080
//
// 00469080  8b415c               mov eax, dword ptr [ecx + 0x5c]
// 00469083  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00469080 {
    char pad0[92];
    int m_x;
    int f();
};
int S_func_00469080::f()
{
    return m_x;
}
