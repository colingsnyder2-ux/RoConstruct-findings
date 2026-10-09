// from server: 27% by colin
// roc 2007-08 00551d10  unit: std::D::V?$allocator::V?$basic_gzip_compressor::?$stream_buffer  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00551d10
//
// 00551d10  55                   push ebp
// 00551d11  8bec                 mov ebp, esp
// 00551d13  6aff                 push -1
// 00551d15  68682b7500           push 0x752b68
// 00551d1a  64a100000000         mov eax, dword ptr fs:[0]
// 00551d20  50                   push eax
// 00551d21  64892500000000       mov dword ptr fs:[0], esp
// 00551d28  83ec08               sub esp, 8
// 00551d2b  53                   push ebx
// 00551d2c  56                   push esi
// 00551d2d  57                   push edi
// 00551d2e  8bf1                 mov esi, ecx
// 00551d30  8965f0               mov dword ptr [ebp - 0x10], esp
// 00551d33  8975ec               mov dword ptr [ebp - 0x14], esi
// 00551d36  c745fc00000000       mov dword ptr [ebp - 4], 0
// 00551d3d  c645fc01             mov byte ptr [ebp - 4], 1
// 00551d41  e8caf6ffff           call 0x551410
// 00551d46  8bce                 mov ecx, esi
// 00551d48  e8139dffff           call 0x54ba60
// 00551d4d  eb09                 jmp 0x551d58

struct S {
    void m1();
    void m2();
    void f();
};

void S::f()
{
    m1();
    m2();
}
