// from server: 23% by colin
// roc 2007-08 00550300  unit: std::D::V?$allocator::V?$basic_gzip_decompressor::?$stream_buffer  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00550300
//
// 00550300  55                   push ebp
// 00550301  8bec                 mov ebp, esp
// 00550303  6aff                 push -1
// 00550305  6860297500           push 0x752960
// 0055030a  64a100000000         mov eax, dword ptr fs:[0]
// 00550310  50                   push eax
// 00550311  64892500000000       mov dword ptr fs:[0], esp
// 00550318  83ec08               sub esp, 8
// 0055031b  53                   push ebx
// 0055031c  56                   push esi
// 0055031d  8bf1                 mov esi, ecx
// 0055031f  8b06                 mov eax, dword ptr [esi]
// 00550321  8b503c               mov edx, dword ptr [eax + 0x3c]
// 00550324  57                   push edi
// 00550325  8965f0               mov dword ptr [ebp - 0x10], esp
// 00550328  33db                 xor ebx, ebx
// 0055032a  6a01                 push 1
// 0055032c  8975ec               mov dword ptr [ebp - 0x14], esi
// 0055032f  895dfc               mov dword ptr [ebp - 4], ebx
// 00550332  ffd2                 call edx
// 00550334  eb0b                 jmp 0x550341

struct S_00550300
{
    void f();
};

void S_00550300::f()
{
    void** vt = *(void***)this;
    void (*fn)(void*, int) = (void (*)(void*, int))vt[15];
    fn(this, 1);
}
