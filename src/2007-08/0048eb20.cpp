// from server: 79% by colin
// roc 2007-08 0048eb20  unit: RBX::Network::VPlayer::?$FactoryProduct  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0048eb20
//
// 0048eb20  8b442404             mov eax, dword ptr [esp + 4]
// 0048eb24  83ec0c               sub esp, 0xc
// 0048eb27  6a00                 push 0
// 0048eb29  68c8e18800           push 0x88e1c8
// 0048eb2e  689c208800           push 0x88209c
// 0048eb33  6a00                 push 0
// 0048eb35  50                   push eax
// 0048eb36  e8fb211a00           call 0x630d36
// 0048eb3b  83c414               add esp, 0x14
// 0048eb3e  85c0                 test eax, eax
// 0048eb40  751e                 jne 0x48eb60
// 0048eb42  68046e7800           push 0x786e04
// 0048eb47  8d4c2404             lea ecx, [esp + 4]
// 0048eb4b  ff1510e77700         call dword ptr [0x77e710]
// 0048eb51  680c1e8400           push 0x841e0c
// 0048eb56  8d4c2404             lea ecx, [esp + 4]
// 0048eb5a  51                   push ecx
// 0048eb5b  e83e201a00           call 0x630b9e
// 0048eb60  83c40c               add esp, 0xc
// 0048eb63  c3                   ret 

struct RBX_DescribedBase {
    void* vftable;
};

struct RBX_Network_Player {
    void* vftable;
};

extern "C" void* __cdecl sub_630d36(void* a, void* b, void* c, void* d, void* e);
extern "C" void __cdecl sub_630b9e(void* a, void* b);
extern "C" void* __stdcall sub_77e710(void* a);

extern void* dword_88209C;
extern void* dword_88E1C8;
extern void* dword_786E04;
extern void* dword_841E0C;

void __cdecl sub_48EB20(void* arg)
{
    void* p = sub_630d36(arg, 0, &dword_88209C, &dword_88E1C8, 0);
    if (p == 0)
    {
        sub_77e710(&dword_786E04);
        sub_630b9e(&dword_841E0C, &dword_786E04);
    }
}
