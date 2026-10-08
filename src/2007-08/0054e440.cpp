// from server: 76% by colin
// roc 2007-08 0054e440  unit: std::D::V?$allocator::V?$basic_gzip_decompressor::?$stream_buffer  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0054e440
//
// 0054e440  8b81a4000000         mov eax, dword ptr [ecx + 0xa4]
// 0054e446  8b5110               mov edx, dword ptr [ecx + 0x10]
// 0054e449  8902                 mov dword ptr [edx], eax
// 0054e44b  8b5120               mov edx, dword ptr [ecx + 0x20]
// 0054e44e  8902                 mov dword ptr [edx], eax
// 0054e450  8bd0                 mov edx, eax
// 0054e452  2bd0                 sub edx, eax
// 0054e454  8b4130               mov eax, dword ptr [ecx + 0x30]
// 0054e457  8910                 mov dword ptr [eax], edx
// 0054e459  c3                   ret 

struct S {
    char pad0[0x10];
    int* p10;
    char pad1[0x0c];
    int* p20;
    char pad2[0x0c];
    int* p30;
    char pad3[0x70];
    int v_a4;
    void f();
};

void S::f()
{
    int v = v_a4;
    *p10 = v;
    *p20 = v;
    *p30 = v - v;
}
