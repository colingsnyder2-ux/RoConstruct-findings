// roc 2010-06 008393e0  unit: XTPPaintThemes::CXTPOffice2003Theme  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008393e0
//
// 008393e0  56                   push esi
// 008393e1  8bf1                 mov esi, ecx
// 008393e3  e8f8d4ffff           call 0x8368e0
// 008393e8  c706ec6ba600         mov dword ptr [esi], 0xa66bec
// 008393ee  c7865804000000000000 mov dword ptr [esi + 0x458], 0
// 008393f8  c7864405000001000000 mov dword ptr [esi + 0x544], 1
// 00839402  8bc6                 mov eax, esi
// 00839404  5e                   pop esi
// 00839405  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPOffice2003Theme.cpp (function ??0CXTPWhidbeyTheme@XTPPaintThemes@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPOffice2003Theme.cpp
