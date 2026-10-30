// roc 2009-12 0086f8e0  unit: CXTPNewToolbarDlg  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0086f8e0
//
// 0086f8e0  56                   push esi
// 0086f8e1  8bf1                 mov esi, ecx
// 0086f8e3  8d4e78               lea ecx, [esi + 0x78]
// 0086f8e6  ff15c0de9800         call dword ptr [0x98dec0]
// 0086f8ec  8bce                 mov ecx, esi
// 0086f8ee  e89d48f8ff           call 0x7f4190
// 0086f8f3  f644240801           test byte ptr [esp + 8], 1
// 0086f8f8  7409                 je 0x86f903
// 0086f8fa  56                   push esi
// 0086f8fb  e85a3ff8ff           call 0x7f385a
// 0086f900  83c404               add esp, 4
// 0086f903  8bc6                 mov eax, esi
// 0086f905  5e                   pop esi
// 0086f906  c20400               ret 4
// copied from an identical function in another client (function ??_GCXTPNewToolbarDlg@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPCustomizeTools.cpp