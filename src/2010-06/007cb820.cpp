// roc 2010-06 007cb820  unit: MyXTPCommandBars  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007cb820
//
// 007cb820  8b4974               mov ecx, dword ptr [ecx + 0x74]
// 007cb823  8b442404             mov eax, dword ptr [esp + 4]
// 007cb827  81c18c000000         add ecx, 0x8c
// 007cb82d  50                   push eax
// 007cb82e  e84d15feff           call 0x7acd80
// 007cb833  c70001000000         mov dword ptr [eax], 1
// 007cb839  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPCommandBars.cpp (function ?HideCommand@CXTPCommandBars@@QAEXI@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPCommandBars.cpp
