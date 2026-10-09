// from server: 38% by colin
// roc 2007-08 005824d0  unit: RBX::VHat::?$FactoryProduct  size: 92 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005824d0
//
// 005824d0  c70000000000         mov dword ptr [eax], 0
// 005824d6  c744241400000000     mov dword ptr [esp + 0x14], 0
// 005824de  89642430             mov dword ptr [esp + 0x30], esp
// 005824e2  8911                 mov dword ptr [ecx], edx
// 005824e4  8b542420             mov edx, dword ptr [esp + 0x20]
// 005824e8  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 005824ec  52                   push edx
// 005824ed  50                   push eax
// 005824ee  c644241c01           mov byte ptr [esp + 0x1c], 1
// 005824f3  e898feffff           call 0x582390
// 005824f8  50                   push eax
// 005824f9  8bce                 mov ecx, esi
// 005824fb  c644242000           mov byte ptr [esp + 0x20], 0
// 00582500  e8cbe9faff           call 0x530ed0
// 00582505  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00582509  51                   push ecx
// 0058250a  e853d70a00           call 0x62fc62
// 0058250f  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00582513  83c404               add esp, 4
// 00582516  c70600c37a00         mov dword ptr [esi], 0x7ac300
// 0058251c  8bc6                 mov eax, esi
// 0058251e  64890d00000000       mov dword ptr fs:[0], ecx
// 00582525  5e                   pop esi
// 00582526  83c40c               add esp, 0xc
// 00582529  c22400               ret 0x24

struct S {
    char pad0[4];
    int f(int, int, int, int, int, int, int, int, int);
};

extern "C" int __stdcall sub_582390(int, int);
extern "C" int __stdcall sub_530ed0(int);
extern "C" void __stdcall sub_62fc62(int);

int S::f(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
    *(int*)0 = 0;
    *(int*)((char*)this + 0) = a1;
    int r = sub_582390(a2, a3);
    sub_530ed0(r);
    sub_62fc62(a4);
    *(int*)this = 0x7ac300;
    return (int)this;
}
