// roc 2010-06 006a88f0  unit: VWiniInetRequest_source::?$stream_buffer  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006a88f0
//
// 006a88f0  8b442404             mov eax, dword ptr [esp + 4]
// 006a88f4  89414c               mov dword ptr [ecx + 0x4c], eax
// 006a88f7  c20400               ret 4
// auto-matched from its assembly shape

struct S_func_006a88f0 {
    char pad0[76];
    int m_x;
    void f(int a1);
};
void S_func_006a88f0::f(int a1)
{
    m_x = (int)a1;
}
