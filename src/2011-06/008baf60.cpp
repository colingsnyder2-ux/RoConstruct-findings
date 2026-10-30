// roc 2011-06 008baf60  unit: CXTPDockingPaneAutoHidePanel  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008baf60
//
// 008baf60  8b442404             mov eax, dword ptr [esp + 4]
// 008baf64  83ec10               sub esp, 0x10
// 008baf67  56                   push esi
// 008baf68  6a00                 push 0
// 008baf6a  6a00                 push 0
// 008baf6c  8bf1                 mov esi, ecx
// 008baf6e  50                   push eax
// 008baf6f  8d4c2410             lea ecx, [esp + 0x10]
// 008baf73  e8781dfaff           call 0x85ccf0
// 008baf78  50                   push eax
// 008baf79  6800000056           push 0x56000000
// 008baf7e  6a00                 push 0
// 008baf80  68847fac00           push 0xac7f84
// 008baf85  8bce                 mov ecx, esi
// 008baf87  e83ef1f4ff           call 0x80a0ca
// 008baf8c  8b8eb4000000         mov ecx, dword ptr [esi + 0xb4]
// 008baf92  56                   push esi
// 008baf93  e896fff4ff           call 0x80af2e
// 008baf98  5e                   pop esi
// 008baf99  83c410               add esp, 0x10
// 008baf9c  c20400               ret 4
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneAutoHidePanel.cpp (function ?Create@CXTPDockingPaneAutoHidePanel@@MAEXPAVCWnd@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneAutoHidePanel.cpp
