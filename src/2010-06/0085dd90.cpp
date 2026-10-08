// roc 2010-06 0085dd90  unit: CXTPDockingPaneAutoHidePanel  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0085dd90
//
// 0085dd90  8b442404             mov eax, dword ptr [esp + 4]
// 0085dd94  83ec10               sub esp, 0x10
// 0085dd97  56                   push esi
// 0085dd98  6a00                 push 0
// 0085dd9a  6a00                 push 0
// 0085dd9c  8bf1                 mov esi, ecx
// 0085dd9e  50                   push eax
// 0085dd9f  8d4c2410             lea ecx, [esp + 0x10]
// 0085dda3  e8c814faff           call 0x7ff270
// 0085dda8  50                   push eax
// 0085dda9  6800000056           push 0x56000000
// 0085ddae  6a00                 push 0
// 0085ddb0  683cc3a500           push 0xa5c33c
// 0085ddb5  8bce                 mov ecx, esi
// 0085ddb7  e8509cf4ff           call 0x7a7a0c
// 0085ddbc  8b8eb4000000         mov ecx, dword ptr [esi + 0xb4]
// 0085ddc2  56                   push esi
// 0085ddc3  e872aaf4ff           call 0x7a883a
// 0085ddc8  5e                   pop esi
// 0085ddc9  83c410               add esp, 0x10
// 0085ddcc  c20400               ret 4
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneAutoHidePanel.cpp (function ?Create@CXTPDockingPaneAutoHidePanel@@MAEXPAVCWnd@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneAutoHidePanel.cpp
