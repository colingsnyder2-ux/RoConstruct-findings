// roc 2009-12 00869330  unit: CXTPPropertyGridView  size: 102 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00869330
//
// 00869330  83ec08               sub esp, 8
// 00869333  837c241001           cmp dword ptr [esp + 0x10], 1
// 00869338  56                   push esi
// 00869339  8bf1                 mov esi, ecx
// 0086933b  754b                 jne 0x869388
// 0086933d  8d442404             lea eax, [esp + 4]
// 00869341  50                   push eax
// 00869342  ff1538cc9800         call dword ptr [0x98cc38]
// 00869348  8b5620               mov edx, dword ptr [esi + 0x20]
// 0086934b  8d4c2404             lea ecx, [esp + 4]
// 0086934f  51                   push ecx
// 00869350  52                   push edx
// 00869351  ff1534cc9800         call dword ptr [0x98cc34]
// 00869357  8b442408             mov eax, dword ptr [esp + 8]
// 0086935b  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0086935f  50                   push eax
// 00869360  51                   push ecx
// 00869361  8bce                 mov ecx, esi
// 00869363  e878ffffff           call 0x8692e0
// 00869368  3d00010000           cmp eax, 0x100
// 0086936d  7519                 jne 0x869388
// 0086936f  8b96d4000000         mov edx, dword ptr [esi + 0xd4]
// 00869375  52                   push edx
// 00869376  ff1520ca9800         call dword ptr [0x98ca20]
// 0086937c  b801000000           mov eax, 1
// 00869381  5e                   pop esi
// 00869382  83c408               add esp, 8
// 00869385  c20c00               ret 0xc
// 00869388  8bce                 mov ecx, esi
// 0086938a  e8a1aaf8ff           call 0x7f3e30
// 0086938f  5e                   pop esi
// 00869390  83c408               add esp, 8
// 00869393  c20c00               ret 0xc
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridView.cpp (function ?OnSetCursor@CXTPPropertyGridView@@IAEHPAVCWnd@@II@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridView.cpp
