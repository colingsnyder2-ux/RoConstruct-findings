// roc 2008-06 005f3270  unit: boost::iostreams::DUoutput::V?$basic_null_device::?$stream_buffer  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005f3270
//
// 005f3270  8b442404             mov eax, dword ptr [esp + 4]
// 005f3274  894144               mov dword ptr [ecx + 0x44], eax
// 005f3277  c20400               ret 4
// auto-matched from its assembly shape

struct S_func_005f3270 {
    char pad0[68];
    int m_x;
    void f(int a1);
};
void S_func_005f3270::f(int a1)
{
    m_x = (int)a1;
}
