// from server: 63% by colin
// roc 2007-08 0058b240  unit: RBX::VSoundChannel::?$BoundFuncDesc  size: 84 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0058b240
//
// 0058b240  8b442404             mov eax, dword ptr [esp + 4]
// 0058b244  83ec0c               sub esp, 0xc
// 0058b247  56                   push esi
// 0058b248  6a00                 push 0
// 0058b24a  68b02e8a00           push 0x8a2eb0
// 0058b24f  689c208800           push 0x88209c
// 0058b254  6a00                 push 0
// 0058b256  50                   push eax
// 0058b257  8bf1                 mov esi, ecx
// 0058b259  e8d85a0a00           call 0x630d36
// 0058b25e  83c414               add esp, 0x14
// 0058b261  85c0                 test eax, eax
// 0058b263  751e                 jne 0x58b283
// 0058b265  68046e7800           push 0x786e04
// 0058b26a  8d4c2408             lea ecx, [esp + 8]
// 0058b26e  ff1510e77700         call dword ptr [0x77e710]
// 0058b274  680c1e8400           push 0x841e0c
// 0058b279  8d4c2408             lea ecx, [esp + 8]
// 0058b27d  51                   push ecx
// 0058b27e  e81b590a00           call 0x630b9e
// 0058b283  8b4e2c               mov ecx, dword ptr [esi + 0x2c]
// 0058b286  8b5628               mov edx, dword ptr [esi + 0x28]
// 0058b289  03c8                 add ecx, eax
// 0058b28b  ffd2                 call edx
// 0058b28d  5e                   pop esi
// 0058b28e  83c40c               add esp, 0xc
// 0058b291  c20800               ret 8

struct BoundFuncDesc {
    void invoke(int a, int b);
};

extern "C" int __cdecl sub_630d36(int, int, int, int, int);
extern "C" int __cdecl sub_630b9e(void*, void*);
extern "C" void* __stdcall sub_77e710(void*);
extern "C" void __stdcall sub_77ecd8();

void BoundFuncDesc::invoke(int a, int b)
{
    int result = sub_630d36(a, 0, 0x88209c, 0x8a2eb0, 0);
    if (result == 0) {
        char buf[4];
        sub_77e710(buf);
        sub_630b9e(buf, (void*)0x841e0c);
    }
    int (*fn)(void*) = *(int (**)(void*))((char*)this + 0x28);
    int arg = *(int*)((char*)this + 0x2c) + result;
    fn((void*)arg);
}
