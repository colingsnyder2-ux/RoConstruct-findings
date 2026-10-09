// roc 2009-12 00817770  unit: MyXTPCommandBars  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00817770
//
// 00817770  8b4974               mov ecx, dword ptr [ecx + 0x74]
// 00817773  8b442404             mov eax, dword ptr [esp + 4]
// 00817777  81c18c000000         add ecx, 0x8c
// 0081777d  50                   push eax
// 0081777e  e8fdc90700           call 0x894180
// 00817783  c70001000000         mov dword ptr [eax], 1
// 00817789  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPCommandBars.cpp (function ?HideCommand@CXTPCommandBars@@QAEXI@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPCommandBars.cpp
