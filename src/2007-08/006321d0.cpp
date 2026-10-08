// from server: 100% by auto
// roc 2007-08 006321d0  unit: MyXTPCommandBars  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006321d0
//
// 006321d0  8b4150               mov eax, dword ptr [ecx + 0x50]
// 006321d3  85c0                 test eax, eax
// 006321d5  7516                 jne 0x6321ed
// 006321d7  3905d8868c00         cmp dword ptr [0x8c86d8], eax
// 006321dd  7509                 jne 0x6321e8
// 006321df  50                   push eax
// 006321e0  e8cbba0000           call 0x63dcb0
// 006321e5  83c404               add esp, 4
// 006321e8  a1d8868c00           mov eax, dword ptr [0x8c86d8]
// 006321ed  c3                   ret 
// library xtp-11.2.2-vc8/Source\CommandBars\XTPCommandBars.cpp (function ?GetPaintManager@CXTPCommandBars@@QBEPAVCXTPPaintManager@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPCommandBars.cpp
