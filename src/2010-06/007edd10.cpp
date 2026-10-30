// roc 2010-06 007edd10  unit: CXTPDockingPaneManager  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007edd10
//
// 007edd10  8b4138               mov eax, dword ptr [ecx + 0x38]
// 007edd13  85c0                 test eax, eax
// 007edd15  7408                 je 0x7edd1f
// 007edd17  50                   push eax
// 007edd18  e84d9ffbff           call 0x7a7c6a
// 007edd1d  eb06                 jmp 0x7edd25
// 007edd1f  8b81cc000000         mov eax, dword ptr [ecx + 0xcc]
// 007edd25  8b4c2408             mov ecx, dword ptr [esp + 8]
// 007edd29  8b542404             mov edx, dword ptr [esp + 4]
// 007edd2d  8b4020               mov eax, dword ptr [eax + 0x20]
// 007edd30  51                   push ecx
// 007edd31  52                   push edx
// 007edd32  68ad2a0000           push 0x2aad
// 007edd37  50                   push eax
// 007edd38  ff1554ba9e00         call dword ptr [0x9eba54]
// 007edd3e  c20800               ret 8
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneManager.cpp (function ?NotifyOwner@CXTPDockingPaneManager@@UAEJIJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneManager.cpp
