// roc 2008-06 00732cb0  unit: CXTPControlGallery  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00732cb0
//
// 00732cb0  56                   push esi
// 00732cb1  8bf1                 mov esi, ecx
// 00732cb3  e8d8bff7ff           call 0x6aec90
// 00732cb8  33c0                 xor eax, eax
// 00732cba  898648010000         mov dword ptr [esi + 0x148], eax
// 00732cc0  898650010000         mov dword ptr [esi + 0x150], eax
// 00732cc6  c706fc268600         mov dword ptr [esi], 0x8626fc
// 00732ccc  c7865c04000012000000 mov dword ptr [esi + 0x45c], 0x12
// 00732cd6  8bc6                 mov eax, esi
// 00732cd8  5e                   pop esi
// 00732cd9  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPDefaultTheme.cpp (function ??0CXTPDefaultTheme@XTPPaintThemes@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPDefaultTheme.cpp
