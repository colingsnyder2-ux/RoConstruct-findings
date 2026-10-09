// from server: 100% by colin
// roc 2007-08 006fab40  unit: XTPPropertyGridPaintThemes::CXTPPropertyGridWhidbeyTheme  size: 67 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006fab40
//
// 006fab40  56                   push esi
// 006fab41  8bf1                 mov esi, ecx
// 006fab43  e838e8ffff           call 0x6f9380
// 006fab48  e823e4f6ff           call 0x668f70
// 006fab4d  6a0f                 push 0xf
// 006fab4f  8bc8                 mov ecx, eax
// 006fab51  e81adcf6ff           call 0x668770
// 006fab56  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 006fab59  894150               mov dword ptr [ecx + 0x50], eax
// 006fab5c  e80fe4f6ff           call 0x668f70
// 006fab61  6a12                 push 0x12
// 006fab63  8bc8                 mov ecx, eax
// 006fab65  e806dcf6ff           call 0x668770
// 006fab6a  8b5634               mov edx, dword ptr [esi + 0x34]
// 006fab6d  894268               mov dword ptr [edx + 0x68], eax
// 006fab70  e8fbe3f6ff           call 0x668f70
// 006fab75  6a39                 push 0x39
// 006fab77  8bc8                 mov ecx, eax
// 006fab79  e8f2dbf6ff           call 0x668770
// 006fab7e  89463c               mov dword ptr [esi + 0x3c], eax
// 006fab81  5e                   pop esi
// 006fab82  c3                   ret 

struct CXTPPropertyGridWhidbeyTheme {
    char pad[0x34];
    void* m_pPaintManager;
    char pad2[0x3c - 0x38];
    void* m_pField;
    void Init();
};

struct Helper {
    void* m();
    void* n(int);
};

extern "C" void __stdcall sub_6f9380();
extern "C" Helper* __stdcall sub_668f70();

void CXTPPropertyGridWhidbeyTheme::Init()
{
    sub_6f9380();
    Helper* h1 = sub_668f70();
    void* r1 = h1->n(0xf);
    *(void**)((char*)m_pPaintManager + 0x50) = r1;
    Helper* h2 = sub_668f70();
    void* r2 = h2->n(0x12);
    *(void**)((char*)m_pPaintManager + 0x68) = r2;
    Helper* h3 = sub_668f70();
    void* r3 = h3->n(0x39);
    m_pField = r3;
}
