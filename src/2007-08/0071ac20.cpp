// from server: 100% by colin
// roc 2007-08 0071ac20  unit: CXTPRibbonSystemPopupBar  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0071ac20
//
// 0071ac20  56                   push esi
// 0071ac21  57                   push edi
// 0071ac22  8bf9                 mov edi, ecx
// 0071ac24  e887ffffff           call 0x71abb0
// 0071ac29  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0071ac2d  8bf0                 mov esi, eax
// 0071ac2f  8b06                 mov eax, dword ptr [esi]
// 0071ac31  8b90c8010000         mov edx, dword ptr [eax + 0x1c8]
// 0071ac37  51                   push ecx
// 0071ac38  57                   push edi
// 0071ac39  8bce                 mov ecx, esi
// 0071ac3b  ffd2                 call edx
// 0071ac3d  5f                   pop edi
// 0071ac3e  8bc6                 mov eax, esi
// 0071ac40  5e                   pop esi
// 0071ac41  c20400               ret 4

struct CXTPRibbonSystemPopupBar {
    void* m(void* arg);
};

extern "C" void* __fastcall sub_71ABB0(CXTPRibbonSystemPopupBar* self);

void* CXTPRibbonSystemPopupBar::m(void* arg)
{
    void* p = sub_71ABB0(this);
    void* vtable = *(void**)p;
    void (__thiscall* fn)(void*, void*, void*) = *(void (__thiscall**)(void*, void*, void*))((char*)vtable + 0x1c8);
    fn(p, this, arg);
    return p;
}
