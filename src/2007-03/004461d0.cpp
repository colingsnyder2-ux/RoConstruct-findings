// roc 2007-03 004461d0  unit: seg_00440000  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004461d0
//
// 004461d0  56                   push esi
// 004461d1  8b742408             mov esi, dword ptr [esp + 8]
// 004461d5  57                   push edi
// 004461d6  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 004461da  3bf7                 cmp esi, edi
// 004461dc  7425                 je 0x446203
// 004461de  53                   push ebx
// 004461df  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 004461e3  55                   push ebp
// 004461e4  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 004461e8  8b06                 mov eax, dword ptr [esi]
// 004461ea  53                   push ebx
// 004461eb  50                   push eax
// 004461ec  ffd5                 call ebp
// 004461ee  83c408               add esp, 8
// 004461f1  84c0                 test al, al
// 004461f3  7507                 jne 0x4461fc
// 004461f5  83c604               add esi, 4
// 004461f8  3bf7                 cmp esi, edi
// 004461fa  75ec                 jne 0x4461e8
// 004461fc  5d                   pop ebp
// 004461fd  5b                   pop ebx
// 004461fe  5f                   pop edi
// 004461ff  8bc6                 mov eax, esi
// 00446201  5e                   pop esi
// 00446202  c3                   ret 
// 00446203  5f                   pop edi
// 00446204  8bc6                 mov eax, esi
// 00446206  5e                   pop esi
// 00446207  c3                   ret 
// copied from an identical function in another client (function ?find_if@ns_ROCX000014@@YAPAHPAH0P6A_NHH@ZHH@Z)

namespace ns_ROCX000014 {
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
}
