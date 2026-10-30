// from server: 100% by tester
// roc 2008-06 00719d10  unit: CXTPNewToolbarDlg  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00719d10
//
// 00719d10  56                   push esi
// 00719d11  8bf1                 mov esi, ecx
// 00719d13  8d4e78               lea ecx, [esi + 0x78]
// 00719d16  ff15143f8000         call dword ptr [0x803f14]
// 00719d1c  8bce                 mov ecx, esi
// 00719d1e  e8af71f8ff           call 0x6a0ed2
// 00719d23  f644240801           test byte ptr [esp + 8], 1
// 00719d28  7409                 je 0x719d33
// 00719d2a  56                   push esi
// 00719d2b  e84a69f8ff           call 0x6a067a
// 00719d30  83c404               add esp, 4
// 00719d33  8bc6                 mov eax, esi
// 00719d35  5e                   pop esi
// 00719d36  c20400               ret 4
// library xtp-11.2.2-shared-mfc/Source\CommandBars\XTPCustomizeTools.cpp (function ??_GCXTPNewToolbarDlg@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPCustomizeTools.cpp
