// from server: 100% by auto
// roc 2008-06 006dbac0  unit: CXTTreeView  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006dbac0
//
// 006dbac0  c7011c518500         mov dword ptr [ecx], 0x85511c
// 006dbac6  c7415494508500       mov dword ptr [ecx + 0x54], 0x855094
// 006dbacd  e95effffff           jmp 0x6dba30
// library xtp-11.2.2/Source\CommandBars\XTPControlScrollBar.cpp (function ??1CXTPControlScrollBarCtrl@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlScrollBar.cpp
