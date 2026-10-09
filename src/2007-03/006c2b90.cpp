// roc 2007-03 006c2b90  unit: seg_006c0000  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006c2b90
//
// 006c2b90  8b442404             mov eax, dword ptr [esp + 4]
// 006c2b94  83ec10               sub esp, 0x10
// 006c2b97  56                   push esi
// 006c2b98  6a00                 push 0
// 006c2b9a  6a00                 push 0
// 006c2b9c  8bf1                 mov esi, ecx
// 006c2b9e  50                   push eax
// 006c2b9f  8d4c2410             lea ecx, [esp + 0x10]
// 006c2ba3  e8e88bfaff           call 0x66b790
// 006c2ba8  50                   push eax
// 006c2ba9  6800000056           push 0x56000000
// 006c2bae  6a00                 push 0
// 006c2bb0  68ec837c00           push 0x7c83ec
// 006c2bb5  8bce                 mov ecx, esi
// 006c2bb7  e8b2b5f5ff           call 0x61e16e
// 006c2bbc  8b8eb4000000         mov ecx, dword ptr [esi + 0xb4]
// 006c2bc2  56                   push esi
// 006c2bc3  e8bc800700           call 0x73ac84
// 006c2bc8  5e                   pop esi
// 006c2bc9  83c410               add esp, 0x10
// 006c2bcc  c20400               ret 4
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneAutoHidePanel.cpp (function ?Create@CXTPDockingPaneAutoHidePanel@@MAEXPAVCWnd@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneAutoHidePanel.cpp
