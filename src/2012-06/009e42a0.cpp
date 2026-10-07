// roc 2012-06 009e42a0  unit: CXTPDockingPane  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009e42a0
//
// 009e42a0  8d442404             lea eax, [esp + 4]
// 009e42a4  50                   push eax
// 009e42a5  e84655feff           call 0x9c97f0
// 009e42aa  85c0                 test eax, eax
// 009e42ac  7408                 je 0x9e42b6
// 009e42ae  b857000780           mov eax, 0x80070057
// 009e42b3  c21400               ret 0x14
// 009e42b6  684475c100           push 0xc17544
// 009e42bb  ff15482bb200         call dword ptr [0xb22b48]
// 009e42c1  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 009e42c5  8901                 mov dword ptr [ecx], eax
// 009e42c7  33c0                 xor eax, eax
// 009e42c9  c21400               ret 0x14
// library xtp-15.2.1/Source\DockingPane\XTPDockingPane.cpp (function ?GetAccessibleDefaultAction@CXTPDockingPane@@MAEJUtagVARIANT@@PAPA_W@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/DockingPane/XTPDockingPane.cpp
