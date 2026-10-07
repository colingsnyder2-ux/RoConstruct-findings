// roc 2009-06 005f2f60  unit: RBX::BasicPartInstance  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005f2f60
//
// 005f2f60  8b8134020000         mov eax, dword ptr [ecx + 0x234]
// 005f2f66  c3                   ret 
// auto-matched from its assembly shape

struct S_func_005f2f60 {
    char pad0[564];
    int m_x;
    int f();
};
int S_func_005f2f60::f()
{
    return m_x;
}
