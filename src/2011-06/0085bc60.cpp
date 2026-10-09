// roc 2011-06 0085bc60  unit: CXTPControlSelector  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0085bc60
//
// 0085bc60  56                   push esi
// 0085bc61  8bf1                 mov esi, ecx
// 0085bc63  8b4e04               mov ecx, dword ptr [esi + 4]
// 0085bc66  85c9                 test ecx, ecx
// 0085bc68  741a                 je 0x85bc84
// 0085bc6a  8b442408             mov eax, dword ptr [esp + 8]
// 0085bc6e  83f8ff               cmp eax, -1
// 0085bc71  7411                 je 0x85bc84
// 0085bc73  8b11                 mov edx, dword ptr [ecx]
// 0085bc75  50                   push eax
// 0085bc76  8b4238               mov eax, dword ptr [edx + 0x38]
// 0085bc79  ffd0                 call eax
// 0085bc7b  837e0cff             cmp dword ptr [esi + 0xc], -1
// 0085bc7f  7503                 jne 0x85bc84
// 0085bc81  89460c               mov dword ptr [esi + 0xc], eax
// 0085bc84  5e                   pop esi
// 0085bc85  c20400               ret 4
// copied from an identical function in another client (function ?SetValue@CXTPControlSelector@ns_ROCX000002@@QAEXH@Z)

namespace ns_ROCX000002 {
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
