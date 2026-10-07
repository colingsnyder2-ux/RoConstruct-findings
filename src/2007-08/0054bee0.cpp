// roc 2007-08 0054bee0  unit: boost::iostreams::DUoutput::V?$basic_null_device::?$stream_buffer  size: 10 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 0054bee0
//
// 0054bee0  8b442404             mov eax, dword ptr [esp + 4]
// 0054bee4  894144               mov dword ptr [ecx + 0x44], eax
// 0054bee7  c20400               ret 4
// auto-matched from its assembly shape

struct S_func_0054bee0 {
    char pad0[68];
    int m_x;
    void f(int a1);
};
void S_func_0054bee0::f(int a1)
{
    m_x = (int)a1;
}
