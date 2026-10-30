// roc 2009-06 007ad1b0  unit: XTPPaintThemes::CXTPNativeXPTheme  size: 80 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007ad1b0
//
// 007ad1b0  56                   push esi
// 007ad1b1  8bf1                 mov esi, ecx
// 007ad1b3  e8f861f7ff           call 0x7233b0
// 007ad1b8  b801000000           mov eax, 1
// 007ad1bd  89467c               mov dword ptr [esi + 0x7c], eax
// 007ad1c0  898648010000         mov dword ptr [esi + 0x148], eax
// 007ad1c6  898650010000         mov dword ptr [esi + 0x150], eax
// 007ad1cc  89864c010000         mov dword ptr [esi + 0x14c], eax
// 007ad1d2  898654010000         mov dword ptr [esi + 0x154], eax
// 007ad1d8  c7067c279000         mov dword ptr [esi], 0x90277c
// 007ad1de  c7862401000000000000 mov dword ptr [esi + 0x124], 0
// 007ad1e8  c7862801000003000000 mov dword ptr [esi + 0x128], 3
// 007ad1f2  c7868000000008000000 mov dword ptr [esi + 0x80], 8
// 007ad1fc  8bc6                 mov eax, esi
// 007ad1fe  5e                   pop esi
// 007ad1ff  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPOfficeTheme.cpp (function ??0CXTPOfficeTheme@XTPPaintThemes@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPOfficeTheme.cpp
