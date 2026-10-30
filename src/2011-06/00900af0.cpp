// roc 2011-06 00900af0  unit: CXTColorSelectorCtrlThemeFactory  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00900af0
//
// 00900af0  56                   push esi
// 00900af1  8bf1                 mov esi, ecx
// 00900af3  e858abf6ff           call 0x86b650
// 00900af8  83c8ff               or eax, 0xffffffff
// 00900afb  894614               mov dword ptr [esi + 0x14], eax
// 00900afe  894618               mov dword ptr [esi + 0x18], eax
// 00900b01  89461c               mov dword ptr [esi + 0x1c], eax
// 00900b04  894620               mov dword ptr [esi + 0x20], eax
// 00900b07  894624               mov dword ptr [esi + 0x24], eax
// 00900b0a  894628               mov dword ptr [esi + 0x28], eax
// 00900b0d  c706cce0ad00         mov dword ptr [esi], 0xade0cc
// 00900b13  8bc6                 mov eax, esi
// 00900b15  5e                   pop esi
// 00900b16  c3                   ret 
// copied from an identical function in another client (function ??0CXTColorSelectorCtrlTheme@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTColorSelectorCtrlTheme.cpp