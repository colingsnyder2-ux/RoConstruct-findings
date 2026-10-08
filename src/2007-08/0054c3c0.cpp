// from server: 73% by colin
// roc 2007-08 0054c3c0  unit: UString_sink::?$stream_buffer  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0054c3c0
//
// 0054c3c0  8b414c               mov eax, dword ptr [ecx + 0x4c]
// 0054c3c3  8b5110               mov edx, dword ptr [ecx + 0x10]
// 0054c3c6  8902                 mov dword ptr [edx], eax
// 0054c3c8  8b5120               mov edx, dword ptr [ecx + 0x20]
// 0054c3cb  8902                 mov dword ptr [edx], eax
// 0054c3cd  8bd0                 mov edx, eax
// 0054c3cf  2bd0                 sub edx, eax
// 0054c3d1  8b4130               mov eax, dword ptr [ecx + 0x30]
// 0054c3d4  8910                 mov dword ptr [eax], edx
// 0054c3d6  c3                   ret 

struct UString_sink_stream_buffer
{
    char pad0[0x10];
    int* p10;
    char pad14[0x0c];
    int* p20;
    char pad24[0x0c];
    int* p30;
    char pad34[0x18];
    int v4c;
    void reset();
};

void UString_sink_stream_buffer::reset()
{
    int v = v4c;
    *p10 = v;
    *p20 = v;
    *p30 = v - v;
}
