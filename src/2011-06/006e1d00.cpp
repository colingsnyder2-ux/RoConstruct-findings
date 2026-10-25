// from server: 100% by tester
// roc 2011-06 006e1d00  unit: UString_sink::?$stream_buffer  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006e1d00
//
// 006e1d00  8b4158               mov eax, dword ptr [ecx + 0x58]
// 006e1d03  c1e802               shr eax, 2
// 006e1d06  83e001               and eax, 1
// 006e1d09  c3                   ret 

struct S_func_00613350 {
    char pad0[0x58];
    unsigned int m_field54;
    int f();
};

int S_func_00613350::f()
{
    return (m_field54 >> 2) & 1;
}