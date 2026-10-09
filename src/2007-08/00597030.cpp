// from server: 56% by colin
// roc 2007-08 00597030  unit: RBX::Stats::VItem::?$BoundFuncDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00597030
//
// 00597030  8b442404             mov eax, dword ptr [esp + 4]
// 00597034  83ec0c               sub esp, 0xc
// 00597037  56                   push esi
// 00597038  6a00                 push 0
// 0059703a  68d49a8800           push 0x889ad4
// 0059703f  689c208800           push 0x88209c
// 00597044  6a00                 push 0
// 00597046  50                   push eax
// 00597047  8bf1                 mov esi, ecx
// 00597049  e8e89c0900           call 0x630d36
// 0059704e  83c414               add esp, 0x14
// 00597051  85c0                 test eax, eax
// 00597053  751e                 jne 0x597073
// 00597055  68046e7800           push 0x786e04
// 0059705a  8d4c2408             lea ecx, [esp + 8]
// 0059705e  ff1510e77700         call dword ptr [0x77e710]
// 00597064  680c1e8400           push 0x841e0c
// 00597069  8d4c2408             lea ecx, [esp + 8]
// 0059706d  51                   push ecx
// 0059706e  e82b9b0900           call 0x630b9e
// 00597073  8b542418             mov edx, dword ptr [esp + 0x18]
// 00597077  83c204               add edx, 4
// 0059707a  52                   push edx
// 0059707b  50                   push eax
// 0059707c  8bce                 mov ecx, esi
// 0059707e  e81dbbffff           call 0x592ba0
// 00597083  5e                   pop esi
// 00597084  83c40c               add esp, 0xc
// 00597087  c20800               ret 8

struct RBX_Stats_VItem_BoundFuncDesc {
    void construct(int);
};

extern "C" int __cdecl sub_630d36(int, int, int, int, int);
extern "C" void __cdecl sub_630b9e(void*, void*);
extern "C" void __stdcall sub_77e710(void*);
extern "C" void __cdecl sub_592ba0(void*, int, int);

void RBX_Stats_VItem_BoundFuncDesc::construct(int a)
{
    int r = sub_630d36(a, 0, 0x88209c, 0x889ad4, 0);
    if (r == 0) {
        sub_77e710((void*)0x786e04);
        sub_630b9e((void*)0x841e0c, (void*)0x786e04);
    }
    sub_592ba0(this, r, a + 4);
}
