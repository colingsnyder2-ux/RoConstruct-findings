// roc 2009-12 008941f0  unit: CXTPMenuBar  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008941f0
//
// 008941f0  53                   push ebx
// 008941f1  8b5c2408             mov ebx, dword ptr [esp + 8]
// 008941f5  56                   push esi
// 008941f6  57                   push edi
// 008941f7  53                   push ebx
// 008941f8  8bf1                 mov esi, ecx
// 008941fa  e891feffff           call 0x894090
// 008941ff  8bf8                 mov edi, eax
// 00894201  85ff                 test edi, edi
// 00894203  7410                 je 0x894215
// 00894205  53                   push ebx
// 00894206  8d4e20               lea ecx, [esi + 0x20]
// 00894209  e8c2860100           call 0x8ac8d0
// 0089420e  8bcf                 mov ecx, edi
// 00894210  e8c7fbf5ff           call 0x7f3ddc
// 00894215  5f                   pop edi
// 00894216  5e                   pop esi
// 00894217  5b                   pop ebx
// 00894218  c20400               ret 4
// copied from an identical function in another client (function ?Remove@CXTPMenuBarMDIMenus@@QAEXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPMenuBar.cpp