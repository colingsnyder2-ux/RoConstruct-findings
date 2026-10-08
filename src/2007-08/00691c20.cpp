// from server: 80% by colin
// roc 2007-08 00691c20  unit: CXTThemeManagerStyle  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00691c20
//
// 00691c20  56                   push esi
// 00691c21  8bf1                 mov esi, ecx
// 00691c23  56                   push esi
// 00691c24  c70680087d00         mov dword ptr [esi], 0x7d0880
// 00691c2a  e811fdffff           call 0x691940
// 00691c2f  8bc8                 mov ecx, eax
// 00691c31  83c108               add ecx, 8
// 00691c34  e8f96e0a00           call 0x738b32
// 00691c39  837e0400             cmp dword ptr [esi + 4], 0
// 00691c3d  7417                 je 0x691c56
// 00691c3f  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 00691c42  85c9                 test ecx, ecx
// 00691c44  7410                 je 0x691c56
// 00691c46  8b01                 mov eax, dword ptr [ecx]
// 00691c48  8b5004               mov edx, dword ptr [eax + 4]
// 00691c4b  6a01                 push 1
// 00691c4d  ffd2                 call edx
// 00691c4f  c7460c00000000       mov dword ptr [esi + 0xc], 0
// 00691c56  5e                   pop esi
// 00691c57  c3                   ret 

struct CXTThemeManagerStyle {
    void *m_vtbl;
    int m_field4;
    char pad8[4];
    void *m_fieldC;
    void Destroy();
};

extern "C" void *__stdcall sub_691940(void *p);
extern "C" void __stdcall sub_738B32(void *p);

void CXTThemeManagerStyle::Destroy()
{
    m_vtbl = (void *)0x7d0880;
    void *p = sub_691940(this);
    sub_738B32((char *)p + 8);
    if (m_field4 != 0) {
        if (m_fieldC != 0) {
            void **vt = *(void ***)m_fieldC;
            void (*fn)(void *, int) = (void (*)(void *, int))vt[1];
            fn(m_fieldC, 1);
            m_fieldC = 0;
        }
    }
}
