// roc 2009-06 007fe440  unit: CXTSplitterWndTheme  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007fe440
//
// 007fe440  56                   push esi
// 007fe441  57                   push edi
// 007fe442  8bf1                 mov esi, ecx
// 007fe444  e89765e7ff           call 0x6749e0
// 007fe449  8b3de4ee8900         mov edi, dword ptr [0x89eee4]
// 007fe44f  6a0f                 push 0xf
// 007fe451  ffd7                 call edi
// 007fe453  6a10                 push 0x10
// 007fe455  894614               mov dword ptr [esi + 0x14], eax
// 007fe458  ffd7                 call edi
// 007fe45a  5f                   pop edi
// 007fe45b  894618               mov dword ptr [esi + 0x18], eax
// 007fe45e  5e                   pop esi
// 007fe45f  c3                   ret 
// library xtp-11.2.2/Source\Controls\XTSplitterWndTheme.cpp (function ?RefreshMetrics@CXTSplitterWndTheme@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTSplitterWndTheme.cpp
