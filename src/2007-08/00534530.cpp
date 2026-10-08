// from server: 100% by colin
// roc 2007-08 00534530  unit: RBX::ScriptContext  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00534530
//
// 00534530  a17cbe8a00           mov eax, dword ptr [0x8abe7c]
// 00534535  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00534539  8b542404             mov edx, dword ptr [esp + 4]
// 0053453d  50                   push eax
// 0053453e  51                   push ecx
// 0053453f  52                   push edx
// 00534540  e8fbac0800           call 0x5bf240
// 00534545  83c40c               add esp, 0xc
// 00534548  c3                   ret 

extern int g_8abe7c;

int __cdecl sub_5BF240(int, int, int);

int __cdecl sub_534530(int a, int b)
{
    return sub_5BF240(a, b, g_8abe7c);
}
