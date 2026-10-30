// from server: 100% by auto
// roc 2008-06 007456b0  unit: CXTPToolBar::CControlButtonHide  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007456b0
//
// 007456b0  c701ec3a8600         mov dword ptr [ecx], 0x863aec
// 007456b6  c741208c3a8600       mov dword ptr [ecx + 0x20], 0x863a8c
// 007456bd  e9be7af6ff           jmp 0x6ad180
// library xtp-11.2.2/Source\CommandBars\XTPControlButton.cpp (function ??1CXTPControlButton@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlButton.cpp
