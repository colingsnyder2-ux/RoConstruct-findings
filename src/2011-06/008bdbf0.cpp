// from server: 100% by auto
// roc 2011-06 008bdbf0  unit: CXTPDockingPaneWindowSelect  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008bdbf0
//
// 008bdbf0  8b442404             mov eax, dword ptr [esp + 4]
// 008bdbf4  398124010000         cmp dword ptr [ecx + 0x124], eax
// 008bdbfa  7414                 je 0x8bdc10
// 008bdbfc  6a00                 push 0
// 008bdbfe  898124010000         mov dword ptr [ecx + 0x124], eax
// 008bdc04  8b4120               mov eax, dword ptr [ecx + 0x20]
// 008bdc07  6a00                 push 0
// 008bdc09  50                   push eax
// 008bdc0a  ff15ec19a400         call dword ptr [0xa419ec]
// 008bdc10  c20400               ret 4
// library xtp-15.2.1/Source\DockingPane\XTPDockingPaneKeyboardHook.cpp (function ?Select@CXTPDockingPaneWindowSelect@@QAEXPAUCItem@1@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/DockingPane/XTPDockingPaneKeyboardHook.cpp
