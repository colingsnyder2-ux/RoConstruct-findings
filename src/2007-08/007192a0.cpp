// from server: 100% by auto
// roc 2007-08 007192a0  unit: CXTPRibbonBar  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 007192a0
//
// 007192a0  83797000             cmp dword ptr [ecx + 0x70], 0
// 007192a4  750c                 jne 0x7192b2
// 007192a6  83797400             cmp dword ptr [ecx + 0x74], 0
// 007192aa  7406                 je 0x7192b2
// 007192ac  b801000000           mov eax, 1
// 007192b1  c3                   ret 
// 007192b2  33c0                 xor eax, eax
// 007192b4  c3                   ret 
// library xtp-11.2.2-vc8/Source\Ribbon\XTPRibbonGroup.cpp (function ?IsOptionButtonVisible@CXTPRibbonGroup@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Ribbon/XTPRibbonGroup.cpp
