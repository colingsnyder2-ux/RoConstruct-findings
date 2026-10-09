// from server: 98% by colin
// roc 2007-08 00446c80  unit: CRenderSettings::W4AASamples::?$EnumDesc  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00446c80
//
// 00446c80  56                   push esi
// 00446c81  8b742408             mov esi, dword ptr [esp + 8]
// 00446c85  57                   push edi
// 00446c86  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00446c8a  3bf7                 cmp esi, edi
// 00446c8c  7425                 je 0x446cb3
// 00446c8e  53                   push ebx
// 00446c8f  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 00446c93  55                   push ebp
// 00446c94  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 00446c98  8b06                 mov eax, dword ptr [esi]
// 00446c9a  53                   push ebx
// 00446c9b  50                   push eax
// 00446c9c  ffd5                 call ebp
// 00446c9e  83c408               add esp, 8
// 00446ca1  84c0                 test al, al
// 00446ca3  7507                 jne 0x446cac
// 00446ca5  83c604               add esi, 4
// 00446ca8  3bf7                 cmp esi, edi
// 00446caa  75ec                 jne 0x446c98
// 00446cac  5d                   pop ebp
// 00446cad  5b                   pop ebx
// 00446cae  5f                   pop edi
// 00446caf  8bc6                 mov eax, esi
// 00446cb1  5e                   pop esi
// 00446cb2  c3                   ret 
// 00446cb3  5f                   pop edi
// 00446cb4  8bc6                 mov eax, esi
// 00446cb6  5e                   pop esi
// 00446cb7  c3                   ret 

typedef bool (__cdecl *Pred)(int, int);

int* find_if(int* first, int* last, Pred pred, int unused, int value)
{
    while (first != last)
    {
        if (pred(*first, value))
            break;
        ++first;
    }
    return first;
}
