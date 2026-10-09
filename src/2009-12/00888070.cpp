// roc 2009-12 00888070  unit: XTPPaintThemes::CXTPNativeXPTheme  size: 80 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00888070
//
// 00888070  56                   push esi
// 00888071  8bf1                 mov esi, ecx
// 00888073  e8d861f7ff           call 0x7fe250
// 00888078  b801000000           mov eax, 1
// 0088807d  89467c               mov dword ptr [esi + 0x7c], eax
// 00888080  898648010000         mov dword ptr [esi + 0x148], eax
// 00888086  898650010000         mov dword ptr [esi + 0x150], eax
// 0088808c  89864c010000         mov dword ptr [esi + 0x14c], eax
// 00888092  898654010000         mov dword ptr [esi + 0x154], eax
// 00888098  c706fc2ba000         mov dword ptr [esi], 0xa02bfc
// 0088809e  c7862401000000000000 mov dword ptr [esi + 0x124], 0
// 008880a8  c7862801000003000000 mov dword ptr [esi + 0x128], 3
// 008880b2  c7868000000008000000 mov dword ptr [esi + 0x80], 8
// 008880bc  8bc6                 mov eax, esi
// 008880be  5e                   pop esi
// 008880bf  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPOfficeTheme.cpp (function ??0CXTPOfficeTheme@XTPPaintThemes@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPOfficeTheme.cpp
