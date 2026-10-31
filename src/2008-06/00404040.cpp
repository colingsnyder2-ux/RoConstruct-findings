// from server: 100% by auto
// roc 2008-06 00404040  unit: ATL::CRegObject  size: 938 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00404040
//
// 00404040  55                   push ebp
// 00404041  8bec                 mov ebp, esp
// 00404043  6aff                 push -1
// 00404045  68cecc7b00           push 0x7bccce
// 0040404a  64a100000000         mov eax, dword ptr fs:[0]
// 00404050  50                   push eax
// 00404051  64892500000000       mov dword ptr fs:[0], esp
// 00404058  51                   push ecx
// 00404059  b820110000           mov eax, 0x1120
// 0040405e  e8bdd42900           call 0x6a1520
// 00404063  53                   push ebx
// 00404064  56                   push esi
// 00404065  57                   push edi
// 00404066  8d85d0eeffff         lea eax, [ebp - 0x1130]
// 0040406c  8965f0               mov dword ptr [ebp - 0x10], esp
// 0040406f  8bf1                 mov esi, ecx
// 00404071  33ff                 xor edi, edi
// 00404073  50                   push eax
// 00404074  8975e4               mov dword ptr [ebp - 0x1c], esi
// 00404077  897dec               mov dword ptr [ebp - 0x14], edi
// 0040407a  e8e1dfffff           call 0x402060
// 0040407f  3bc7                 cmp eax, edi
// 00404081  0f8c4a030000         jl 0x4043d1
// 00404087  8d4dec               lea ecx, [ebp - 0x14]
// 0040408a  51                   push ecx
// 0040408b  8d95d0eeffff         lea edx, [ebp - 0x1130]
// 00404091  52                   push edx
// 00404092  e809deffff           call 0x401ea0
// 00404097  83c408               add esp, 8
// 0040409a  85c0                 test eax, eax
// 0040409c  750a                 jne 0x4040a8
// 0040409e  b809000280           mov eax, 0x80020009
// 004040a3  e929030000           jmp 0x4043d1
// 004040a8  8bce                 mov ecx, esi
// 004040aa  e851dfffff           call 0x402000
// 004040af  8d85d0eeffff         lea eax, [ebp - 0x1130]
// 004040b5  50                   push eax
// 004040b6  8bce                 mov ecx, esi
// 004040b8  e8a3dfffff           call 0x402060
// 004040bd  3bc7                 cmp eax, edi
// 004040bf  0f8c0c030000         jl 0x4043d1
// 004040c5  0fb745ec             movzx eax, word ptr [ebp - 0x14]
// 004040c9  83f813               cmp eax, 0x13
// 004040cc  0f8ff7010000         jg 0x4042c9
// 004040d2  0f8440010000         je 0x404218
// 004040d8  83f808               cmp eax, 8
// 004040db  0f841b010000         je 0x4041fc
// 004040e1  83f811               cmp eax, 0x11
// 004040e4  0f85d2020000         jne 0x4043bc
// 004040ea  8d8dd0eeffff         lea ecx, [ebp - 0x1130]
// 004040f0  51                   push ecx
// 004040f1  ff15b8218000         call dword ptr [0x8021b8]
// 004040f7  8bd8                 mov ebx, eax
// 004040f9  895de8               mov dword ptr [ebp - 0x18], ebx
// 004040fc  f6c301               test bl, 1
// 004040ff  7560                 jne 0x404161
// 00404101  99                   cdq 
// 00404102  2bc2                 sub eax, edx
// 00404104  8bf8                 mov edi, eax
// 00404106  d1ff                 sar edi, 1
// 00404108  897dec               mov dword ptr [ebp - 0x14], edi
// 0040410b  c785d0feffff00000000 mov dword ptr [ebp - 0x130], 0
// 00404115  c745fc04000000       mov dword ptr [ebp - 4], 4
// 0040411c  57                   push edi
// 0040411d  8d8dd0feffff         lea ecx, [ebp - 0x130]
// 00404123  c645fc05             mov byte ptr [ebp - 4], 5
// 00404127  e884f9ffff           call 0x403ab0
// 0040412c  eb14                 jmp 0x404142
// 0040412e  8b4dd8               mov ecx, dword ptr [ebp - 0x28]
// 00404131  e81ac82900           call 0x6a0950
// 00404136  b83c414000           mov eax, 0x40413c
// 0040413b  c3                   ret 
// 0040413c  8b5de8               mov ebx, dword ptr [ebp - 0x18]
// 0040413f  8b7dec               mov edi, dword ptr [ebp - 0x14]
// 00404142  8b85d0feffff         mov eax, dword ptr [ebp - 0x130]
// 00404148  85c0                 test eax, eax
// 0040414a  751f                 jne 0x40416b
// 0040414c  8d95d4feffff         lea edx, [ebp - 0x12c]
// 00404152  85d2                 test edx, edx
// 00404154  740b                 je 0x404161
// 00404156  8d8dd0feffff         lea ecx, [ebp - 0x130]
// 0040415c  e89f972f00           call 0x6fd900
// 00404161  b805400080           mov eax, 0x80004005
// 00404166  e966020000           jmp 0x4043d1
// 0040416b  57                   push edi
// 0040416c  6a00                 push 0
// 0040416e  50                   push eax
// 0040416f  e890d52900           call 0x6a1704
// 00404174  83c40c               add esp, 0xc
// 00404177  33f6                 xor esi, esi
// 00404179  85db                 test ebx, ebx
// 0040417b  7e3f                 jle 0x4041bc
// 0040417d  8d4900               lea ecx, [ecx]
// 00404180  0fb69435d0eeffff     movzx edx, byte ptr [ebp + esi - 0x1130]
// 00404188  8b8dd0feffff         mov ecx, dword ptr [ebp - 0x130]
// 0040418e  8bc6                 mov eax, esi
// 00404190  d1e8                 shr eax, 1
// 00404192  52                   push edx
// 00404193  8d3c08               lea edi, [eax + ecx]
// 00404196  e8b5ddffff           call 0x401f50
// 0040419b  8bce                 mov ecx, esi
// 0040419d  83e101               and ecx, 1
// 004041a0  03c9                 add ecx, ecx
// 004041a2  03c9                 add ecx, ecx
// 004041a4  8bd1                 mov edx, ecx
// 004041a6  b904000000           mov ecx, 4
// 004041ab  2bca                 sub ecx, edx
// 004041ad  d2e0                 shl al, cl
// 004041af  46                   inc esi
// 004041b0  83c404               add esp, 4
// 004041b3  0807                 or byte ptr [edi], al
// 004041b5  3bf3                 cmp esi, ebx
// 004041b7  7cc7                 jl 0x404180
// 004041b9  8b7dec               mov edi, dword ptr [ebp - 0x14]
// 004041bc  8b8dd0feffff         mov ecx, dword ptr [ebp - 0x130]
// 004041c2  8b550c               mov edx, dword ptr [ebp + 0xc]
// 004041c5  8b4508               mov eax, dword ptr [ebp + 8]
// 004041c8  8b00                 mov eax, dword ptr [eax]
// 004041ca  57                   push edi
// 004041cb  51                   push ecx
// 004041cc  6a03                 push 3
// 004041ce  6a00                 push 0
// 004041d0  52                   push edx
// 004041d1  50                   push eax
// 004041d2  ff1514208000         call dword ptr [0x802014]
// 004041d8  8bf0                 mov esi, eax
// 004041da  8d85d4feffff         lea eax, [ebp - 0x12c]
// 004041e0  3985d0feffff         cmp dword ptr [ebp - 0x130], eax
// 004041e6  0f84bc010000         je 0x4043a8
// 004041ec  8d8dd0feffff         lea ecx, [ebp - 0x130]
// 004041f2  e809972f00           call 0x6fd900
// 004041f7  e9ac010000           jmp 0x4043a8
// 004041fc  8b550c               mov edx, dword ptr [ebp + 0xc]
// 004041ff  6a01                 push 1
// 00404201  8d8dd0eeffff         lea ecx, [ebp - 0x1130]
// 00404207  51                   push ecx
// 00404208  8b4d08               mov ecx, dword ptr [ebp + 8]
// 0040420b  52                   push edx
// 0040420c  e8efdaffff           call 0x401d00
// 00404211  8bf0                 mov esi, eax
// 00404213  e990010000           jmp 0x4043a8
// 00404218  897dec               mov dword ptr [ebp - 0x14], edi
// 0040421b  8d85d0eeffff         lea eax, [ebp - 0x1130]
// 00404221  50                   push eax
// 00404222  c745fc03000000       mov dword ptr [ebp - 4], 3
// 00404229  ff15b8218000         call dword ptr [0x8021b8]
// 0040422f  40                   inc eax
// 00404230  6a02                 push 2
// 00404232  50                   push eax
// 00404233  8d4de8               lea ecx, [ebp - 0x18]
// 00404236  51                   push ecx
// 00404237  8945e8               mov dword ptr [ebp - 0x18], eax
// 0040423a  e8d1d4ffff           call 0x401710
// 0040423f  83c40c               add esp, 0xc
// 00404242  85c0                 test eax, eax
// 00404244  7c45                 jl 0x40428b
// 00404246  8b75e8               mov esi, dword ptr [ebp - 0x18]
// 00404249  81fe00040000         cmp esi, 0x400
// 0040424f  7f1b                 jg 0x40426c
// 00404251  56                   push esi
// 00404252  e8b9e3ffff           call 0x402610
// 00404257  83c404               add esp, 4
// 0040425a  84c0                 test al, al
// 0040425c  740e                 je 0x40426c
// 0040425e  8bc6                 mov eax, esi
// 00404260  e8fbd22900           call 0x6a1560
// 00404265  8965f0               mov dword ptr [ebp - 0x10], esp
// 00404268  8bc4                 mov eax, esp
// 0040426a  eb09                 jmp 0x404275
// 0040426c  56                   push esi
// 0040426d  8d4dec               lea ecx, [ebp - 0x14]
// 00404270  e8dbecffff           call 0x402f50
// 00404275  6a03                 push 3
// 00404277  d1ee                 shr esi, 1
// 00404279  56                   push esi
// 0040427a  8d95d0eeffff         lea edx, [ebp - 0x1130]
// 00404280  52                   push edx
// 00404281  50                   push eax
// 00404282  e8d9d4ffff           call 0x401760
// 00404287  3bc7                 cmp eax, edi
// 00404289  7512                 jne 0x40429d
// 0040428b  8d4dec               lea ecx, [ebp - 0x14]
// 0040428e  e8bdceffff           call 0x401150
// 00404293  b80e000780           mov eax, 0x8007000e
// 00404298  e934010000           jmp 0x4043d1
// 0040429d  8d4de0               lea ecx, [ebp - 0x20]
// 004042a0  51                   push ecx
// 004042a1  57                   push edi
// 004042a2  57                   push edi
// 004042a3  50                   push eax
// 004042a4  ff1538298000         call dword ptr [0x802938]
// 004042aa  8b55e0               mov edx, dword ptr [ebp - 0x20]
// 004042ad  8b450c               mov eax, dword ptr [ebp + 0xc]
// 004042b0  8b4d08               mov ecx, dword ptr [ebp + 8]
// 004042b3  52                   push edx
// 004042b4  50                   push eax
// 004042b5  e826daffff           call 0x401ce0
// 004042ba  8d4dec               lea ecx, [ebp - 0x14]
// 004042bd  8bf0                 mov esi, eax
// 004042bf  e88cceffff           call 0x401150
// 004042c4  e9df000000           jmp 0x4043a8
// 004042c9  3d08400000           cmp eax, 0x4008
// 004042ce  0f85e8000000         jne 0x4043bc
// 004042d4  8d8dd0eeffff         lea ecx, [ebp - 0x1130]
// 004042da  51                   push ecx
// 004042db  ff15b8218000         call dword ptr [0x8021b8]
// 004042e1  83c002               add eax, 2
// 004042e4  89bdd0feffff         mov dword ptr [ebp - 0x130], edi
// 004042ea  897dfc               mov dword ptr [ebp - 4], edi
// 004042ed  50                   push eax
// 004042ee  8d8dd0feffff         lea ecx, [ebp - 0x130]
// 004042f4  c645fc01             mov byte ptr [ebp - 4], 1
// 004042f8  e8b3f7ffff           call 0x403ab0
// 004042fd  8bbdd0feffff         mov edi, dword ptr [ebp - 0x130]
// 00404303  85ff                 test edi, edi
// 00404305  0f8483000000         je 0x40438e
// 0040430b  80bdd0eeffff00       cmp byte ptr [ebp - 0x1130], 0
// 00404312  8db5d0eeffff         lea esi, [ebp - 0x1130]
// 00404318  7450                 je 0x40436a
// 0040431a  8b1d2c2e8000         mov ebx, dword ptr [0x802e2c]
// 00404320  56                   push esi
// 00404321  ffd3                 call ebx
// 00404323  8a0e                 mov cl, byte ptr [esi]
// 00404325  80f95c               cmp cl, 0x5c
// 00404328  751e                 jne 0x404348
// 0040432a  803830               cmp byte ptr [eax], 0x30
// 0040432d  7519                 jne 0x404348
// 0040432f  c60700               mov byte ptr [edi], 0
// 00404332  50                   push eax
// 00404333  47                   inc edi
// 00404334  ffd3                 call ebx
// 00404336  8bf0                 mov esi, eax
// 00404338  eb2b                 jmp 0x404365
// 0040433a  8b4ddc               mov ecx, dword ptr [ebp - 0x24]
// 0040433d  e80ec62900           call 0x6a0950
// 00404342  b8fd424000           mov eax, 0x4042fd
// 00404347  c3                   ret 
// 00404348  880f                 mov byte ptr [edi], cl
// 0040434a  0fb616               movzx edx, byte ptr [esi]
// 0040434d  52                   push edx
// 0040434e  ff15c4218000         call dword ptr [0x8021c4]
// 00404354  85c0                 test eax, eax
// 00404356  740b                 je 0x404363
// 00404358  8a4601               mov al, byte ptr [esi + 1]
// 0040435b  46                   inc esi
// 0040435c  47                   inc edi
// 0040435d  84c0                 test al, al
// 0040435f  7409                 je 0x40436a
// 00404361  8807                 mov byte ptr [edi], al
// 00404363  47                   inc edi
// 00404364  46                   inc esi
// 00404365  803e00               cmp byte ptr [esi], 0
// 00404368  75b6                 jne 0x404320
// 0040436a  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 0040436d  c60700               mov byte ptr [edi], 0
// 00404370  c6470100             mov byte ptr [edi + 1], 0
// 00404374  8b85d0feffff         mov eax, dword ptr [ebp - 0x130]
// 0040437a  50                   push eax
// 0040437b  51                   push ecx
// 0040437c  8b4d08               mov ecx, dword ptr [ebp + 8]
// 0040437f  e8bcd9ffff           call 0x401d40
// 00404384  8bbdd0feffff         mov edi, dword ptr [ebp - 0x130]
// 0040438a  8bf0                 mov esi, eax
// 0040438c  eb05                 jmp 0x404393
// 0040438e  be0e000000           mov esi, 0xe
// 00404393  8d95d4feffff         lea edx, [ebp - 0x12c]
// 00404399  3bfa                 cmp edi, edx
// 0040439b  740b                 je 0x4043a8
// 0040439d  8d8dd0feffff         lea ecx, [ebp - 0x130]
// 004043a3  e858952f00           call 0x6fd900
// 004043a8  33ff                 xor edi, edi
// 004043aa  3bf7                 cmp esi, edi
// 004043ac  740b                 je 0x4043b9
// 004043ae  56                   push esi
// 004043af  e83cd5ffff           call 0x4018f0
// 004043b4  83c404               add esp, 4
// 004043b7  eb18                 jmp 0x4043d1
// 004043b9  8b75e4               mov esi, dword ptr [ebp - 0x1c]
// 004043bc  8b4510               mov eax, dword ptr [ebp + 0x10]
// 004043bf  50                   push eax
// 004043c0  8bce                 mov ecx, esi
// 004043c2  e899dcffff           call 0x402060
// 004043c7  33c9                 xor ecx, ecx
// 004043c9  3bc7                 cmp eax, edi
// 004043cb  0f9dc1               setge cl
// 004043ce  49                   dec ecx
// 004043cf  23c1                 and eax, ecx
// 004043d1  8da5c4eeffff         lea esp, [ebp - 0x113c]
// 004043d7  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 004043da  64890d00000000       mov dword ptr fs:[0], ecx
// 004043e1  5f                   pop edi
// 004043e2  5e                   pop esi
// 004043e3  5b                   pop ebx
// 004043e4  8be5                 mov esp, ebp
// 004043e6  5d                   pop ebp
// 004043e7  c20c00               ret 0xc

// from server: 100% by EspClaude
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: atl-9.0-dll-rtm roc_espclaude_04fd8290f2921435.cpp
