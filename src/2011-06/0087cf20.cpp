// roc 2011-06 0087cf20  unit: CXTPPropertyGridItemEnum  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0087cf20
//
// 0087cf20  57                   push edi
// 0087cf21  8bf9                 mov edi, ecx
// 0087cf23  837f0800             cmp dword ptr [edi + 8], 0
// 0087cf27  7434                 je 0x87cf5d
// 0087cf29  56                   push esi
// 0087cf2a  6828edac00           push 0xaced28
// 0087cf2f  ff156803a400         call dword ptr [0xa40368]
// 0087cf35  8bcf                 mov ecx, edi
// 0087cf37  8bf0                 mov esi, eax
// 0087cf39  e822ffffff           call 0x87ce60
// 0087cf3e  3bb0d0000000         cmp esi, dword ptr [eax + 0xd0]
// 0087cf44  7416                 je 0x87cf5c
// 0087cf46  68d0000000           push 0xd0
// 0087cf4b  6a00                 push 0
// 0087cf4d  50                   push eax
// 0087cf4e  89b0d0000000         mov dword ptr [eax + 0xd0], esi
// 0087cf54  e88be3f8ff           call 0x80b2e4
// 0087cf59  83c40c               add esp, 0xc
// 0087cf5c  5e                   pop esi
// 0087cf5d  5f                   pop edi
// 0087cf5e  c3                   ret 
// library xtp-15.2.1/Source\Common\XTPWinThemeWrapper.cpp (function ?ReloadLibrary@CXTPWinThemeWrapper@@ABEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPWinThemeWrapper.cpp
