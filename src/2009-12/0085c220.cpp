// roc 2009-12 0085c220  unit: CXTPStatusBar::CStatusCmdUI  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0085c220
//
// 0085c220  56                   push esi
// 0085c221  8bf1                 mov esi, ecx
// 0085c223  e878e7ffff           call 0x85a9a0
// 0085c228  85c0                 test eax, eax
// 0085c22a  750b                 jne 0x85c237
// 0085c22c  8bce                 mov ecx, esi
// 0085c22e  e8fd7bf9ff           call 0x7f3e30
// 0085c233  5e                   pop esi
// 0085c234  c20800               ret 8
// 0085c237  8b442408             mov eax, dword ptr [esp + 8]
// 0085c23b  50                   push eax
// 0085c23c  e8efa10c00           call 0x926430
// 0085c241  85c0                 test eax, eax
// 0085c243  7408                 je 0x85c24d
// 0085c245  50                   push eax
// 0085c246  8bce                 mov ecx, esi
// 0085c248  e893f8ffff           call 0x85bae0
// 0085c24d  b801000000           mov eax, 1
// 0085c252  5e                   pop esi
// 0085c253  c20800               ret 8
// copied from an identical function in another client (function ?OnPrintClient@CXTPStatusBar@@QAEJIJ@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-internals Source/CommandBars/XTPStatusBar.cpp