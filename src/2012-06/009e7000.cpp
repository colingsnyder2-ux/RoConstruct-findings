// roc 2012-06 009e7000  unit: CXTPStatusBar  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009e7000
//
// 009e7000  83792000             cmp dword ptr [ecx + 0x20], 0
// 009e7004  7420                 je 0x9e7026
// 009e7006  8b442404             mov eax, dword ptr [esp + 4]
// 009e700a  33442408             xor eax, dword ptr [esp + 8]
// 009e700e  a9000f0000           test eax, 0xf00
// 009e7013  7411                 je 0x9e7026
// 009e7015  6a33                 push 0x33
// 009e7017  6a00                 push 0
// 009e7019  6a00                 push 0
// 009e701b  6a00                 push 0
// 009e701d  6a00                 push 0
// 009e701f  6a00                 push 0
// 009e7021  e8aeb4f9ff           call 0x9824d4
// 009e7026  c20800               ret 8
// library xtp-15.2.1/Source\CommandBars\XTPStatusBar.cpp (function ?OnBarStyleChange@CXTPStatusBar@@MAEXKK@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPStatusBar.cpp
