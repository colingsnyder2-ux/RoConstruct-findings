// roc 2008-06 00628820  unit: seg_00620000  size: 124 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00628820
//
// 00628820  53                   push ebx
// 00628821  57                   push edi
// 00628822  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00628826  57                   push edi
// 00628827  e8e493feff           call 0x611c10
// 0062882c  6a01                 push 1
// 0062882e  57                   push edi
// 0062882f  8bd8                 mov ebx, eax
// 00628831  e8ca95feff           call 0x611e00
// 00628836  83c40c               add esp, 0xc
// 00628839  83f804               cmp eax, 4
// 0062883c  7525                 jne 0x628863
// 0062883e  6a00                 push 0
// 00628840  6a01                 push 1
// 00628842  57                   push edi
// 00628843  e8c897feff           call 0x612010
// 00628848  83c40c               add esp, 0xc
// 0062884b  803823               cmp byte ptr [eax], 0x23
// 0062884e  7513                 jne 0x628863
// 00628850  4b                   dec ebx
// 00628851  53                   push ebx
// 00628852  57                   push edi
// 00628853  e8c899feff           call 0x612220
// 00628858  83c408               add esp, 8
// 0062885b  5f                   pop edi
// 0062885c  b801000000           mov eax, 1
// 00628861  5b                   pop ebx
// 00628862  c3                   ret 
// 00628863  56                   push esi
// 00628864  6a01                 push 1
// 00628866  57                   push edi
// 00628867  e8948ffeff           call 0x611800
// 0062886c  8bf0                 mov esi, eax
// 0062886e  83c408               add esp, 8
// 00628871  85f6                 test esi, esi
// 00628873  7d04                 jge 0x628879
// 00628875  03f3                 add esi, ebx
// 00628877  eb06                 jmp 0x62887f
// 00628879  3bf3                 cmp esi, ebx
// 0062887b  7e02                 jle 0x62887f
// 0062887d  8bf3                 mov esi, ebx
// 0062887f  83fe01               cmp esi, 1
// 00628882  7d10                 jge 0x628894
// 00628884  68ec568400           push 0x8456ec
// 00628889  6a01                 push 1
// 0062888b  57                   push edi
// 0062888c  e83f8cfeff           call 0x6114d0
// 00628891  83c40c               add esp, 0xc
// 00628894  8bc3                 mov eax, ebx
// 00628896  2bc6                 sub eax, esi
// 00628898  5e                   pop esi
// 00628899  5f                   pop edi
// 0062889a  5b                   pop ebx
// 0062889b  c3                   ret 
// library lua-5.1.4/lbaselib.c (function _luaB_select)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lbaselib.c
