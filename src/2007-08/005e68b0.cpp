// from server: 74% by colin
// roc 2007-08 005e68b0  unit: RBX::VFlag::?$FactoryProduct  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005e68b0
//
// 005e68b0  8b442408             mov eax, dword ptr [esp + 8]
// 005e68b4  83f802               cmp eax, 2
// 005e68b7  7519                 jne 0x5e68d2
// 005e68b9  56                   push esi
// 005e68ba  8b742408             mov esi, dword ptr [esp + 8]
// 005e68be  56                   push esi
// 005e68bf  b9f8e58a00           mov ecx, 0x8ae5f8
// 005e68c4  ff1508e77700         call dword ptr [0x77e708]
// 005e68ca  f6d8                 neg al
// 005e68cc  1bc0                 sbb eax, eax
// 005e68ce  23c6                 and eax, esi
// 005e68d0  5e                   pop esi
// 005e68d1  c3                   ret 
// 005e68d2  8b542404             mov edx, dword ptr [esp + 4]
// 005e68d6  c644240800           mov byte ptr [esp + 8], 0
// 005e68db  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005e68df  51                   push ecx
// 005e68e0  50                   push eax
// 005e68e1  52                   push edx
// 005e68e2  e829ffffff           call 0x5e6810
// 005e68e7  83c40c               add esp, 0xc
// 005e68ea  c3                   ret 

struct type_info {
    bool operator==(const type_info&) const;
};

struct VFlag {
    static type_info typeInfo;
};

struct FactoryProduct {
    void* create(int, int);
};

extern "C" void* __cdecl sub_5E6810(int, int, int);

void* FactoryProduct::create(int a, int b) {
    if (b == 2) {
        int v = a;
        if (VFlag::typeInfo == *(type_info*)0x8AE5F8) {
            return (void*)v;
        }
        return 0;
    }
    char tmp = 0;
    return sub_5E6810(a, b, *(int*)&tmp);
}
