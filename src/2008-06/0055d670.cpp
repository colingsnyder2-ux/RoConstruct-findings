// from server: 100% by tester
// roc 2008-06 0055d670  unit: RBX::MD5HasherImpl  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0055d670
//
// 0055d670  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0055d674  83f803               cmp eax, 3
// 0055d677  741e                 je 0x55d697
// 0055d679  8b542408             mov edx, dword ptr [esp + 8]
// 0055d67d  c644240c00           mov byte ptr [esp + 0xc], 0
// 0055d682  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0055d686  51                   push ecx
// 0055d687  50                   push eax
// 0055d688  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0055d68c  52                   push edx
// 0055d68d  50                   push eax
// 0055d68e  e80df9ffff           call 0x55cfa0
// 0055d693  83c410               add esp, 0x10
// 0055d696  c3                   ret 
// 0055d697  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0055d69b  c70128439400         mov dword ptr [ecx], 0x944328
// 0055d6a1  c3                   ret 

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
