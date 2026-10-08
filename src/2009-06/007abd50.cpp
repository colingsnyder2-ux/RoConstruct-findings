// roc 2009-06 007abd50  unit: XTPPaintThemes::CXTPWhidbeyTheme  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007abd50
//
// 007abd50  56                   push esi
// 007abd51  8bf1                 mov esi, ecx
// 007abd53  8d8e60040000         lea ecx, [esi + 0x460]
// 007abd59  e8424efeff           call 0x790ba0
// 007abd5e  85c0                 test eax, eax
// 007abd60  7416                 je 0x7abd78
// 007abd62  8d8e6c040000         lea ecx, [esi + 0x46c]
// 007abd68  e8334efeff           call 0x790ba0
// 007abd6d  85c0                 test eax, eax
// 007abd6f  7407                 je 0x7abd78
// 007abd71  b801000000           mov eax, 1
// 007abd76  5e                   pop esi
// 007abd77  c3                   ret 
// 007abd78  33c0                 xor eax, eax
// 007abd7a  5e                   pop esi
// 007abd7b  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPNativeXPTheme.cpp (function ?IsThemeEnabled@CXTPNativeXPTheme@XTPPaintThemes@@IBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPNativeXPTheme.cpp
