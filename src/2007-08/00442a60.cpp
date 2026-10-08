// from server: 100% by colin
// roc 2007-08 00442a60  unit: RBX::Reflection::Metadata::Class  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00442a60
//
// 00442a60  8b442404             mov eax, dword ptr [esp + 4]
// 00442a64  6a00                 push 0
// 00442a66  6828568800           push 0x885628
// 00442a6b  684c1f8800           push 0x881f4c
// 00442a70  6a00                 push 0
// 00442a72  50                   push eax
// 00442a73  e8bee21e00           call 0x630d36
// 00442a78  83c414               add esp, 0x14
// 00442a7b  f7d8                 neg eax
// 00442a7d  1bc0                 sbb eax, eax
// 00442a7f  f7d8                 neg eax
// 00442a81  c20400               ret 4

extern "C" int __cdecl sub_00630d36(int, int, int, int, int);

int __stdcall sub_00442a60(int a1)
{
    int r = sub_00630d36(a1, 0, 0x881f4c, 0x885628, 0);
    return r != 0;
}
