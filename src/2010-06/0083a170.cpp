// roc 2010-06 0083a170  unit: XTPPaintThemes::CXTPWhidbeyTheme  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0083a170
//
// 0083a170  56                   push esi
// 0083a171  8bf1                 mov esi, ecx
// 0083a173  8d8e60040000         lea ecx, [esi + 0x460]
// 0083a179  e8425afeff           call 0x81fbc0
// 0083a17e  85c0                 test eax, eax
// 0083a180  7416                 je 0x83a198
// 0083a182  8d8e6c040000         lea ecx, [esi + 0x46c]
// 0083a188  e8335afeff           call 0x81fbc0
// 0083a18d  85c0                 test eax, eax
// 0083a18f  7407                 je 0x83a198
// 0083a191  b801000000           mov eax, 1
// 0083a196  5e                   pop esi
// 0083a197  c3                   ret 
// 0083a198  33c0                 xor eax, eax
// 0083a19a  5e                   pop esi
// 0083a19b  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPNativeXPTheme.cpp (function ?IsThemeEnabled@CXTPNativeXPTheme@XTPPaintThemes@@IBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPNativeXPTheme.cpp
