// roc 2012-06 00a78d00  unit: CXTColorSelectorCtrlThemeFactory  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a78d00
//
// 00a78d00  56                   push esi
// 00a78d01  8bf1                 mov esi, ecx
// 00a78d03  e8b8d8f6ff           call 0x9e65c0
// 00a78d08  83c8ff               or eax, 0xffffffff
// 00a78d0b  894614               mov dword ptr [esi + 0x14], eax
// 00a78d0e  894618               mov dword ptr [esi + 0x18], eax
// 00a78d11  89461c               mov dword ptr [esi + 0x1c], eax
// 00a78d14  894620               mov dword ptr [esi + 0x20], eax
// 00a78d17  894624               mov dword ptr [esi + 0x24], eax
// 00a78d1a  894628               mov dword ptr [esi + 0x28], eax
// 00a78d1d  c7068c97c200         mov dword ptr [esi], 0xc2978c
// 00a78d23  8bc6                 mov eax, esi
// 00a78d25  5e                   pop esi
// 00a78d26  c3                   ret 
// library xtp-11.2.2/Source\Controls\XTColorSelectorCtrlTheme.cpp (function ??0CXTColorSelectorCtrlTheme@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTColorSelectorCtrlTheme.cpp
