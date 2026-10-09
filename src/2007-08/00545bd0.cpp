// from server: 50% by colin
// roc 2007-08 00545bd0  unit: RBX::MD5HasherImpl  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00545bd0
//
// 00545bd0  6aff                 push -1
// 00545bd2  68416e7500           push 0x756e41
// 00545bd7  64a100000000         mov eax, dword ptr fs:[0]
// 00545bdd  50                   push eax
// 00545bde  64892500000000       mov dword ptr fs:[0], esp
// 00545be5  51                   push ecx
// 00545be6  56                   push esi
// 00545be7  8b742418             mov esi, dword ptr [esp + 0x18]
// 00545beb  89742418             mov dword ptr [esp + 0x18], esi
// 00545bef  89742404             mov dword ptr [esp + 4], esi
// 00545bf3  85f6                 test esi, esi
// 00545bf5  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00545bfd  741b                 je 0x545c1a
// 00545bff  57                   push edi
// 00545c00  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 00545c04  57                   push edi
// 00545c05  8bce                 mov ecx, esi
// 00545c07  ff159ce67700         call dword ptr [0x77e69c]
// 00545c0d  8b4720               mov eax, dword ptr [edi + 0x20]
// 00545c10  894620               mov dword ptr [esi + 0x20], eax
// 00545c13  8b4f24               mov ecx, dword ptr [edi + 0x24]
// 00545c16  894e24               mov dword ptr [esi + 0x24], ecx
// 00545c19  5f                   pop edi
// 00545c1a  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00545c1e  5e                   pop esi
// 00545c1f  64890d00000000       mov dword ptr fs:[0], ecx
// 00545c26  83c410               add esp, 0x10
// 00545c29  c3                   ret 

struct MD5HasherImpl {
    char pad[0x20];
    int field20;
    int field24;
};

extern "C" void* __stdcall basic_string_copy_ctor(void*, const void*);

MD5HasherImpl* __stdcall construct(MD5HasherImpl* self, MD5HasherImpl* other)
{
    if (self != 0) {
        basic_string_copy_ctor(self, other);
        self->field20 = other->field20;
        self->field24 = other->field24;
    }
    return self;
}
