// roc 2008-06 005f5ea0  unit: boost::iostreams::DUoutput::V?$basic_null_device::?$stream_buffer  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005f5ea0
//
// 005f5ea0  8d4140               lea eax, [ecx + 0x40]
// 005f5ea3  c3                   ret 
// auto-matched from its assembly shape

struct S_func_005f5ea0 {
    char pad0[64];
    int m_x;
    int* f();
};
int* S_func_005f5ea0::f()
{
    return &m_x;
}
