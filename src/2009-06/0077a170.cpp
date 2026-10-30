// roc 2009-06 0077a170  unit: CXTPTabClientWnd  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0077a170
//
// 0077a170  8b818c000000         mov eax, dword ptr [ecx + 0x8c]
// 0077a176  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0077a17a  8988dc000000         mov dword ptr [eax + 0xdc], ecx
// 0077a180  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPTabClientWnd.cpp (function ?EnableToolTips@CXTPTabClientWnd@@QAEXW4XTPTabToolTipBehaviour@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPTabClientWnd.cpp
