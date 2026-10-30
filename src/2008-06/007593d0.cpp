// from server: 100% by auto
// roc 2008-06 007593d0  unit: CXTPDockingPaneWindowSelect  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007593d0
//
// 007593d0  8b442404             mov eax, dword ptr [esp + 4]
// 007593d4  398124010000         cmp dword ptr [ecx + 0x124], eax
// 007593da  7414                 je 0x7593f0
// 007593dc  6a00                 push 0
// 007593de  898124010000         mov dword ptr [ecx + 0x124], eax
// 007593e4  8b4120               mov eax, dword ptr [ecx + 0x20]
// 007593e7  6a00                 push 0
// 007593e9  50                   push eax
// 007593ea  ff15182e8000         call dword ptr [0x802e18]
// 007593f0  c20400               ret 4
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneKeyboardHook.cpp (function ?Select@CXTPDockingPaneWindowSelect@@QAEXPAUCItem@1@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneKeyboardHook.cpp
