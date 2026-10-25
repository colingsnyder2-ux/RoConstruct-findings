// from server: 100% by tester
// roc 2008-06 0057d7c0  unit: RBX::FixedCameraCommand  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0057d7c0
//
// 0057d7c0  56                   push esi
// 0057d7c1  8b742408             mov esi, dword ptr [esp + 8]
// 0057d7c5  57                   push edi
// 0057d7c6  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0057d7ca  3bf7                 cmp esi, edi
// 0057d7cc  741e                 je 0x57d7ec
// 0057d7ce  53                   push ebx
// 0057d7cf  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 0057d7d3  8b06                 mov eax, dword ptr [esi]
// 0057d7d5  50                   push eax
// 0057d7d6  ffd3                 call ebx
// 0057d7d8  83c404               add esp, 4
// 0057d7db  84c0                 test al, al
// 0057d7dd  7507                 jne 0x57d7e6
// 0057d7df  83c604               add esi, 4
// 0057d7e2  3bf7                 cmp esi, edi
// 0057d7e4  75ed                 jne 0x57d7d3
// 0057d7e6  5b                   pop ebx
// 0057d7e7  5f                   pop edi
// 0057d7e8  8bc6                 mov eax, esi
// 0057d7ea  5e                   pop esi
// 0057d7eb  c3                   ret 
// 0057d7ec  5f                   pop edi
// 0057d7ed  8bc6                 mov eax, esi
// 0057d7ef  5e                   pop esi
// 0057d7f0  c3                   ret 

typedef bool (__cdecl *Pred)(int);

int* find_if(int* first, int* last, Pred pred)
{
    while (first != last)
    {
        if (pred(*first))
            break;
        ++first;
    }
    return first;
}
