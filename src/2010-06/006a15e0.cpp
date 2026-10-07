// roc 2010-06 006a15e0  unit: boost::iostreams::DUoutput::V?$basic_null_device::?$stream_buffer  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006a15e0
//
// 006a15e0  8b442404             mov eax, dword ptr [esp + 4]
// 006a15e4  894144               mov dword ptr [ecx + 0x44], eax
// 006a15e7  c20400               ret 4
// auto-matched from its assembly shape

struct S_func_006a15e0 {
    char pad0[68];
    int m_x;
    void f(int a1);
};
void S_func_006a15e0::f(int a1)
{
    m_x = (int)a1;
}
