// from server: 100% by colin
// roc 2007-08 006aae70  unit: CXTPRibbonBar  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006aae70
//
// 006aae70  56                   push esi
// 006aae71  57                   push edi
// 006aae72  8bf9                 mov edi, ecx
// 006aae74  e887ffffff           call 0x6aae00
// 006aae79  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006aae7d  8bf0                 mov esi, eax
// 006aae7f  8b06                 mov eax, dword ptr [esi]
// 006aae81  8b90c8010000         mov edx, dword ptr [eax + 0x1c8]
// 006aae87  51                   push ecx
// 006aae88  57                   push edi
// 006aae89  8bce                 mov ecx, esi
// 006aae8b  ffd2                 call edx
// 006aae8d  5f                   pop edi
// 006aae8e  8bc6                 mov eax, esi
// 006aae90  5e                   pop esi
// 006aae91  c20400               ret 4

struct CXTPRibbonBar;

struct CXTPRibbonBarVtbl {
    char pad[0x1c8];
    void* fn1c8;
};

struct CXTPRibbonBar {
    void* vtable;
    void* m1();
    CXTPRibbonBar* m2(void* arg);
};

extern "C" void* __stdcall sub_6aae00();

CXTPRibbonBar* CXTPRibbonBar::m2(void* arg)
{
    void* p = sub_6aae00();
    CXTPRibbonBar* self = (CXTPRibbonBar*)p;
    void* vt = self->vtable;
    void* fn = *(void**)((char*)vt + 0x1c8);
    typedef void (__thiscall *Fn)(CXTPRibbonBar*, void*, void*);
    ((Fn)fn)(self, this, arg);
    return self;
}
