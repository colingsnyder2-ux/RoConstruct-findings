// roc 2011-06 006e2230  unit: boost::iostreams::DUoutput::V?$basic_null_device::?$stream_buffer  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006e2230
//
// 006e2230  8b442404             mov eax, dword ptr [esp + 4]
// 006e2234  894144               mov dword ptr [ecx + 0x44], eax
// 006e2237  c20400               ret 4
// auto-matched from its assembly shape

struct S_func_006e2230 {
    char pad0[68];
    int m_x;
    void f(int a1);
};
void S_func_006e2230::f(int a1)
{
    m_x = (int)a1;
}
