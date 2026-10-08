// from server: 100% by auto
// roc 2008-06 00717fd0  unit: CXTPPropertyGridItemEnum  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00717fd0
//
// 00717fd0  57                   push edi
// 00717fd1  8bf9                 mov edi, ecx
// 00717fd3  837f0800             cmp dword ptr [edi + 8], 0
// 00717fd7  7434                 je 0x71800d
// 00717fd9  56                   push esi
// 00717fda  6814eb8500           push 0x85eb14
// 00717fdf  ff15bc218000         call dword ptr [0x8021bc]
// 00717fe5  8bcf                 mov ecx, edi
// 00717fe7  8bf0                 mov esi, eax
// 00717fe9  e822ffffff           call 0x717f10
// 00717fee  3bb0d0000000         cmp esi, dword ptr [eax + 0xd0]
// 00717ff4  7416                 je 0x71800c
// 00717ff6  68d0000000           push 0xd0
// 00717ffb  6a00                 push 0
// 00717ffd  50                   push eax
// 00717ffe  89b0d0000000         mov dword ptr [eax + 0xd0], esi
// 00718004  e8fb96f8ff           call 0x6a1704
// 00718009  83c40c               add esp, 0xc
// 0071800c  5e                   pop esi
// 0071800d  5f                   pop edi
// 0071800e  c3                   ret 
// library xtp-11.2.2/Source\Common\XTPWinThemeWrapper.cpp (function ?ReloadLibrary@CXTPWinThemeWrapper@@ABEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Common/XTPWinThemeWrapper.cpp
