// from server: 100% by atomic.potato
// roc 2007-08 0067a390  unit: CXTPPopupBar  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0067a390
//
// 0067a390  56                   push esi
// 0067a391  57                   push edi
// 0067a392  8bf9                 mov edi, ecx
// 0067a394  e887ffffff           call 0x67a320
// 0067a399  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0067a39d  8bf0                 mov esi, eax
// 0067a39f  8b06                 mov eax, dword ptr [esi]
// 0067a3a1  8b90c8010000         mov edx, dword ptr [eax + 0x1c8]
// 0067a3a7  51                   push ecx
// 0067a3a8  57                   push edi
// 0067a3a9  8bce                 mov ecx, esi
// 0067a3ab  ffd2                 call edx
// 0067a3ad  5f                   pop edi
// 0067a3ae  8bc6                 mov eax, esi
// 0067a3b0  5e                   pop esi
// 0067a3b1  c20400               ret 4

struct CXTPPopupBar {
    void* GetSite();
    void* GetPopupSite(int);
};

void* CXTPPopupBar::GetPopupSite(int n)
{
    void* p = GetSite();
    void* vtable = *(void**)p;
    void (__thiscall* fn)(void*, void*, int) = *(void (__thiscall**)(void*, void*, int))((char*)vtable + 0x1c8);
    fn(p, this, n);
    return p;
}
