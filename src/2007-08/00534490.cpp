// from server: 100% by colin
// roc 2007-08 00534490  unit: RBX::ScriptContext  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00534490
//
// 00534490  a174be8a00           mov eax, dword ptr [0x8abe74]
// 00534495  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00534499  8b542404             mov edx, dword ptr [esp + 4]
// 0053449d  50                   push eax
// 0053449e  51                   push ecx
// 0053449f  52                   push edx
// 005344a0  e89bad0800           call 0x5bf240
// 005344a5  83c40c               add esp, 0xc
// 005344a8  c3                   ret 

extern int g_8abe74;
extern int __cdecl sub_5bf240(int, int, int);

int __cdecl func_00534490(int a, int b)
{
    return sub_5bf240(a, b, g_8abe74);
}
