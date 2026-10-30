// roc 2009-12 0085a9e0  unit: CXTPStatusBar  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0085a9e0
//
// 0085a9e0  56                   push esi
// 0085a9e1  8bf1                 mov esi, ecx
// 0085a9e3  e8b8ffffff           call 0x85a9a0
// 0085a9e8  85c0                 test eax, eax
// 0085a9ea  750b                 jne 0x85a9f7
// 0085a9ec  8bce                 mov ecx, esi
// 0085a9ee  e83d94f9ff           call 0x7f3e30
// 0085a9f3  5e                   pop esi
// 0085a9f4  c20400               ret 4
// 0085a9f7  b801000000           mov eax, 1
// 0085a9fc  5e                   pop esi
// 0085a9fd  c20400               ret 4
// copied from an identical function in another client (function ?OnEraseBkgnd@CXTPStatusBar@@QAEHPAVCDC@@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-internals Source/CommandBars/XTPStatusBar.cpp