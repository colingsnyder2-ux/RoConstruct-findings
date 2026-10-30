// from server: 100% by auto
// roc 2008-06 006e9210  unit: CXTPControlPopupColor  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006e9210
//
// 006e9210  c701c4708500         mov dword ptr [ecx], 0x8570c4
// 006e9216  c7412064708500       mov dword ptr [ecx + 0x20], 0x857064
// 006e921d  e94ee2ffff           jmp 0x6e7470
// library xtp-11.2.2/Source\CommandBars\XTPControlButton.cpp (function ??1CXTPControlButton@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlButton.cpp
