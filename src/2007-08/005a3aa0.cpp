// from server: 61% by colin
// roc 2007-08 005a3aa0  unit: RBX::VTeams::?$BoundFuncDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005a3aa0
//
// 005a3aa0  8b442404             mov eax, dword ptr [esp + 4]
// 005a3aa4  83ec0c               sub esp, 0xc
// 005a3aa7  56                   push esi
// 005a3aa8  6a00                 push 0
// 005a3aaa  68b8828a00           push 0x8a82b8
// 005a3aaf  689c208800           push 0x88209c
// 005a3ab4  6a00                 push 0
// 005a3ab6  50                   push eax
// 005a3ab7  8bf1                 mov esi, ecx
// 005a3ab9  e878d20800           call 0x630d36
// 005a3abe  83c414               add esp, 0x14
// 005a3ac1  85c0                 test eax, eax
// 005a3ac3  751e                 jne 0x5a3ae3
// 005a3ac5  68046e7800           push 0x786e04
// 005a3aca  8d4c2408             lea ecx, [esp + 8]
// 005a3ace  ff1510e77700         call dword ptr [0x77e710]
// 005a3ad4  680c1e8400           push 0x841e0c
// 005a3ad9  8d4c2408             lea ecx, [esp + 8]
// 005a3add  51                   push ecx
// 005a3ade  e8bbd00800           call 0x630b9e
// 005a3ae3  8b542418             mov edx, dword ptr [esp + 0x18]
// 005a3ae7  83c204               add edx, 4
// 005a3aea  52                   push edx
// 005a3aeb  50                   push eax
// 005a3aec  8bce                 mov ecx, esi
// 005a3aee  e80dffffff           call 0x5a3a00
// 005a3af3  5e                   pop esi
// 005a3af4  83c40c               add esp, 0xc
// 005a3af7  c20800               ret 8

extern "C" int __cdecl func_00630d36(int, int, int, int, int);
extern "C" int __cdecl func_00630b9e(int, int);
extern "C" void __stdcall func_0077e710(int);
extern "C" void __cdecl func_005a3a00(int, int);

struct S {
    void func_005a3aa0(int, int);
};

void S::func_005a3aa0(int a, int b)
{
    int result = func_00630d36(a, 0, 0x88209c, 0x8a82b8, 0);
    if (result == 0) {
        func_0077e710(0x786e04);
        func_00630b9e(0x841e0c, 0);
    }
    func_005a3a00(result, b + 4);
}
