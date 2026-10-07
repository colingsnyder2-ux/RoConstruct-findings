// roc 2008-06 0070dcf0  unit: CXTThemeManager  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0070dcf0
//
// 0070dcf0  33c0                 xor eax, eax
// 0070dcf2  56                   push esi
// 0070dcf3  8bf1                 mov esi, ecx
// 0070dcf5  c70670cf8500         mov dword ptr [esi], 0x85cf70
// 0070dcfb  894604               mov dword ptr [esi + 4], eax
// 0070dcfe  894608               mov dword ptr [esi + 8], eax
// 0070dd01  89460c               mov dword ptr [esi + 0xc], eax
// 0070dd04  894610               mov dword ptr [esi + 0x10], eax
// 0070dd07  e8c4ffffff           call 0x70dcd0
// 0070dd0c  83c024               add eax, 0x24
// 0070dd0f  56                   push esi
// 0070dd10  8bc8                 mov ecx, eax
// 0070dd12  e8d9ea0a00           call 0x7bc7f0
// 0070dd17  c7460c14000000       mov dword ptr [esi + 0xc], 0x14
// 0070dd1e  8bc6                 mov eax, esi
// 0070dd20  5e                   pop esi
// 0070dd21  c3                   ret 
// library xtp-11.2.2/Source\Controls\XTThemeManager.cpp (function ??0CXTThemeManagerStyleFactory@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTThemeManager.cpp
