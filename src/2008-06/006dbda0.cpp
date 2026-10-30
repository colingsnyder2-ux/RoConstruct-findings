// from server: 100% by auto
// roc 2008-06 006dbda0  unit: CXTTreeView  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006dbda0
//
// 006dbda0  56                   push esi
// 006dbda1  8bf1                 mov esi, ecx
// 006dbda3  e888feffff           call 0x6dbc30
// 006dbda8  c7061c518500         mov dword ptr [esi], 0x85511c
// 006dbdae  c7465494508500       mov dword ptr [esi + 0x54], 0x855094
// 006dbdb5  89b688000000         mov dword ptr [esi + 0x88], esi
// 006dbdbb  8bc6                 mov eax, esi
// 006dbdbd  5e                   pop esi
// 006dbdbe  c3                   ret 
// library xtp-11.2.2/Source\Controls\XTTreeCtrlView.cpp (function ??0CXTTreeCtrl@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTTreeCtrlView.cpp
