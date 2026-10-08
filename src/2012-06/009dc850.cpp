// roc 2012-06 009dc850  unit: CXTPTabClientWnd  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009dc850
//
// 009dc850  8b818c000000         mov eax, dword ptr [ecx + 0x8c]
// 009dc856  8b4c2404             mov ecx, dword ptr [esp + 4]
// 009dc85a  8988dc000000         mov dword ptr [eax + 0xdc], ecx
// 009dc860  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPTabClientWnd.cpp (function ?EnableToolTips@CXTPTabClientWnd@@QAEXW4XTPTabToolTipBehaviour@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPTabClientWnd.cpp
