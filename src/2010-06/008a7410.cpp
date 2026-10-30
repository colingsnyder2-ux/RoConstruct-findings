// roc 2010-06 008a7410  unit: CXTColorSelectorCtrlThemeFactory  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008a7410
//
// 008a7410  56                   push esi
// 008a7411  8bf1                 mov esi, ecx
// 008a7413  e8786af6ff           call 0x80de90
// 008a7418  83c8ff               or eax, 0xffffffff
// 008a741b  894614               mov dword ptr [esi + 0x14], eax
// 008a741e  894618               mov dword ptr [esi + 0x18], eax
// 008a7421  89461c               mov dword ptr [esi + 0x1c], eax
// 008a7424  894620               mov dword ptr [esi + 0x20], eax
// 008a7427  894624               mov dword ptr [esi + 0x24], eax
// 008a742a  894628               mov dword ptr [esi + 0x28], eax
// 008a742d  c706743ca700         mov dword ptr [esi], 0xa73c74
// 008a7433  8bc6                 mov eax, esi
// 008a7435  5e                   pop esi
// 008a7436  c3                   ret 
// library xtp-11.2.2/Source\Controls\XTColorSelectorCtrlTheme.cpp (function ??0CXTColorSelectorCtrlTheme@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTColorSelectorCtrlTheme.cpp
