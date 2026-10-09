// roc 2010-06 007fe250  unit: CXTPControlSelector  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007fe250
//
// 007fe250  56                   push esi
// 007fe251  8bf1                 mov esi, ecx
// 007fe253  8b4e04               mov ecx, dword ptr [esi + 4]
// 007fe256  85c9                 test ecx, ecx
// 007fe258  741a                 je 0x7fe274
// 007fe25a  8b442408             mov eax, dword ptr [esp + 8]
// 007fe25e  83f8ff               cmp eax, -1
// 007fe261  7411                 je 0x7fe274
// 007fe263  8b11                 mov edx, dword ptr [ecx]
// 007fe265  50                   push eax
// 007fe266  8b4238               mov eax, dword ptr [edx + 0x38]
// 007fe269  ffd0                 call eax
// 007fe26b  837e0cff             cmp dword ptr [esi + 0xc], -1
// 007fe26f  7503                 jne 0x7fe274
// 007fe271  89460c               mov dword ptr [esi + 0xc], eax
// 007fe274  5e                   pop esi
// 007fe275  c20400               ret 4
// copied from an identical function in another client (function ?SetValue@CXTPControlSelector@ns_ROCX000015@@QAEXH@Z)

namespace ns_ROCX000015 {
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
