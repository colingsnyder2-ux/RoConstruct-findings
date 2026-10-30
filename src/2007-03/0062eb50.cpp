// roc 2007-03 0062eb50  unit: seg_00620000  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0062eb50
//
// 0062eb50  8b4974               mov ecx, dword ptr [ecx + 0x74]
// 0062eb53  8b442404             mov eax, dword ptr [esp + 4]
// 0062eb57  81c18c000000         add ecx, 0x8c
// 0062eb5d  50                   push eax
// 0062eb5e  e80d2a0500           call 0x681570
// 0062eb63  c70001000000         mov dword ptr [eax], 1
// 0062eb69  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPCommandBars.cpp (function ?HideCommand@CXTPCommandBars@@QAEXI@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPCommandBars.cpp
