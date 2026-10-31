// roc 2010-06 00405380  unit: ATL::CRegObject  size: 938 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00405380
//
// 00405380  55                   push ebp
// 00405381  8bec                 mov ebp, esp
// 00405383  6aff                 push -1
// 00405385  68beda9700           push 0x97dabe
// 0040538a  64a100000000         mov eax, dword ptr fs:[0]
// 00405390  50                   push eax
// 00405391  64892500000000       mov dword ptr fs:[0], esp
// 00405398  51                   push ecx
// 00405399  b820110000           mov eax, 0x1120
// 0040539e  e8ad373a00           call 0x7a8b50
// 004053a3  53                   push ebx
// 004053a4  56                   push esi
// 004053a5  57                   push edi
// 004053a6  8d85d0eeffff         lea eax, [ebp - 0x1130]
// 004053ac  8965f0               mov dword ptr [ebp - 0x10], esp
// 004053af  8bf1                 mov esi, ecx
// 004053b1  33ff                 xor edi, edi
// 004053b3  50                   push eax
// 004053b4  8975e4               mov dword ptr [ebp - 0x1c], esi
// 004053b7  897dec               mov dword ptr [ebp - 0x14], edi
// 004053ba  e8e1deffff           call 0x4032a0
// 004053bf  3bc7                 cmp eax, edi
// 004053c1  0f8c4a030000         jl 0x405711
// 004053c7  8d4dec               lea ecx, [ebp - 0x14]
// 004053ca  51                   push ecx
// 004053cb  8d95d0eeffff         lea edx, [ebp - 0x1130]
// 004053d1  52                   push edx
// 004053d2  e809ddffff           call 0x4030e0
// 004053d7  83c408               add esp, 8
// 004053da  85c0                 test eax, eax
// 004053dc  750a                 jne 0x4053e8
// 004053de  b809000280           mov eax, 0x80020009
// 004053e3  e929030000           jmp 0x405711
// 004053e8  8bce                 mov ecx, esi
// 004053ea  e851deffff           call 0x403240
// 004053ef  8d85d0eeffff         lea eax, [ebp - 0x1130]
// 004053f5  50                   push eax
// 004053f6  8bce                 mov ecx, esi
// 004053f8  e8a3deffff           call 0x4032a0
// 004053fd  3bc7                 cmp eax, edi
// 004053ff  0f8c0c030000         jl 0x405711
// 00405405  0fb745ec             movzx eax, word ptr [ebp - 0x14]
// 00405409  83f813               cmp eax, 0x13
// 0040540c  0f8ff7010000         jg 0x405609
// 00405412  0f8440010000         je 0x405558
// 00405418  83f808               cmp eax, 8
// 0040541b  0f841b010000         je 0x40553c
// 00405421  83f811               cmp eax, 0x11
// 00405424  0f85d2020000         jne 0x4056fc
// 0040542a  8d8dd0eeffff         lea ecx, [ebp - 0x1130]
// 00405430  51                   push ecx
// 00405431  ff1588a39e00         call dword ptr [0x9ea388]
// 00405437  8bd8                 mov ebx, eax
// 00405439  895de8               mov dword ptr [ebp - 0x18], ebx
// 0040543c  f6c301               test bl, 1
// 0040543f  7560                 jne 0x4054a1
// 00405441  99                   cdq 
// 00405442  2bc2                 sub eax, edx
// 00405444  8bf8                 mov edi, eax
// 00405446  d1ff                 sar edi, 1
// 00405448  897dec               mov dword ptr [ebp - 0x14], edi
// 0040544b  c785d0feffff00000000 mov dword ptr [ebp - 0x130], 0
// 00405455  c745fc04000000       mov dword ptr [ebp - 4], 4
// 0040545c  57                   push edi
// 0040545d  8d8dd0feffff         lea ecx, [ebp - 0x130]
// 00405463  c645fc05             mov byte ptr [ebp - 4], 5
// 00405467  e8a4f7ffff           call 0x404c10
// 0040546c  eb14                 jmp 0x405482
// 0040546e  8b4dd8               mov ecx, dword ptr [ebp - 0x28]
// 00405471  e806283a00           call 0x7a7c7c
// 00405476  b87c544000           mov eax, 0x40547c
// 0040547b  c3                   ret 
// 0040547c  8b5de8               mov ebx, dword ptr [ebp - 0x18]
// 0040547f  8b7dec               mov edi, dword ptr [ebp - 0x14]
// 00405482  8b85d0feffff         mov eax, dword ptr [ebp - 0x130]
// 00405488  85c0                 test eax, eax
// 0040548a  751f                 jne 0x4054ab
// 0040548c  8d95d4feffff         lea edx, [ebp - 0x12c]
// 00405492  85d2                 test edx, edx
// 00405494  740b                 je 0x4054a1
// 00405496  8d8dd0feffff         lea ecx, [ebp - 0x130]
// 0040549c  e8efe5ffff           call 0x403a90
// 004054a1  b805400080           mov eax, 0x80004005
// 004054a6  e966020000           jmp 0x405711
// 004054ab  57                   push edi
// 004054ac  6a00                 push 0
// 004054ae  50                   push eax
// 004054af  e830373a00           call 0x7a8be4
// 004054b4  83c40c               add esp, 0xc
// 004054b7  33f6                 xor esi, esi
// 004054b9  85db                 test ebx, ebx
// 004054bb  7e3f                 jle 0x4054fc
// 004054bd  8d4900               lea ecx, [ecx]
// 004054c0  0fb69435d0eeffff     movzx edx, byte ptr [ebp + esi - 0x1130]
// 004054c8  8b8dd0feffff         mov ecx, dword ptr [ebp - 0x130]
// 004054ce  8bc6                 mov eax, esi
// 004054d0  d1e8                 shr eax, 1
// 004054d2  52                   push edx
// 004054d3  8d3c08               lea edi, [eax + ecx]
// 004054d6  e8b5dcffff           call 0x403190
// 004054db  8bce                 mov ecx, esi
// 004054dd  83e101               and ecx, 1
// 004054e0  03c9                 add ecx, ecx
// 004054e2  03c9                 add ecx, ecx
// 004054e4  8bd1                 mov edx, ecx
// 004054e6  b904000000           mov ecx, 4
// 004054eb  2bca                 sub ecx, edx
// 004054ed  d2e0                 shl al, cl
// 004054ef  46                   inc esi
// 004054f0  83c404               add esp, 4
// 004054f3  0807                 or byte ptr [edi], al
// 004054f5  3bf3                 cmp esi, ebx
// 004054f7  7cc7                 jl 0x4054c0
// 004054f9  8b7dec               mov edi, dword ptr [ebp - 0x14]
// 004054fc  8b8dd0feffff         mov ecx, dword ptr [ebp - 0x130]
// 00405502  8b550c               mov edx, dword ptr [ebp + 0xc]
// 00405505  8b4508               mov eax, dword ptr [ebp + 8]
// 00405508  8b00                 mov eax, dword ptr [eax]
// 0040550a  57                   push edi
// 0040550b  51                   push ecx
// 0040550c  6a03                 push 3
// 0040550e  6a00                 push 0
// 00405510  52                   push edx
// 00405511  50                   push eax
// 00405512  ff151ca09e00         call dword ptr [0x9ea01c]
// 00405518  8bf0                 mov esi, eax
// 0040551a  8d85d4feffff         lea eax, [ebp - 0x12c]
// 00405520  3985d0feffff         cmp dword ptr [ebp - 0x130], eax
// 00405526  0f84bc010000         je 0x4056e8
// 0040552c  8d8dd0feffff         lea ecx, [ebp - 0x130]
// 00405532  e859e5ffff           call 0x403a90
// 00405537  e9ac010000           jmp 0x4056e8
// 0040553c  8b550c               mov edx, dword ptr [ebp + 0xc]
// 0040553f  6a01                 push 1
// 00405541  8d8dd0eeffff         lea ecx, [ebp - 0x1130]
// 00405547  51                   push ecx
// 00405548  8b4d08               mov ecx, dword ptr [ebp + 8]
// 0040554b  52                   push edx
// 0040554c  e8efd9ffff           call 0x402f40
// 00405551  8bf0                 mov esi, eax
// 00405553  e990010000           jmp 0x4056e8
// 00405558  897dec               mov dword ptr [ebp - 0x14], edi
// 0040555b  8d85d0eeffff         lea eax, [ebp - 0x1130]
// 00405561  50                   push eax
// 00405562  c745fc03000000       mov dword ptr [ebp - 4], 3
// 00405569  ff1588a39e00         call dword ptr [0x9ea388]
// 0040556f  40                   inc eax
// 00405570  6a02                 push 2
// 00405572  50                   push eax
// 00405573  8d4de8               lea ecx, [ebp - 0x18]
// 00405576  51                   push ecx
// 00405577  8945e8               mov dword ptr [ebp - 0x18], eax
// 0040557a  e851d5ffff           call 0x402ad0
// 0040557f  83c40c               add esp, 0xc
// 00405582  85c0                 test eax, eax
// 00405584  7c45                 jl 0x4055cb
// 00405586  8b75e8               mov esi, dword ptr [ebp - 0x18]
// 00405589  81fe00040000         cmp esi, 0x400
// 0040558f  7f1b                 jg 0x4055ac
// 00405591  56                   push esi
// 00405592  e8b9e5ffff           call 0x403b50
// 00405597  83c404               add esp, 4
// 0040559a  84c0                 test al, al
// 0040559c  740e                 je 0x4055ac
// 0040559e  8bc6                 mov eax, esi
// 004055a0  e8db353a00           call 0x7a8b80
// 004055a5  8965f0               mov dword ptr [ebp - 0x10], esp
// 004055a8  8bc4                 mov eax, esp
// 004055aa  eb09                 jmp 0x4055b5
// 004055ac  56                   push esi
// 004055ad  8d4dec               lea ecx, [ebp - 0x14]
// 004055b0  e83bebffff           call 0x4040f0
// 004055b5  6a03                 push 3
// 004055b7  d1ee                 shr esi, 1
// 004055b9  56                   push esi
// 004055ba  8d95d0eeffff         lea edx, [ebp - 0x1130]
// 004055c0  52                   push edx
// 004055c1  50                   push eax
// 004055c2  e859d5ffff           call 0x402b20
// 004055c7  3bc7                 cmp eax, edi
// 004055c9  7512                 jne 0x4055dd
// 004055cb  8d4dec               lea ecx, [ebp - 0x14]
// 004055ce  e8fde2ffff           call 0x4038d0
// 004055d3  b80e000780           mov eax, 0x8007000e
// 004055d8  e934010000           jmp 0x405711
// 004055dd  8d4de0               lea ecx, [ebp - 0x20]
// 004055e0  51                   push ecx
// 004055e1  57                   push edi
// 004055e2  57                   push edi
// 004055e3  50                   push eax
// 004055e4  ff1550aa9e00         call dword ptr [0x9eaa50]
// 004055ea  8b55e0               mov edx, dword ptr [ebp - 0x20]
// 004055ed  8b450c               mov eax, dword ptr [ebp + 0xc]
// 004055f0  8b4d08               mov ecx, dword ptr [ebp + 8]
// 004055f3  52                   push edx
// 004055f4  50                   push eax
// 004055f5  e826d9ffff           call 0x402f20
// 004055fa  8d4dec               lea ecx, [ebp - 0x14]
// 004055fd  8bf0                 mov esi, eax
// 004055ff  e8cce2ffff           call 0x4038d0
// 00405604  e9df000000           jmp 0x4056e8
// 00405609  3d08400000           cmp eax, 0x4008
// 0040560e  0f85e8000000         jne 0x4056fc
// 00405614  8d8dd0eeffff         lea ecx, [ebp - 0x1130]
// 0040561a  51                   push ecx
// 0040561b  ff1588a39e00         call dword ptr [0x9ea388]
// 00405621  83c002               add eax, 2
// 00405624  89bdd0feffff         mov dword ptr [ebp - 0x130], edi
// 0040562a  897dfc               mov dword ptr [ebp - 4], edi
// 0040562d  50                   push eax
// 0040562e  8d8dd0feffff         lea ecx, [ebp - 0x130]
// 00405634  c645fc01             mov byte ptr [ebp - 4], 1
// 00405638  e8d3f5ffff           call 0x404c10
// 0040563d  8bbdd0feffff         mov edi, dword ptr [ebp - 0x130]
// 00405643  85ff                 test edi, edi
// 00405645  0f8483000000         je 0x4056ce
// 0040564b  80bdd0eeffff00       cmp byte ptr [ebp - 0x1130], 0
// 00405652  8db5d0eeffff         lea esi, [ebp - 0x1130]
// 00405658  7450                 je 0x4056aa
// 0040565a  8b1d64ba9e00         mov ebx, dword ptr [0x9eba64]
// 00405660  56                   push esi
// 00405661  ffd3                 call ebx
// 00405663  8a0e                 mov cl, byte ptr [esi]
// 00405665  80f95c               cmp cl, 0x5c
// 00405668  751e                 jne 0x405688
// 0040566a  803830               cmp byte ptr [eax], 0x30
// 0040566d  7519                 jne 0x405688
// 0040566f  c60700               mov byte ptr [edi], 0
// 00405672  50                   push eax
// 00405673  47                   inc edi
// 00405674  ffd3                 call ebx
// 00405676  8bf0                 mov esi, eax
// 00405678  eb2b                 jmp 0x4056a5
// 0040567a  8b4ddc               mov ecx, dword ptr [ebp - 0x24]
// 0040567d  e8fa253a00           call 0x7a7c7c
// 00405682  b83d564000           mov eax, 0x40563d
// 00405687  c3                   ret 
// 00405688  880f                 mov byte ptr [edi], cl
// 0040568a  0fb616               movzx edx, byte ptr [esi]
// 0040568d  52                   push edx
// 0040568e  ff1578a39e00         call dword ptr [0x9ea378]
// 00405694  85c0                 test eax, eax
// 00405696  740b                 je 0x4056a3
// 00405698  8a4601               mov al, byte ptr [esi + 1]
// 0040569b  46                   inc esi
// 0040569c  47                   inc edi
// 0040569d  84c0                 test al, al
// 0040569f  7409                 je 0x4056aa
// 004056a1  8807                 mov byte ptr [edi], al
// 004056a3  47                   inc edi
// 004056a4  46                   inc esi
// 004056a5  803e00               cmp byte ptr [esi], 0
// 004056a8  75b6                 jne 0x405660
// 004056aa  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 004056ad  c60700               mov byte ptr [edi], 0
// 004056b0  c6470100             mov byte ptr [edi + 1], 0
// 004056b4  8b85d0feffff         mov eax, dword ptr [ebp - 0x130]
// 004056ba  50                   push eax
// 004056bb  51                   push ecx
// 004056bc  8b4d08               mov ecx, dword ptr [ebp + 8]
// 004056bf  e8bcd8ffff           call 0x402f80
// 004056c4  8bbdd0feffff         mov edi, dword ptr [ebp - 0x130]
// 004056ca  8bf0                 mov esi, eax
// 004056cc  eb05                 jmp 0x4056d3
// 004056ce  be0e000000           mov esi, 0xe
// 004056d3  8d95d4feffff         lea edx, [ebp - 0x12c]
// 004056d9  3bfa                 cmp edi, edx
// 004056db  740b                 je 0x4056e8
// 004056dd  8d8dd0feffff         lea ecx, [ebp - 0x130]
// 004056e3  e8a8e3ffff           call 0x403a90
// 004056e8  33ff                 xor edi, edi
// 004056ea  3bf7                 cmp esi, edi
// 004056ec  740b                 je 0x4056f9
// 004056ee  56                   push esi
// 004056ef  e8dcd5ffff           call 0x402cd0
// 004056f4  83c404               add esp, 4
// 004056f7  eb18                 jmp 0x405711
// 004056f9  8b75e4               mov esi, dword ptr [ebp - 0x1c]
// 004056fc  8b4510               mov eax, dword ptr [ebp + 0x10]
// 004056ff  50                   push eax
// 00405700  8bce                 mov ecx, esi
// 00405702  e899dbffff           call 0x4032a0
// 00405707  33c9                 xor ecx, ecx
// 00405709  3bc7                 cmp eax, edi
// 0040570b  0f9dc1               setge cl
// 0040570e  49                   dec ecx
// 0040570f  23c1                 and eax, ecx
// 00405711  8da5c4eeffff         lea esp, [ebp - 0x113c]
// 00405717  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 0040571a  64890d00000000       mov dword ptr fs:[0], ecx
// 00405721  5f                   pop edi
// 00405722  5e                   pop esi
// 00405723  5b                   pop ebx
// 00405724  8be5                 mov esp, ebp
// 00405726  5d                   pop ebp
// 00405727  c20c00               ret 0xc
// copied from an identical function in another client (function ?AddValue@CRegParser@ATL@@IAEJAAVCRegKey@2@PBDPAD@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: atl-9.0-dll-rtm roc_espclaude_04fd8290f2921435.cpp