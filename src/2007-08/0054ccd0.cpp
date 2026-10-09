// from server: 22% by colin
// roc 2007-08 0054ccd0  unit: std::D::V?$allocator::V?$zlib_decompressor_impl::?$symmetric_filter::Uimpl::?$sp_counted_impl_p  size: 80 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0054ccd0
//
// 0054ccd0  55                   push ebp
// 0054ccd1  8bec                 mov ebp, esp
// 0054ccd3  6aff                 push -1
// 0054ccd5  6858267500           push 0x752658
// 0054ccda  64a100000000         mov eax, dword ptr fs:[0]
// 0054cce0  50                   push eax
// 0054cce1  64892500000000       mov dword ptr fs:[0], esp
// 0054cce8  83ec08               sub esp, 8
// 0054cceb  53                   push ebx
// 0054ccec  56                   push esi
// 0054cced  8bf1                 mov esi, ecx
// 0054ccef  57                   push edi
// 0054ccf0  8965f0               mov dword ptr [ebp - 0x10], esp
// 0054ccf3  8975ec               mov dword ptr [ebp - 0x14], esi
// 0054ccf6  c7065c7a7a00         mov dword ptr [esi], 0x7a7a5c
// 0054ccfc  b001                 mov al, 1
// 0054ccfe  844658               test byte ptr [esi + 0x58], al
// 0054cd01  c745fc00000000       mov dword ptr [ebp - 4], 0
// 0054cd08  8845fc               mov byte ptr [ebp - 4], al
// 0054cd0b  741c                 je 0x54cd29
// 0054cd0d  8b4e58               mov ecx, dword ptr [esi + 0x58]
// 0054cd10  c1e904               shr ecx, 4
// 0054cd13  84c8                 test al, cl
// 0054cd15  7412                 je 0x54cd29
// 0054cd17  8bce                 mov ecx, esi
// 0054cd19  e832feffff           call 0x54cb50
// 0054cd1e  eb09                 jmp 0x54cd29

struct S {
    void f();
};

void S::f()
{
    *(int*)this = 0x7a7a5c;
    unsigned char al = 1;
    if ((*(unsigned char*)((char*)this + 0x58) & al) != 0) {
        unsigned int ecx = *(unsigned int*)((char*)this + 0x58);
        ecx >>= 4;
        if ((al & (unsigned char)ecx) != 0) {
            ((S*)this)->f();
        }
    }
}
