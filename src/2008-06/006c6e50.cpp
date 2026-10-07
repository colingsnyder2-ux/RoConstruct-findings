// roc 2008-06 006c6e50  unit: CInstanceRecord::CNameItem  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006c6e50
//
// 006c6e50  8b442404             mov eax, dword ptr [esp + 4]
// 006c6e54  894138               mov dword ptr [ecx + 0x38], eax
// 006c6e57  c20400               ret 4
// auto-matched from its assembly shape

struct S_func_006c6e50 {
    char pad0[56];
    int m_x;
    void f(int a1);
};
void S_func_006c6e50::f(int a1)
{
    m_x = (int)a1;
}
