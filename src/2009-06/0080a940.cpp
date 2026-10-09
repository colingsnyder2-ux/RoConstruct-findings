// roc 2009-06 0080a940  unit: CXTCaptionButton  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0080a940
//
// 0080a940  56                   push esi
// 0080a941  8bf1                 mov esi, ecx
// 0080a943  e82868f8ff           call 0x791170
// 0080a948  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0080a94c  8b10                 mov edx, dword ptr [eax]
// 0080a94e  8b5258               mov edx, dword ptr [edx + 0x58]
// 0080a951  56                   push esi
// 0080a952  51                   push ecx
// 0080a953  8bc8                 mov ecx, eax
// 0080a955  ffd2                 call edx
// 0080a957  5e                   pop esi
// 0080a958  c20400               ret 4
// copied from an identical function in another client (function ?OnClick@CXTCaptionButton@ns_ROCX000070@@QAEXH@Z)

namespace ns_ROCX000070 {
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
