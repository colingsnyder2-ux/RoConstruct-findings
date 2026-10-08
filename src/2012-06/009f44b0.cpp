// from server: 100% by auto
// roc 2012-06 009f44b0  unit: CXTPPropertyGridItemColor  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009f44b0
//
// 009f44b0  c7016c99c100         mov dword ptr [ecx], 0xc1996c
// 009f44b6  c741545c99c100       mov dword ptr [ecx + 0x54], 0xc1995c
// 009f44bd  e9de2e0700           jmp 0xa673a0
// library xtp-15.2.1/Source\Controls\Deprecated\XTOutBarCtrl.cpp (function ??1CXTToolBox@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Controls/Deprecated/XTOutBarCtrl.cpp
