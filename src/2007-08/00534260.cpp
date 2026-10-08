// from server: 100% by colin
// roc 2007-08 00534260  unit: RBX::ScriptContext  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00534260
//
// 00534260  a178be8a00           mov eax, dword ptr [0x8abe78]
// 00534265  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00534269  8b542404             mov edx, dword ptr [esp + 4]
// 0053426d  50                   push eax
// 0053426e  51                   push ecx
// 0053426f  52                   push edx
// 00534270  e8cbaf0800           call 0x5bf240
// 00534275  83c40c               add esp, 0xc
// 00534278  c3                   ret 

extern "C" int __cdecl sub_5bf240(int, int, int);

int g_8abe78;

int func_00534260(int a, int b)
{
    return sub_5bf240(a, b, g_8abe78);
}
