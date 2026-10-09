// from server: 31% by colin
// roc 2007-08 00551980  unit: std::D::V?$allocator::V?$basic_gzip_decompressor::?$stream_buffer  size: 86 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00551980
//
// 00551980  55                   push ebp
// 00551981  8bec                 mov ebp, esp
// 00551983  6aff                 push -1
// 00551985  68082b7500           push 0x752b08
// 0055198a  64a100000000         mov eax, dword ptr fs:[0]
// 00551990  50                   push eax
// 00551991  64892500000000       mov dword ptr fs:[0], esp
// 00551998  83ec08               sub esp, 8
// 0055199b  53                   push ebx
// 0055199c  56                   push esi
// 0055199d  8bf1                 mov esi, ecx
// 0055199f  57                   push edi
// 005519a0  8965f0               mov dword ptr [ebp - 0x10], esp
// 005519a3  8975ec               mov dword ptr [ebp - 0x14], esi
// 005519a6  c706447c7a00         mov dword ptr [esi], 0x7a7c44
// 005519ac  b001                 mov al, 1
// 005519ae  84869c000000         test byte ptr [esi + 0x9c], al
// 005519b4  c745fc00000000       mov dword ptr [ebp - 4], 0
// 005519bb  8845fc               mov byte ptr [ebp - 4], al
// 005519be  741f                 je 0x5519df
// 005519c0  8b8e9c000000         mov ecx, dword ptr [esi + 0x9c]
// 005519c6  c1e904               shr ecx, 4
// 005519c9  84c8                 test al, cl
// 005519cb  7412                 je 0x5519df
// 005519cd  8bce                 mov ecx, esi
// 005519cf  e80cffffff           call 0x5518e0
// 005519d4  eb09                 jmp 0x5519df

struct S {
    char pad[0x9c];
    unsigned int flags;
    S* f();
};

S* S::f()
{
    *(int*)this = 0x7a7c44;
    unsigned char al = 1;
    if ((*(unsigned char*)((char*)this + 0x9c) & al) != 0) {
        unsigned int v = *(unsigned int*)((char*)this + 0x9c);
        v >>= 4;
        if ((al & (unsigned char)v) != 0) {
            ((S*)this)->f();
        }
    }
    return this;
}
