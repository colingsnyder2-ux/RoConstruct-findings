// from server: 100% by colin
// roc 2007-08 00714960  unit: CXTCaptionButton  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00714960
//
// 00714960  56                   push esi
// 00714961  8bf1                 mov esi, ecx
// 00714963  e828c6ffff           call 0x710f90
// 00714968  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0071496c  8b10                 mov edx, dword ptr [eax]
// 0071496e  8b5258               mov edx, dword ptr [edx + 0x58]
// 00714971  56                   push esi
// 00714972  51                   push ecx
// 00714973  8bc8                 mov ecx, eax
// 00714975  ffd2                 call edx
// 00714977  5e                   pop esi
// 00714978  c20400               ret 4

struct CXTCaptionButton {
    void OnClick(int);
};

extern "C" void* __fastcall sub_710F90(CXTCaptionButton* self);

void CXTCaptionButton::OnClick(int arg)
{
    void* site = sub_710F90(this);
    void** vtbl = *(void***)site;
    void (__thiscall *fn)(void*, int, CXTCaptionButton*) = (void (__thiscall *)(void*, int, CXTCaptionButton*))vtbl[0x58 / 4];
    fn(site, arg, this);
}
