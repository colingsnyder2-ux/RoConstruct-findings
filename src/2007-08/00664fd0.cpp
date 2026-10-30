// from server: 100% by auto
// roc 2007-08 00664fd0  unit: CXTTreeView  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00664fd0
//
// 00664fd0  56                   push esi
// 00664fd1  8bf1                 mov esi, ecx
// 00664fd3  e888feffff           call 0x664e60
// 00664fd8  c706ec997c00         mov dword ptr [esi], 0x7c99ec
// 00664fde  c746546c997c00       mov dword ptr [esi + 0x54], 0x7c996c
// 00664fe5  89b688000000         mov dword ptr [esi + 0x88], esi
// 00664feb  8bc6                 mov eax, esi
// 00664fed  5e                   pop esi
// 00664fee  c3                   ret 
// library xtp-11.2.2-vc8/Source\Controls\XTTreeCtrlView.cpp (function ??0CXTTreeCtrl@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Controls/XTTreeCtrlView.cpp
