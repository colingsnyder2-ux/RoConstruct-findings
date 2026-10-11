// from server: 73% by tester
// roc 2008-06 005f9750  unit: UString_sink::?$stream_buffer  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005f9750
//
// 005f9750  8b414c               mov eax, dword ptr [ecx + 0x4c]
// 005f9753  8b5110               mov edx, dword ptr [ecx + 0x10]
// 005f9756  8902                 mov dword ptr [edx], eax
// 005f9758  8b5120               mov edx, dword ptr [ecx + 0x20]
// 005f975b  8902                 mov dword ptr [edx], eax
// 005f975d  8bd0                 mov edx, eax
// 005f975f  2bd0                 sub edx, eax
// 005f9761  8b4130               mov eax, dword ptr [ecx + 0x30]
// 005f9764  8910                 mov dword ptr [eax], edx
// 005f9766  c3                   ret 

struct UString_sink_stream_buffer {
    char pad0[0x10];
    int* m_p10;
    char pad14[0x0c];
    int* m_p20;
    char pad24[0x0c];
    int* m_p30;
    char pad34[0x18];
    int m_4c;
    void f();
};

void UString_sink_stream_buffer::f()
{
    int v = m_4c;
    *m_p10 = v;
    *m_p20 = v;
    *m_p30 = v - v;
}
