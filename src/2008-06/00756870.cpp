// roc 2008-06 00756870  unit: CXTPDockingPaneAutoHidePanel  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00756870
//
// 00756870  8b442404             mov eax, dword ptr [esp + 4]
// 00756874  83ec10               sub esp, 0x10
// 00756877  56                   push esi
// 00756878  6a00                 push 0
// 0075687a  6a00                 push 0
// 0075687c  8bf1                 mov esi, ecx
// 0075687e  50                   push eax
// 0075687f  8d4c2410             lea ecx, [esp + 0x10]
// 00756883  e80812faff           call 0x6f7a90
// 00756888  50                   push eax
// 00756889  6800000056           push 0x56000000
// 0075688e  6a00                 push 0
// 00756890  687c6b8500           push 0x856b7c
// 00756895  8bce                 mov ecx, esi
// 00756897  e8569ef4ff           call 0x6a06f2
// 0075689c  8b8eb4000000         mov ecx, dword ptr [esi + 0xb4]
// 007568a2  56                   push esi
// 007568a3  e872590600           call 0x7bc21a
// 007568a8  5e                   pop esi
// 007568a9  83c410               add esp, 0x10
// 007568ac  c20400               ret 4
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneAutoHidePanel.cpp (function ?Create@CXTPDockingPaneAutoHidePanel@@MAEXPAVCWnd@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneAutoHidePanel.cpp
