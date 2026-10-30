// roc 2009-12 0086f120  unit: PAVCXTPCommandBar::?$CArray  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0086f120
//
// 0086f120  56                   push esi
// 0086f121  8bf1                 mov esi, ecx
// 0086f123  837e1000             cmp dword ptr [esi + 0x10], 0
// 0086f127  7e15                 jle 0x86f13e
// 0086f129  8b460c               mov eax, dword ptr [esi + 0xc]
// 0086f12c  8b08                 mov ecx, dword ptr [eax]
// 0086f12e  8b11                 mov edx, dword ptr [ecx]
// 0086f130  8b8288010000         mov eax, dword ptr [edx + 0x188]
// 0086f136  ffd0                 call eax
// 0086f138  837e1000             cmp dword ptr [esi + 0x10], 0
// 0086f13c  7feb                 jg 0x86f129
// 0086f13e  5e                   pop esi
// 0086f13f  c3                   ret 
// copied from an identical function in another client (function ?SendTrackLost@CXTPMouseManager@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPMouseManager.cpp