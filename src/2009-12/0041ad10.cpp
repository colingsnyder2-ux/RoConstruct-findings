// roc 2009-12 0041ad10  unit: CInstanceRecord::CNameItem  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0041ad10
//
// 0041ad10  8b442404             mov eax, dword ptr [esp + 4]
// 0041ad14  894168               mov dword ptr [ecx + 0x68], eax
// 0041ad17  c20400               ret 4
// copied from an identical function in another client (function ?f@S_func_0041a8d0@ns_ROCX000039@@QAEXH@Z)

namespace ns_ROCX000039 {
struct S_func_0041a8d0 {
    char pad0[104];
    int m_x;
    void f(int a1);
};
void S_func_0041a8d0::f(int a1)
{
    m_x = (int)a1;
}
}
