// roc 2012-06 00a5e160  unit: CXTSplitterWndTheme  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a5e160
//
// 00a5e160  56                   push esi
// 00a5e161  57                   push edi
// 00a5e162  8bf1                 mov esi, ecx
// 00a5e164  e827c6b3ff           call 0x59a790
// 00a5e169  8b3dd83cb200         mov edi, dword ptr [0xb23cd8]
// 00a5e16f  6a0f                 push 0xf
// 00a5e171  ffd7                 call edi
// 00a5e173  6a10                 push 0x10
// 00a5e175  894614               mov dword ptr [esi + 0x14], eax
// 00a5e178  ffd7                 call edi
// 00a5e17a  5f                   pop edi
// 00a5e17b  894618               mov dword ptr [esi + 0x18], eax
// 00a5e17e  5e                   pop esi
// 00a5e17f  c3                   ret 
// library xtp-11.2.2/Source\Controls\XTSplitterWndTheme.cpp (function ?RefreshMetrics@CXTSplitterWndTheme@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTSplitterWndTheme.cpp
