// from server: 100% by auto
// roc 2007-08 00664f00  unit: CXTTreeCtrlBase  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00664f00
//
// 00664f00  56                   push esi
// 00664f01  8bf1                 mov esi, ecx
// 00664f03  e868feffff           call 0x664d70
// 00664f08  c7068ca27c00         mov dword ptr [esi], 0x7ca28c
// 00664f0e  c746600ca27c00       mov dword ptr [esi + 0x60], 0x7ca20c
// 00664f15  89b694000000         mov dword ptr [esi + 0x94], esi
// 00664f1b  8bc6                 mov eax, esi
// 00664f1d  5e                   pop esi
// 00664f1e  c3                   ret 
// library xtp-11.2.2-vc8/Source\Controls\XTTreeCtrlView.cpp (function ??0CXTTreeView@@IAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Controls/XTTreeCtrlView.cpp
