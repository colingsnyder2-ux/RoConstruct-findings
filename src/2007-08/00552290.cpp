// from server: 39% by colin
// roc 2007-08 00552290  unit: std::D::V?$allocator::V?$basic_gzip_compressor::?$stream_buffer  size: 80 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00552290
//
// 00552290  55                   push ebp
// 00552291  8bec                 mov ebp, esp
// 00552293  6aff                 push -1
// 00552295  68e02b7500           push 0x752be0
// 0055229a  64a100000000         mov eax, dword ptr fs:[0]
// 005522a0  50                   push eax
// 005522a1  64892500000000       mov dword ptr fs:[0], esp
// 005522a8  51                   push ecx
// 005522a9  53                   push ebx
// 005522aa  56                   push esi
// 005522ab  57                   push edi
// 005522ac  8965f0               mov dword ptr [ebp - 0x10], esp
// 005522af  8bf1                 mov esi, ecx
// 005522b1  c745fc00000000       mov dword ptr [ebp - 4], 0
// 005522b8  e8d3fdffff           call 0x552090
// 005522bd  8b8e8c000000         mov ecx, dword ptr [esi + 0x8c]
// 005522c3  85c9                 test ecx, ecx
// 005522c5  7406                 je 0x5522cd
// 005522c7  ff1504e67700         call dword ptr [0x77e604]
// 005522cd  33c0                 xor eax, eax
// 005522cf  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 005522d2  64890d00000000       mov dword ptr fs:[0], ecx
// 005522d9  5f                   pop edi
// 005522da  5e                   pop esi
// 005522db  5b                   pop ebx
// 005522dc  8be5                 mov esp, ebp
// 005522de  5d                   pop ebp
// 005522df  c3                   ret 

struct basic_streambuf {
    int pubsync();
};

struct S {
    char pad[0x8c];
    basic_streambuf* p;
    void f1();
    int f();
};

int S::f() {
    f1();
    if (p) {
        p->pubsync();
    }
    return 0;
}
