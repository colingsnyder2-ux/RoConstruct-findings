// from server: 90% by colin
// roc 2007-08 0055e780  unit: RBX::FixedCameraCommand  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0055e780
//
// 0055e780  56                   push esi
// 0055e781  8b742408             mov esi, dword ptr [esp + 8]
// 0055e785  57                   push edi
// 0055e786  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0055e78a  3bf7                 cmp esi, edi
// 0055e78c  741e                 je 0x55e7ac
// 0055e78e  53                   push ebx
// 0055e78f  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 0055e793  8b06                 mov eax, dword ptr [esi]
// 0055e795  50                   push eax
// 0055e796  ffd3                 call ebx
// 0055e798  83c404               add esp, 4
// 0055e79b  84c0                 test al, al
// 0055e79d  7507                 jne 0x55e7a6
// 0055e79f  83c604               add esi, 4
// 0055e7a2  3bf7                 cmp esi, edi
// 0055e7a4  75ed                 jne 0x55e793
// 0055e7a6  5b                   pop ebx
// 0055e7a7  5f                   pop edi
// 0055e7a8  8bc6                 mov eax, esi
// 0055e7aa  5e                   pop esi
// 0055e7ab  c3                   ret 
// 0055e7ac  5f                   pop edi
// 0055e7ad  8bc6                 mov eax, esi
// 0055e7af  5e                   pop esi
// 0055e7b0  c3                   ret 

struct S_func_0055e780 {
    int* find(int* first, int* last, bool (*pred)(int));
};

int* S_func_0055e780::find(int* first, int* last, bool (*pred)(int))
{
    while (first != last) {
        if (pred(*first))
            break;
        ++first;
    }
    return first;
}
