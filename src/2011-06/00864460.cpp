// roc 2011-06 00864460  unit: CXTPTabClientWnd  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00864460
//
// 00864460  8b818c000000         mov eax, dword ptr [ecx + 0x8c]
// 00864466  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0086446a  8988dc000000         mov dword ptr [eax + 0xdc], ecx
// 00864470  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPTabClientWnd.cpp (function ?EnableToolTips@CXTPTabClientWnd@@QAEXW4XTPTabToolTipBehaviour@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPTabClientWnd.cpp
