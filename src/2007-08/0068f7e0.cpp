// from server: 100% by auto
// roc 2007-08 0068f7e0  unit: CXTPDockingPane  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0068f7e0
//
// 0068f7e0  8d442404             lea eax, [esp + 4]
// 0068f7e4  50                   push eax
// 0068f7e5  e8e61bfeff           call 0x6713d0
// 0068f7ea  85c0                 test eax, eax
// 0068f7ec  7408                 je 0x68f7f6
// 0068f7ee  b857000780           mov eax, 0x80070057
// 0068f7f3  c21400               ret 0x14
// 0068f7f6  6884057d00           push 0x7d0584
// 0068f7fb  ff15f4e97700         call dword ptr [0x77e9f4]
// 0068f801  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0068f805  8901                 mov dword ptr [ecx], eax
// 0068f807  33c0                 xor eax, eax
// 0068f809  c21400               ret 0x14
// library xtp-11.2.2-vc8/Source\DockingPane\XTPDockingPane.cpp (function ?GetAccessibleDefaultAction@CXTPDockingPane@@MAEJUtagVARIANT@@PAPA_W@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/DockingPane/XTPDockingPane.cpp
