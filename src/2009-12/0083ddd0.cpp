// roc 2009-12 0083ddd0  unit: CXTPCustomizeSheet  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0083ddd0
//
// 0083ddd0  8b81b8000000         mov eax, dword ptr [ecx + 0xb8]
// 0083ddd6  8b4858               mov ecx, dword ptr [eax + 0x58]
// 0083ddd9  85c9                 test ecx, ecx
// 0083dddb  7405                 je 0x83dde2
// 0083dddd  e9fe82fbff           jmp 0x7f60e0
// 0083dde2  c3                   ret 
// copied from an identical function in another client (function ?OnCustomizeReset@CXTPCustomizeSheet@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-internals Source\CommandBars\XTPCustomizeSheet.cpp