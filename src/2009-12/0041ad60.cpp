// roc 2009-12 0041ad60  unit: CInstanceRecord::CNameItem  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0041ad60
//
// 0041ad60  8b442404             mov eax, dword ptr [esp + 4]
// 0041ad64  894170               mov dword ptr [ecx + 0x70], eax
// 0041ad67  c20400               ret 4
// copied from an identical function in another client (function ?f@S_func_0041a920@ns_ROCX00003e@@QAEXH@Z)

namespace ns_ROCX00003e {
struct S_func_0041a920 {
    char pad0[112];
    int m_x;
    void f(int a1);
};
void S_func_0041a920::f(int a1)
{
    m_x = (int)a1;
}
}
