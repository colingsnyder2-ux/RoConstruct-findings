// roc 2007-08 0070eca0  unit: CXTSplitterWndThemeFactory  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0070eca0
//
// 0070eca0  56                   push esi
// 0070eca1  8bf1                 mov esi, ecx
// 0070eca3  8b8620010000         mov eax, dword ptr [esi + 0x120]
// 0070eca9  85c0                 test eax, eax
// 0070ecab  c70674e37d00         mov dword ptr [esi], 0x7de374
// 0070ecb1  7407                 je 0x70ecba
// 0070ecb3  50                   push eax
// 0070ecb4  ff15dcd27700         call dword ptr [0x77d2dc]
// 0070ecba  8bce                 mov ecx, esi
// 0070ecbc  5e                   pop esi
// 0070ecbd  e9d819f2ff           jmp 0x63069a
// library xtp-11.2.2-vc8/Source\Common\XTPRichRender.cpp (function ??1CXTPRichRender@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Common/XTPRichRender.cpp
