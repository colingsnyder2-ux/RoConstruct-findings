// from server: 65% by colin
// roc 2007-08 00496530  unit: RBX::Network::VPlayers::?$BoundFuncDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00496530
//
// 00496530  8b442404             mov eax, dword ptr [esp + 4]
// 00496534  83ec0c               sub esp, 0xc
// 00496537  56                   push esi
// 00496538  6a00                 push 0
// 0049653a  68fce98800           push 0x88e9fc
// 0049653f  689c208800           push 0x88209c
// 00496544  6a00                 push 0
// 00496546  50                   push eax
// 00496547  8bf1                 mov esi, ecx
// 00496549  e8e8a71900           call 0x630d36
// 0049654e  83c414               add esp, 0x14
// 00496551  85c0                 test eax, eax
// 00496553  751e                 jne 0x496573
// 00496555  68046e7800           push 0x786e04
// 0049655a  8d4c2408             lea ecx, [esp + 8]
// 0049655e  ff1510e77700         call dword ptr [0x77e710]
// 00496564  680c1e8400           push 0x841e0c
// 00496569  8d4c2408             lea ecx, [esp + 8]
// 0049656d  51                   push ecx
// 0049656e  e82ba61900           call 0x630b9e
// 00496573  8b542418             mov edx, dword ptr [esp + 0x18]
// 00496577  83c204               add edx, 4
// 0049657a  52                   push edx
// 0049657b  50                   push eax
// 0049657c  8bce                 mov ecx, esi
// 0049657e  e8fdfeffff           call 0x496480
// 00496583  5e                   pop esi
// 00496584  83c40c               add esp, 0xc
// 00496587  c20800               ret 8

struct BoundFuncDesc {
    void construct(int a, int b);
};

extern "C" int __cdecl sub_630D36(int, const char*, const char*, int, int);
extern "C" int __cdecl sub_630B9E(void*, const char*);
extern "C" void* __stdcall sub_77E710(const char*);
extern "C" void __cdecl sub_496480(void*, int);

void BoundFuncDesc::construct(int a, int b)
{
    int result = sub_630D36(a, (const char*)0x88209C, (const char*)0x88E9FC, 0, 0);
    if (result == 0) {
        void* p = sub_77E710((const char*)0x786E04);
        sub_630B9E(p, (const char*)0x841E0C);
    }
    sub_496480(this, b + 4);
}
