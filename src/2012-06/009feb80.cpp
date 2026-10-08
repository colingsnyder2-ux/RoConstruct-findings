// roc 2012-06 009feb80  unit: CXTPControlGallery  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009feb80
//
// 009feb80  56                   push esi
// 009feb81  8bf1                 mov esi, ecx
// 009feb83  e8d898f8ff           call 0x988460
// 009feb88  33c0                 xor eax, eax
// 009feb8a  898648010000         mov dword ptr [esi + 0x148], eax
// 009feb90  898650010000         mov dword ptr [esi + 0x150], eax
// 009feb96  c706acb6c100         mov dword ptr [esi], 0xc1b6ac
// 009feb9c  c7865c04000012000000 mov dword ptr [esi + 0x45c], 0x12
// 009feba6  8bc6                 mov eax, esi
// 009feba8  5e                   pop esi
// 009feba9  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPDefaultTheme.cpp (function ??0CXTPDefaultTheme@XTPPaintThemes@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPDefaultTheme.cpp
