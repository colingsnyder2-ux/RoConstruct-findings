// roc 2009-06 0078b5f0  unit: CXTPPropertyGridItemConstraints  size: 52 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0078b5f0
//
// 0078b5f0  53                   push ebx
// 0078b5f1  56                   push esi
// 0078b5f2  57                   push edi
// 0078b5f3  8bf9                 mov edi, ecx
// 0078b5f5  33f6                 xor esi, esi
// 0078b5f7  397728               cmp dword ptr [edi + 0x28], esi
// 0078b5fa  7e17                 jle 0x78b613
// 0078b5fc  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 0078b600  56                   push esi
// 0078b601  8bcf                 mov ecx, edi
// 0078b603  e858cb0300           call 0x7c8160
// 0078b608  3b5824               cmp ebx, dword ptr [eax + 0x24]
// 0078b60b  740f                 je 0x78b61c
// 0078b60d  46                   inc esi
// 0078b60e  3b7728               cmp esi, dword ptr [edi + 0x28]
// 0078b611  7ced                 jl 0x78b600
// 0078b613  5f                   pop edi
// 0078b614  5e                   pop esi
// 0078b615  83c8ff               or eax, 0xffffffff
// 0078b618  5b                   pop ebx
// 0078b619  c20400               ret 4
// 0078b61c  5f                   pop edi
// 0078b61d  8bc6                 mov eax, esi
// 0078b61f  5e                   pop esi
// 0078b620  5b                   pop ebx
// 0078b621  c20400               ret 4
// copied from an identical function in another client (function ?FindItem@CXTPPropertyGridItemConstraints@ns_ROCX000007@@QAEHH@Z)

namespace ns_ROCX000007 {
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
