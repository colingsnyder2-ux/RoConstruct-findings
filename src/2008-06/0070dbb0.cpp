// from server: 100% by auto
// roc 2008-06 0070dbb0  unit: CXTThemeManagerStyleHost  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0070dbb0
//
// 0070dbb0  56                   push esi
// 0070dbb1  8bf1                 mov esi, ecx
// 0070dbb3  6a0a                 push 0xa
// 0070dbb5  8d4e04               lea ecx, [esi + 4]
// 0070dbb8  c70668cf8500         mov dword ptr [esi], 0x85cf68
// 0070dbbe  e84bec0a00           call 0x7bc80e
// 0070dbc3  33c0                 xor eax, eax
// 0070dbc5  894624               mov dword ptr [esi + 0x24], eax
// 0070dbc8  894620               mov dword ptr [esi + 0x20], eax
// 0070dbcb  c7462810000000       mov dword ptr [esi + 0x28], 0x10
// 0070dbd2  8bc6                 mov eax, esi
// 0070dbd4  5e                   pop esi
// 0070dbd5  c3                   ret 
// library xtp-11.2.2/Source\Controls\XTThemeManager.cpp (function ??0CXTThemeManager@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTThemeManager.cpp
