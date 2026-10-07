// roc 2007-08 0069c280  unit: CXTPPropertyGridView  size: 102 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0069c280
//
// 0069c280  83ec08               sub esp, 8
// 0069c283  837c241001           cmp dword ptr [esp + 0x10], 1
// 0069c288  56                   push esi
// 0069c289  8bf1                 mov esi, ecx
// 0069c28b  754b                 jne 0x69c2d8
// 0069c28d  8d442404             lea eax, [esp + 4]
// 0069c291  50                   push eax
// 0069c292  ff1554ec7700         call dword ptr [0x77ec54]
// 0069c298  8b5620               mov edx, dword ptr [esi + 0x20]
// 0069c29b  8d4c2404             lea ecx, [esp + 4]
// 0069c29f  51                   push ecx
// 0069c2a0  52                   push edx
// 0069c2a1  ff1550ec7700         call dword ptr [0x77ec50]
// 0069c2a7  8b442408             mov eax, dword ptr [esp + 8]
// 0069c2ab  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0069c2af  50                   push eax
// 0069c2b0  51                   push ecx
// 0069c2b1  8bce                 mov ecx, esi
// 0069c2b3  e878ffffff           call 0x69c230
// 0069c2b8  3d00010000           cmp eax, 0x100
// 0069c2bd  7519                 jne 0x69c2d8
// 0069c2bf  8b96d4000000         mov edx, dword ptr [esi + 0xd4]
// 0069c2c5  52                   push edx
// 0069c2c6  ff1560ed7700         call dword ptr [0x77ed60]
// 0069c2cc  b801000000           mov eax, 1
// 0069c2d1  5e                   pop esi
// 0069c2d2  83c408               add esp, 8
// 0069c2d5  c20c00               ret 0xc
// 0069c2d8  8bce                 mov ecx, esi
// 0069c2da  e85f3ff9ff           call 0x63023e
// 0069c2df  5e                   pop esi
// 0069c2e0  83c408               add esp, 8
// 0069c2e3  c20c00               ret 0xc
// library xtp-11.2.2-vc8/Source\PropertyGrid\XTPPropertyGridView.cpp (function ?OnSetCursor@CXTPPropertyGridView@@IAEHPAVCWnd@@II@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/PropertyGrid/XTPPropertyGridView.cpp
