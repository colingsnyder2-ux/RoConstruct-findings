// roc 2009-12 0041ad30  unit: CInstanceRecord::CNameItem  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0041ad30
//
// 0041ad30  8b442404             mov eax, dword ptr [esp + 4]
// 0041ad34  89416c               mov dword ptr [ecx + 0x6c], eax
// 0041ad37  c20400               ret 4
// copied from an identical function in another client (function ?f@S_func_0041a8f0@ns_ROCX00003b@@QAEXH@Z)

namespace ns_ROCX00003b {
struct S_func_0041a8f0 {
    char pad0[108];
    int m_x;
    void f(int a1);
};
void S_func_0041a8f0::f(int a1)
{
    m_x = (int)a1;
}
}
