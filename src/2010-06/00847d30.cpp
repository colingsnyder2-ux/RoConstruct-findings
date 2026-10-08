// roc 2010-06 00847d30  unit: CXTPMenuBar::CControlMDISysMenuPopup  size: 62 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00847d30
//
// 00847d30  56                   push esi
// 00847d31  8bf1                 mov esi, ecx
// 00847d33  8b8688010000         mov eax, dword ptr [esi + 0x188]
// 00847d39  c7066c85a600         mov dword ptr [esi], 0xa6856c
// 00847d3f  c746200c85a600       mov dword ptr [esi + 0x20], 0xa6850c
// 00847d46  85c0                 test eax, eax
// 00847d48  7407                 je 0x847d51
// 00847d4a  50                   push eax
// 00847d4b  ff1584bb9e00         call dword ptr [0x9ebb84]
// 00847d51  8bce                 mov ecx, esi
// 00847d53  e8586ffaff           call 0x7eecb0
// 00847d58  f644240801           test byte ptr [esp + 8], 1
// 00847d5d  7409                 je 0x847d68
// 00847d5f  56                   push esi
// 00847d60  e835fcf5ff           call 0x7a799a
// 00847d65  83c404               add esp, 4
// 00847d68  8bc6                 mov eax, esi
// 00847d6a  5e                   pop esi
// 00847d6b  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPMenuBar.cpp (function ??_GCControlMDISysMenuPopup@CXTPMenuBar@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPMenuBar.cpp
