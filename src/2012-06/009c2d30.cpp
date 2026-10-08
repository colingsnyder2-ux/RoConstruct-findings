// from server: 100% by auto
// roc 2012-06 009c2d30  unit: CXTTreeCtrlBase  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009c2d30
//
// 009c2d30  56                   push esi
// 009c2d31  8bf1                 mov esi, ecx
// 009c2d33  e868feffff           call 0x9c2ba0
// 009c2d38  c7069c27c100         mov dword ptr [esi], 0xc1279c
// 009c2d3e  c746601427c100       mov dword ptr [esi + 0x60], 0xc12714
// 009c2d45  89b694000000         mov dword ptr [esi + 0x94], esi
// 009c2d4b  8bc6                 mov eax, esi
// 009c2d4d  5e                   pop esi
// 009c2d4e  c3                   ret 
// library xtp-15.2.1/Source\Controls\Tree\XTPTreeCtrlView.cpp (function ??0CXTPTreeView@@IAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Controls/Tree/XTPTreeCtrlView.cpp
