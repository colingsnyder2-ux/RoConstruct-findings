// from server: 100% by colin
// roc 2007-08 00442a30  unit: RBX::Reflection::Metadata::Classes  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00442a30
//
// 00442a30  8b442404             mov eax, dword ptr [esp + 4]
// 00442a34  6a00                 push 0
// 00442a36  68544e8800           push 0x884e54
// 00442a3b  684c1f8800           push 0x881f4c
// 00442a40  6a00                 push 0
// 00442a42  50                   push eax
// 00442a43  e8eee21e00           call 0x630d36
// 00442a48  83c414               add esp, 0x14
// 00442a4b  f7d8                 neg eax
// 00442a4d  1bc0                 sbb eax, eax
// 00442a4f  f7d8                 neg eax
// 00442a51  c20400               ret 4

extern "C" int __cdecl sub_00630D36(int, int, int, int, int);

int __stdcall sub_00442A30(int a1)
{
    int r = sub_00630D36(a1, 0, 0x881F4C, 0x884E54, 0);
    return r != 0;
}
