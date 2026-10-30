// roc 2011-06 008865a0  unit: CXTPControlGallery  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008865a0
//
// 008865a0  56                   push esi
// 008865a1  8bf1                 mov esi, ecx
// 008865a3  e8c89bf8ff           call 0x810170
// 008865a8  33c0                 xor eax, eax
// 008865aa  898648010000         mov dword ptr [esi + 0x148], eax
// 008865b0  898650010000         mov dword ptr [esi + 0x150], eax
// 008865b6  c706f4ffac00         mov dword ptr [esi], 0xacfff4
// 008865bc  c7865c04000012000000 mov dword ptr [esi + 0x45c], 0x12
// 008865c6  8bc6                 mov eax, esi
// 008865c8  5e                   pop esi
// 008865c9  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPDefaultTheme.cpp (function ??0CXTPDefaultTheme@XTPPaintThemes@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPDefaultTheme.cpp
