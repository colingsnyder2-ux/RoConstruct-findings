// from server: 100% by auto
// roc 2007-08 0070ead0  unit: CXTSplitterWndTheme  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0070ead0
//
// 0070ead0  56                   push esi
// 0070ead1  57                   push edi
// 0070ead2  8bf1                 mov esi, ecx
// 0070ead4  e847e1cfff           call 0x40cc20
// 0070ead9  8b3d58ee7700         mov edi, dword ptr [0x77ee58]
// 0070eadf  6a0f                 push 0xf
// 0070eae1  ffd7                 call edi
// 0070eae3  6a10                 push 0x10
// 0070eae5  894614               mov dword ptr [esi + 0x14], eax
// 0070eae8  ffd7                 call edi
// 0070eaea  5f                   pop edi
// 0070eaeb  894618               mov dword ptr [esi + 0x18], eax
// 0070eaee  5e                   pop esi
// 0070eaef  c3                   ret 
// library xtp-11.2.2-vc8/Source\Controls\XTSplitterWndTheme.cpp (function ?RefreshMetrics@CXTSplitterWndTheme@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Controls/XTSplitterWndTheme.cpp
