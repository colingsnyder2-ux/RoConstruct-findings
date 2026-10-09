// from server: 57% by colin
// roc 2007-08 00592c30  unit: RBX::VVisit::?$BoundFuncDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00592c30
//
// 00592c30  8b442404             mov eax, dword ptr [esp + 4]
// 00592c34  83ec0c               sub esp, 0xc
// 00592c37  56                   push esi
// 00592c38  6a00                 push 0
// 00592c3a  68a0458a00           push 0x8a45a0
// 00592c3f  689c208800           push 0x88209c
// 00592c44  6a00                 push 0
// 00592c46  50                   push eax
// 00592c47  8bf1                 mov esi, ecx
// 00592c49  e8e8e00900           call 0x630d36
// 00592c4e  83c414               add esp, 0x14
// 00592c51  85c0                 test eax, eax
// 00592c53  751e                 jne 0x592c73
// 00592c55  68046e7800           push 0x786e04
// 00592c5a  8d4c2408             lea ecx, [esp + 8]
// 00592c5e  ff1510e77700         call dword ptr [0x77e710]
// 00592c64  680c1e8400           push 0x841e0c
// 00592c69  8d4c2408             lea ecx, [esp + 8]
// 00592c6d  51                   push ecx
// 00592c6e  e82bdf0900           call 0x630b9e
// 00592c73  8b542418             mov edx, dword ptr [esp + 0x18]
// 00592c77  83c204               add edx, 4
// 00592c7a  52                   push edx
// 00592c7b  50                   push eax
// 00592c7c  8bce                 mov ecx, esi
// 00592c7e  e81dffffff           call 0x592ba0
// 00592c83  5e                   pop esi
// 00592c84  83c40c               add esp, 0xc
// 00592c87  c20800               ret 8

struct S_func_00592c30 {
    void f(int a1, int a2);
};

extern "C" int __cdecl func_00630d36(int, int, int, int, int);
extern "C" void __cdecl func_00630b9e(void*, void*);
extern "C" void __stdcall func_0077e710(void*);
extern "C" void __cdecl func_00592ba0(void*, int, int);

void S_func_00592c30::f(int a1, int a2)
{
    int result = func_00630d36(a1, 0, 0x88209c, 0x8a45a0, 0);
    if (result == 0) {
        char buf[4];
        func_0077e710(buf);
        func_00630b9e(buf, (void*)0x841e0c);
    }
    func_00592ba0(this, result, a2 + 4);
}
