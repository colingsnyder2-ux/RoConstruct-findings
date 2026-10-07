// roc 2007-08 00691e80  unit: CXTThemeManagerStyleHost  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00691e80
//
// 00691e80  56                   push esi
// 00691e81  8bf1                 mov esi, ecx
// 00691e83  6a0a                 push 0xa
// 00691e85  8d4e04               lea ecx, [esi + 4]
// 00691e88  c70690087d00         mov dword ptr [esi], 0x7d0890
// 00691e8e  e8b76c0a00           call 0x738b4a
// 00691e93  33c0                 xor eax, eax
// 00691e95  894624               mov dword ptr [esi + 0x24], eax
// 00691e98  894620               mov dword ptr [esi + 0x20], eax
// 00691e9b  c7462810000000       mov dword ptr [esi + 0x28], 0x10
// 00691ea2  8bc6                 mov eax, esi
// 00691ea4  5e                   pop esi
// 00691ea5  c3                   ret 
// library xtp-11.2.2-vc8/Source\Controls\XTThemeManager.cpp (function ??0CXTThemeManager@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Controls/XTThemeManager.cpp
