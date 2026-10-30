// from server: 100% by auto
// roc 2008-06 006e64d0  unit: CXTPDockingPaneManager  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006e64d0
//
// 006e64d0  8b4138               mov eax, dword ptr [ecx + 0x38]
// 006e64d3  85c0                 test eax, eax
// 006e64d5  7408                 je 0x6e64df
// 006e64d7  50                   push eax
// 006e64d8  e801a7fbff           call 0x6a0bde
// 006e64dd  eb06                 jmp 0x6e64e5
// 006e64df  8b81cc000000         mov eax, dword ptr [ecx + 0xcc]
// 006e64e5  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006e64e9  8b542404             mov edx, dword ptr [esp + 4]
// 006e64ed  8b4020               mov eax, dword ptr [eax + 0x20]
// 006e64f0  51                   push ecx
// 006e64f1  52                   push edx
// 006e64f2  68ad2a0000           push 0x2aad
// 006e64f7  50                   push eax
// 006e64f8  ff15142e8000         call dword ptr [0x802e14]
// 006e64fe  c20800               ret 8
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneManager.cpp (function ?NotifyOwner@CXTPDockingPaneManager@@UAEJIJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneManager.cpp
