// from server: 34% by colin
// roc 2007-08 00534a60  unit: RBX::Lua::VFunctionRef::?$holder  size: 100 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00534a60
//
// 00534a60  6aff                 push -1
// 00534a62  68f8b57500           push 0x75b5f8
// 00534a67  64a100000000         mov eax, dword ptr fs:[0]
// 00534a6d  50                   push eax
// 00534a6e  64892500000000       mov dword ptr fs:[0], esp
// 00534a75  51                   push ecx
// 00534a76  53                   push ebx
// 00534a77  56                   push esi
// 00534a78  57                   push edi
// 00534a79  8bf9                 mov edi, ecx
// 00534a7b  897c240c             mov dword ptr [esp + 0xc], edi
// 00534a7f  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 00534a83  8d7704               lea esi, [edi + 4]
// 00534a86  53                   push ebx
// 00534a87  8bce                 mov ecx, esi
// 00534a89  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 00534a91  c7074c577a00         mov dword ptr [edi], 0x7a574c
// 00534a97  e8344bfdff           call 0x5095d0
// 00534a9c  d94324               fld dword ptr [ebx + 0x24]
// 00534a9f  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00534aa3  d95e24               fstp dword ptr [esi + 0x24]
// 00534aa6  d94328               fld dword ptr [ebx + 0x28]
// 00534aa9  8bc7                 mov eax, edi
// 00534aab  d95e28               fstp dword ptr [esi + 0x28]
// 00534aae  5f                   pop edi
// 00534aaf  d9432c               fld dword ptr [ebx + 0x2c]
// 00534ab2  d95e2c               fstp dword ptr [esi + 0x2c]
// 00534ab5  5e                   pop esi
// 00534ab6  5b                   pop ebx
// 00534ab7  64890d00000000       mov dword ptr fs:[0], ecx
// 00534abe  83c410               add esp, 0x10
// 00534ac1  c20400               ret 4

struct VFunctionRefHolder {
    void* vtable;
    char pad[0x20];
    float f24;
    float f28;
    float f2c;
    void assign(const VFunctionRefHolder* other);
};

extern "C" void __stdcall sub_5095D0(void* dst, const void* src);

void VFunctionRefHolder::assign(const VFunctionRefHolder* other) {
    this->vtable = (void*)0x7a574c;
    sub_5095D0(&this->pad[0], other);
    this->f24 = other->f24;
    this->f28 = other->f28;
    this->f2c = other->f2c;
}
