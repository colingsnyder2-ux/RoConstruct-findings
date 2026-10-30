// roc 2012-06 00a37770  unit: CXTPDockingPaneWindowSelect  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a37770
//
// 00a37770  56                   push esi
// 00a37771  8bf1                 mov esi, ecx
// 00a37773  6a0a                 push 0xa
// 00a37775  8d4e08               lea ecx, [esi + 8]
// 00a37778  c706bc10c200         mov dword ptr [esi], 0xc210bc
// 00a3777e  e86deaffff           call 0xa361f0
// 00a37783  33c0                 xor eax, eax
// 00a37785  894628               mov dword ptr [esi + 0x28], eax
// 00a37788  894604               mov dword ptr [esi + 4], eax
// 00a3778b  894624               mov dword ptr [esi + 0x24], eax
// 00a3778e  8bc6                 mov eax, esi
// 00a37790  5e                   pop esi
// 00a37791  c3                   ret 
// library xtp-15.2.1-shared-mfc/Source\DockingPane\XTPDockingPaneKeyboardHook.cpp (function ??0CXTPDockingPaneKeyboardHook@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-15.2.1-shared-mfc Source/DockingPane/XTPDockingPaneKeyboardHook.cpp
