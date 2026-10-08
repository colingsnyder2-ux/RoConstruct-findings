// from server: 85% by colin
// roc 2007-08 0054f590  unit: std::D::V?$allocator::V?$basic_gzip_compressor::?$stream_buffer  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0054f590
//
// 0054f590  56                   push esi
// 0054f591  57                   push edi
// 0054f592  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0054f596  33f6                 xor esi, esi
// 0054f598  eb06                 jmp 0x54f5a0
// 0054f59a  8d9b00000000         lea ebx, [ebx]
// 0054f5a0  8b0f                 mov ecx, dword ptr [edi]
// 0054f5a2  b801000000           mov eax, 1
// 0054f5a7  2bc6                 sub eax, esi
// 0054f5a9  50                   push eax
// 0054f5aa  8d543414             lea edx, [esp + esi + 0x14]
// 0054f5ae  52                   push edx
// 0054f5af  ff1500e67700         call dword ptr [0x77e600]
// 0054f5b5  03f0                 add esi, eax
// 0054f5b7  83fe01               cmp esi, 1
// 0054f5ba  7ce4                 jl 0x54f5a0
// 0054f5bc  33c0                 xor eax, eax
// 0054f5be  83fe01               cmp esi, 1
// 0054f5c1  5f                   pop edi
// 0054f5c2  0f94c0               sete al
// 0054f5c5  5e                   pop esi
// 0054f5c6  c3                   ret 

extern "C" int __stdcall sputn_impl(void*, const char*, int);

struct S {
    int f(char*);
};

int S::f(char* p) {
    int n = 0;
    while (n < 1) {
        int r = sputn_impl(*(void**)p, p + 0x10 + n, 1 - n);
        n += r;
    }
    return n == 1;
}
