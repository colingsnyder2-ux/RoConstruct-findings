// from server: 100% by colin
// roc 2007-08 006fa9a0  unit: XTPPropertyGridPaintThemes::CXTPPropertyGridCoolTheme  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006fa9a0
//
// 006fa9a0  56                   push esi
// 006fa9a1  8bf1                 mov esi, ecx
// 006fa9a3  e8d8e9ffff           call 0x6f9380
// 006fa9a8  e8c3e5f6ff           call 0x668f70
// 006fa9ad  6a0f                 push 0xf
// 006fa9af  8bc8                 mov ecx, eax
// 006fa9b1  e8baddf6ff           call 0x668770
// 006fa9b6  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 006fa9b9  894150               mov dword ptr [ecx + 0x50], eax
// 006fa9bc  5e                   pop esi
// 006fa9bd  c3                   ret 

struct CXTPPropertyGridCoolTheme {
    void RefreshMetrics();
    char pad[0x34];
    void* m_pPaintManager;
};

struct CObject {
    void* GetSomething(int n);
};

extern "C" void* __stdcall sub_668F70();
extern "C" void __stdcall sub_6F9380();

void CXTPPropertyGridCoolTheme::RefreshMetrics()
{
    sub_6F9380();
    CObject* p = (CObject*)sub_668F70();
    void* r = p->GetSomething(0xf);
    *(void**)((char*)m_pPaintManager + 0x50) = r;
}
