// from server: 100% by auto
// roc 2007-08 0071ff70  unit: CXTColorSelectorCtrlThemeFactory  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0071ff70
//
// 0071ff70  56                   push esi
// 0071ff71  8bf1                 mov esi, ecx
// 0071ff73  e8d819f7ff           call 0x691950
// 0071ff78  83c8ff               or eax, 0xffffffff
// 0071ff7b  894614               mov dword ptr [esi + 0x14], eax
// 0071ff7e  894618               mov dword ptr [esi + 0x18], eax
// 0071ff81  89461c               mov dword ptr [esi + 0x1c], eax
// 0071ff84  894620               mov dword ptr [esi + 0x20], eax
// 0071ff87  894624               mov dword ptr [esi + 0x24], eax
// 0071ff8a  894628               mov dword ptr [esi + 0x28], eax
// 0071ff8d  c706ec217e00         mov dword ptr [esi], 0x7e21ec
// 0071ff93  8bc6                 mov eax, esi
// 0071ff95  5e                   pop esi
// 0071ff96  c3                   ret 
// library xtp-11.2.2-vc8/Source\Controls\XTColorSelectorCtrlTheme.cpp (function ??0CXTColorSelectorCtrlTheme@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Controls/XTColorSelectorCtrlTheme.cpp
