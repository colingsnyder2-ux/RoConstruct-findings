// from server: 100% by tester
// roc 2008-06 005a1220  unit: RBX::PartTool  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005a1220
//
// 005a1220  8b44240c             mov eax, dword ptr [esp + 0xc]
// 005a1224  83f803               cmp eax, 3
// 005a1227  741e                 je 0x5a1247
// 005a1229  8b542408             mov edx, dword ptr [esp + 8]
// 005a122d  c644240c00           mov byte ptr [esp + 0xc], 0
// 005a1232  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005a1236  51                   push ecx
// 005a1237  50                   push eax
// 005a1238  8b44240c             mov eax, dword ptr [esp + 0xc]
// 005a123c  52                   push edx
// 005a123d  50                   push eax
// 005a123e  e88df7ffff           call 0x5a09d0
// 005a1243  83c410               add esp, 0x10
// 005a1246  c3                   ret 
// 005a1247  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005a124b  c701c8b79400         mov dword ptr [ecx], 0x94b7c8
// 005a1251  c3                   ret 

extern "C" void __cdecl sub_4CA360(int, int, int, int);

void __cdecl sub_4CB170(int a, int b, int c)
{
    if (c != 3)
    {
        char zero = 0;
        sub_4CA360(a, b, c, *(int*)&zero);
        return;
    }
    *(int*)b = 0x93cd10;
}
