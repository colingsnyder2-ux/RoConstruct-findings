// roc 2011-06 00900bb0  unit: CXTColorSelectorCtrlThemeOfficeXP  size: 112 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00900bb0
//
// 00900bb0  56                   push esi
// 00900bb1  8bf1                 mov esi, ecx
// 00900bb3  e868ffffff           call 0x900b20
// 00900bb8  e82348f4ff           call 0x8453e0
// 00900bbd  6a20                 push 0x20
// 00900bbf  8bc8                 mov ecx, eax
// 00900bc1  e8ea3ff4ff           call 0x844bb0
// 00900bc6  894614               mov dword ptr [esi + 0x14], eax
// 00900bc9  e81248f4ff           call 0x8453e0
// 00900bce  6a20                 push 0x20
// 00900bd0  8bc8                 mov ecx, eax
// 00900bd2  e8d93ff4ff           call 0x844bb0
// 00900bd7  894618               mov dword ptr [esi + 0x18], eax
// 00900bda  e80148f4ff           call 0x8453e0
// 00900bdf  6a29                 push 0x29
// 00900be1  8bc8                 mov ecx, eax
// 00900be3  e8c83ff4ff           call 0x844bb0
// 00900be8  89461c               mov dword ptr [esi + 0x1c], eax
// 00900beb  e8f047f4ff           call 0x8453e0
// 00900bf0  6a21                 push 0x21
// 00900bf2  8bc8                 mov ecx, eax
// 00900bf4  e8b73ff4ff           call 0x844bb0
// 00900bf9  894620               mov dword ptr [esi + 0x20], eax
// 00900bfc  e8df47f4ff           call 0x8453e0
// 00900c01  6a1f                 push 0x1f
// 00900c03  8bc8                 mov ecx, eax
// 00900c05  e8a63ff4ff           call 0x844bb0
// 00900c0a  894624               mov dword ptr [esi + 0x24], eax
// 00900c0d  e8ce47f4ff           call 0x8453e0
// 00900c12  6a24                 push 0x24
// 00900c14  8bc8                 mov ecx, eax
// 00900c16  e8953ff4ff           call 0x844bb0
// 00900c1b  894628               mov dword ptr [esi + 0x28], eax
// 00900c1e  5e                   pop esi
// 00900c1f  c3                   ret 
// library xtp-11.2.2/Source\Controls\XTColorSelectorCtrlTheme.cpp (function ?RefreshMetrics@CXTColorSelectorCtrlThemeOfficeXP@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTColorSelectorCtrlTheme.cpp
