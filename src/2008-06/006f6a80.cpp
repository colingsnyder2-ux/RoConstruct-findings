// roc 2008-06 006f6a80  unit: CXTPControlSelector  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006f6a80
//
// 006f6a80  56                   push esi
// 006f6a81  8bf1                 mov esi, ecx
// 006f6a83  8b4e04               mov ecx, dword ptr [esi + 4]
// 006f6a86  85c9                 test ecx, ecx
// 006f6a88  741a                 je 0x6f6aa4
// 006f6a8a  8b442408             mov eax, dword ptr [esp + 8]
// 006f6a8e  83f8ff               cmp eax, -1
// 006f6a91  7411                 je 0x6f6aa4
// 006f6a93  8b11                 mov edx, dword ptr [ecx]
// 006f6a95  50                   push eax
// 006f6a96  8b4238               mov eax, dword ptr [edx + 0x38]
// 006f6a99  ffd0                 call eax
// 006f6a9b  837e0cff             cmp dword ptr [esi + 0xc], -1
// 006f6a9f  7503                 jne 0x6f6aa4
// 006f6aa1  89460c               mov dword ptr [esi + 0xc], eax
// 006f6aa4  5e                   pop esi
// 006f6aa5  c20400               ret 4
// copied from an identical function in another client (function ?SetValue@CXTPControlSelector@ns_ROCX00004e@@QAEXH@Z)

namespace ns_ROCX00004e {
struct CXTPControlSelector {
    int unknown0;
    void* unknown4;
    int unknown8;
    int unknownC;
    void SetValue(int nValue);
};

void CXTPControlSelector::SetValue(int nValue) {
    if (unknown4 != 0 && nValue != -1) {
        int result = (*(int (__thiscall**)(void*, int))(*(int*)unknown4 + 0x38))(unknown4, nValue);
        if (unknownC == -1) {
            unknownC = result;
        }
    }
}
}
