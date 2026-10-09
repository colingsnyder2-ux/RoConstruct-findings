// roc 2009-12 0084a1b0  unit: CXTPControlSelector  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0084a1b0
//
// 0084a1b0  56                   push esi
// 0084a1b1  8bf1                 mov esi, ecx
// 0084a1b3  8b4e04               mov ecx, dword ptr [esi + 4]
// 0084a1b6  85c9                 test ecx, ecx
// 0084a1b8  741a                 je 0x84a1d4
// 0084a1ba  8b442408             mov eax, dword ptr [esp + 8]
// 0084a1be  83f8ff               cmp eax, -1
// 0084a1c1  7411                 je 0x84a1d4
// 0084a1c3  8b11                 mov edx, dword ptr [ecx]
// 0084a1c5  50                   push eax
// 0084a1c6  8b4238               mov eax, dword ptr [edx + 0x38]
// 0084a1c9  ffd0                 call eax
// 0084a1cb  837e0cff             cmp dword ptr [esi + 0xc], -1
// 0084a1cf  7503                 jne 0x84a1d4
// 0084a1d1  89460c               mov dword ptr [esi + 0xc], eax
// 0084a1d4  5e                   pop esi
// 0084a1d5  c20400               ret 4
// copied from an identical function in another client (function ?SetValue@CXTPControlSelector@ns_ROCX000019@@QAEXH@Z)

namespace ns_ROCX000019 {
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
