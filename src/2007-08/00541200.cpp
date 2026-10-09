// from server: 65% by colin
// roc 2007-08 00541200  unit: RBX::VInstance::?$BoundFuncDesc  size: 84 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00541200
//
// 00541200  8b442404             mov eax, dword ptr [esp + 4]
// 00541204  83ec0c               sub esp, 0xc
// 00541207  56                   push esi
// 00541208  6a00                 push 0
// 0054120a  684c1f8800           push 0x881f4c
// 0054120f  689c208800           push 0x88209c
// 00541214  6a00                 push 0
// 00541216  50                   push eax
// 00541217  8bf1                 mov esi, ecx
// 00541219  e818fb0e00           call 0x630d36
// 0054121e  83c414               add esp, 0x14
// 00541221  85c0                 test eax, eax
// 00541223  751e                 jne 0x541243
// 00541225  68046e7800           push 0x786e04
// 0054122a  8d4c2408             lea ecx, [esp + 8]
// 0054122e  ff1510e77700         call dword ptr [0x77e710]
// 00541234  680c1e8400           push 0x841e0c
// 00541239  8d4c2408             lea ecx, [esp + 8]
// 0054123d  51                   push ecx
// 0054123e  e85bf90e00           call 0x630b9e
// 00541243  8b4e2c               mov ecx, dword ptr [esi + 0x2c]
// 00541246  8b5628               mov edx, dword ptr [esi + 0x28]
// 00541249  03c8                 add ecx, eax
// 0054124b  ffd2                 call edx
// 0054124d  5e                   pop esi
// 0054124e  83c40c               add esp, 0xc
// 00541251  c20800               ret 8

struct Descriptor {
    char pad0[0x28];
    int offset28;
    int offset2c;
};

struct BoundFuncDesc {
    char pad0[0x28];
    int offset28;
    int offset2c;
    void invoke(int a, int b);
};

extern "C" int __cdecl sub_630d36(int, int, int, int, int);
extern "C" int __cdecl sub_630b9e(int, int);
extern "C" void* __stdcall sub_77e710(int);

void BoundFuncDesc::invoke(int a, int b)
{
    int r = sub_630d36(0, 0x881f4c, 0x88209c, 0, a);
    if (r == 0) {
        sub_77e710(0x786e04);
        sub_630b9e(0x841e0c, (int)&r);
    }
    int ecx = this->offset2c;
    int edx = this->offset28;
    ecx += r;
    ((void (__thiscall*)(int, int))edx)(ecx, b);
}
