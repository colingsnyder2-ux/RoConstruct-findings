// roc 2011-06 008e5e00  unit: CXTSplitterWndTheme  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008e5e00
//
// 008e5e00  56                   push esi
// 008e5e01  57                   push edi
// 008e5e02  8bf1                 mov esi, ecx
// 008e5e04  e83758f8ff           call 0x86b640
// 008e5e09  8b3d181ba400         mov edi, dword ptr [0xa41b18]
// 008e5e0f  6a0f                 push 0xf
// 008e5e11  ffd7                 call edi
// 008e5e13  6a10                 push 0x10
// 008e5e15  894614               mov dword ptr [esi + 0x14], eax
// 008e5e18  ffd7                 call edi
// 008e5e1a  5f                   pop edi
// 008e5e1b  894618               mov dword ptr [esi + 0x18], eax
// 008e5e1e  5e                   pop esi
// 008e5e1f  c3                   ret 
// library xtp-11.2.2/Source\Controls\XTSplitterWndTheme.cpp (function ?RefreshMetrics@CXTSplitterWndTheme@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTSplitterWndTheme.cpp
