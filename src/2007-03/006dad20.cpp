// roc 2007-03 006dad20  unit: seg_006d0000  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006dad20
//
// 006dad20  56                   push esi
// 006dad21  8bf1                 mov esi, ecx
// 006dad23  e8b8e9ffff           call 0x6d96e0
// 006dad28  e873a2f7ff           call 0x654fa0
// 006dad2d  6a0f                 push 0xf
// 006dad2f  8bc8                 mov ecx, eax
// 006dad31  e87a9af7ff           call 0x6547b0
// 006dad36  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 006dad39  894150               mov dword ptr [ecx + 0x50], eax
// 006dad3c  5e                   pop esi
// 006dad3d  c3                   ret 
// copied from an identical function in another client (function ?RefreshMetrics@CXTPPropertyGridCoolTheme@ns_ROCX00007e@@QAEXXZ)

namespace ns_ROCX00007e {
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
}
