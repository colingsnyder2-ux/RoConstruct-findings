// roc 2011-06 006e9950  unit: boost::iostreams::DUoutput::V?$basic_null_device::?$stream_buffer  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006e9950
//
// 006e9950  8d4140               lea eax, [ecx + 0x40]
// 006e9953  c3                   ret 
// auto-matched from its assembly shape

struct S_func_006e9950 {
    char pad0[64];
    int m_x;
    int* f();
};
int* S_func_006e9950::f()
{
    return &m_x;
}
