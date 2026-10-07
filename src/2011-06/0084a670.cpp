// roc 2011-06 0084a670  unit: CXTTreeView  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0084a670
//
// 0084a670  c701dc67ac00         mov dword ptr [ecx], 0xac67dc
// 0084a676  c741545467ac00       mov dword ptr [ecx + 0x54], 0xac6754
// 0084a67d  e95effffff           jmp 0x84a5e0
// library xtp-15.2.1/Source\Controls\Deprecated\XTOutBarCtrl.cpp (function ??1CXTToolBox@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Controls/Deprecated/XTOutBarCtrl.cpp
