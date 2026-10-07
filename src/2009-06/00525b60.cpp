// roc 2009-06 00525b60  unit: RBX::ViewRbxGfx  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00525b60
//
// 00525b60  8b4114               mov eax, dword ptr [ecx + 0x14]
// 00525b63  8b800c020000         mov eax, dword ptr [eax + 0x20c]
// 00525b69  c3                   ret 
// auto-matched from its assembly shape

struct I_func_00525b60 {
    char pad[524];
    int m_x;
};
struct S_func_00525b60 {
    char pad[20];
    I_func_00525b60* m_p;
    int f();
};
int S_func_00525b60::f()
{
    return m_p->m_x;
}
