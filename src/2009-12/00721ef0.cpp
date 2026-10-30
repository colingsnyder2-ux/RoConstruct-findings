// roc 2009-12 00721ef0  unit: boost::iostreams::DUoutput::V?$basic_null_device::?$stream_buffer  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00721ef0
//
// 00721ef0  8b4154               mov eax, dword ptr [ecx + 0x54]
// 00721ef3  c1e802               shr eax, 2
// 00721ef6  83e001               and eax, 1
// 00721ef9  c3                   ret 
// copied from an identical function in another client (function ?f@S_func_00613350@ns_ROCX00000a@@QAEHXZ)

namespace ns_ROCX00000a {
// from server: 100% by why2
struct S_func_00613350 {
    char pad0[0x54];
    unsigned int m_field54;
    int f();
};

int S_func_00613350::f()
{
    return (m_field54 >> 2) & 1;
}
}
