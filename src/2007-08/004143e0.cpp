// from server: 100% by colin
// roc 2007-08 004143e0  unit: DHTMLWindow  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004143e0
//
// 004143e0  8b442404             mov eax, dword ptr [esp + 4]
// 004143e4  6a00                 push 0
// 004143e6  68782e8800           push 0x882e78
// 004143eb  684c1f8800           push 0x881f4c
// 004143f0  6a00                 push 0
// 004143f2  50                   push eax
// 004143f3  e83ec92100           call 0x630d36
// 004143f8  83c414               add esp, 0x14
// 004143fb  f7d8                 neg eax
// 004143fd  1bc0                 sbb eax, eax
// 004143ff  f7d8                 neg eax
// 00414401  c20400               ret 4

extern "C" int __cdecl sub_00630D36(int, int, int, int, int);

int __stdcall sub_004143E0(int a1)
{
    int r = sub_00630D36(a1, 0, 0x881f4c, 0x882e78, 0);
    return r != 0;
}
