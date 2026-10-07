// roc 2008-06 00720ed0  unit: CXTPMenuBar::CControlMDISysMenuPopup  size: 62 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00720ed0
//
// 00720ed0  56                   push esi
// 00720ed1  8bf1                 mov esi, ecx
// 00720ed3  8b8688010000         mov eax, dword ptr [esi + 0x188]
// 00720ed9  c706dc068600         mov dword ptr [esi], 0x8606dc
// 00720edf  c746207c068600       mov dword ptr [esi + 0x20], 0x86067c
// 00720ee6  85c0                 test eax, eax
// 00720ee8  7407                 je 0x720ef1
// 00720eea  50                   push eax
// 00720eeb  ff15d42c8000         call dword ptr [0x802cd4]
// 00720ef1  8bce                 mov ecx, esi
// 00720ef3  e87865fcff           call 0x6e7470
// 00720ef8  f644240801           test byte ptr [esp + 8], 1
// 00720efd  7409                 je 0x720f08
// 00720eff  56                   push esi
// 00720f00  e875f7f7ff           call 0x6a067a
// 00720f05  83c404               add esp, 4
// 00720f08  8bc6                 mov eax, esi
// 00720f0a  5e                   pop esi
// 00720f0b  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPMenuBar.cpp (function ??_GCControlMDISysMenuPopup@CXTPMenuBar@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPMenuBar.cpp
