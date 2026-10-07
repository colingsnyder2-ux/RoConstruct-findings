// roc 2012-06 009e6c60  unit: CXTThemeManager  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009e6c60
//
// 009e6c60  33c0                 xor eax, eax
// 009e6c62  56                   push esi
// 009e6c63  8bf1                 mov esi, ecx
// 009e6c65  c7067878c100         mov dword ptr [esi], 0xc17878
// 009e6c6b  894604               mov dword ptr [esi + 4], eax
// 009e6c6e  894608               mov dword ptr [esi + 8], eax
// 009e6c71  89460c               mov dword ptr [esi + 0xc], eax
// 009e6c74  894610               mov dword ptr [esi + 0x10], eax
// 009e6c77  e8c4ffffff           call 0x9e6c40
// 009e6c7c  83c024               add eax, 0x24
// 009e6c7f  56                   push esi
// 009e6c80  8bc8                 mov ecx, eax
// 009e6c82  e8d32e0b00           call 0xa99b5a
// 009e6c87  c7460c14000000       mov dword ptr [esi + 0xc], 0x14
// 009e6c8e  8bc6                 mov eax, esi
// 009e6c90  5e                   pop esi
// 009e6c91  c3                   ret 
// library xtp-15.2.1/Source\Controls\Deprecated\XTThemeManager.cpp (function ??0CXTThemeManagerStyleFactory@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Controls/Deprecated/XTThemeManager.cpp
