// roc 2011-06 00898600  unit: XTPPaintThemes::CXTPNativeXPTheme  size: 80 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00898600
//
// 00898600  56                   push esi
// 00898601  8bf1                 mov esi, ecx
// 00898603  e8687bf7ff           call 0x810170
// 00898608  b801000000           mov eax, 1
// 0089860d  89467c               mov dword ptr [esi + 0x7c], eax
// 00898610  898648010000         mov dword ptr [esi + 0x148], eax
// 00898616  898650010000         mov dword ptr [esi + 0x150], eax
// 0089861c  89864c010000         mov dword ptr [esi + 0x14c], eax
// 00898622  898654010000         mov dword ptr [esi + 0x154], eax
// 00898628  c706a418ad00         mov dword ptr [esi], 0xad18a4
// 0089862e  c7862401000000000000 mov dword ptr [esi + 0x124], 0
// 00898638  c7862801000003000000 mov dword ptr [esi + 0x128], 3
// 00898642  c7868000000008000000 mov dword ptr [esi + 0x80], 8
// 0089864c  8bc6                 mov eax, esi
// 0089864e  5e                   pop esi
// 0089864f  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPOfficeTheme.cpp (function ??0CXTPOfficeTheme@XTPPaintThemes@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPOfficeTheme.cpp
