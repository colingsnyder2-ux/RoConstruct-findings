// roc 2009-06 007a1380  unit: CXTPControlGallery  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007a1380
//
// 007a1380  56                   push esi
// 007a1381  8bf1                 mov esi, ecx
// 007a1383  e82820f8ff           call 0x7233b0
// 007a1388  33c0                 xor eax, eax
// 007a138a  898648010000         mov dword ptr [esi + 0x148], eax
// 007a1390  898650010000         mov dword ptr [esi + 0x150], eax
// 007a1396  c706a4199000         mov dword ptr [esi], 0x9019a4
// 007a139c  c7865c04000012000000 mov dword ptr [esi + 0x45c], 0x12
// 007a13a6  8bc6                 mov eax, esi
// 007a13a8  5e                   pop esi
// 007a13a9  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPDefaultTheme.cpp (function ??0CXTPDefaultTheme@XTPPaintThemes@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPDefaultTheme.cpp
