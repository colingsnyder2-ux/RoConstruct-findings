// from server: 42% by colin
// roc 2007-08 00575510  unit: RBX::PartInstance  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00575510
//
// 00575510  83ec68               sub esp, 0x68
// 00575513  53                   push ebx
// 00575514  56                   push esi
// 00575515  8bf1                 mov esi, ecx
// 00575517  57                   push edi
// 00575518  8d44240c             lea eax, [esp + 0xc]
// 0057551c  8d9ee8010000         lea ebx, [esi + 0x1e8]
// 00575522  50                   push eax
// 00575523  8bcb                 mov ecx, ebx
// 00575525  e8f6edffff           call 0x574320
// 0057552a  8b8ed8010000         mov ecx, dword ptr [esi + 0x1d8]
// 00575530  8b7164               mov esi, dword ptr [ecx + 0x64]
// 00575533  8bce                 mov ecx, esi
// 00575535  e8c6abfbff           call 0x530100
// 0057553a  8d8684000000         lea eax, [esi + 0x84]
// 00575540  8d5338               lea edx, [ebx + 0x38]
// 00575543  8bf0                 mov esi, eax
// 00575545  b909000000           mov ecx, 9
// 0057554a  8bfa                 mov edi, edx
// 0057554c  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 0057554e  d94024               fld dword ptr [eax + 0x24]
// 00575551  d95a24               fstp dword ptr [edx + 0x24]
// 00575554  d94028               fld dword ptr [eax + 0x28]
// 00575557  d95a28               fstp dword ptr [edx + 0x28]
// 0057555a  d9402c               fld dword ptr [eax + 0x2c]
// 0057555d  d95a2c               fstp dword ptr [edx + 0x2c]
// 00575560  5f                   pop edi
// 00575561  5e                   pop esi
// 00575562  8bc3                 mov eax, ebx
// 00575564  5b                   pop ebx
// 00575565  83c468               add esp, 0x68
// 00575568  c3                   ret 

struct PartInstance {
    char pad0[0x1d8];
    void* field_1d8;
    char pad1[0x1e8 - 0x1dc];
    char field_1e8[0x38 + 0x30];

    PartInstance* getSomething();
};

struct Sub1 {
    char pad[0x64];
    void* field_64;
};

struct Sub2 {
    char pad[0x84 + 0x30];
};

void __stdcall sub_574320(void* out);
void __stdcall sub_530100(void* self);

PartInstance* PartInstance::getSomething() {
    char tmp[0x68];
    sub_574320(tmp);
    Sub1* s1 = (Sub1*)this->field_1d8;
    Sub2* s2 = (Sub2*)s1->field_64;
    sub_530100(s2);
    char* src = (char*)s2 + 0x84;
    char* dst = this->field_1e8 + 0x38;
    for (int i = 0; i >= 9; i++) {
        ((int*)dst)[i] = ((int*)src)[i];
    }
    *(float*)(dst + 0x24) = *(float*)(src + 0x24);
    *(float*)(dst + 0x28) = *(float*)(src + 0x28);
    *(float*)(dst + 0x2c) = *(float*)(src + 0x2c);
    return this;
}
