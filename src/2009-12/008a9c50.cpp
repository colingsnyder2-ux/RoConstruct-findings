// roc 2009-12 008a9c50  unit: CXTPDockingPaneAutoHidePanel  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008a9c50
//
// 008a9c50  8b442404             mov eax, dword ptr [esp + 4]
// 008a9c54  83ec10               sub esp, 0x10
// 008a9c57  56                   push esi
// 008a9c58  6a00                 push 0
// 008a9c5a  6a00                 push 0
// 008a9c5c  8bf1                 mov esi, ecx
// 008a9c5e  50                   push eax
// 008a9c5f  8d4c2410             lea ecx, [esp + 0x10]
// 008a9c63  e8c815faff           call 0x84b230
// 008a9c68  50                   push eax
// 008a9c69  6800000056           push 0x56000000
// 008a9c6e  6a00                 push 0
// 008a9c70  687c809f00           push 0x9f807c
// 008a9c75  8bce                 mov ecx, esi
// 008a9c77  e8509cf4ff           call 0x7f38cc
// 008a9c7c  8b8eb4000000         mov ecx, dword ptr [esi + 0xb4]
// 008a9c82  56                   push esi
// 008a9c83  e878aaf4ff           call 0x7f4700
// 008a9c88  5e                   pop esi
// 008a9c89  83c410               add esp, 0x10
// 008a9c8c  c20400               ret 4
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneAutoHidePanel.cpp (function ?Create@CXTPDockingPaneAutoHidePanel@@MAEXPAVCWnd@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneAutoHidePanel.cpp
