// from server: 100% by auto
// roc 2007-08 006d9a10  unit: CXTPDockingPaneAutoHidePanel  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006d9a10
//
// 006d9a10  8b442404             mov eax, dword ptr [esp + 4]
// 006d9a14  83ec10               sub esp, 0x10
// 006d9a17  56                   push esi
// 006d9a18  6a00                 push 0
// 006d9a1a  6a00                 push 0
// 006d9a1c  8bf1                 mov esi, ecx
// 006d9a1e  50                   push eax
// 006d9a1f  8d4c2410             lea ecx, [esp + 0x10]
// 006d9a23  e83865faff           call 0x67ff60
// 006d9a28  50                   push eax
// 006d9a29  6800000056           push 0x56000000
// 006d9a2e  6a00                 push 0
// 006d9a30  68a4b37c00           push 0x7cb3a4
// 006d9a35  8bce                 mov ecx, esi
// 006d9a37  e89e62f5ff           call 0x62fcda
// 006d9a3c  8b8eb4000000         mov ecx, dword ptr [esi + 0xb4]
// 006d9a42  56                   push esi
// 006d9a43  e8f6ea0500           call 0x73853e
// 006d9a48  5e                   pop esi
// 006d9a49  83c410               add esp, 0x10
// 006d9a4c  c20400               ret 4
// library xtp-11.2.2-vc8/Source\DockingPane\XTPDockingPaneAutoHidePanel.cpp (function ?Create@CXTPDockingPaneAutoHidePanel@@MAEXPAVCWnd@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/DockingPane/XTPDockingPaneAutoHidePanel.cpp
