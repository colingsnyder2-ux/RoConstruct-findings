// roc 2009-12 0087c2c0  unit: CXTPControlGallery  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0087c2c0
//
// 0087c2c0  56                   push esi
// 0087c2c1  8bf1                 mov esi, ecx
// 0087c2c3  e8881ff8ff           call 0x7fe250
// 0087c2c8  33c0                 xor eax, eax
// 0087c2ca  898648010000         mov dword ptr [esi + 0x148], eax
// 0087c2d0  898650010000         mov dword ptr [esi + 0x150], eax
// 0087c2d6  c706241ea000         mov dword ptr [esi], 0xa01e24
// 0087c2dc  c7865c04000012000000 mov dword ptr [esi + 0x45c], 0x12
// 0087c2e6  8bc6                 mov eax, esi
// 0087c2e8  5e                   pop esi
// 0087c2e9  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPDefaultTheme.cpp (function ??0CXTPDefaultTheme@XTPPaintThemes@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPDefaultTheme.cpp
