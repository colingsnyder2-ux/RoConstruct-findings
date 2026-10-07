// roc 2007-08 00691fc0  unit: CXTThemeManager  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00691fc0
//
// 00691fc0  33c0                 xor eax, eax
// 00691fc2  56                   push esi
// 00691fc3  8bf1                 mov esi, ecx
// 00691fc5  c70698087d00         mov dword ptr [esi], 0x7d0898
// 00691fcb  894604               mov dword ptr [esi + 4], eax
// 00691fce  894608               mov dword ptr [esi + 8], eax
// 00691fd1  89460c               mov dword ptr [esi + 0xc], eax
// 00691fd4  894610               mov dword ptr [esi + 0x10], eax
// 00691fd7  e8c4ffffff           call 0x691fa0
// 00691fdc  83c024               add eax, 0x24
// 00691fdf  56                   push esi
// 00691fe0  8bc8                 mov ecx, eax
// 00691fe2  e8456b0a00           call 0x738b2c
// 00691fe7  c7460c14000000       mov dword ptr [esi + 0xc], 0x14
// 00691fee  8bc6                 mov eax, esi
// 00691ff0  5e                   pop esi
// 00691ff1  c3                   ret 
// library xtp-11.2.2-vc8/Source\Controls\XTThemeManager.cpp (function ??0CXTThemeManagerStyleFactory@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Controls/XTThemeManager.cpp
