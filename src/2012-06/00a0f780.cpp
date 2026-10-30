// roc 2012-06 00a0f780  unit: XTPPaintThemes::CXTPWhidbeyTheme  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a0f780
//
// 00a0f780  56                   push esi
// 00a0f781  8bf1                 mov esi, ecx
// 00a0f783  8d8e60040000         lea ecx, [esi + 0x460]
// 00a0f789  e8e260feff           call 0x9f5870
// 00a0f78e  85c0                 test eax, eax
// 00a0f790  7416                 je 0xa0f7a8
// 00a0f792  8d8e6c040000         lea ecx, [esi + 0x46c]
// 00a0f798  e8d360feff           call 0x9f5870
// 00a0f79d  85c0                 test eax, eax
// 00a0f79f  7407                 je 0xa0f7a8
// 00a0f7a1  b801000000           mov eax, 1
// 00a0f7a6  5e                   pop esi
// 00a0f7a7  c3                   ret 
// 00a0f7a8  33c0                 xor eax, eax
// 00a0f7aa  5e                   pop esi
// 00a0f7ab  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPNativeXPTheme.cpp (function ?IsThemeEnabled@CXTPNativeXPTheme@XTPPaintThemes@@IBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPNativeXPTheme.cpp
