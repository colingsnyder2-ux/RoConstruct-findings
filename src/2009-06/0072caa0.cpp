// roc 2009-06 0072caa0  unit: MyXTPCommandBars  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0072caa0
//
// 0072caa0  8b4974               mov ecx, dword ptr [ecx + 0x74]
// 0072caa3  8b442404             mov eax, dword ptr [esp + 4]
// 0072caa7  81c18c000000         add ecx, 0x8c
// 0072caad  50                   push eax
// 0072caae  e86d990000           call 0x736420
// 0072cab3  c70001000000         mov dword ptr [eax], 1
// 0072cab9  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPCommandBars.cpp (function ?HideCommand@CXTPCommandBars@@QAEXI@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPCommandBars.cpp
