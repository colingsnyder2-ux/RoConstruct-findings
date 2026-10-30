// roc 2009-12 0078a300  unit: RBX::UniversalTool  size: 484 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0078a300
//
// 0078a300  81ec08020000         sub esp, 0x208
// 0078a306  55                   push ebp
// 0078a307  56                   push esi
// 0078a308  8bb42414020000       mov esi, dword ptr [esp + 0x214]
// 0078a30f  57                   push edi
// 0078a310  56                   push esi
// 0078a311  e88ae4ffff           call 0x7887a0
// 0078a316  8bac2420020000       mov ebp, dword ptr [esp + 0x220]
// 0078a31d  8bf8                 mov edi, eax
// 0078a31f  83c404               add esp, 4
// 0078a322  47                   inc edi
// 0078a323  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 0078a32b  85ed                 test ebp, ebp
// 0078a32d  0f859b000000         jne 0x78a3ce
// 0078a333  6a06                 push 6
// 0078a335  68409d9e00           push 0x9e9d40
// 0078a33a  56                   push esi
// 0078a33b  e860eaffff           call 0x788da0
// 0078a340  83c40c               add esp, 0xc
// 0078a343  ff15f0b79800         call dword ptr [0x98b7f0]
// 0078a349  89442410             mov dword ptr [esp + 0x10], eax
// 0078a34d  53                   push ebx
// 0078a34e  8b1d24b99800         mov ebx, dword ptr [0x98b924]
// 0078a354  50                   push eax
// 0078a355  ffd3                 call ebx
// 0078a357  83c404               add esp, 4
// 0078a35a  83f823               cmp eax, 0x23
// 0078a35d  752a                 jne 0x78a389
// 0078a35f  c744241001000000     mov dword ptr [esp + 0x10], 1
// 0078a367  8b442414             mov eax, dword ptr [esp + 0x14]
// 0078a36b  50                   push eax
// 0078a36c  ffd3                 call ebx
// 0078a36e  83c404               add esp, 4
// 0078a371  83f8ff               cmp eax, -1
// 0078a374  0f84b2000000         je 0x78a42c
// 0078a37a  83f80a               cmp eax, 0xa
// 0078a37d  75e8                 jne 0x78a367
// 0078a37f  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0078a383  51                   push ecx
// 0078a384  ffd3                 call ebx
// 0078a386  83c404               add esp, 4
// 0078a389  83f81b               cmp eax, 0x1b
// 0078a38c  0f859a000000         jne 0x78a42c
// 0078a392  85ed                 test ebp, ebp
// 0078a394  0f8492000000         je 0x78a42c
// 0078a39a  8b542414             mov edx, dword ptr [esp + 0x14]
// 0078a39e  52                   push edx
// 0078a39f  6818e99b00           push 0x9be918
// 0078a3a4  55                   push ebp
// 0078a3a5  ff1520b99800         call dword ptr [0x98b920]
// 0078a3ab  83c40c               add esp, 0xc
// 0078a3ae  89442414             mov dword ptr [esp + 0x14], eax
// 0078a3b2  85c0                 test eax, eax
// 0078a3b4  755e                 jne 0x78a414
// 0078a3b6  68389d9e00           push 0x9e9d38
// 0078a3bb  e800ffffff           call 0x78a2c0
// 0078a3c0  83c404               add esp, 4
// 0078a3c3  5b                   pop ebx
// 0078a3c4  5f                   pop edi
// 0078a3c5  5e                   pop esi
// 0078a3c6  5d                   pop ebp
// 0078a3c7  81c408020000         add esp, 0x208
// 0078a3cd  c3                   ret 
// 0078a3ce  55                   push ebp
// 0078a3cf  68349d9e00           push 0x9e9d34
// 0078a3d4  56                   push esi
// 0078a3d5  e8a6eaffff           call 0x788e80
// 0078a3da  68309d9e00           push 0x9e9d30
// 0078a3df  55                   push ebp
// 0078a3e0  ff1504b89800         call dword ptr [0x98b804]
// 0078a3e6  83c414               add esp, 0x14
// 0078a3e9  89442410             mov dword ptr [esp + 0x10], eax
// 0078a3ed  85c0                 test eax, eax
// 0078a3ef  0f8558ffffff         jne 0x78a34d
// 0078a3f5  68fcaf9a00           push 0x9aaffc
// 0078a3fa  e8c1feffff           call 0x78a2c0
// 0078a3ff  83c404               add esp, 4
// 0078a402  5f                   pop edi
// 0078a403  5e                   pop esi
// 0078a404  5d                   pop ebp
// 0078a405  81c408020000         add esp, 0x208
// 0078a40b  c3                   ret 
// 0078a40c  8d642400             lea esp, [esp]
// 0078a410  8b442414             mov eax, dword ptr [esp + 0x14]
// 0078a414  50                   push eax
// 0078a415  ffd3                 call ebx
// 0078a417  83c404               add esp, 4
// 0078a41a  83f8ff               cmp eax, -1
// 0078a41d  7405                 je 0x78a424
// 0078a41f  83f81b               cmp eax, 0x1b
// 0078a422  75ec                 jne 0x78a410
// 0078a424  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0078a42c  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0078a430  51                   push ecx
// 0078a431  50                   push eax
// 0078a432  ff151cb99800         call dword ptr [0x98b91c]
// 0078a438  6a00                 push 0
// 0078a43a  6aff                 push -1
// 0078a43c  56                   push esi
// 0078a43d  e85ee7ffff           call 0x788ba0
// 0078a442  50                   push eax
// 0078a443  8d542428             lea edx, [esp + 0x28]
// 0078a447  52                   push edx
// 0078a448  6860a27800           push 0x78a260
// 0078a44d  56                   push esi
// 0078a44e  e83df1ffff           call 0x789590
// 0078a453  8bd8                 mov ebx, eax
// 0078a455  8b442438             mov eax, dword ptr [esp + 0x38]
// 0078a459  50                   push eax
// 0078a45a  ff1518b99800         call dword ptr [0x98b918]
// 0078a460  83c428               add esp, 0x28
// 0078a463  83bc242002000000     cmp dword ptr [esp + 0x220], 0
// 0078a46b  8be8                 mov ebp, eax
// 0078a46d  740e                 je 0x78a47d
// 0078a46f  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0078a473  51                   push ecx
// 0078a474  ff1584b89800         call dword ptr [0x98b884]
// 0078a47a  83c404               add esp, 4
// 0078a47d  57                   push edi
// 0078a47e  56                   push esi
// 0078a47f  85ed                 test ebp, ebp
// 0078a481  744c                 je 0x78a4cf
// 0078a483  e828e3ffff           call 0x7887b0
// 0078a488  ff1590b89800         call dword ptr [0x98b890]
// 0078a48e  8b10                 mov edx, dword ptr [eax]
// 0078a490  52                   push edx
// 0078a491  ff1514b99800         call dword ptr [0x98b914]
// 0078a497  6a00                 push 0
// 0078a499  57                   push edi
// 0078a49a  56                   push esi
// 0078a49b  8bd8                 mov ebx, eax
// 0078a49d  e8fee6ffff           call 0x788ba0
// 0078a4a2  53                   push ebx
// 0078a4a3  40                   inc eax
// 0078a4a4  50                   push eax
// 0078a4a5  68289d9e00           push 0x9e9d28
// 0078a4aa  68149d9e00           push 0x9e9d14
// 0078a4af  56                   push esi
// 0078a4b0  e8cbe9ffff           call 0x788e80
// 0078a4b5  57                   push edi
// 0078a4b6  56                   push esi
// 0078a4b7  e844e3ffff           call 0x788800
// 0078a4bc  83c434               add esp, 0x34
// 0078a4bf  5b                   pop ebx
// 0078a4c0  5f                   pop edi
// 0078a4c1  5e                   pop esi
// 0078a4c2  b806000000           mov eax, 6
// 0078a4c7  5d                   pop ebp
// 0078a4c8  81c408020000         add esp, 0x208
// 0078a4ce  c3                   ret 
// 0078a4cf  e82ce3ffff           call 0x788800
// 0078a4d4  83c408               add esp, 8
// 0078a4d7  8bc3                 mov eax, ebx
// 0078a4d9  5b                   pop ebx
// 0078a4da  5f                   pop edi
// 0078a4db  5e                   pop esi
// 0078a4dc  5d                   pop ebp
// 0078a4dd  81c408020000         add esp, 0x208
// 0078a4e3  c3                   ret 
// copied from an identical function in another client (function _luaL_loadfile)

// from server: 100% by tester
// roc-lang: c
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4-dll lauxlib.c