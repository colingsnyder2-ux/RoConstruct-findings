// from server: 73% by colin
// roc 2007-08 00552070  unit: std::D::V?$allocator::U?$basic_zlib_decompressor::?$stream_buffer  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00552070
//
// 00552070  8b4150               mov eax, dword ptr [ecx + 0x50]
// 00552073  8b5110               mov edx, dword ptr [ecx + 0x10]
// 00552076  8902                 mov dword ptr [edx], eax
// 00552078  8b5120               mov edx, dword ptr [ecx + 0x20]
// 0055207b  8902                 mov dword ptr [edx], eax
// 0055207d  8bd0                 mov edx, eax
// 0055207f  2bd0                 sub edx, eax
// 00552081  8b4130               mov eax, dword ptr [ecx + 0x30]
// 00552084  8910                 mov dword ptr [eax], edx
// 00552086  c3                   ret 

struct S {
    char pad0[0x10];
    int* p10;
    char pad14[0x0C];
    int* p20;
    char pad24[0x0C];
    int* p30;
    char pad34[0x1C];
    int v50;
    void f();
};

void S::f()
{
    int v = v50;
    *p10 = v;
    *p20 = v;
    *p30 = v - v;
}
