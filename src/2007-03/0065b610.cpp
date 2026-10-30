// roc 2007-03 0065b610  unit: seg_00650000  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0065b610
//
// 0065b610  8b4138               mov eax, dword ptr [ecx + 0x38]
// 0065b613  85c0                 test eax, eax
// 0065b615  7408                 je 0x65b61f
// 0065b617  50                   push eax
// 0065b618  e83130fcff           call 0x61e64e
// 0065b61d  eb06                 jmp 0x65b625
// 0065b61f  8b81cc000000         mov eax, dword ptr [ecx + 0xcc]
// 0065b625  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0065b629  8b542404             mov edx, dword ptr [esp + 4]
// 0065b62d  8b4020               mov eax, dword ptr [eax + 0x20]
// 0065b630  51                   push ecx
// 0065b631  52                   push edx
// 0065b632  68ad2a0000           push 0x2aad
// 0065b637  50                   push eax
// 0065b638  ff1550ee7700         call dword ptr [0x77ee50]
// 0065b63e  c20800               ret 8
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneManager.cpp (function ?NotifyOwner@CXTPDockingPaneManager@@UAEJIJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneManager.cpp
