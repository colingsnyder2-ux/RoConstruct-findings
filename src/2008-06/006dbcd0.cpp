// roc 2008-06 006dbcd0  unit: CXTTreeCtrlBase  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006dbcd0
//
// 006dbcd0  56                   push esi
// 006dbcd1  8bf1                 mov esi, ecx
// 006dbcd3  e868feffff           call 0x6dbb40
// 006dbcd8  c706fc598500         mov dword ptr [esi], 0x8559fc
// 006dbcde  c7466074598500       mov dword ptr [esi + 0x60], 0x855974
// 006dbce5  89b694000000         mov dword ptr [esi + 0x94], esi
// 006dbceb  8bc6                 mov eax, esi
// 006dbced  5e                   pop esi
// 006dbcee  c3                   ret 
// library xtp-11.2.2/Source\Controls\XTTreeCtrlView.cpp (function ??0CXTTreeView@@IAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTTreeCtrlView.cpp
