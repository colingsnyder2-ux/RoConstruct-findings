// roc 2010-06 00842600  unit: CXTPShortcutManager  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00842600
//
// 00842600  55                   push ebp
// 00842601  8b6c2408             mov ebp, dword ptr [esp + 8]
// 00842605  85ed                 test ebp, ebp
// 00842607  7504                 jne 0x84260d
// 00842609  33c0                 xor eax, eax
// 0084260b  5d                   pop ebp
// 0084260c  c3                   ret 
// 0084260d  53                   push ebx
// 0084260e  8b1da4bb9e00         mov ebx, dword ptr [0x9ebba4]
// 00842614  56                   push esi
// 00842615  6a00                 push 0
// 00842617  6a00                 push 0
// 00842619  55                   push ebp
// 0084261a  ffd3                 call ebx
// 0084261c  8bf0                 mov esi, eax
// 0084261e  85f6                 test esi, esi
// 00842620  7504                 jne 0x842626
// 00842622  5e                   pop esi
// 00842623  5b                   pop ebx
// 00842624  5d                   pop ebp
// 00842625  c3                   ret 
// 00842626  33c9                 xor ecx, ecx
// 00842628  ba06000000           mov edx, 6
// 0084262d  f7e2                 mul edx
// 0084262f  0f90c1               seto cl
// 00842632  57                   push edi
// 00842633  f7d9                 neg ecx
// 00842635  0bc8                 or ecx, eax
// 00842637  51                   push ecx
// 00842638  e84556f6ff           call 0x7a7c82
// 0084263d  83c404               add esp, 4
// 00842640  56                   push esi
// 00842641  8bf8                 mov edi, eax
// 00842643  57                   push edi
// 00842644  55                   push ebp
// 00842645  ffd3                 call ebx
// 00842647  56                   push esi
// 00842648  57                   push edi
// 00842649  ff151cbb9e00         call dword ptr [0x9ebb1c]
// 0084264f  57                   push edi
// 00842650  8bf0                 mov esi, eax
// 00842652  e8ef55f6ff           call 0x7a7c46
// 00842657  83c404               add esp, 4
// 0084265a  5f                   pop edi
// 0084265b  8bc6                 mov eax, esi
// 0084265d  5e                   pop esi
// 0084265e  5b                   pop ebx
// 0084265f  5d                   pop ebp
// 00842660  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPShortcutManager.cpp (function ?CopyAccelTable@CXTPShortcutManager@@SAPAUHACCEL__@@PAU2@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPShortcutManager.cpp
