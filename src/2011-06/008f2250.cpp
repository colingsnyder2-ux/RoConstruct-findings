// roc 2011-06 008f2250  unit: CXTCaptionButton  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008f2250
//
// 008f2250  56                   push esi
// 008f2251  8bf1                 mov esi, ecx
// 008f2253  e8b8ffffff           call 0x8f2210
// 008f2258  8b4c2408             mov ecx, dword ptr [esp + 8]
// 008f225c  8b10                 mov edx, dword ptr [eax]
// 008f225e  8b5258               mov edx, dword ptr [edx + 0x58]
// 008f2261  56                   push esi
// 008f2262  51                   push ecx
// 008f2263  8bc8                 mov ecx, eax
// 008f2265  ffd2                 call edx
// 008f2267  5e                   pop esi
// 008f2268  c20400               ret 4
// copied from an identical function in another client (function ?OnClick@CXTCaptionButton@ns_ROCX00004c@@QAEXH@Z)

namespace ns_ROCX00004c {
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
