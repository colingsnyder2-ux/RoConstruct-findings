// roc 2009-06 0075edf0  unit: CXTPDockingPaneManager  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0075edf0
//
// 0075edf0  8b4138               mov eax, dword ptr [ecx + 0x38]
// 0075edf3  85c0                 test eax, eax
// 0075edf5  7408                 je 0x75edff
// 0075edf7  50                   push eax
// 0075edf8  e8059ffbff           call 0x718d02
// 0075edfd  eb06                 jmp 0x75ee05
// 0075edff  8b81cc000000         mov eax, dword ptr [ecx + 0xcc]
// 0075ee05  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0075ee09  8b542404             mov edx, dword ptr [esp + 4]
// 0075ee0d  8b4020               mov eax, dword ptr [eax + 0x20]
// 0075ee10  51                   push ecx
// 0075ee11  52                   push edx
// 0075ee12  68ad2a0000           push 0x2aad
// 0075ee17  50                   push eax
// 0075ee18  ff1590ee8900         call dword ptr [0x89ee90]
// 0075ee1e  c20800               ret 8
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneManager.cpp (function ?NotifyOwner@CXTPDockingPaneManager@@UAEJIJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneManager.cpp
