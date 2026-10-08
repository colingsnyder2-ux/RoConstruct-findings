// from server: 100% by auto
// roc 2008-06 006a61c0  unit: MyXTPCommandBars  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006a61c0
//
// 006a61c0  8b4974               mov ecx, dword ptr [ecx + 0x74]
// 006a61c3  8b442404             mov eax, dword ptr [esp + 4]
// 006a61c7  81c18c000000         add ecx, 0x8c
// 006a61cd  50                   push eax
// 006a61ce  e8fdb30700           call 0x7215d0
// 006a61d3  c70001000000         mov dword ptr [eax], 1
// 006a61d9  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPCommandBars.cpp (function ?HideCommand@CXTPCommandBars@@QAEXI@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPCommandBars.cpp
