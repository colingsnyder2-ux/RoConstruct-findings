// from server: 100% by auto
// roc 2012-06 00a360f0  unit: CXTPDockingPaneWindowSelect  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a360f0
//
// 00a360f0  8b442404             mov eax, dword ptr [esp + 4]
// 00a360f4  398124010000         cmp dword ptr [ecx + 0x124], eax
// 00a360fa  7414                 je 0xa36110
// 00a360fc  6a00                 push 0
// 00a360fe  898124010000         mov dword ptr [ecx + 0x124], eax
// 00a36104  8b4120               mov eax, dword ptr [ecx + 0x20]
// 00a36107  6a00                 push 0
// 00a36109  50                   push eax
// 00a3610a  ff15ec3bb200         call dword ptr [0xb23bec]
// 00a36110  c20400               ret 4
// library xtp-15.2.1/Source\DockingPane\XTPDockingPaneKeyboardHook.cpp (function ?Select@CXTPDockingPaneWindowSelect@@QAEXPAUCItem@1@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/DockingPane/XTPDockingPaneKeyboardHook.cpp
