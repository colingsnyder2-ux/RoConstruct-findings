// roc 2011-06 0084f560  unit: CXTPDockingPaneManager  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0084f560
//
// 0084f560  8b4138               mov eax, dword ptr [ecx + 0x38]
// 0084f563  85c0                 test eax, eax
// 0084f565  7408                 je 0x84f56f
// 0084f567  50                   push eax
// 0084f568  e8bbadfbff           call 0x80a328
// 0084f56d  eb06                 jmp 0x84f575
// 0084f56f  8b81cc000000         mov eax, dword ptr [ecx + 0xcc]
// 0084f575  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0084f579  8b542404             mov edx, dword ptr [esp + 4]
// 0084f57d  8b4020               mov eax, dword ptr [eax + 0x20]
// 0084f580  51                   push ecx
// 0084f581  52                   push edx
// 0084f582  68ad2a0000           push 0x2aad
// 0084f587  50                   push eax
// 0084f588  ff15c019a400         call dword ptr [0xa419c0]
// 0084f58e  c20800               ret 8
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneManager.cpp (function ?NotifyOwner@CXTPDockingPaneManager@@UAEJIJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneManager.cpp
