// from server: 100% by auto
// roc 2012-06 009c2e00  unit: CXTTreeView  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009c2e00
//
// 009c2e00  56                   push esi
// 009c2e01  8bf1                 mov esi, ecx
// 009c2e03  e888feffff           call 0x9c2c90
// 009c2e08  c706bc1ec100         mov dword ptr [esi], 0xc11ebc
// 009c2e0e  c74654341ec100       mov dword ptr [esi + 0x54], 0xc11e34
// 009c2e15  89b688000000         mov dword ptr [esi + 0x88], esi
// 009c2e1b  8bc6                 mov eax, esi
// 009c2e1d  5e                   pop esi
// 009c2e1e  c3                   ret 
// library xtp-15.2.1/Source\Controls\Tree\XTPTreeCtrlView.cpp (function ??0CXTPTreeCtrl@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Controls/Tree/XTPTreeCtrlView.cpp
