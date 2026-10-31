// roc 2009-06 00405240  unit: ATL::CRegObject  size: 938 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00405240
//
// 00405240  55                   push ebp
// 00405241  8bec                 mov ebp, esp
// 00405243  6aff                 push -1
// 00405245  68eecb8400           push 0x84cbee
// 0040524a  64a100000000         mov eax, dword ptr fs:[0]
// 00405250  50                   push eax
// 00405251  64892500000000       mov dword ptr fs:[0], esp
// 00405258  51                   push ecx
// 00405259  b820110000           mov eax, 0x1120
// 0040525e  e87d493100           call 0x719be0
// 00405263  53                   push ebx
// 00405264  56                   push esi
// 00405265  57                   push edi
// 00405266  8d85d0eeffff         lea eax, [ebp - 0x1130]
// 0040526c  8965f0               mov dword ptr [ebp - 0x10], esp
// 0040526f  8bf1                 mov esi, ecx
// 00405271  33ff                 xor edi, edi
// 00405273  50                   push eax
// 00405274  8975e4               mov dword ptr [ebp - 0x1c], esi
// 00405277  897dec               mov dword ptr [ebp - 0x14], edi
// 0040527a  e801e3ffff           call 0x403580
// 0040527f  3bc7                 cmp eax, edi
// 00405281  0f8c4a030000         jl 0x4055d1
// 00405287  8d4dec               lea ecx, [ebp - 0x14]
// 0040528a  51                   push ecx
// 0040528b  8d95d0eeffff         lea edx, [ebp - 0x1130]
// 00405291  52                   push edx
// 00405292  e829e1ffff           call 0x4033c0
// 00405297  83c408               add esp, 8
// 0040529a  85c0                 test eax, eax
// 0040529c  750a                 jne 0x4052a8
// 0040529e  b809000280           mov eax, 0x80020009
// 004052a3  e929030000           jmp 0x4055d1
// 004052a8  8bce                 mov ecx, esi
// 004052aa  e871e2ffff           call 0x403520
// 004052af  8d85d0eeffff         lea eax, [ebp - 0x1130]
// 004052b5  50                   push eax
// 004052b6  8bce                 mov ecx, esi
// 004052b8  e8c3e2ffff           call 0x403580
// 004052bd  3bc7                 cmp eax, edi
// 004052bf  0f8c0c030000         jl 0x4055d1
// 004052c5  0fb745ec             movzx eax, word ptr [ebp - 0x14]
// 004052c9  83f813               cmp eax, 0x13
// 004052cc  0f8ff7010000         jg 0x4054c9
// 004052d2  0f8440010000         je 0x405418
// 004052d8  83f808               cmp eax, 8
// 004052db  0f841b010000         je 0x4053fc
// 004052e1  83f811               cmp eax, 0x11
// 004052e4  0f85d2020000         jne 0x4055bc
// 004052ea  8d8dd0eeffff         lea ecx, [ebp - 0x1130]
// 004052f0  51                   push ecx
// 004052f1  ff15e0e18900         call dword ptr [0x89e1e0]
// 004052f7  8bd8                 mov ebx, eax
// 004052f9  895de8               mov dword ptr [ebp - 0x18], ebx
// 004052fc  f6c301               test bl, 1
// 004052ff  7560                 jne 0x405361
// 00405301  99                   cdq 
// 00405302  2bc2                 sub eax, edx
// 00405304  8bf8                 mov edi, eax
// 00405306  d1ff                 sar edi, 1
// 00405308  897dec               mov dword ptr [ebp - 0x14], edi
// 0040530b  c785d0feffff00000000 mov dword ptr [ebp - 0x130], 0
// 00405315  c745fc04000000       mov dword ptr [ebp - 4], 4
// 0040531c  57                   push edi
// 0040531d  8d8dd0feffff         lea ecx, [ebp - 0x130]
// 00405323  c645fc05             mov byte ptr [ebp - 4], 5
// 00405327  e8e4fbffff           call 0x404f10
// 0040532c  eb14                 jmp 0x405342
// 0040532e  8b4dd8               mov ecx, dword ptr [ebp - 0x28]
// 00405331  e8de393100           call 0x718d14
// 00405336  b83c534000           mov eax, 0x40533c
// 0040533b  c3                   ret 
// 0040533c  8b5de8               mov ebx, dword ptr [ebp - 0x18]
// 0040533f  8b7dec               mov edi, dword ptr [ebp - 0x14]
// 00405342  8b85d0feffff         mov eax, dword ptr [ebp - 0x130]
// 00405348  85c0                 test eax, eax
// 0040534a  751f                 jne 0x40536b
// 0040534c  8d95d4feffff         lea edx, [ebp - 0x12c]
// 00405352  85d2                 test edx, edx
// 00405354  740b                 je 0x405361
// 00405356  8d8dd0feffff         lea ecx, [ebp - 0x130]
// 0040535c  e8bfe8ffff           call 0x403c20
// 00405361  b805400080           mov eax, 0x80004005
// 00405366  e966020000           jmp 0x4055d1
// 0040536b  57                   push edi
// 0040536c  6a00                 push 0
// 0040536e  50                   push eax
// 0040536f  e800493100           call 0x719c74
// 00405374  83c40c               add esp, 0xc
// 00405377  33f6                 xor esi, esi
// 00405379  85db                 test ebx, ebx
// 0040537b  7e3f                 jle 0x4053bc
// 0040537d  8d4900               lea ecx, [ecx]
// 00405380  0fb69435d0eeffff     movzx edx, byte ptr [ebp + esi - 0x1130]
// 00405388  8b8dd0feffff         mov ecx, dword ptr [ebp - 0x130]
// 0040538e  8bc6                 mov eax, esi
// 00405390  d1e8                 shr eax, 1
// 00405392  52                   push edx
// 00405393  8d3c08               lea edi, [eax + ecx]
// 00405396  e8d5e0ffff           call 0x403470
// 0040539b  8bce                 mov ecx, esi
// 0040539d  83e101               and ecx, 1
// 004053a0  03c9                 add ecx, ecx
// 004053a2  03c9                 add ecx, ecx
// 004053a4  8bd1                 mov edx, ecx
// 004053a6  b904000000           mov ecx, 4
// 004053ab  2bca                 sub ecx, edx
// 004053ad  d2e0                 shl al, cl
// 004053af  46                   inc esi
// 004053b0  83c404               add esp, 4
// 004053b3  0807                 or byte ptr [edi], al
// 004053b5  3bf3                 cmp esi, ebx
// 004053b7  7cc7                 jl 0x405380
// 004053b9  8b7dec               mov edi, dword ptr [ebp - 0x14]
// 004053bc  8b8dd0feffff         mov ecx, dword ptr [ebp - 0x130]
// 004053c2  8b550c               mov edx, dword ptr [ebp + 0xc]
// 004053c5  8b4508               mov eax, dword ptr [ebp + 8]
// 004053c8  8b00                 mov eax, dword ptr [eax]
// 004053ca  57                   push edi
// 004053cb  51                   push ecx
// 004053cc  6a03                 push 3
// 004053ce  6a00                 push 0
// 004053d0  52                   push edx
// 004053d1  50                   push eax
// 004053d2  ff1514e08900         call dword ptr [0x89e014]
// 004053d8  8bf0                 mov esi, eax
// 004053da  8d85d4feffff         lea eax, [ebp - 0x12c]
// 004053e0  3985d0feffff         cmp dword ptr [ebp - 0x130], eax
// 004053e6  0f84bc010000         je 0x4055a8
// 004053ec  8d8dd0feffff         lea ecx, [ebp - 0x130]
// 004053f2  e829e8ffff           call 0x403c20
// 004053f7  e9ac010000           jmp 0x4055a8
// 004053fc  8b550c               mov edx, dword ptr [ebp + 0xc]
// 004053ff  6a01                 push 1
// 00405401  8d8dd0eeffff         lea ecx, [ebp - 0x1130]
// 00405407  51                   push ecx
// 00405408  8b4d08               mov ecx, dword ptr [ebp + 8]
// 0040540b  52                   push edx
// 0040540c  e80fdeffff           call 0x403220
// 00405411  8bf0                 mov esi, eax
// 00405413  e990010000           jmp 0x4055a8
// 00405418  897dec               mov dword ptr [ebp - 0x14], edi
// 0040541b  8d85d0eeffff         lea eax, [ebp - 0x1130]
// 00405421  50                   push eax
// 00405422  c745fc03000000       mov dword ptr [ebp - 4], 3
// 00405429  ff15e0e18900         call dword ptr [0x89e1e0]
// 0040542f  40                   inc eax
// 00405430  6a02                 push 2
// 00405432  50                   push eax
// 00405433  8d4de8               lea ecx, [ebp - 0x18]
// 00405436  51                   push ecx
// 00405437  8945e8               mov dword ptr [ebp - 0x18], eax
// 0040543a  e871d9ffff           call 0x402db0
// 0040543f  83c40c               add esp, 0xc
// 00405442  85c0                 test eax, eax
// 00405444  7c45                 jl 0x40548b
// 00405446  8b75e8               mov esi, dword ptr [ebp - 0x18]
// 00405449  81fe00040000         cmp esi, 0x400
// 0040544f  7f1b                 jg 0x40546c
// 00405451  56                   push esi
// 00405452  e8d9e9ffff           call 0x403e30
// 00405457  83c404               add esp, 4
// 0040545a  84c0                 test al, al
// 0040545c  740e                 je 0x40546c
// 0040545e  8bc6                 mov eax, esi
// 00405460  e8ab473100           call 0x719c10
// 00405465  8965f0               mov dword ptr [ebp - 0x10], esp
// 00405468  8bc4                 mov eax, esp
// 0040546a  eb09                 jmp 0x405475
// 0040546c  56                   push esi
// 0040546d  8d4dec               lea ecx, [ebp - 0x14]
// 00405470  e85befffff           call 0x4043d0
// 00405475  6a03                 push 3
// 00405477  d1ee                 shr esi, 1
// 00405479  56                   push esi
// 0040547a  8d95d0eeffff         lea edx, [ebp - 0x1130]
// 00405480  52                   push edx
// 00405481  50                   push eax
// 00405482  e879d9ffff           call 0x402e00
// 00405487  3bc7                 cmp eax, edi
// 00405489  7512                 jne 0x40549d
// 0040548b  8d4dec               lea ecx, [ebp - 0x14]
// 0040548e  e81de7ffff           call 0x403bb0
// 00405493  b80e000780           mov eax, 0x8007000e
// 00405498  e934010000           jmp 0x4055d1
// 0040549d  8d4de0               lea ecx, [ebp - 0x20]
// 004054a0  51                   push ecx
// 004054a1  57                   push edi
// 004054a2  57                   push edi
// 004054a3  50                   push eax
// 004054a4  ff154cea8900         call dword ptr [0x89ea4c]
// 004054aa  8b55e0               mov edx, dword ptr [ebp - 0x20]
// 004054ad  8b450c               mov eax, dword ptr [ebp + 0xc]
// 004054b0  8b4d08               mov ecx, dword ptr [ebp + 8]
// 004054b3  52                   push edx
// 004054b4  50                   push eax
// 004054b5  e846ddffff           call 0x403200
// 004054ba  8d4dec               lea ecx, [ebp - 0x14]
// 004054bd  8bf0                 mov esi, eax
// 004054bf  e8ece6ffff           call 0x403bb0
// 004054c4  e9df000000           jmp 0x4055a8
// 004054c9  3d08400000           cmp eax, 0x4008
// 004054ce  0f85e8000000         jne 0x4055bc
// 004054d4  8d8dd0eeffff         lea ecx, [ebp - 0x1130]
// 004054da  51                   push ecx
// 004054db  ff15e0e18900         call dword ptr [0x89e1e0]
// 004054e1  83c002               add eax, 2
// 004054e4  89bdd0feffff         mov dword ptr [ebp - 0x130], edi
// 004054ea  897dfc               mov dword ptr [ebp - 4], edi
// 004054ed  50                   push eax
// 004054ee  8d8dd0feffff         lea ecx, [ebp - 0x130]
// 004054f4  c645fc01             mov byte ptr [ebp - 4], 1
// 004054f8  e813faffff           call 0x404f10
// 004054fd  8bbdd0feffff         mov edi, dword ptr [ebp - 0x130]
// 00405503  85ff                 test edi, edi
// 00405505  0f8483000000         je 0x40558e
// 0040550b  80bdd0eeffff00       cmp byte ptr [ebp - 0x1130], 0
// 00405512  8db5d0eeffff         lea esi, [ebp - 0x1130]
// 00405518  7450                 je 0x40556a
// 0040551a  8b1d80ee8900         mov ebx, dword ptr [0x89ee80]
// 00405520  56                   push esi
// 00405521  ffd3                 call ebx
// 00405523  8a0e                 mov cl, byte ptr [esi]
// 00405525  80f95c               cmp cl, 0x5c
// 00405528  751e                 jne 0x405548
// 0040552a  803830               cmp byte ptr [eax], 0x30
// 0040552d  7519                 jne 0x405548
// 0040552f  c60700               mov byte ptr [edi], 0
// 00405532  50                   push eax
// 00405533  47                   inc edi
// 00405534  ffd3                 call ebx
// 00405536  8bf0                 mov esi, eax
// 00405538  eb2b                 jmp 0x405565
// 0040553a  8b4ddc               mov ecx, dword ptr [ebp - 0x24]
// 0040553d  e8d2373100           call 0x718d14
// 00405542  b8fd544000           mov eax, 0x4054fd
// 00405547  c3                   ret 
// 00405548  880f                 mov byte ptr [edi], cl
// 0040554a  0fb616               movzx edx, byte ptr [esi]
// 0040554d  52                   push edx
// 0040554e  ff1508e28900         call dword ptr [0x89e208]
// 00405554  85c0                 test eax, eax
// 00405556  740b                 je 0x405563
// 00405558  8a4601               mov al, byte ptr [esi + 1]
// 0040555b  46                   inc esi
// 0040555c  47                   inc edi
// 0040555d  84c0                 test al, al
// 0040555f  7409                 je 0x40556a
// 00405561  8807                 mov byte ptr [edi], al
// 00405563  47                   inc edi
// 00405564  46                   inc esi
// 00405565  803e00               cmp byte ptr [esi], 0
// 00405568  75b6                 jne 0x405520
// 0040556a  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 0040556d  c60700               mov byte ptr [edi], 0
// 00405570  c6470100             mov byte ptr [edi + 1], 0
// 00405574  8b85d0feffff         mov eax, dword ptr [ebp - 0x130]
// 0040557a  50                   push eax
// 0040557b  51                   push ecx
// 0040557c  8b4d08               mov ecx, dword ptr [ebp + 8]
// 0040557f  e8dcdcffff           call 0x403260
// 00405584  8bbdd0feffff         mov edi, dword ptr [ebp - 0x130]
// 0040558a  8bf0                 mov esi, eax
// 0040558c  eb05                 jmp 0x405593
// 0040558e  be0e000000           mov esi, 0xe
// 00405593  8d95d4feffff         lea edx, [ebp - 0x12c]
// 00405599  3bfa                 cmp edi, edx
// 0040559b  740b                 je 0x4055a8
// 0040559d  8d8dd0feffff         lea ecx, [ebp - 0x130]
// 004055a3  e878e6ffff           call 0x403c20
// 004055a8  33ff                 xor edi, edi
// 004055aa  3bf7                 cmp esi, edi
// 004055ac  740b                 je 0x4055b9
// 004055ae  56                   push esi
// 004055af  e8fcd9ffff           call 0x402fb0
// 004055b4  83c404               add esp, 4
// 004055b7  eb18                 jmp 0x4055d1
// 004055b9  8b75e4               mov esi, dword ptr [ebp - 0x1c]
// 004055bc  8b4510               mov eax, dword ptr [ebp + 0x10]
// 004055bf  50                   push eax
// 004055c0  8bce                 mov ecx, esi
// 004055c2  e8b9dfffff           call 0x403580
// 004055c7  33c9                 xor ecx, ecx
// 004055c9  3bc7                 cmp eax, edi
// 004055cb  0f9dc1               setge cl
// 004055ce  49                   dec ecx
// 004055cf  23c1                 and eax, ecx
// 004055d1  8da5c4eeffff         lea esp, [ebp - 0x113c]
// 004055d7  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 004055da  64890d00000000       mov dword ptr fs:[0], ecx
// 004055e1  5f                   pop edi
// 004055e2  5e                   pop esi
// 004055e3  5b                   pop ebx
// 004055e4  8be5                 mov esp, ebp
// 004055e6  5d                   pop ebp
// 004055e7  c20c00               ret 0xc
// copied from an identical function in another client (function ?AddValue@CRegParser@ATL@@IAEJAAVCRegKey@2@PBDPAD@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: atl-9.0-dll-rtm roc_espclaude_04fd8290f2921435.cpp