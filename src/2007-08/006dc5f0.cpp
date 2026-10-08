// from server: 100% by auto
// roc 2007-08 006dc5f0  unit: CXTPDockingPaneWindowSelect  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006dc5f0
//
// 006dc5f0  8b442404             mov eax, dword ptr [esp + 4]
// 006dc5f4  398110010000         cmp dword ptr [ecx + 0x110], eax
// 006dc5fa  7414                 je 0x6dc610
// 006dc5fc  6a00                 push 0
// 006dc5fe  898110010000         mov dword ptr [ecx + 0x110], eax
// 006dc604  8b4120               mov eax, dword ptr [ecx + 0x20]
// 006dc607  6a00                 push 0
// 006dc609  50                   push eax
// 006dc60a  ff15dcec7700         call dword ptr [0x77ecdc]
// 006dc610  c20400               ret 4
// library xtp-11.2.2-vc8/Source\DockingPane\XTPDockingPaneKeyboardHook.cpp (function ?Select@CXTPDockingPaneWindowSelect@@QAEXPAUCItem@1@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/DockingPane/XTPDockingPaneKeyboardHook.cpp
