// roc 2011-06 008a4e70  unit: CXTPMenuBar::CControlMDISysMenuPopup  size: 62 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008a4e70
//
// 008a4e70  56                   push esi
// 008a4e71  8bf1                 mov esi, ecx
// 008a4e73  8b8688010000         mov eax, dword ptr [esi + 0x188]
// 008a4e79  c7068c2fad00         mov dword ptr [esi], 0xad2f8c
// 008a4e7f  c746202c2fad00       mov dword ptr [esi + 0x20], 0xad2f2c
// 008a4e86  85c0                 test eax, eax
// 008a4e88  7407                 je 0x8a4e91
// 008a4e8a  50                   push eax
// 008a4e8b  ff15c81aa400         call dword ptr [0xa41ac8]
// 008a4e91  8bce                 mov ecx, esi
// 008a4e93  e868b6faff           call 0x850500
// 008a4e98  f644240801           test byte ptr [esp + 8], 1
// 008a4e9d  7409                 je 0x8a4ea8
// 008a4e9f  56                   push esi
// 008a4ea0  e8b351f6ff           call 0x80a058
// 008a4ea5  83c404               add esp, 4
// 008a4ea8  8bc6                 mov eax, esi
// 008a4eaa  5e                   pop esi
// 008a4eab  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPMenuBar.cpp (function ??_GCControlMDISysMenuPopup@CXTPMenuBar@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPMenuBar.cpp
