// roc 2009-06 0076f420  unit: CXTPControlSelector  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0076f420
//
// 0076f420  56                   push esi
// 0076f421  8bf1                 mov esi, ecx
// 0076f423  8b4e04               mov ecx, dword ptr [esi + 4]
// 0076f426  85c9                 test ecx, ecx
// 0076f428  741a                 je 0x76f444
// 0076f42a  8b442408             mov eax, dword ptr [esp + 8]
// 0076f42e  83f8ff               cmp eax, -1
// 0076f431  7411                 je 0x76f444
// 0076f433  8b11                 mov edx, dword ptr [ecx]
// 0076f435  50                   push eax
// 0076f436  8b4238               mov eax, dword ptr [edx + 0x38]
// 0076f439  ffd0                 call eax
// 0076f43b  837e0cff             cmp dword ptr [esi + 0xc], -1
// 0076f43f  7503                 jne 0x76f444
// 0076f441  89460c               mov dword ptr [esi + 0xc], eax
// 0076f444  5e                   pop esi
// 0076f445  c20400               ret 4
// copied from an identical function in another client (function ?SetValue@CXTPControlSelector@ns_ROCX000049@@QAEXH@Z)

namespace ns_ROCX000049 {
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
