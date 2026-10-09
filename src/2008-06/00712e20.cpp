// roc 2008-06 00712e20  unit: CXTPPropertyGridItemConstraints  size: 52 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00712e20
//
// 00712e20  53                   push ebx
// 00712e21  56                   push esi
// 00712e22  57                   push edi
// 00712e23  8bf9                 mov edi, ecx
// 00712e25  33f6                 xor esi, esi
// 00712e27  397728               cmp dword ptr [edi + 0x28], esi
// 00712e2a  7e17                 jle 0x712e43
// 00712e2c  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 00712e30  56                   push esi
// 00712e31  8bcf                 mov ecx, edi
// 00712e33  e808f8ffff           call 0x712640
// 00712e38  3b5824               cmp ebx, dword ptr [eax + 0x24]
// 00712e3b  740f                 je 0x712e4c
// 00712e3d  46                   inc esi
// 00712e3e  3b7728               cmp esi, dword ptr [edi + 0x28]
// 00712e41  7ced                 jl 0x712e30
// 00712e43  5f                   pop edi
// 00712e44  5e                   pop esi
// 00712e45  83c8ff               or eax, 0xffffffff
// 00712e48  5b                   pop ebx
// 00712e49  c20400               ret 4
// 00712e4c  5f                   pop edi
// 00712e4d  8bc6                 mov eax, esi
// 00712e4f  5e                   pop esi
// 00712e50  5b                   pop ebx
// 00712e51  c20400               ret 4
// copied from an identical function in another client (function ?FindItem@CXTPPropertyGridItemConstraints@ns_ROCX000013@@QAEHH@Z)

namespace ns_ROCX000013 {
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
