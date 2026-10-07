// roc 2007-08 00635430  unit: MyXTPCommandBars  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00635430
//
// 00635430  8b4974               mov ecx, dword ptr [ecx + 0x74]
// 00635433  8b442404             mov eax, dword ptr [esp + 4]
// 00635437  81c18c000000         add ecx, 0x8c
// 0063543d  50                   push eax
// 0063543e  e85dffffff           call 0x6353a0
// 00635443  c70001000000         mov dword ptr [eax], 1
// 00635449  c20400               ret 4
// library xtp-11.2.2-vc8/Source\CommandBars\XTPCommandBars.cpp (function ?HideCommand@CXTPCommandBars@@QAEXI@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPCommandBars.cpp
