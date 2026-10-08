// from server: 100% by auto
// roc 2011-06 0084a950  unit: CXTTreeView  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0084a950
//
// 0084a950  56                   push esi
// 0084a951  8bf1                 mov esi, ecx
// 0084a953  e888feffff           call 0x84a7e0
// 0084a958  c706dc67ac00         mov dword ptr [esi], 0xac67dc
// 0084a95e  c746545467ac00       mov dword ptr [esi + 0x54], 0xac6754
// 0084a965  89b688000000         mov dword ptr [esi + 0x88], esi
// 0084a96b  8bc6                 mov eax, esi
// 0084a96d  5e                   pop esi
// 0084a96e  c3                   ret 
// library xtp-15.2.1/Source\Controls\Tree\XTPTreeCtrlView.cpp (function ??0CXTPTreeCtrl@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Controls/Tree/XTPTreeCtrlView.cpp
