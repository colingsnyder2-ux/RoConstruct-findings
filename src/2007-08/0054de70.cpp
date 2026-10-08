// roc 2007-08 0054de70  unit: boost::iostreams::DUoutput::V?$basic_null_device::?$stream_buffer  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0054de70
//
// 0054de70  8d4140               lea eax, [ecx + 0x40]
// 0054de73  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0054de70 {
    char pad0[64];
    int m_x;
    int* f();
};
int* S_func_0054de70::f()
{
    return &m_x;
}
