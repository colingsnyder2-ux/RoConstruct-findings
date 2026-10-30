// from server: 100% by auto
// roc 2012-06 00984dd0  unit: CPatchedControlComboBox  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00984dd0
//
// 00984dd0  8d442404             lea eax, [esp + 4]
// 00984dd4  50                   push eax
// 00984dd5  e8164a0400           call 0x9c97f0
// 00984dda  85c0                 test eax, eax
// 00984ddc  7408                 je 0x984de6
// 00984dde  b857000780           mov eax, 0x80070057
// 00984de3  c21400               ret 0x14
// 00984de6  68f0cdc000           push 0xc0cdf0
// 00984deb  ff15482bb200         call dword ptr [0xb22b48]
// 00984df1  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00984df5  8901                 mov dword ptr [ecx], eax
// 00984df7  33c0                 xor eax, eax
// 00984df9  c21400               ret 0x14
// library xtp-15.2.1/Source\CommandBars\XTPControl.cpp (function ?GetAccessibleDefaultAction@CXTPControl@@MAEJUtagVARIANT@@PAPA_W@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPControl.cpp
