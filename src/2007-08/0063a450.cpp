// from server: 100% by auto
// roc 2007-08 0063a450  unit: CPatchedControlComboBox  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0063a450
//
// 0063a450  8d442404             lea eax, [esp + 4]
// 0063a454  50                   push eax
// 0063a455  e8766f0300           call 0x6713d0
// 0063a45a  85c0                 test eax, eax
// 0063a45c  7408                 je 0x63a466
// 0063a45e  b857000780           mov eax, 0x80070057
// 0063a463  c21400               ret 0x14
// 0063a466  6874627c00           push 0x7c6274
// 0063a46b  ff15f4e97700         call dword ptr [0x77e9f4]
// 0063a471  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0063a475  8901                 mov dword ptr [ecx], eax
// 0063a477  33c0                 xor eax, eax
// 0063a479  c21400               ret 0x14
// library xtp-11.2.2-vc8/Source\CommandBars\XTPControl.cpp (function ?GetAccessibleDefaultAction@CXTPControl@@MAEJUtagVARIANT@@PAPA_W@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPControl.cpp
