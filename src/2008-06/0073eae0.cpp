// roc 2008-06 0073eae0  unit: XTPPaintThemes::CXTPNativeXPTheme  size: 80 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0073eae0
//
// 0073eae0  56                   push esi
// 0073eae1  8bf1                 mov esi, ecx
// 0073eae3  e8a801f7ff           call 0x6aec90
// 0073eae8  b801000000           mov eax, 1
// 0073eaed  89467c               mov dword ptr [esi + 0x7c], eax
// 0073eaf0  898648010000         mov dword ptr [esi + 0x148], eax
// 0073eaf6  898650010000         mov dword ptr [esi + 0x150], eax
// 0073eafc  89864c010000         mov dword ptr [esi + 0x14c], eax
// 0073eb02  898654010000         mov dword ptr [esi + 0x154], eax
// 0073eb08  c706d4348600         mov dword ptr [esi], 0x8634d4
// 0073eb0e  c7862401000000000000 mov dword ptr [esi + 0x124], 0
// 0073eb18  c7862801000003000000 mov dword ptr [esi + 0x128], 3
// 0073eb22  c7868000000008000000 mov dword ptr [esi + 0x80], 8
// 0073eb2c  8bc6                 mov eax, esi
// 0073eb2e  5e                   pop esi
// 0073eb2f  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPOfficeTheme.cpp (function ??0CXTPOfficeTheme@XTPPaintThemes@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPOfficeTheme.cpp
