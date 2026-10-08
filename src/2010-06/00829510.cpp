// roc 2010-06 00829510  unit: CXTPControlGallery  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00829510
//
// 00829510  56                   push esi
// 00829511  8bf1                 mov esi, ecx
// 00829513  e84848f8ff           call 0x7add60
// 00829518  33c0                 xor eax, eax
// 0082951a  898648010000         mov dword ptr [esi + 0x148], eax
// 00829520  898650010000         mov dword ptr [esi + 0x150], eax
// 00829526  c706d455a600         mov dword ptr [esi], 0xa655d4
// 0082952c  c7865c04000012000000 mov dword ptr [esi + 0x45c], 0x12
// 00829536  8bc6                 mov eax, esi
// 00829538  5e                   pop esi
// 00829539  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPDefaultTheme.cpp (function ??0CXTPDefaultTheme@XTPPaintThemes@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPDefaultTheme.cpp
