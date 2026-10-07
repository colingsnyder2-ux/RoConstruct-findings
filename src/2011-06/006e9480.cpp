// roc 2011-06 006e9480  unit: VWiniInetRequest_source::?$stream_buffer  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006e9480
//
// 006e9480  8b442404             mov eax, dword ptr [esp + 4]
// 006e9484  89414c               mov dword ptr [ecx + 0x4c], eax
// 006e9487  c20400               ret 4
// auto-matched from its assembly shape

struct S_func_006e9480 {
    char pad0[76];
    int m_x;
    void f(int a1);
};
void S_func_006e9480::f(int a1)
{
    m_x = (int)a1;
}
