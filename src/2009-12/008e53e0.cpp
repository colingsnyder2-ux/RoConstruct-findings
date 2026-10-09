// roc 2009-12 008e53e0  unit: CXTCaptionButton  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008e53e0
//
// 008e53e0  56                   push esi
// 008e53e1  8bf1                 mov esi, ecx
// 008e53e3  e888c4ffff           call 0x8e1870
// 008e53e8  8b4c2408             mov ecx, dword ptr [esp + 8]
// 008e53ec  8b10                 mov edx, dword ptr [eax]
// 008e53ee  8b5258               mov edx, dword ptr [edx + 0x58]
// 008e53f1  56                   push esi
// 008e53f2  51                   push ecx
// 008e53f3  8bc8                 mov ecx, eax
// 008e53f5  ffd2                 call edx
// 008e53f7  5e                   pop esi
// 008e53f8  c20400               ret 4
// copied from an identical function in another client (function ?OnClick@CXTCaptionButton@ns_ROCX000001@@QAEXH@Z)

namespace ns_ROCX000001 {
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
