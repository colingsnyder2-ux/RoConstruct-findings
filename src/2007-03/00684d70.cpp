// roc 2007-03 00684d70  unit: seg_00680000  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00684d70
//
// 00684d70  53                   push ebx
// 00684d71  56                   push esi
// 00684d72  57                   push edi
// 00684d73  8bf9                 mov edi, ecx
// 00684d75  33f6                 xor esi, esi
// 00684d77  397728               cmp dword ptr [edi + 0x28], esi
// 00684d7a  7e19                 jle 0x684d95
// 00684d7c  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 00684d80  56                   push esi
// 00684d81  8bcf                 mov ecx, edi
// 00684d83  e8c8d2fbff           call 0x642050
// 00684d88  3b5824               cmp ebx, dword ptr [eax + 0x24]
// 00684d8b  7411                 je 0x684d9e
// 00684d8d  83c601               add esi, 1
// 00684d90  3b7728               cmp esi, dword ptr [edi + 0x28]
// 00684d93  7ceb                 jl 0x684d80
// 00684d95  5f                   pop edi
// 00684d96  5e                   pop esi
// 00684d97  83c8ff               or eax, 0xffffffff
// 00684d9a  5b                   pop ebx
// 00684d9b  c20400               ret 4
// 00684d9e  5f                   pop edi
// 00684d9f  8bc6                 mov eax, esi
// 00684da1  5e                   pop esi
// 00684da2  5b                   pop ebx
// 00684da3  c20400               ret 4
// copied from an identical function in another client (function ?FindItem@CXTPPropertyGridItemConstraints@ns_ROCX00001c@@QAEHH@Z)

namespace ns_ROCX00001c {
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
