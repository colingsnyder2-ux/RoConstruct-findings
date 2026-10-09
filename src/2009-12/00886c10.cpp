// roc 2009-12 00886c10  unit: XTPPaintThemes::CXTPWhidbeyTheme  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00886c10
//
// 00886c10  56                   push esi
// 00886c11  8bf1                 mov esi, ecx
// 00886c13  8d8e60040000         lea ecx, [esi + 0x460]
// 00886c19  e8a24ffeff           call 0x86bbc0
// 00886c1e  85c0                 test eax, eax
// 00886c20  7416                 je 0x886c38
// 00886c22  8d8e6c040000         lea ecx, [esi + 0x46c]
// 00886c28  e8934ffeff           call 0x86bbc0
// 00886c2d  85c0                 test eax, eax
// 00886c2f  7407                 je 0x886c38
// 00886c31  b801000000           mov eax, 1
// 00886c36  5e                   pop esi
// 00886c37  c3                   ret 
// 00886c38  33c0                 xor eax, eax
// 00886c3a  5e                   pop esi
// 00886c3b  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPNativeXPTheme.cpp (function ?IsThemeEnabled@CXTPNativeXPTheme@XTPPaintThemes@@IBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPNativeXPTheme.cpp
