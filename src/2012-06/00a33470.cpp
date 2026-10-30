// roc 2012-06 00a33470  unit: CXTPDockingPaneAutoHidePanel  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a33470
//
// 00a33470  8b442404             mov eax, dword ptr [esp + 4]
// 00a33474  83ec10               sub esp, 0x10
// 00a33477  56                   push esi
// 00a33478  6a00                 push 0
// 00a3347a  6a00                 push 0
// 00a3347c  8bf1                 mov esi, ecx
// 00a3347e  50                   push eax
// 00a3347f  8d4c2410             lea ecx, [esp + 0x10]
// 00a33483  e8781cfaff           call 0x9d5100
// 00a33488  50                   push eax
// 00a33489  6800000056           push 0x56000000
// 00a3348e  6a00                 push 0
// 00a33490  687c36c100           push 0xc1367c
// 00a33495  8bce                 mov ecx, esi
// 00a33497  e8eaecf4ff           call 0x982186
// 00a3349c  8b8eb4000000         mov ecx, dword ptr [esi + 0xb4]
// 00a334a2  56                   push esi
// 00a334a3  e818fbf4ff           call 0x982fc0
// 00a334a8  5e                   pop esi
// 00a334a9  83c410               add esp, 0x10
// 00a334ac  c20400               ret 4
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneAutoHidePanel.cpp (function ?Create@CXTPDockingPaneAutoHidePanel@@MAEXPAVCWnd@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneAutoHidePanel.cpp
