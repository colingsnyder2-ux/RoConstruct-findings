// roc 2007-03 006c55c0  unit: seg_006c0000  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006c55c0
//
// 006c55c0  8b442404             mov eax, dword ptr [esp + 4]
// 006c55c4  398110010000         cmp dword ptr [ecx + 0x110], eax
// 006c55ca  7414                 je 0x6c55e0
// 006c55cc  6a00                 push 0
// 006c55ce  898110010000         mov dword ptr [ecx + 0x110], eax
// 006c55d4  8b4120               mov eax, dword ptr [ecx + 0x20]
// 006c55d7  6a00                 push 0
// 006c55d9  50                   push eax
// 006c55da  ff1554ee7700         call dword ptr [0x77ee54]
// 006c55e0  c20400               ret 4
// library xtp-11.2.2-vc8/Source\DockingPane\XTPDockingPaneKeyboardHook.cpp (function ?Select@CXTPDockingPaneWindowSelect@@QAEXPAUCItem@1@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/DockingPane/XTPDockingPaneKeyboardHook.cpp
