// roc 2010-06 00808f70  unit: CXTPTabClientWnd  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00808f70
//
// 00808f70  8b818c000000         mov eax, dword ptr [ecx + 0x8c]
// 00808f76  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00808f7a  8988dc000000         mov dword ptr [eax + 0xdc], ecx
// 00808f80  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPTabClientWnd.cpp (function ?EnableToolTips@CXTPTabClientWnd@@QAEXW4XTPTabToolTipBehaviour@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPTabClientWnd.cpp
