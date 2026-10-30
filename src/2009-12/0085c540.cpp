// roc 2009-12 0085c540  unit: CXTPStatusBar::CStatusCmdUI  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0085c540
//
// 0085c540  8bc1                 mov eax, ecx
// 0085c542  8b4814               mov ecx, dword ptr [eax + 0x14]
// 0085c545  c7401801000000       mov dword ptr [eax + 0x18], 1
// 0085c54c  85c9                 test ecx, ecx
// 0085c54e  7414                 je 0x85c564
// 0085c550  8b4008               mov eax, dword ptr [eax + 8]
// 0085c553  50                   push eax
// 0085c554  e8a7edffff           call 0x85b300
// 0085c559  85c0                 test eax, eax
// 0085c55b  7407                 je 0x85c564
// 0085c55d  8bc8                 mov ecx, eax
// 0085c55f  e91cfeffff           jmp 0x85c380
// 0085c564  c20400               ret 4
// copied from an identical function in another client (function ?Enable@CStatusCmdUI@CXTPStatusBar@@UAEXH@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-internals Source/CommandBars/XTPStatusBar.cpp