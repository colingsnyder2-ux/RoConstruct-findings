// roc 2010-06 0088d190  unit: CXTSplitterWndTheme  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0088d190
//
// 0088d190  56                   push esi
// 0088d191  57                   push edi
// 0088d192  8bf1                 mov esi, ecx
// 0088d194  e81774bcff           call 0x4545b0
// 0088d199  8b3d04ba9e00         mov edi, dword ptr [0x9eba04]
// 0088d19f  6a0f                 push 0xf
// 0088d1a1  ffd7                 call edi
// 0088d1a3  6a10                 push 0x10
// 0088d1a5  894614               mov dword ptr [esi + 0x14], eax
// 0088d1a8  ffd7                 call edi
// 0088d1aa  5f                   pop edi
// 0088d1ab  894618               mov dword ptr [esi + 0x18], eax
// 0088d1ae  5e                   pop esi
// 0088d1af  c3                   ret 
// library xtp-11.2.2/Source\Controls\XTSplitterWndTheme.cpp (function ?RefreshMetrics@CXTSplitterWndTheme@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTSplitterWndTheme.cpp
