// roc 2009-12 00866600  unit: CXTPPropertyGridItemConstraints  size: 52 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00866600
//
// 00866600  53                   push ebx
// 00866601  56                   push esi
// 00866602  57                   push edi
// 00866603  8bf9                 mov edi, ecx
// 00866605  33f6                 xor esi, esi
// 00866607  397728               cmp dword ptr [edi + 0x28], esi
// 0086660a  7e17                 jle 0x866623
// 0086660c  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 00866610  56                   push esi
// 00866611  8bcf                 mov ecx, edi
// 00866613  e818c90300           call 0x8a2f30
// 00866618  3b5824               cmp ebx, dword ptr [eax + 0x24]
// 0086661b  740f                 je 0x86662c
// 0086661d  46                   inc esi
// 0086661e  3b7728               cmp esi, dword ptr [edi + 0x28]
// 00866621  7ced                 jl 0x866610
// 00866623  5f                   pop edi
// 00866624  5e                   pop esi
// 00866625  83c8ff               or eax, 0xffffffff
// 00866628  5b                   pop ebx
// 00866629  c20400               ret 4
// 0086662c  5f                   pop edi
// 0086662d  8bc6                 mov eax, esi
// 0086662f  5e                   pop esi
// 00866630  5b                   pop ebx
// 00866631  c20400               ret 4
// copied from an identical function in another client (function ?FindItem@CXTPPropertyGridItemConstraints@ns_ROCX000015@@QAEHH@Z)

namespace ns_ROCX000015 {
struct CXTPPropertyGridItemConstraints {
    char pad0[0x28];
    int m_count;
    int GetItemIndex(int index);
    int FindItem(int value);
};

int CXTPPropertyGridItemConstraints::FindItem(int value)
{
    int i = 0;
    if (m_count > 0) {
        do {
            int item = GetItemIndex(i);
            if (value == *(int*)((char*)item + 0x24))
                return i;
            ++i;
        } while (i < m_count);
    }
    return -1;
}
}
