// roc 2009-12 00893b30  unit: CXTPMenuBar::CControlMDISysMenuPopup  size: 62 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00893b30
//
// 00893b30  56                   push esi
// 00893b31  8bf1                 mov esi, ecx
// 00893b33  8b8688010000         mov eax, dword ptr [esi + 0x188]
// 00893b39  c7068c42a000         mov dword ptr [esi], 0xa0428c
// 00893b3f  c746202c42a000       mov dword ptr [esi + 0x20], 0xa0422c
// 00893b46  85c0                 test eax, eax
// 00893b48  7407                 je 0x893b51
// 00893b4a  50                   push eax
// 00893b4b  ff15f8c99800         call dword ptr [0x98c9f8]
// 00893b51  8bce                 mov ecx, esi
// 00893b53  e80870faff           call 0x83ab60
// 00893b58  f644240801           test byte ptr [esp + 8], 1
// 00893b5d  7409                 je 0x893b68
// 00893b5f  56                   push esi
// 00893b60  e8f5fcf5ff           call 0x7f385a
// 00893b65  83c404               add esp, 4
// 00893b68  8bc6                 mov eax, esi
// 00893b6a  5e                   pop esi
// 00893b6b  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPMenuBar.cpp (function ??_GCControlMDISysMenuPopup@CXTPMenuBar@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPMenuBar.cpp
