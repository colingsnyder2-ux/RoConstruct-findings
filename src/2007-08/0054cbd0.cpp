// from server: 21% by colin
// roc 2007-08 0054cbd0  unit: std::D::V?$allocator::V?$zlib_decompressor_impl::?$symmetric_filter::Uimpl::?$sp_counted_impl_p  size: 80 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0054cbd0
//
// 0054cbd0  55                   push ebp
// 0054cbd1  8bec                 mov ebp, esp
// 0054cbd3  6aff                 push -1
// 0054cbd5  6838267500           push 0x752638
// 0054cbda  64a100000000         mov eax, dword ptr fs:[0]
// 0054cbe0  50                   push eax
// 0054cbe1  64892500000000       mov dword ptr fs:[0], esp
// 0054cbe8  83ec08               sub esp, 8
// 0054cbeb  53                   push ebx
// 0054cbec  56                   push esi
// 0054cbed  8bf1                 mov esi, ecx
// 0054cbef  57                   push edi
// 0054cbf0  8965f0               mov dword ptr [ebp - 0x10], esp
// 0054cbf3  8975ec               mov dword ptr [ebp - 0x14], esi
// 0054cbf6  c706fc797a00         mov dword ptr [esi], 0x7a79fc
// 0054cbfc  b001                 mov al, 1
// 0054cbfe  844658               test byte ptr [esi + 0x58], al
// 0054cc01  c745fc00000000       mov dword ptr [ebp - 4], 0
// 0054cc08  8845fc               mov byte ptr [ebp - 4], al
// 0054cc0b  741c                 je 0x54cc29
// 0054cc0d  8b4e58               mov ecx, dword ptr [esi + 0x58]
// 0054cc10  c1e904               shr ecx, 4
// 0054cc13  84c8                 test al, cl
// 0054cc15  7412                 je 0x54cc29
// 0054cc17  8bce                 mov ecx, esi
// 0054cc19  e832ffffff           call 0x54cb50
// 0054cc1e  eb09                 jmp 0x54cc29

struct S {
    char pad[0x58];
    unsigned int flags;
    void destroy();
    void func();
};

void S::func()
{
    *(unsigned int*)this = 0x7a79fc;
    if ((this->flags & 1) == 0) {
        if (((this->flags >> 4) & 1) != 0) {
            this->destroy();
        }
    }
}
