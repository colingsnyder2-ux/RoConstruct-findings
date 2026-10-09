// roc 2010-06 008996f0  unit: CXTCaptionButton  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008996f0
//
// 008996f0  56                   push esi
// 008996f1  8bf1                 mov esi, ecx
// 008996f3  e86877f8ff           call 0x820e60
// 008996f8  8b4c2408             mov ecx, dword ptr [esp + 8]
// 008996fc  8b10                 mov edx, dword ptr [eax]
// 008996fe  8b5258               mov edx, dword ptr [edx + 0x58]
// 00899701  56                   push esi
// 00899702  51                   push ecx
// 00899703  8bc8                 mov ecx, eax
// 00899705  ffd2                 call edx
// 00899707  5e                   pop esi
// 00899708  c20400               ret 4
// copied from an identical function in another client (function ?OnClick@CXTCaptionButton@ns_ROCX00007a@@QAEXH@Z)

namespace ns_ROCX00007a {
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
}
