// roc 2008-06 007077e0  unit: CXTPDockingPane  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007077e0
//
// 007077e0  8d442404             lea eax, [esp + 4]
// 007077e4  50                   push eax
// 007077e5  e8b60afeff           call 0x6e82a0
// 007077ea  85c0                 test eax, eax
// 007077ec  7408                 je 0x7077f6
// 007077ee  b857000780           mov eax, 0x80070057
// 007077f3  c21400               ret 0x14
// 007077f6  6814c08500           push 0x85c014
// 007077fb  ff1500298000         call dword ptr [0x802900]
// 00707801  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00707805  8901                 mov dword ptr [ecx], eax
// 00707807  33c0                 xor eax, eax
// 00707809  c21400               ret 0x14
// library xtp-11.2.2/Source\DockingPane\XTPDockingPane.cpp (function ?GetAccessibleDefaultAction@CXTPDockingPane@@MAEJUtagVARIANT@@PAPA_W@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPane.cpp
