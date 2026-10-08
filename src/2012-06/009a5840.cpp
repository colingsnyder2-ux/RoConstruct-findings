// roc 2012-06 009a5840  unit: MyXTPCommandBars  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009a5840
//
// 009a5840  8b4974               mov ecx, dword ptr [ecx + 0x74]
// 009a5843  8b442404             mov eax, dword ptr [esp + 4]
// 009a5847  81c18c000000         add ecx, 0x8c
// 009a584d  50                   push eax
// 009a584e  e8fd61ffff           call 0x99ba50
// 009a5853  c70001000000         mov dword ptr [eax], 1
// 009a5859  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPCommandBars.cpp (function ?HideCommand@CXTPCommandBars@@QAEXI@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPCommandBars.cpp
