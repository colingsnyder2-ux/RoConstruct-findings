// roc 2009-12 0085c100  unit: CXTPStatusBar::CStatusCmdUI  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0085c100
//
// 0085c100  8bd1                 mov edx, ecx
// 0085c102  56                   push esi
// 0085c103  8b7214               mov esi, dword ptr [edx + 0x14]
// 0085c106  85f6                 test esi, esi
// 0085c108  7428                 je 0x85c132
// 0085c10a  8b4208               mov eax, dword ptr [edx + 8]
// 0085c10d  50                   push eax
// 0085c10e  8bce                 mov ecx, esi
// 0085c110  e8cbf2ffff           call 0x85b3e0
// 0085c115  25fffdffff           and eax, 0xfffffdff
// 0085c11a  837c240800           cmp dword ptr [esp + 8], 0
// 0085c11f  7405                 je 0x85c126
// 0085c121  0d00020000           or eax, 0x200
// 0085c126  8b4a08               mov ecx, dword ptr [edx + 8]
// 0085c129  50                   push eax
// 0085c12a  51                   push ecx
// 0085c12b  8bce                 mov ecx, esi
// 0085c12d  e89efeffff           call 0x85bfd0
// 0085c132  5e                   pop esi
// 0085c133  c20400               ret 4
// copied from an identical function in another client (function ?SetCheck@CStatusCmdUI@CXTPStatusBar@@UAEXH@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-internals Source/CommandBars/XTPStatusBar.cpp