// roc 2010-06 0083b5d0  unit: XTPPaintThemes::CXTPNativeXPTheme  size: 80 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0083b5d0
//
// 0083b5d0  56                   push esi
// 0083b5d1  8bf1                 mov esi, ecx
// 0083b5d3  e88827f7ff           call 0x7add60
// 0083b5d8  b801000000           mov eax, 1
// 0083b5dd  89467c               mov dword ptr [esi + 0x7c], eax
// 0083b5e0  898648010000         mov dword ptr [esi + 0x148], eax
// 0083b5e6  898650010000         mov dword ptr [esi + 0x150], eax
// 0083b5ec  89864c010000         mov dword ptr [esi + 0x14c], eax
// 0083b5f2  898654010000         mov dword ptr [esi + 0x154], eax
// 0083b5f8  c706846ea600         mov dword ptr [esi], 0xa66e84
// 0083b5fe  c7862401000000000000 mov dword ptr [esi + 0x124], 0
// 0083b608  c7862801000003000000 mov dword ptr [esi + 0x128], 3
// 0083b612  c7868000000008000000 mov dword ptr [esi + 0x80], 8
// 0083b61c  8bc6                 mov eax, esi
// 0083b61e  5e                   pop esi
// 0083b61f  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPOfficeTheme.cpp (function ??0CXTPOfficeTheme@XTPPaintThemes@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPOfficeTheme.cpp
