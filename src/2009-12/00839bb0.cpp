// roc 2009-12 00839bb0  unit: CXTPDockingPaneManager  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00839bb0
//
// 00839bb0  8b4138               mov eax, dword ptr [ecx + 0x38]
// 00839bb3  85c0                 test eax, eax
// 00839bb5  7408                 je 0x839bbf
// 00839bb7  50                   push eax
// 00839bb8  e86d9ffbff           call 0x7f3b2a
// 00839bbd  eb06                 jmp 0x839bc5
// 00839bbf  8b81cc000000         mov eax, dword ptr [ecx + 0xcc]
// 00839bc5  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00839bc9  8b542404             mov edx, dword ptr [esp + 4]
// 00839bcd  8b4020               mov eax, dword ptr [eax + 0x20]
// 00839bd0  51                   push ecx
// 00839bd1  52                   push edx
// 00839bd2  68ad2a0000           push 0x2aad
// 00839bd7  50                   push eax
// 00839bd8  ff15c4cb9800         call dword ptr [0x98cbc4]
// 00839bde  c20800               ret 8
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneManager.cpp (function ?NotifyOwner@CXTPDockingPaneManager@@UAEJIJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneManager.cpp
