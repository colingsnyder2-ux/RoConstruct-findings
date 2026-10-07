// roc 2012-06 009a2ff0  unit: CXTPCommandBarKeyboardTip  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009a2ff0
//
// 009a2ff0  8b442404             mov eax, dword ptr [esp + 4]
// 009a2ff4  894154               mov dword ptr [ecx + 0x54], eax
// 009a2ff7  e884f8ffff           call 0x9a2880
// 009a2ffc  8bc8                 mov ecx, eax
// 009a2ffe  e88d7fffff           call 0x99af90
// 009a3003  c20400               ret 4
// library xtp-15.2.1/Source\CommandBars\XTPCommandBars.cpp (function ?SetImageManager@CXTPCommandBars@@QAEXPAVCXTPImageManager@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPCommandBars.cpp
