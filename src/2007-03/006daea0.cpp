// roc 2007-03 006daea0  unit: seg_006d0000  size: 67 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006daea0
//
// 006daea0  56                   push esi
// 006daea1  8bf1                 mov esi, ecx
// 006daea3  e838e8ffff           call 0x6d96e0
// 006daea8  e8f3a0f7ff           call 0x654fa0
// 006daead  6a0f                 push 0xf
// 006daeaf  8bc8                 mov ecx, eax
// 006daeb1  e8fa98f7ff           call 0x6547b0
// 006daeb6  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 006daeb9  894150               mov dword ptr [ecx + 0x50], eax
// 006daebc  e8dfa0f7ff           call 0x654fa0
// 006daec1  6a12                 push 0x12
// 006daec3  8bc8                 mov ecx, eax
// 006daec5  e8e698f7ff           call 0x6547b0
// 006daeca  8b5634               mov edx, dword ptr [esi + 0x34]
// 006daecd  894268               mov dword ptr [edx + 0x68], eax
// 006daed0  e8cba0f7ff           call 0x654fa0
// 006daed5  6a39                 push 0x39
// 006daed7  8bc8                 mov ecx, eax
// 006daed9  e8d298f7ff           call 0x6547b0
// 006daede  89463c               mov dword ptr [esi + 0x3c], eax
// 006daee1  5e                   pop esi
// 006daee2  c3                   ret 
// copied from an identical function in another client (function ?Init@CXTPPropertyGridWhidbeyTheme@ns_ROCX00006e@@QAEXXZ)

namespace ns_ROCX00006e {
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
}
