// from server: 100% by tester
// roc 2011-06 006e9450  unit: VWiniInetRequest_source::?$stream_buffer  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006e9450
//
// 006e9450  8b415c               mov eax, dword ptr [ecx + 0x5c]
// 006e9453  c1e802               shr eax, 2
// 006e9456  83e001               and eax, 1
// 006e9459  c3                   ret 

struct S_func_00613350 {
    char pad0[0x5c];
    unsigned int m_field54;
    int f();
};

int S_func_00613350::f()
{
    return (m_field54 >> 2) & 1;
}