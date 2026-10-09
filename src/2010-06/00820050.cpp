// roc 2010-06 00820050  unit: CXTPPropertyGridItemEnum  size: 80 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00820050
//
// 00820050  56                   push esi
// 00820051  e8caffffff           call 0x820020
// 00820056  8bf0                 mov esi, eax
// 00820058  8b460c               mov eax, dword ptr [esi + 0xc]
// 0082005b  85c0                 test eax, eax
// 0082005d  7413                 je 0x820072
// 0082005f  833e00               cmp dword ptr [esi], 0
// 00820062  750e                 jne 0x820072
// 00820064  68d03da600           push 0xa63dd0
// 00820069  50                   push eax
// 0082006a  ff1590a39e00         call dword ptr [0x9ea390]
// 00820070  8906                 mov dword ptr [esi], eax
// 00820072  8b36                 mov esi, dword ptr [esi]
// 00820074  85f6                 test esi, esi
// 00820076  741f                 je 0x820097
// 00820078  8b442418             mov eax, dword ptr [esp + 0x18]
// 0082007c  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00820080  8b542410             mov edx, dword ptr [esp + 0x10]
// 00820084  50                   push eax
// 00820085  8b442410             mov eax, dword ptr [esp + 0x10]
// 00820089  51                   push ecx
// 0082008a  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0082008e  52                   push edx
// 0082008f  50                   push eax
// 00820090  51                   push ecx
// 00820091  ffd6                 call esi
// 00820093  5e                   pop esi
// 00820094  c21400               ret 0x14
// 00820097  b805400080           mov eax, 0x80004005
// 0082009c  5e                   pop esi
// 0082009d  c21400               ret 0x14
// copied from an identical function in another client (function ?step@Kernel@ns_ROCX000007@ns_ROCX000025@@QAEHHHHHH@Z)

namespace ns_ROCX000007 {
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
}
