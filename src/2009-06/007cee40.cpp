// roc 2009-06 007cee40  unit: CXTPDockingPaneAutoHidePanel  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007cee40
//
// 007cee40  8b442404             mov eax, dword ptr [esp + 4]
// 007cee44  83ec10               sub esp, 0x10
// 007cee47  56                   push esi
// 007cee48  6a00                 push 0
// 007cee4a  6a00                 push 0
// 007cee4c  8bf1                 mov esi, ecx
// 007cee4e  50                   push eax
// 007cee4f  8d4c2410             lea ecx, [esp + 0x10]
// 007cee53  e8d815faff           call 0x770430
// 007cee58  50                   push eax
// 007cee59  6800000056           push 0x56000000
// 007cee5e  6a00                 push 0
// 007cee60  68d47b8f00           push 0x8f7bd4
// 007cee65  8bce                 mov ecx, esi
// 007cee67  e8389cf4ff           call 0x718aa4
// 007cee6c  8b8eb4000000         mov ecx, dword ptr [esi + 0xb4]
// 007cee72  56                   push esi
// 007cee73  e854aaf4ff           call 0x7198cc
// 007cee78  5e                   pop esi
// 007cee79  83c410               add esp, 0x10
// 007cee7c  c20400               ret 4
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneAutoHidePanel.cpp (function ?Create@CXTPDockingPaneAutoHidePanel@@MAEXPAVCWnd@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneAutoHidePanel.cpp
