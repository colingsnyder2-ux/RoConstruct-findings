// from server: 100% by auto
// roc 2008-06 00627340  unit: seg_00620000  size: 358 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00627340
//
// 00627340  81ec18010000         sub esp, 0x118
// 00627346  53                   push ebx
// 00627347  55                   push ebp
// 00627348  56                   push esi
// 00627349  57                   push edi
// 0062734a  8bbc242c010000       mov edi, dword ptr [esp + 0x12c]
// 00627351  8d442414             lea eax, [esp + 0x14]
// 00627355  50                   push eax
// 00627356  68edd8ffff           push 0xffffd8ed
// 0062735b  57                   push edi
// 0062735c  e8afacfeff           call 0x612010
// 00627361  6a00                 push 0
// 00627363  68ecd8ffff           push 0xffffd8ec
// 00627368  57                   push edi
// 00627369  8bd8                 mov ebx, eax
// 0062736b  e8a0acfeff           call 0x612010
// 00627370  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00627374  03cb                 add ecx, ebx
// 00627376  68ebd8ffff           push 0xffffd8eb
// 0062737b  57                   push edi
// 0062737c  8be8                 mov ebp, eax
// 0062737e  897c2440             mov dword ptr [esp + 0x40], edi
// 00627382  895c2438             mov dword ptr [esp + 0x38], ebx
// 00627386  894c243c             mov dword ptr [esp + 0x3c], ecx
// 0062738a  e811acfeff           call 0x611fa0
// 0062738f  8bf0                 mov esi, eax
// 00627391  03f3                 add esi, ebx
// 00627393  83c420               add esp, 0x20
// 00627396  3b74241c             cmp esi, dword ptr [esp + 0x1c]
// 0062739a  772c                 ja 0x6273c8
// 0062739c  8d642400             lea esp, [esp]
// 006273a0  55                   push ebp
// 006273a1  8d54241c             lea edx, [esp + 0x1c]
// 006273a5  56                   push esi
// 006273a6  52                   push edx
// 006273a7  c744243000000000     mov dword ptr [esp + 0x30], 0
// 006273af  e86cf9ffff           call 0x626d20
// 006273b4  8bc8                 mov ecx, eax
// 006273b6  83c40c               add esp, 0xc
// 006273b9  894c2410             mov dword ptr [esp + 0x10], ecx
// 006273bd  85c9                 test ecx, ecx
// 006273bf  7514                 jne 0x6273d5
// 006273c1  46                   inc esi
// 006273c2  3b74241c             cmp esi, dword ptr [esp + 0x1c]
// 006273c6  76d8                 jbe 0x6273a0
// 006273c8  5f                   pop edi
// 006273c9  5e                   pop esi
// 006273ca  5d                   pop ebp
// 006273cb  33c0                 xor eax, eax
// 006273cd  5b                   pop ebx
// 006273ce  81c418010000         add esp, 0x118
// 006273d4  c3                   ret 
// 006273d5  8bc1                 mov eax, ecx
// 006273d7  2bc3                 sub eax, ebx
// 006273d9  3bce                 cmp ecx, esi
// 006273db  7501                 jne 0x6273de
// 006273dd  40                   inc eax
// 006273de  50                   push eax
// 006273df  57                   push edi
// 006273e0  e83baefeff           call 0x612220
// 006273e5  68ebd8ffff           push 0xffffd8eb
// 006273ea  57                   push edi
// 006273eb  e820a9feff           call 0x611d10
// 006273f0  8b442434             mov eax, dword ptr [esp + 0x34]
// 006273f4  83c410               add esp, 0x10
// 006273f7  85c0                 test eax, eax
// 006273f9  7507                 jne 0x627402
// 006273fb  8d6801               lea ebp, [eax + 1]
// 006273fe  85f6                 test esi, esi
// 00627400  7502                 jne 0x627404
// 00627402  8be8                 mov ebp, eax
// 00627404  8b442420             mov eax, dword ptr [esp + 0x20]
// 00627408  68c8518400           push 0x8451c8
// 0062740d  55                   push ebp
// 0062740e  50                   push eax
// 0062740f  e8dc98feff           call 0x610cf0
// 00627414  83c40c               add esp, 0xc
// 00627417  33ff                 xor edi, edi
// 00627419  85ed                 test ebp, ebp
// 0062741b  7e5e                 jle 0x62747b
// 0062741d  8d4900               lea ecx, [ecx]
// 00627420  3b7c2424             cmp edi, dword ptr [esp + 0x24]
// 00627424  7c22                 jl 0x627448
// 00627426  85ff                 test edi, edi
// 00627428  750a                 jne 0x627434
// 0062742a  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0062742e  2bce                 sub ecx, esi
// 00627430  51                   push ecx
// 00627431  56                   push esi
// 00627432  eb35                 jmp 0x627469
// 00627434  8b442420             mov eax, dword ptr [esp + 0x20]
// 00627438  6840518400           push 0x845140
// 0062743d  50                   push eax
// 0062743e  e81d98feff           call 0x610c60
// 00627443  83c408               add esp, 8
// 00627446  eb2e                 jmp 0x627476
// 00627448  8b5cfc2c             mov ebx, dword ptr [esp + edi*8 + 0x2c]
// 0062744c  83fbff               cmp ebx, -1
// 0062744f  7537                 jne 0x627488
// 00627451  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00627455  6800528400           push 0x845200
// 0062745a  51                   push ecx
// 0062745b  e80098feff           call 0x610c60
// 00627460  83c408               add esp, 8
// 00627463  8b4cfc28             mov ecx, dword ptr [esp + edi*8 + 0x28]
// 00627467  53                   push ebx
// 00627468  51                   push ecx
// 00627469  8b542428             mov edx, dword ptr [esp + 0x28]
// 0062746d  52                   push edx
// 0062746e  e8cdadfeff           call 0x612240
// 00627473  83c40c               add esp, 0xc
// 00627476  47                   inc edi
// 00627477  3bfd                 cmp edi, ebp
// 00627479  7ca5                 jl 0x627420
// 0062747b  5f                   pop edi
// 0062747c  5e                   pop esi
// 0062747d  8bc5                 mov eax, ebp
// 0062747f  5d                   pop ebp
// 00627480  5b                   pop ebx
// 00627481  81c418010000         add esp, 0x118
// 00627487  c3                   ret 
// 00627488  83fbfe               cmp ebx, -2
// 0062748b  75d6                 jne 0x627463
// 0062748d  8b54fc28             mov edx, dword ptr [esp + edi*8 + 0x28]
// 00627491  2b542418             sub edx, dword ptr [esp + 0x18]
// 00627495  8b442420             mov eax, dword ptr [esp + 0x20]
// 00627499  42                   inc edx
// 0062749a  52                   push edx
// 0062749b  50                   push eax
// 0062749c  e87fadfeff           call 0x612220
// 006274a1  83c408               add esp, 8
// 006274a4  ebd0                 jmp 0x627476
// library lua-5.1.4/lstrlib.c (function _gmatch_aux)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lstrlib.c
