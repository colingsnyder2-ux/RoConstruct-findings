// roc 2011-06 00896410  unit: XTPPaintThemes::CXTPOffice2003Theme  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00896410
//
// 00896410  56                   push esi
// 00896411  8bf1                 mov esi, ecx
// 00896413  e8f8d4ffff           call 0x893910
// 00896418  c7060c16ad00         mov dword ptr [esi], 0xad160c
// 0089641e  c7865804000000000000 mov dword ptr [esi + 0x458], 0
// 00896428  c7864405000001000000 mov dword ptr [esi + 0x544], 1
// 00896432  8bc6                 mov eax, esi
// 00896434  5e                   pop esi
// 00896435  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPOffice2003Theme.cpp (function ??0CXTPWhidbeyTheme@XTPPaintThemes@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPOffice2003Theme.cpp
