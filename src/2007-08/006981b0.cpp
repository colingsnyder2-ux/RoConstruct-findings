// from server: 88% by colin
// roc 2007-08 006981b0  unit: CPropertyGridItemBrickColor  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006981b0
//
// 006981b0  56                   push esi
// 006981b1  8bf1                 mov esi, ecx
// 006981b3  e882010a00           call 0x73833a
// 006981b8  8d4e20               lea ecx, [esi + 0x20]
// 006981bb  c70604167d00         mov dword ptr [esi], 0x7d1604
// 006981c1  ff15acdd7700         call dword ptr [0x77ddac]
// 006981c7  33c0                 xor eax, eax
// 006981c9  89462c               mov dword ptr [esi + 0x2c], eax
// 006981cc  894624               mov dword ptr [esi + 0x24], eax
// 006981cf  894630               mov dword ptr [esi + 0x30], eax
// 006981d2  c74628ffffffff       mov dword ptr [esi + 0x28], 0xffffffff
// 006981d9  8bc6                 mov eax, esi
// 006981db  5e                   pop esi
// 006981dc  c3                   ret 

struct CPropertyGridItemBrickColor {
    char pad0[0x20];
    int m_20;
    int m_24;
    int m_28;
    int m_2c;
    int m_30;
    CPropertyGridItemBrickColor* f();
};

extern "C" void __stdcall sub_73833a();
extern "C" void __stdcall sub_77ddac();

CPropertyGridItemBrickColor* CPropertyGridItemBrickColor::f()
{
    sub_73833a();
    *(int*)this = 0x7d1604;
    sub_77ddac();
    m_2c = 0;
    m_24 = 0;
    m_30 = 0;
    m_28 = -1;
    return this;
}
