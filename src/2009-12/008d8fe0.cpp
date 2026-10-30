// roc 2009-12 008d8fe0  unit: CXTSplitterWndTheme  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008d8fe0
//
// 008d8fe0  56                   push esi
// 008d8fe1  57                   push edi
// 008d8fe2  8bf1                 mov esi, ecx
// 008d8fe4  e8a7baf7ff           call 0x854a90
// 008d8fe9  8b3dd8ca9800         mov edi, dword ptr [0x98cad8]
// 008d8fef  6a0f                 push 0xf
// 008d8ff1  ffd7                 call edi
// 008d8ff3  6a10                 push 0x10
// 008d8ff5  894614               mov dword ptr [esi + 0x14], eax
// 008d8ff8  ffd7                 call edi
// 008d8ffa  5f                   pop edi
// 008d8ffb  894618               mov dword ptr [esi + 0x18], eax
// 008d8ffe  5e                   pop esi
// 008d8fff  c3                   ret 
// library xtp-11.2.2/Source\Controls\XTSplitterWndTheme.cpp (function ?RefreshMetrics@CXTSplitterWndTheme@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTSplitterWndTheme.cpp
