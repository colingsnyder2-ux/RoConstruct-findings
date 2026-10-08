// roc 2012-06 00a0e9f0  unit: XTPPaintThemes::CXTPOffice2003Theme  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a0e9f0
//
// 00a0e9f0  56                   push esi
// 00a0e9f1  8bf1                 mov esi, ecx
// 00a0e9f3  e8f8d4ffff           call 0xa0bef0
// 00a0e9f8  c706bcccc100         mov dword ptr [esi], 0xc1ccbc
// 00a0e9fe  c7865804000000000000 mov dword ptr [esi + 0x458], 0
// 00a0ea08  c7864405000001000000 mov dword ptr [esi + 0x544], 1
// 00a0ea12  8bc6                 mov eax, esi
// 00a0ea14  5e                   pop esi
// 00a0ea15  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPOffice2003Theme.cpp (function ??0CXTPWhidbeyTheme@XTPPaintThemes@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPOffice2003Theme.cpp
