// roc 2008-06 00713760  unit: CPropertyGridItemBrickColor  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00713760
//
// 00713760  c701c4d78500         mov dword ptr [ecx], 0x85d7c4
// 00713766  c7412064d78500       mov dword ptr [ecx + 0x20], 0x85d764
// 0071376d  e9befeffff           jmp 0x713630
// library xtp-11.2.2/Source\CommandBars\XTPControlButton.cpp (function ??1CXTPControlButton@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlButton.cpp
