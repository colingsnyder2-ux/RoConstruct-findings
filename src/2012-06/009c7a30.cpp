// roc 2012-06 009c7a30  unit: CXTPDockingPaneManager  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009c7a30
//
// 009c7a30  8b4138               mov eax, dword ptr [ecx + 0x38]
// 009c7a33  85c0                 test eax, eax
// 009c7a35  7408                 je 0x9c7a3f
// 009c7a37  50                   push eax
// 009c7a38  e829acfbff           call 0x982666
// 009c7a3d  eb06                 jmp 0x9c7a45
// 009c7a3f  8b81cc000000         mov eax, dword ptr [ecx + 0xcc]
// 009c7a45  8b4c2408             mov ecx, dword ptr [esp + 8]
// 009c7a49  8b542404             mov edx, dword ptr [esp + 4]
// 009c7a4d  8b4020               mov eax, dword ptr [eax + 0x20]
// 009c7a50  51                   push ecx
// 009c7a51  52                   push edx
// 009c7a52  68ad2a0000           push 0x2aad
// 009c7a57  50                   push eax
// 009c7a58  ff15043cb200         call dword ptr [0xb23c04]
// 009c7a5e  c20800               ret 8
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneManager.cpp (function ?NotifyOwner@CXTPDockingPaneManager@@UAEJIJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneManager.cpp
