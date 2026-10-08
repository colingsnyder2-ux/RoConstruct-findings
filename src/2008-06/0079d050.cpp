// from server: 100% by auto
// roc 2008-06 0079d050  unit: CXTPTabPaintManager::CColorSetOffice2003  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0079d050
//
// 0079d050  53                   push ebx
// 0079d051  56                   push esi
// 0079d052  57                   push edi
// 0079d053  e8e82cf4ff           call 0x6dfd40
// 0079d058  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0079d05c  51                   push ecx
// 0079d05d  8bc8                 mov ecx, eax
// 0079d05f  e8bc24f4ff           call 0x6df520
// 0079d064  8b742410             mov esi, dword ptr [esp + 0x10]
// 0079d068  50                   push eax
// 0079d069  8d542418             lea edx, [esp + 0x18]
// 0079d06d  52                   push edx
// 0079d06e  8bce                 mov ecx, esi
// 0079d070  e8e942f0ff           call 0x6a135e
// 0079d075  e8c62cf4ff           call 0x6dfd40
// 0079d07a  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 0079d07e  57                   push edi
// 0079d07f  8bc8                 mov ecx, eax
// 0079d081  e89a24f4ff           call 0x6df520
// 0079d086  8bd8                 mov ebx, eax
// 0079d088  e8b32cf4ff           call 0x6dfd40
// 0079d08d  57                   push edi
// 0079d08e  8bc8                 mov ecx, eax
// 0079d090  e88b24f4ff           call 0x6df520
// 0079d095  53                   push ebx
// 0079d096  50                   push eax
// 0079d097  8d44241c             lea eax, [esp + 0x1c]
// 0079d09b  50                   push eax
// 0079d09c  8bce                 mov ecx, esi
// 0079d09e  e8b542f0ff           call 0x6a1358
// 0079d0a3  5f                   pop edi
// 0079d0a4  5e                   pop esi
// 0079d0a5  5b                   pop ebx
// 0079d0a6  c21c00               ret 0x1c
// library xtp-11.2.2/Source\ShortcutBar\XTPShortcutBarPaintManager.cpp (function ?Rectangle@CXTPShortcutBarPaintManager@@QAEXPAVCDC@@VCRect@@HH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ShortcutBar/XTPShortcutBarPaintManager.cpp
