// from server: 26% by colin
// roc 2007-08 00550590  unit: std::D::V?$allocator::V?$basic_gzip_decompressor::?$stream_buffer  size: 86 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00550590
//
// 00550590  55                   push ebp
// 00550591  8bec                 mov ebp, esp
// 00550593  6aff                 push -1
// 00550595  68c8297500           push 0x7529c8
// 0055059a  64a100000000         mov eax, dword ptr fs:[0]
// 005505a0  50                   push eax
// 005505a1  64892500000000       mov dword ptr fs:[0], esp
// 005505a8  83ec08               sub esp, 8
// 005505ab  53                   push ebx
// 005505ac  56                   push esi
// 005505ad  8bf1                 mov esi, ecx
// 005505af  57                   push edi
// 005505b0  8965f0               mov dword ptr [ebp - 0x10], esp
// 005505b3  8975ec               mov dword ptr [ebp - 0x14], esi
// 005505b6  c7066c7b7a00         mov dword ptr [esi], 0x7a7b6c
// 005505bc  b001                 mov al, 1
// 005505be  8486b0000000         test byte ptr [esi + 0xb0], al
// 005505c4  c745fc00000000       mov dword ptr [ebp - 4], 0
// 005505cb  8845fc               mov byte ptr [ebp - 4], al
// 005505ce  741f                 je 0x5505ef
// 005505d0  8b8eb0000000         mov ecx, dword ptr [esi + 0xb0]
// 005505d6  c1e904               shr ecx, 4
// 005505d9  84c8                 test al, cl
// 005505db  7412                 je 0x5505ef
// 005505dd  8bce                 mov ecx, esi
// 005505df  e80cffffff           call 0x5504f0
// 005505e4  eb09                 jmp 0x5505ef

struct S {
    char pad[0xb0];
    unsigned int flags;
    void f();
    void g();
};

void S::f()
{
    *(int*)this = 0x7a7b6c;
    unsigned char al = 1;
    if ((*(unsigned char*)((char*)this + 0xb0) & al) != 0) {
        unsigned int v = *(unsigned int*)((char*)this + 0xb0);
        v >>= 4;
        if ((al & (unsigned char)v) != 0) {
            g();
        }
    }
}
