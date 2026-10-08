// from server: 100% by auto
// roc 2008-06 0078c2b0  unit: CXTSplitterWndTheme  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0078c2b0
//
// 0078c2b0  56                   push esi
// 0078c2b1  57                   push edi
// 0078c2b2  8bf1                 mov esi, ecx
// 0078c2b4  e85711cfff           call 0x47d410
// 0078c2b9  8b3d582b8000         mov edi, dword ptr [0x802b58]
// 0078c2bf  6a0f                 push 0xf
// 0078c2c1  ffd7                 call edi
// 0078c2c3  6a10                 push 0x10
// 0078c2c5  894614               mov dword ptr [esi + 0x14], eax
// 0078c2c8  ffd7                 call edi
// 0078c2ca  5f                   pop edi
// 0078c2cb  894618               mov dword ptr [esi + 0x18], eax
// 0078c2ce  5e                   pop esi
// 0078c2cf  c3                   ret 
// library xtp-11.2.2/Source\Controls\XTSplitterWndTheme.cpp (function ?RefreshMetrics@CXTSplitterWndTheme@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTSplitterWndTheme.cpp
