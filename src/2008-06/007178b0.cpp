// from server: 100% by auto
// roc 2008-06 007178b0  unit: CXTPPropertyGridItemEnum  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007178b0
//
// 007178b0  c701e4e48500         mov dword ptr [ecx], 0x85e4e4
// 007178b6  c7412084e48500       mov dword ptr [ecx + 0x20], 0x85e484
// 007178bd  e96ebdffff           jmp 0x713630
// library xtp-11.2.2/Source\CommandBars\XTPControlButton.cpp (function ??1CXTPControlButton@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlButton.cpp
