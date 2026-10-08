// from server: 87% by colin
// roc 2007-08 0067d7f0  unit: CXTPControlToolbars::CXTPControlToolbar  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0067d7f0
//
// 0067d7f0  56                   push esi
// 0067d7f1  57                   push edi
// 0067d7f2  8bf9                 mov edi, ecx
// 0067d7f4  8b8ffc000000         mov ecx, dword ptr [edi + 0xfc]
// 0067d7fa  e88161fcff           call 0x643980
// 0067d7ff  8bf0                 mov esi, eax
// 0067d801  8bce                 mov ecx, esi
// 0067d803  e86864fbff           call 0x633c70
// 0067d808  85f6                 test esi, esi
// 0067d80a  740b                 je 0x67d817
// 0067d80c  8b477c               mov eax, dword ptr [edi + 0x7c]
// 0067d80f  50                   push eax
// 0067d810  8bce                 mov ecx, esi
// 0067d812  e82951fbff           call 0x632940
// 0067d817  5f                   pop edi
// 0067d818  5e                   pop esi
// 0067d819  c3                   ret 

struct CXTPControlToolbar {
    void Refresh();
};

extern "C" void* __fastcall sub_643980(void*);
extern "C" void __fastcall sub_633C70(void*);
extern "C" void __fastcall sub_632940(void*, void*);

void CXTPControlToolbar::Refresh() {
    void* p = sub_643980(*(void**)((char*)this + 0xfc));
    sub_633C70(p);
    if (p != 0) {
        sub_632940(p, *(void**)((char*)this + 0x7c));
    }
}
