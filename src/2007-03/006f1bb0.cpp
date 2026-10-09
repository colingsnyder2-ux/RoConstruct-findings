// roc 2007-03 006f1bb0  unit: seg_006f0000  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006f1bb0
//
// 006f1bb0  56                   push esi
// 006f1bb1  57                   push edi
// 006f1bb2  8bf1                 mov esi, ecx
// 006f1bb4  e80762faff           call 0x697dc0
// 006f1bb9  8b3d38ef7700         mov edi, dword ptr [0x77ef38]
// 006f1bbf  6a0f                 push 0xf
// 006f1bc1  ffd7                 call edi
// 006f1bc3  6a10                 push 0x10
// 006f1bc5  894614               mov dword ptr [esi + 0x14], eax
// 006f1bc8  ffd7                 call edi
// 006f1bca  5f                   pop edi
// 006f1bcb  894618               mov dword ptr [esi + 0x18], eax
// 006f1bce  5e                   pop esi
// 006f1bcf  c3                   ret 
// library xtp-11.2.2/Source\Controls\XTSplitterWndTheme.cpp (function ?RefreshMetrics@CXTSplitterWndTheme@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTSplitterWndTheme.cpp
