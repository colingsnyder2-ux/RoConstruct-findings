// from server: 100% by auto
// roc 2007-08 0071c350  unit: CXTPTabPaintManager::CColorSetOffice2003  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0071c350
//
// 0071c350  53                   push ebx
// 0071c351  56                   push esi
// 0071c352  57                   push edi
// 0071c353  e818ccf4ff           call 0x668f70
// 0071c358  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0071c35c  51                   push ecx
// 0071c35d  8bc8                 mov ecx, eax
// 0071c35f  e80cc4f4ff           call 0x668770
// 0071c364  8b742410             mov esi, dword ptr [esp + 0x10]
// 0071c368  50                   push eax
// 0071c369  8d542418             lea edx, [esp + 0x18]
// 0071c36d  52                   push edx
// 0071c36e  8bce                 mov ecx, esi
// 0071c370  e83b45f1ff           call 0x6308b0
// 0071c375  e8f6cbf4ff           call 0x668f70
// 0071c37a  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 0071c37e  57                   push edi
// 0071c37f  8bc8                 mov ecx, eax
// 0071c381  e8eac3f4ff           call 0x668770
// 0071c386  8bd8                 mov ebx, eax
// 0071c388  e8e3cbf4ff           call 0x668f70
// 0071c38d  57                   push edi
// 0071c38e  8bc8                 mov ecx, eax
// 0071c390  e8dbc3f4ff           call 0x668770
// 0071c395  53                   push ebx
// 0071c396  50                   push eax
// 0071c397  8d44241c             lea eax, [esp + 0x1c]
// 0071c39b  50                   push eax
// 0071c39c  8bce                 mov ecx, esi
// 0071c39e  e80745f1ff           call 0x6308aa
// 0071c3a3  5f                   pop edi
// 0071c3a4  5e                   pop esi
// 0071c3a5  5b                   pop ebx
// 0071c3a6  c21c00               ret 0x1c
// library xtp-11.2.2-vc8/Source\ShortcutBar\XTPShortcutBarPaintManager.cpp (function ?Rectangle@CXTPShortcutBarPaintManager@@QAEXPAVCDC@@VCRect@@HH@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/ShortcutBar/XTPShortcutBarPaintManager.cpp
