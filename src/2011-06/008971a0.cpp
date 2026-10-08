// roc 2011-06 008971a0  unit: XTPPaintThemes::CXTPWhidbeyTheme  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008971a0
//
// 008971a0  56                   push esi
// 008971a1  8bf1                 mov esi, ecx
// 008971a3  8d8e60040000         lea ecx, [esi + 0x460]
// 008971a9  e82261feff           call 0x87d2d0
// 008971ae  85c0                 test eax, eax
// 008971b0  7416                 je 0x8971c8
// 008971b2  8d8e6c040000         lea ecx, [esi + 0x46c]
// 008971b8  e81361feff           call 0x87d2d0
// 008971bd  85c0                 test eax, eax
// 008971bf  7407                 je 0x8971c8
// 008971c1  b801000000           mov eax, 1
// 008971c6  5e                   pop esi
// 008971c7  c3                   ret 
// 008971c8  33c0                 xor eax, eax
// 008971ca  5e                   pop esi
// 008971cb  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPNativeXPTheme.cpp (function ?IsThemeEnabled@CXTPNativeXPTheme@XTPPaintThemes@@IBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPNativeXPTheme.cpp
