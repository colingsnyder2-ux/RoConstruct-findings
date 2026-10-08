// from server: 76% by colin
// roc 2007-08 00552300  unit: std::D::V?$allocator::V?$basic_gzip_compressor::?$stream_buffer  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00552300
//
// 00552300  8b8190000000         mov eax, dword ptr [ecx + 0x90]
// 00552306  8b5110               mov edx, dword ptr [ecx + 0x10]
// 00552309  8902                 mov dword ptr [edx], eax
// 0055230b  8b5120               mov edx, dword ptr [ecx + 0x20]
// 0055230e  8902                 mov dword ptr [edx], eax
// 00552310  8bd0                 mov edx, eax
// 00552312  2bd0                 sub edx, eax
// 00552314  8b4130               mov eax, dword ptr [ecx + 0x30]
// 00552317  8910                 mov dword ptr [eax], edx
// 00552319  c3                   ret 

struct S {
    char pad0[0x10];
    int* p10;
    char pad1[0x0c];
    int* p20;
    char pad2[0x0c];
    int* p30;
    char pad3[0x5c];
    int v90;
    void f();
};

void S::f() {
    int v = v90;
    *p10 = v;
    *p20 = v;
    *p30 = v - v;
}
