// roc 2008-06 006ab670  unit: CPatchedControlComboBox  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006ab670
//
// 006ab670  8d442404             lea eax, [esp + 4]
// 006ab674  50                   push eax
// 006ab675  e826cc0300           call 0x6e82a0
// 006ab67a  85c0                 test eax, eax
// 006ab67c  7408                 je 0x6ab686
// 006ab67e  b857000780           mov eax, 0x80070057
// 006ab683  c21400               ret 0x14
// 006ab686  68a4168500           push 0x8516a4
// 006ab68b  ff1500298000         call dword ptr [0x802900]
// 006ab691  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006ab695  8901                 mov dword ptr [ecx], eax
// 006ab697  33c0                 xor eax, eax
// 006ab699  c21400               ret 0x14
// library xtp-11.2.2/Source\CommandBars\XTPControl.cpp (function ?GetAccessibleDefaultAction@CXTPControl@@MAEJUtagVARIANT@@PAPA_W@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControl.cpp
