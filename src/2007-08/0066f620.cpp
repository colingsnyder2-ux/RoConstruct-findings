// roc 2007-08 0066f620  unit: CXTPDockingPaneManager  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0066f620
//
// 0066f620  8b4138               mov eax, dword ptr [ecx + 0x38]
// 0066f623  85c0                 test eax, eax
// 0066f625  7408                 je 0x66f62f
// 0066f627  50                   push eax
// 0066f628  e8930bfcff           call 0x6301c0
// 0066f62d  eb06                 jmp 0x66f635
// 0066f62f  8b81cc000000         mov eax, dword ptr [ecx + 0xcc]
// 0066f635  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0066f639  8b542404             mov edx, dword ptr [esp + 4]
// 0066f63d  8b4020               mov eax, dword ptr [eax + 0x20]
// 0066f640  51                   push ecx
// 0066f641  52                   push edx
// 0066f642  68ad2a0000           push 0x2aad
// 0066f647  50                   push eax
// 0066f648  ff15d8ec7700         call dword ptr [0x77ecd8]
// 0066f64e  c20800               ret 8
// library xtp-11.2.2-vc8/Source\DockingPane\XTPDockingPaneManager.cpp (function ?NotifyOwner@CXTPDockingPaneManager@@UAEJIJ@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/DockingPane/XTPDockingPaneManager.cpp
