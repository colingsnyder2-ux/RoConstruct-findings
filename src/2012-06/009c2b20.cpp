// roc 2012-06 009c2b20  unit: CXTTreeView  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009c2b20
//
// 009c2b20  c701bc1ec100         mov dword ptr [ecx], 0xc11ebc
// 009c2b26  c74154341ec100       mov dword ptr [ecx + 0x54], 0xc11e34
// 009c2b2d  e95effffff           jmp 0x9c2a90
// library xtp-15.2.1/Source\Controls\Deprecated\XTOutBarCtrl.cpp (function ??1CXTToolBox@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Controls/Deprecated/XTOutBarCtrl.cpp
