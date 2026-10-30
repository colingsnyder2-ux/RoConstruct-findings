// from server: 100% by auto
// roc 2012-06 00a6deb0  unit: CXTPTabPaintManager::CColorSetOffice2003  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a6deb0
//
// 00a6deb0  53                   push ebx
// 00a6deb1  56                   push esi
// 00a6deb2  57                   push edi
// 00a6deb3  e8a8f9f4ff           call 0x9bd860
// 00a6deb8  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00a6debc  51                   push ecx
// 00a6debd  8bc8                 mov ecx, eax
// 00a6debf  e81cf1f4ff           call 0x9bcfe0
// 00a6dec4  8b742410             mov esi, dword ptr [esp + 0x10]
// 00a6dec8  50                   push eax
// 00a6dec9  8d542418             lea edx, [esp + 0x18]
// 00a6decd  52                   push edx
// 00a6dece  8bce                 mov ecx, esi
// 00a6ded0  e8d74ff1ff           call 0x982eac
// 00a6ded5  e886f9f4ff           call 0x9bd860
// 00a6deda  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 00a6dede  57                   push edi
// 00a6dedf  8bc8                 mov ecx, eax
// 00a6dee1  e8faf0f4ff           call 0x9bcfe0
// 00a6dee6  8bd8                 mov ebx, eax
// 00a6dee8  e873f9f4ff           call 0x9bd860
// 00a6deed  57                   push edi
// 00a6deee  8bc8                 mov ecx, eax
// 00a6def0  e8ebf0f4ff           call 0x9bcfe0
// 00a6def5  53                   push ebx
// 00a6def6  50                   push eax
// 00a6def7  8d44241c             lea eax, [esp + 0x1c]
// 00a6defb  50                   push eax
// 00a6defc  8bce                 mov ecx, esi
// 00a6defe  e8a34ff1ff           call 0x982ea6
// 00a6df03  5f                   pop edi
// 00a6df04  5e                   pop esi
// 00a6df05  5b                   pop ebx
// 00a6df06  c21c00               ret 0x1c
// library xtp-15.2.1/Source\ShortcutBar\XTPShortcutBarPaintManager.cpp (function ?Rectangle@CXTPShortcutBarPaintManager@@QAEXPAVCDC@@VCRect@@HH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/ShortcutBar/XTPShortcutBarPaintManager.cpp
