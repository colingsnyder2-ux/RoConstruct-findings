// roc 2012-06 009e6b20  unit: CXTThemeManagerStyleHost  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009e6b20
//
// 009e6b20  56                   push esi
// 009e6b21  8bf1                 mov esi, ecx
// 009e6b23  6a0a                 push 0xa
// 009e6b25  8d4e04               lea ecx, [esi + 4]
// 009e6b28  c7067078c100         mov dword ptr [esi], 0xc17870
// 009e6b2e  e845300b00           call 0xa99b78
// 009e6b33  33c0                 xor eax, eax
// 009e6b35  894624               mov dword ptr [esi + 0x24], eax
// 009e6b38  894620               mov dword ptr [esi + 0x20], eax
// 009e6b3b  c7462810000000       mov dword ptr [esi + 0x28], 0x10
// 009e6b42  8bc6                 mov eax, esi
// 009e6b44  5e                   pop esi
// 009e6b45  c3                   ret 
// library xtp-13.2.1/Source\Controls\XTThemeManager.cpp (function ??0CXTThemeManager@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-13.2.1 Source/Controls/XTThemeManager.cpp
