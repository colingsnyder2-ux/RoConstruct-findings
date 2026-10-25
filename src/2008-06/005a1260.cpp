// from server: 100% by tester
// roc 2008-06 005a1260  unit: RBX::PartTool  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005a1260
//
// 005a1260  8b44240c             mov eax, dword ptr [esp + 0xc]
// 005a1264  83f803               cmp eax, 3
// 005a1267  741e                 je 0x5a1287
// 005a1269  8b542408             mov edx, dword ptr [esp + 8]
// 005a126d  c644240c00           mov byte ptr [esp + 0xc], 0
// 005a1272  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005a1276  51                   push ecx
// 005a1277  50                   push eax
// 005a1278  8b44240c             mov eax, dword ptr [esp + 0xc]
// 005a127c  52                   push edx
// 005a127d  50                   push eax
// 005a127e  e8adf7ffff           call 0x5a0a30
// 005a1283  83c410               add esp, 0x10
// 005a1286  c3                   ret 
// 005a1287  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005a128b  c70140b89400         mov dword ptr [ecx], 0x94b840
// 005a1291  c3                   ret 

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
