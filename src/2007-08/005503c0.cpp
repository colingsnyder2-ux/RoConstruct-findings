// from server: 22% by colin
// roc 2007-08 005503c0  unit: std::D::V?$allocator::V?$basic_gzip_decompressor::?$stream_buffer  size: 80 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005503c0
//
// 005503c0  55                   push ebp
// 005503c1  8bec                 mov ebp, esp
// 005503c3  6aff                 push -1
// 005503c5  6878297500           push 0x752978
// 005503ca  64a100000000         mov eax, dword ptr fs:[0]
// 005503d0  50                   push eax
// 005503d1  64892500000000       mov dword ptr fs:[0], esp
// 005503d8  83ec08               sub esp, 8
// 005503db  53                   push ebx
// 005503dc  56                   push esi
// 005503dd  8bf1                 mov esi, ecx
// 005503df  57                   push edi
// 005503e0  8965f0               mov dword ptr [ebp - 0x10], esp
// 005503e3  8975ec               mov dword ptr [ebp - 0x14], esi
// 005503e6  c7060c7b7a00         mov dword ptr [esi], 0x7a7b0c
// 005503ec  b001                 mov al, 1
// 005503ee  84465c               test byte ptr [esi + 0x5c], al
// 005503f1  c745fc00000000       mov dword ptr [ebp - 4], 0
// 005503f8  8845fc               mov byte ptr [ebp - 4], al
// 005503fb  741c                 je 0x550419
// 005503fd  8b4e5c               mov ecx, dword ptr [esi + 0x5c]
// 00550400  c1e904               shr ecx, 4
// 00550403  84c8                 test al, cl
// 00550405  7412                 je 0x550419
// 00550407  8bce                 mov ecx, esi
// 00550409  e8f2feffff           call 0x550300
// 0055040e  eb09                 jmp 0x550419

struct S {
    char pad[0x5c];
    unsigned char flags;
    void f();
};

void S::f()
{
    *(int*)this = 0x7a7b0c;
    unsigned char al = 1;
    if ((*(unsigned char*)((char*)this + 0x5c) & al) != 0) {
        unsigned int v = *(unsigned int*)((char*)this + 0x5c);
        v >>= 4;
        if ((al & (unsigned char)v) != 0) {
            ((S*)this)->f();
        }
    }
}
