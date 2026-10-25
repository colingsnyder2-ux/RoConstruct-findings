// from server: 100% by tester
// roc 2008-06 005a1380  unit: RBX::PartTool  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005a1380
//
// 005a1380  8b44240c             mov eax, dword ptr [esp + 0xc]
// 005a1384  83f803               cmp eax, 3
// 005a1387  741e                 je 0x5a13a7
// 005a1389  8b542408             mov edx, dword ptr [esp + 8]
// 005a138d  c644240c00           mov byte ptr [esp + 0xc], 0
// 005a1392  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005a1396  51                   push ecx
// 005a1397  50                   push eax
// 005a1398  8b44240c             mov eax, dword ptr [esp + 0xc]
// 005a139c  52                   push edx
// 005a139d  50                   push eax
// 005a139e  e85df0ffff           call 0x5a0400
// 005a13a3  83c410               add esp, 0x10
// 005a13a6  c3                   ret 
// 005a13a7  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005a13ab  c70180ba9400         mov dword ptr [ecx], 0x94ba80
// 005a13b1  c3                   ret 

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
