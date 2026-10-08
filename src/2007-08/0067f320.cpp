// from server: 100% by colin
// roc 2007-08 0067f320  unit: CXTPControlSelector  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0067f320
//
// 0067f320  56                   push esi
// 0067f321  8bf1                 mov esi, ecx
// 0067f323  8b4e04               mov ecx, dword ptr [esi + 4]
// 0067f326  85c9                 test ecx, ecx
// 0067f328  741a                 je 0x67f344
// 0067f32a  8b442408             mov eax, dword ptr [esp + 8]
// 0067f32e  83f8ff               cmp eax, -1
// 0067f331  7411                 je 0x67f344
// 0067f333  8b11                 mov edx, dword ptr [ecx]
// 0067f335  50                   push eax
// 0067f336  8b4238               mov eax, dword ptr [edx + 0x38]
// 0067f339  ffd0                 call eax
// 0067f33b  837e0cff             cmp dword ptr [esi + 0xc], -1
// 0067f33f  7503                 jne 0x67f344
// 0067f341  89460c               mov dword ptr [esi + 0xc], eax
// 0067f344  5e                   pop esi
// 0067f345  c20400               ret 4

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
