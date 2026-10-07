// roc 2008-06 004d7370  unit: RBX::ViewNew::ViewRbxGfx  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004d7370
//
// 004d7370  8b4114               mov eax, dword ptr [ecx + 0x14]
// 004d7373  8b8004020000         mov eax, dword ptr [eax + 0x204]
// 004d7379  c3                   ret 
// auto-matched from its assembly shape

struct I_func_004d7370 {
    char pad[516];
    int m_x;
};
struct S_func_004d7370 {
    char pad[20];
    I_func_004d7370* m_p;
    int f();
};
int S_func_004d7370::f()
{
    return m_p->m_x;
}
