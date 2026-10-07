// roc 2011-06 008f5b50  unit: CXTPTabPaintManager::CColorSetOffice2003  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008f5b50
//
// 008f5b50  53                   push ebx
// 008f5b51  56                   push esi
// 008f5b52  57                   push edi
// 008f5b53  e888f8f4ff           call 0x8453e0
// 008f5b58  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 008f5b5c  51                   push ecx
// 008f5b5d  8bc8                 mov ecx, eax
// 008f5b5f  e84cf0f4ff           call 0x844bb0
// 008f5b64  8b742410             mov esi, dword ptr [esp + 0x10]
// 008f5b68  50                   push eax
// 008f5b69  8d542418             lea edx, [esp + 0x18]
// 008f5b6d  52                   push edx
// 008f5b6e  8bce                 mov ecx, esi
// 008f5b70  e8ab52f1ff           call 0x80ae20
// 008f5b75  e866f8f4ff           call 0x8453e0
// 008f5b7a  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 008f5b7e  57                   push edi
// 008f5b7f  8bc8                 mov ecx, eax
// 008f5b81  e82af0f4ff           call 0x844bb0
// 008f5b86  8bd8                 mov ebx, eax
// 008f5b88  e853f8f4ff           call 0x8453e0
// 008f5b8d  57                   push edi
// 008f5b8e  8bc8                 mov ecx, eax
// 008f5b90  e81bf0f4ff           call 0x844bb0
// 008f5b95  53                   push ebx
// 008f5b96  50                   push eax
// 008f5b97  8d44241c             lea eax, [esp + 0x1c]
// 008f5b9b  50                   push eax
// 008f5b9c  8bce                 mov ecx, esi
// 008f5b9e  e87752f1ff           call 0x80ae1a
// 008f5ba3  5f                   pop edi
// 008f5ba4  5e                   pop esi
// 008f5ba5  5b                   pop ebx
// 008f5ba6  c21c00               ret 0x1c
// library xtp-15.2.1/Source\ShortcutBar\XTPShortcutBarPaintManager.cpp (function ?Rectangle@CXTPShortcutBarPaintManager@@QAEXPAVCDC@@VCRect@@HH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/ShortcutBar/XTPShortcutBarPaintManager.cpp
