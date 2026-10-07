// roc 2010-06 008e3e10  unit: CInstanceRecord::CNameItem  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008e3e10
//
// 008e3e10  8b442404             mov eax, dword ptr [esp + 4]
// 008e3e14  894164               mov dword ptr [ecx + 0x64], eax
// 008e3e17  c20400               ret 4
// auto-matched from its assembly shape

struct S_func_008e3e10 {
    char pad0[100];
    int m_x;
    void f(int a1);
};
void S_func_008e3e10::f(int a1)
{
    m_x = (int)a1;
}
