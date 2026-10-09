// from server: 65% by colin
// roc 2007-08 004b15d0  unit: RBX::Network::VReplicator::?$BoundFuncDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004b15d0
//
// 004b15d0  8b442404             mov eax, dword ptr [esp + 4]
// 004b15d4  83ec0c               sub esp, 0xc
// 004b15d7  56                   push esi
// 004b15d8  6a00                 push 0
// 004b15da  684cf88800           push 0x88f84c
// 004b15df  689c208800           push 0x88209c
// 004b15e4  6a00                 push 0
// 004b15e6  50                   push eax
// 004b15e7  8bf1                 mov esi, ecx
// 004b15e9  e848f71700           call 0x630d36
// 004b15ee  83c414               add esp, 0x14
// 004b15f1  85c0                 test eax, eax
// 004b15f3  751e                 jne 0x4b1613
// 004b15f5  68046e7800           push 0x786e04
// 004b15fa  8d4c2408             lea ecx, [esp + 8]
// 004b15fe  ff1510e77700         call dword ptr [0x77e710]
// 004b1604  680c1e8400           push 0x841e0c
// 004b1609  8d4c2408             lea ecx, [esp + 8]
// 004b160d  51                   push ecx
// 004b160e  e88bf51700           call 0x630b9e
// 004b1613  8b542418             mov edx, dword ptr [esp + 0x18]
// 004b1617  83c204               add edx, 4
// 004b161a  52                   push edx
// 004b161b  50                   push eax
// 004b161c  8bce                 mov ecx, esi
// 004b161e  e8fdfeffff           call 0x4b1520
// 004b1623  5e                   pop esi
// 004b1624  83c40c               add esp, 0xc
// 004b1627  c20800               ret 8

struct BoundFuncDesc {
    void construct(int a, int b);
};

extern "C" int __stdcall sub_630d36(int, int, int, int, int);
extern "C" int __stdcall sub_630b9e(int, int);
extern "C" void __stdcall sub_4b1520(int, int, int);

extern "C" void __stdcall bad_cast_ctor(void*, const char*);

void BoundFuncDesc::construct(int a, int b)
{
    int result = sub_630d36(a, 0, 0x88209c, 0x88f84c, 0);
    if (result == 0) {
        char buf[4];
        bad_cast_ctor(buf, (const char*)0x786e04);
        sub_630b9e((int)buf, 0x841e0c);
    }
    sub_4b1520(result, b + 4, (int)this);
}
