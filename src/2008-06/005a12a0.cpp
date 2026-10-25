// from server: 100% by tester
// roc 2008-06 005a12a0  unit: RBX::PartTool  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005a12a0
//
// 005a12a0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 005a12a4  83f803               cmp eax, 3
// 005a12a7  741e                 je 0x5a12c7
// 005a12a9  8b542408             mov edx, dword ptr [esp + 8]
// 005a12ad  c644240c00           mov byte ptr [esp + 0xc], 0
// 005a12b2  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005a12b6  51                   push ecx
// 005a12b7  50                   push eax
// 005a12b8  8b44240c             mov eax, dword ptr [esp + 0xc]
// 005a12bc  52                   push edx
// 005a12bd  50                   push eax
// 005a12be  e8cdf7ffff           call 0x5a0a90
// 005a12c3  83c410               add esp, 0x10
// 005a12c6  c3                   ret 
// 005a12c7  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005a12cb  c701c8b89400         mov dword ptr [ecx], 0x94b8c8
// 005a12d1  c3                   ret 

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
