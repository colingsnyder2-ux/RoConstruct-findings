// roc 2009-06 007aafc0  unit: XTPPaintThemes::CXTPOffice2003Theme  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007aafc0
//
// 007aafc0  56                   push esi
// 007aafc1  8bf1                 mov esi, ecx
// 007aafc3  e8f8d4ffff           call 0x7a84c0
// 007aafc8  c706e4249000         mov dword ptr [esi], 0x9024e4
// 007aafce  c7865804000000000000 mov dword ptr [esi + 0x458], 0
// 007aafd8  c7864405000001000000 mov dword ptr [esi + 0x544], 1
// 007aafe2  8bc6                 mov eax, esi
// 007aafe4  5e                   pop esi
// 007aafe5  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPOffice2003Theme.cpp (function ??0CXTPWhidbeyTheme@XTPPaintThemes@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPOffice2003Theme.cpp
