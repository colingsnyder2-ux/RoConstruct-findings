// roc 2011-06 0087ac90  unit: CXTPPropertyGridItemConstraints  size: 52 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0087ac90
//
// 0087ac90  53                   push ebx
// 0087ac91  56                   push esi
// 0087ac92  57                   push edi
// 0087ac93  8bf9                 mov edi, ecx
// 0087ac95  33f6                 xor esi, esi
// 0087ac97  397728               cmp dword ptr [edi + 0x28], esi
// 0087ac9a  7e17                 jle 0x87acb3
// 0087ac9c  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 0087aca0  56                   push esi
// 0087aca1  8bcf                 mov ecx, edi
// 0087aca3  e8d81ff9ff           call 0x80cc80
// 0087aca8  3b5824               cmp ebx, dword ptr [eax + 0x24]
// 0087acab  740f                 je 0x87acbc
// 0087acad  46                   inc esi
// 0087acae  3b7728               cmp esi, dword ptr [edi + 0x28]
// 0087acb1  7ced                 jl 0x87aca0
// 0087acb3  5f                   pop edi
// 0087acb4  5e                   pop esi
// 0087acb5  83c8ff               or eax, 0xffffffff
// 0087acb8  5b                   pop ebx
// 0087acb9  c20400               ret 4
// 0087acbc  5f                   pop edi
// 0087acbd  8bc6                 mov eax, esi
// 0087acbf  5e                   pop esi
// 0087acc0  5b                   pop ebx
// 0087acc1  c20400               ret 4
// copied from an identical function in another client (function ?FindItem@CXTPPropertyGridItemConstraints@ns_ROCX000005@@QAEHH@Z)

namespace ns_ROCX000005 {
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
