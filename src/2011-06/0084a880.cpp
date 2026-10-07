// roc 2011-06 0084a880  unit: CXTTreeCtrlBase  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0084a880
//
// 0084a880  56                   push esi
// 0084a881  8bf1                 mov esi, ecx
// 0084a883  e868feffff           call 0x84a6f0
// 0084a888  c706bc70ac00         mov dword ptr [esi], 0xac70bc
// 0084a88e  c746603470ac00       mov dword ptr [esi + 0x60], 0xac7034
// 0084a895  89b694000000         mov dword ptr [esi + 0x94], esi
// 0084a89b  8bc6                 mov eax, esi
// 0084a89d  5e                   pop esi
// 0084a89e  c3                   ret 
// library xtp-15.2.1/Source\Controls\Tree\XTPTreeCtrlView.cpp (function ??0CXTPTreeView@@IAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Controls/Tree/XTPTreeCtrlView.cpp
