// from server: 81% by colin
// roc 2007-08 006940f0  unit: CXTPStatusBar  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006940f0
//
// 006940f0  8b542404             mov edx, dword ptr [esp + 4]
// 006940f4  56                   push esi
// 006940f5  8bf1                 mov esi, ecx
// 006940f7  8b4e3c               mov ecx, dword ptr [esi + 0x3c]
// 006940fa  8bc1                 mov eax, ecx
// 006940fc  0b44240c             or eax, dword ptr [esp + 0xc]
// 00694100  f7d2                 not edx
// 00694102  23c2                 and eax, edx
// 00694104  3bc8                 cmp ecx, eax
// 00694106  7428                 je 0x694130
// 00694108  8b4e5c               mov ecx, dword ptr [esi + 0x5c]
// 0069410b  85c9                 test ecx, ecx
// 0069410d  89463c               mov dword ptr [esi + 0x3c], eax
// 00694110  741e                 je 0x694130
// 00694112  8b01                 mov eax, dword ptr [ecx]
// 00694114  8b5068               mov edx, dword ptr [eax + 0x68]
// 00694117  ffd2                 call edx
// 00694119  8b4e5c               mov ecx, dword ptr [esi + 0x5c]
// 0069411c  85c9                 test ecx, ecx
// 0069411e  7409                 je 0x694129
// 00694120  8b01                 mov eax, dword ptr [ecx]
// 00694122  8b5004               mov edx, dword ptr [eax + 4]
// 00694125  6a01                 push 1
// 00694127  ffd2                 call edx
// 00694129  c7465c00000000       mov dword ptr [esi + 0x5c], 0
// 00694130  5e                   pop esi
// 00694131  c20800               ret 8

struct CXTPStatusBar {
    char pad[0x3c];
    unsigned long m_dwStyle;
    char pad2[0x1c];
    void* m_pFrameHelper;
    void SetStyle(unsigned long dwRemove, unsigned long dwAdd);
};

void CXTPStatusBar::SetStyle(unsigned long dwRemove, unsigned long dwAdd)
{
    unsigned long dwStyle = m_dwStyle;
    unsigned long dwNewStyle = (dwStyle | dwAdd) & ~dwRemove;
    if (dwStyle != dwNewStyle)
    {
        void* pHelper = m_pFrameHelper;
        m_dwStyle = dwNewStyle;
        if (pHelper != 0)
        {
            void** vtbl = *(void***)pHelper;
            typedef void (__stdcall *Fn0)(void*);
            ((Fn0)vtbl[0x68 / 4])(pHelper);
            void* pHelper2 = m_pFrameHelper;
            if (pHelper2 != 0)
            {
                void** vtbl2 = *(void***)pHelper2;
                typedef void (__stdcall *Fn1)(void*, int);
                ((Fn1)vtbl2[1])(pHelper2, 1);
            }
            m_pFrameHelper = 0;
        }
    }
}
