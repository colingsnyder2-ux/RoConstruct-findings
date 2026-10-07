// roc 2011-06 0087bf10  unit: CXTPPropertyGridItemColor  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0087bf10
//
// 0087bf10  c701ace2ac00         mov dword ptr [ecx], 0xace2ac
// 0087bf16  c741549ce2ac00       mov dword ptr [ecx + 0x54], 0xace29c
// 0087bf1d  e98e300700           jmp 0x8eefb0
// library xtp-15.2.1/Source\Controls\Deprecated\XTOutBarCtrl.cpp (function ??1CXTToolBox@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Controls/Deprecated/XTOutBarCtrl.cpp
