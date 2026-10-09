// roc 2008-06 00792220  unit: CXTCaptionButton  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00792220
//
// 00792220  56                   push esi
// 00792221  8bf1                 mov esi, ecx
// 00792223  e8b8c4ffff           call 0x78e6e0
// 00792228  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0079222c  8b10                 mov edx, dword ptr [eax]
// 0079222e  8b5258               mov edx, dword ptr [edx + 0x58]
// 00792231  56                   push esi
// 00792232  51                   push ecx
// 00792233  8bc8                 mov ecx, eax
// 00792235  ffd2                 call edx
// 00792237  5e                   pop esi
// 00792238  c20400               ret 4
// copied from an identical function in another client (function ?OnClick@CXTCaptionButton@ns_ROCX00001b@@QAEXH@Z)

namespace ns_ROCX00001b {
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
