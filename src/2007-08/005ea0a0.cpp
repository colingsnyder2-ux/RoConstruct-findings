// from server: 64% by colin
// roc 2007-08 005ea0a0  unit: RBX::VFlagStand::?$FactoryProduct  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005ea0a0
//
// 005ea0a0  8b442408             mov eax, dword ptr [esp + 8]
// 005ea0a4  83f802               cmp eax, 2
// 005ea0a7  7519                 jne 0x5ea0c2
// 005ea0a9  56                   push esi
// 005ea0aa  8b742408             mov esi, dword ptr [esp + 8]
// 005ea0ae  56                   push esi
// 005ea0af  b9f8ef8a00           mov ecx, 0x8aeff8
// 005ea0b4  ff1508e77700         call dword ptr [0x77e708]
// 005ea0ba  f6d8                 neg al
// 005ea0bc  1bc0                 sbb eax, eax
// 005ea0be  23c6                 and eax, esi
// 005ea0c0  5e                   pop esi
// 005ea0c1  c3                   ret 
// 005ea0c2  8b542404             mov edx, dword ptr [esp + 4]
// 005ea0c6  c644240800           mov byte ptr [esp + 8], 0
// 005ea0cb  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005ea0cf  51                   push ecx
// 005ea0d0  50                   push eax
// 005ea0d1  52                   push edx
// 005ea0d2  e82985feff           call 0x5d2600
// 005ea0d7  83c40c               add esp, 0xc
// 005ea0da  c3                   ret 

struct type_info {
    bool __thiscall operator==(const type_info&) const;
};

extern "C" {
    bool __stdcall IsInstanceOfType(const type_info*, void*);
}

struct RBX_Instance {
    static type_info typeInfo;
};

struct RBX_FlagStand : RBX_Instance {
    static void* createInstance(int);
};

void* __cdecl sub_5D2600(void*, int, unsigned char);

void* __cdecl RBX_FlagStand_FactoryProduct(int arg0, int arg1, int arg2)
{
    if (arg1 == 2) {
        void* p = (void*)arg2;
        if (IsInstanceOfType(&RBX_Instance::typeInfo, p))
            return p;
        return 0;
    }
    unsigned char flag = 0;
    return sub_5D2600((void*)arg0, arg1, flag);
}
