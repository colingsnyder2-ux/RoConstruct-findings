// roc 2007-03 0066ab60  unit: seg_00660000  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0066ab60
//
// 0066ab60  56                   push esi
// 0066ab61  8bf1                 mov esi, ecx
// 0066ab63  8b4e04               mov ecx, dword ptr [esi + 4]
// 0066ab66  85c9                 test ecx, ecx
// 0066ab68  741a                 je 0x66ab84
// 0066ab6a  8b442408             mov eax, dword ptr [esp + 8]
// 0066ab6e  83f8ff               cmp eax, -1
// 0066ab71  7411                 je 0x66ab84
// 0066ab73  8b11                 mov edx, dword ptr [ecx]
// 0066ab75  50                   push eax
// 0066ab76  8b4238               mov eax, dword ptr [edx + 0x38]
// 0066ab79  ffd0                 call eax
// 0066ab7b  837e0cff             cmp dword ptr [esi + 0xc], -1
// 0066ab7f  7503                 jne 0x66ab84
// 0066ab81  89460c               mov dword ptr [esi + 0xc], eax
// 0066ab84  5e                   pop esi
// 0066ab85  c20400               ret 4
// copied from an identical function in another client (function ?SetValue@CXTPControlSelector@ns_ROCX000021@@QAEXH@Z)

namespace ns_ROCX000021 {
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
