// roc 2007-03 0040bcc0  unit: seg_00400000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0040bcc0
//
// 0040bcc0  8b442404             mov eax, dword ptr [esp + 4]
// 0040bcc4  894148               mov dword ptr [ecx + 0x48], eax
// 0040bcc7  c20400               ret 4
// auto-matched from its assembly shape

struct S_func_0040bcc0 {
    char pad0[72];
    int m_x;
    void f(int a1);
};
void S_func_0040bcc0::f(int a1)
{
    m_x = (int)a1;
}
