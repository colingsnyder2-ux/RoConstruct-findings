// roc 2008-06 0073d680  unit: XTPPaintThemes::CXTPWhidbeyTheme  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0073d680
//
// 0073d680  56                   push esi
// 0073d681  8bf1                 mov esi, ecx
// 0073d683  8d8e60040000         lea ecx, [esi + 0x460]
// 0073d689  e8a2adfdff           call 0x718430
// 0073d68e  85c0                 test eax, eax
// 0073d690  7416                 je 0x73d6a8
// 0073d692  8d8e6c040000         lea ecx, [esi + 0x46c]
// 0073d698  e893adfdff           call 0x718430
// 0073d69d  85c0                 test eax, eax
// 0073d69f  7407                 je 0x73d6a8
// 0073d6a1  b801000000           mov eax, 1
// 0073d6a6  5e                   pop esi
// 0073d6a7  c3                   ret 
// 0073d6a8  33c0                 xor eax, eax
// 0073d6aa  5e                   pop esi
// 0073d6ab  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPNativeXPTheme.cpp (function ?IsThemeEnabled@CXTPNativeXPTheme@XTPPaintThemes@@IBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPNativeXPTheme.cpp
