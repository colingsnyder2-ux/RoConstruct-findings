// from server: 64% by colin
// roc 2007-08 00532400  unit: RBX::VSelection::?$FactoryProduct  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00532400
//
// 00532400  8b00                 mov eax, dword ptr [eax]
// 00532402  51                   push ecx
// 00532403  68a4ad7800           push 0x78ada4
// 00532408  6a02                 push 2
// 0053240a  50                   push eax
// 0053240b  e8909c0300           call 0x56c0a0
// 00532410  83c410               add esp, 0x10
// 00532413  8d4de8               lea ecx, [ebp - 0x18]
// 00532416  885dfc               mov byte ptr [ebp - 4], bl
// 00532419  e842fff5ff           call 0x492360
// 0053241e  8d4dc8               lea ecx, [ebp - 0x38]
// 00532421  c645fc02             mov byte ptr [ebp - 4], 2
// 00532425  ff15ace67700         call dword ptr [0x77e6ac]
// 0053242b  b8a9235300           mov eax, 0x5323a9
// 00532430  c3                   ret 

struct RBX_VSelection_FactoryProduct {
    int onEvent();
};

extern "C" int __stdcall sub_0056c0a0(int, int, int, int);
extern "C" int __stdcall sub_00492360();
extern "C" int __stdcall sub_0077e6ac();

int RBX_VSelection_FactoryProduct::onEvent()
{
    int v = *(int*)this;
    sub_0056c0a0(v, 2, 0x78ada4, v);
    sub_00492360();
    sub_0077e6ac();
    return 0x5323a9;
}
