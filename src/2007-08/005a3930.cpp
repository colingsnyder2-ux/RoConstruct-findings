// from server: 70% by colin
// roc 2007-08 005a3930  unit: RBX::VTeams::?$BoundFuncDesc  size: 84 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005a3930
//
// 005a3930  8b442404             mov eax, dword ptr [esp + 4]
// 005a3934  83ec0c               sub esp, 0xc
// 005a3937  56                   push esi
// 005a3938  6a00                 push 0
// 005a393a  68b8828a00           push 0x8a82b8
// 005a393f  689c208800           push 0x88209c
// 005a3944  6a00                 push 0
// 005a3946  50                   push eax
// 005a3947  8bf1                 mov esi, ecx
// 005a3949  e8e8d30800           call 0x630d36
// 005a394e  83c414               add esp, 0x14
// 005a3951  85c0                 test eax, eax
// 005a3953  751e                 jne 0x5a3973
// 005a3955  68046e7800           push 0x786e04
// 005a395a  8d4c2408             lea ecx, [esp + 8]
// 005a395e  ff1510e77700         call dword ptr [0x77e710]
// 005a3964  680c1e8400           push 0x841e0c
// 005a3969  8d4c2408             lea ecx, [esp + 8]
// 005a396d  51                   push ecx
// 005a396e  e82bd20800           call 0x630b9e
// 005a3973  8b4e2c               mov ecx, dword ptr [esi + 0x2c]
// 005a3976  8b5628               mov edx, dword ptr [esi + 0x28]
// 005a3979  03c8                 add ecx, eax
// 005a397b  ffd2                 call edx
// 005a397d  5e                   pop esi
// 005a397e  83c40c               add esp, 0xc
// 005a3981  c20800               ret 8

struct T_func_005a3930 {
    int m(int a, int b);
};

extern "C" int __cdecl func_00630d36(int, int, int, int, int);
extern "C" int __cdecl func_00630b9e(int, int);
extern "C" int __stdcall func_0077e710(int);
extern "C" int __stdcall func_00786e04();
extern "C" int __stdcall func_00841e0c();
extern "C" int __stdcall func_0088209c();
extern "C" int __stdcall func_008a82b8();

int T_func_005a3930::m(int a, int b)
{
    int r = func_00630d36(a, 0, (int)func_0088209c, (int)func_008a82b8, 0);
    if (r == 0) {
        func_0077e710((int)func_00786e04);
        func_00630b9e((int)func_00841e0c, 0);
    }
    int (*fn)(int) = (int (*)(int))*(int*)((char*)this + 0x28);
    int arg = *(int*)((char*)this + 0x2c) + r;
    return fn(arg);
}
