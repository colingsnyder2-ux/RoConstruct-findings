// roc 2007-08 00676190  unit: CXTPCustomizeCommandsPage  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00676190
//
// 00676190  56                   push esi
// 00676191  8bf1                 mov esi, ecx
// 00676193  8b8638010000         mov eax, dword ptr [esi + 0x138]
// 00676199  8b5620               mov edx, dword ptr [esi + 0x20]
// 0067619c  8b88b8000000         mov ecx, dword ptr [eax + 0xb8]
// 006761a2  52                   push edx
// 006761a3  e858d7fbff           call 0x633900
// 006761a8  8bc8                 mov ecx, eax
// 006761aa  e8e1d80200           call 0x6a3a90
// 006761af  8bce                 mov ecx, esi
// 006761b1  5e                   pop esi
// 006761b2  e995a7fbff           jmp 0x63094c
// library xtp-11.2.2-vc8/Source\CommandBars\XTPCustomizeCommandsPage.cpp (function ?OnDestroy@CXTPCustomizeCommandsPage@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPCustomizeCommandsPage.cpp
