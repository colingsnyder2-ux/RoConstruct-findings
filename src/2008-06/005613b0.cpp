// from server: 100% by tester
// roc 2008-06 005613b0  unit: RBX::VContentProvider::?$DescribedNonCreatable  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005613b0
//
// 005613b0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 005613b4  83f803               cmp eax, 3
// 005613b7  741e                 je 0x5613d7
// 005613b9  8b542408             mov edx, dword ptr [esp + 8]
// 005613bd  c644240c00           mov byte ptr [esp + 0xc], 0
// 005613c2  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005613c6  51                   push ecx
// 005613c7  50                   push eax
// 005613c8  8b44240c             mov eax, dword ptr [esp + 0xc]
// 005613cc  52                   push edx
// 005613cd  50                   push eax
// 005613ce  e82dfbffff           call 0x560f00
// 005613d3  83c410               add esp, 0x10
// 005613d6  c3                   ret 
// 005613d7  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005613db  c70130449400         mov dword ptr [ecx], 0x944430
// 005613e1  c3                   ret 

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
