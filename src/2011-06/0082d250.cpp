// roc 2011-06 0082d250  unit: MyXTPCommandBars  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0082d250
//
// 0082d250  8b4974               mov ecx, dword ptr [ecx + 0x74]
// 0082d253  8b442404             mov eax, dword ptr [esp + 4]
// 0082d257  81c18c000000         add ecx, 0x8c
// 0082d25d  50                   push eax
// 0082d25e  e81d220900           call 0x8bf480
// 0082d263  c70001000000         mov dword ptr [eax], 1
// 0082d269  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPCommandBars.cpp (function ?HideCommand@CXTPCommandBars@@QAEXI@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPCommandBars.cpp
