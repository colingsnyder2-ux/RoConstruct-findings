// from server: 100% by colin
// roc 2007-08 00442a90  unit: RBX::Reflection::Metadata::Members  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00442a90
//
// 00442a90  8b442404             mov eax, dword ptr [esp + 4]
// 00442a94  6a00                 push 0
// 00442a96  6828638800           push 0x886328
// 00442a9b  684c1f8800           push 0x881f4c
// 00442aa0  6a00                 push 0
// 00442aa2  50                   push eax
// 00442aa3  e88ee21e00           call 0x630d36
// 00442aa8  83c414               add esp, 0x14
// 00442aab  f7d8                 neg eax
// 00442aad  1bc0                 sbb eax, eax
// 00442aaf  f7d8                 neg eax
// 00442ab1  c20400               ret 4

extern "C" int __cdecl sub_00630D36(int, int, int, int, int);

struct Members {
    int func_00442A90(int);
};

int Members::func_00442A90(int a)
{
    int r = sub_00630D36(a, 0, (int)0x881F4C, (int)0x886328, 0);
    return r != 0;
}
