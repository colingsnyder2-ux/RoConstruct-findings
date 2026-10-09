// roc 2007-03 00705c40  unit: seg_00700000  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00705c40
//
// 00705c40  56                   push esi
// 00705c41  8bf1                 mov esi, ecx
// 00705c43  e8d8c6ffff           call 0x702320
// 00705c48  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00705c4c  8b10                 mov edx, dword ptr [eax]
// 00705c4e  8b5258               mov edx, dword ptr [edx + 0x58]
// 00705c51  56                   push esi
// 00705c52  51                   push ecx
// 00705c53  8bc8                 mov ecx, eax
// 00705c55  ffd2                 call edx
// 00705c57  5e                   pop esi
// 00705c58  c20400               ret 4
// copied from an identical function in another client (function ?OnClick@CXTCaptionButton@ns_ROCX000007@@QAEXH@Z)

namespace ns_ROCX000007 {
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
