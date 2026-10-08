// from server: 100% by colin
// roc 2007-08 00413790  unit: DHTMLWindowService  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00413790
//
// 00413790  8b442404             mov eax, dword ptr [esp + 4]
// 00413794  6a00                 push 0
// 00413796  68c02b8800           push 0x882bc0
// 0041379b  684c1f8800           push 0x881f4c
// 004137a0  6a00                 push 0
// 004137a2  50                   push eax
// 004137a3  e88ed52100           call 0x630d36
// 004137a8  83c414               add esp, 0x14
// 004137ab  f7d8                 neg eax
// 004137ad  1bc0                 sbb eax, eax
// 004137af  f7d8                 neg eax
// 004137b1  c20400               ret 4

extern "C" int __cdecl sub_00630D36(int, int, int, int, int);

int __stdcall sub_00413790(int a1)
{
    int r = sub_00630D36(a1, 0, 0x881F4C, 0x882BC0, 0);
    return r != 0;
}
