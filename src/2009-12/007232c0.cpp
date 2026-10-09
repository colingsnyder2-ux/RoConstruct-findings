// roc 2009-12 007232c0  unit: boost::iostreams::DUoutput::V?$basic_null_device::?$stream_buffer  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007232c0
//
// 007232c0  8b442404             mov eax, dword ptr [esp + 4]
// 007232c4  894144               mov dword ptr [ecx + 0x44], eax
// 007232c7  c20400               ret 4
// copied from an identical function in another client (function ?f@S_func_006140a0@ns_ROCX000068@@QAEXH@Z)

namespace ns_ROCX000068 {
struct S_func_006140a0 {
    char pad0[68];
    int m_x;
    void f(int a1);
};
void S_func_006140a0::f(int a1)
{
    m_x = (int)a1;
}
}
