// roc 2010-06 0081a5c0  unit: CXTPPropertyGridItemConstraints  size: 52 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0081a5c0
//
// 0081a5c0  53                   push ebx
// 0081a5c1  56                   push esi
// 0081a5c2  57                   push edi
// 0081a5c3  8bf9                 mov edi, ecx
// 0081a5c5  33f6                 xor esi, esi
// 0081a5c7  397728               cmp dword ptr [edi + 0x28], esi
// 0081a5ca  7e17                 jle 0x81a5e3
// 0081a5cc  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 0081a5d0  56                   push esi
// 0081a5d1  8bcf                 mov ecx, edi
// 0081a5d3  e8f876feff           call 0x801cd0
// 0081a5d8  3b5824               cmp ebx, dword ptr [eax + 0x24]
// 0081a5db  740f                 je 0x81a5ec
// 0081a5dd  46                   inc esi
// 0081a5de  3b7728               cmp esi, dword ptr [edi + 0x28]
// 0081a5e1  7ced                 jl 0x81a5d0
// 0081a5e3  5f                   pop edi
// 0081a5e4  5e                   pop esi
// 0081a5e5  83c8ff               or eax, 0xffffffff
// 0081a5e8  5b                   pop ebx
// 0081a5e9  c20400               ret 4
// 0081a5ec  5f                   pop edi
// 0081a5ed  8bc6                 mov eax, esi
// 0081a5ef  5e                   pop esi
// 0081a5f0  5b                   pop ebx
// 0081a5f1  c20400               ret 4
// copied from an identical function in another client (function ?FindItem@CXTPPropertyGridItemConstraints@ns_ROCX000002@@QAEHH@Z)

namespace ns_ROCX000002 {
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
