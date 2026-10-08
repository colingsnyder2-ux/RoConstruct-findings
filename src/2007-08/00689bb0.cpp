// from server: 100% by auto
// roc 2007-08 00689bb0  unit: CXTPTabClientWnd  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00689bb0
//
// 00689bb0  8b818c000000         mov eax, dword ptr [ecx + 0x8c]
// 00689bb6  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00689bba  8988dc000000         mov dword ptr [eax + 0xdc], ecx
// 00689bc0  c20400               ret 4
// library xtp-11.2.2-vc8/Source\CommandBars\XTPTabClientWnd.cpp (function ?EnableToolTips@CXTPTabClientWnd@@QAEXW4XTPTabToolTipBehaviour@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPTabClientWnd.cpp
