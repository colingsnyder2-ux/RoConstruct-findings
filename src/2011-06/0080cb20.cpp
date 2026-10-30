// from server: 100% by auto
// roc 2011-06 0080cb20  unit: CPatchedControlComboBox  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0080cb20
//
// 0080cb20  8d442404             lea eax, [esp + 4]
// 0080cb24  50                   push eax
// 0080cb25  e806480400           call 0x851330
// 0080cb2a  85c0                 test eax, eax
// 0080cb2c  7408                 je 0x80cb36
// 0080cb2e  b857000780           mov eax, 0x80070057
// 0080cb33  c21400               ret 0x14
// 0080cb36  680817ac00           push 0xac1708
// 0080cb3b  ff15bc0aa400         call dword ptr [0xa40abc]
// 0080cb41  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0080cb45  8901                 mov dword ptr [ecx], eax
// 0080cb47  33c0                 xor eax, eax
// 0080cb49  c21400               ret 0x14
// library xtp-15.2.1/Source\CommandBars\XTPControl.cpp (function ?GetAccessibleDefaultAction@CXTPControl@@MAEJUtagVARIANT@@PAPA_W@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPControl.cpp
