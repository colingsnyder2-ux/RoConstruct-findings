// roc 2007-08 00482ce0  unit: G3D::Shader  size: 1241 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00482ce0
//
// 00482ce0  6aff                 push -1
// 00482ce2  68fb5f7400           push 0x745ffb
// 00482ce7  64a100000000         mov eax, dword ptr fs:[0]
// 00482ced  50                   push eax
// 00482cee  81ecf4000000         sub esp, 0xf4
// 00482cf4  a188518b00           mov eax, dword ptr [0x8b5188]
// 00482cf9  33c4                 xor eax, esp
// 00482cfb  898424f0000000       mov dword ptr [esp + 0xf0], eax
// 00482d02  53                   push ebx
// 00482d03  55                   push ebp
// 00482d04  56                   push esi
// 00482d05  57                   push edi
// 00482d06  a188518b00           mov eax, dword ptr [0x8b5188]
// 00482d0b  33c4                 xor eax, esp
// 00482d0d  50                   push eax
// 00482d0e  8d842408010000       lea eax, [esp + 0x108]
// 00482d15  64a300000000         mov dword ptr fs:[0], eax
// 00482d1b  8b8194010000         mov eax, dword ptr [ecx + 0x194]
// 00482d21  8bac2418010000       mov ebp, dword ptr [esp + 0x118]
// 00482d28  33d2                 xor edx, edx
// 00482d2a  3bc2                 cmp eax, edx
// 00482d2c  894c2414             mov dword ptr [esp + 0x14], ecx
// 00482d30  89542418             mov dword ptr [esp + 0x18], edx
// 00482d34  8954241c             mov dword ptr [esp + 0x1c], edx
// 00482d38  0f8e2f010000         jle 0x482e6d
// 00482d3e  89542420             mov dword ptr [esp + 0x20], edx
// 00482d42  8b442414             mov eax, dword ptr [esp + 0x14]
// 00482d46  8bb090010000         mov esi, dword ptr [eax + 0x190]
// 00482d4c  03742420             add esi, dword ptr [esp + 0x20]
// 00482d50  803e00               cmp byte ptr [esi], 0
// 00482d53  7505                 jne 0x482d5a
// 00482d55  8344241801           add dword ptr [esp + 0x18], 1
// 00482d5a  68aca77900           push 0x79a7ac
// 00482d5f  8d8c24b4000000       lea ecx, [esp + 0xb4]
// 00482d66  ff1598e67700         call dword ptr [0x77e698]
// 00482d6c  8d8c24b0000000       lea ecx, [esp + 0xb0]
// 00482d73  51                   push ecx
// 00482d74  8d7e08               lea edi, [esi + 8]
// 00482d77  57                   push edi
// 00482d78  c784241801000000000000 mov dword ptr [esp + 0x118], 0
// 00482d83  e828580800           call 0x5085b0
// 00482d88  83c408               add esp, 8
// 00482d8b  8d8c24b0000000       lea ecx, [esp + 0xb0]
// 00482d92  8ad8                 mov bl, al
// 00482d94  c7842410010000ffffffff mov dword ptr [esp + 0x110], 0xffffffff
// 00482d9f  ff15ace67700         call dword ptr [0x77e6ac]
// 00482da5  84db                 test bl, bl
// 00482da7  7459                 je 0x482e02
// 00482da9  8b461c               mov eax, dword ptr [esi + 0x1c]
// 00482dac  83c0f7               add eax, -9
// 00482daf  50                   push eax
// 00482db0  6a09                 push 9
// 00482db2  8d94249c000000       lea edx, [esp + 0x9c]
// 00482db9  52                   push edx
// 00482dba  8bcf                 mov ecx, edi
// 00482dbc  ff1538e67700         call dword ptr [0x77e638]
// 00482dc2  8d842494000000       lea eax, [esp + 0x94]
// 00482dc9  50                   push eax
// 00482dca  8bcd                 mov ecx, ebp
// 00482dcc  c784241401000001000000 mov dword ptr [esp + 0x114], 1
// 00482dd7  e8f4f8ffff           call 0x4826d0
// 00482ddc  84c0                 test al, al
// 00482dde  7508                 jne 0x482de8
// 00482de0  3806                 cmp byte ptr [esi], al
// 00482de2  0f847e010000         je 0x482f66
// 00482de8  8d8c2494000000       lea ecx, [esp + 0x94]
// 00482def  c7842410010000ffffffff mov dword ptr [esp + 0x110], 0xffffffff
// 00482dfa  ff15ace67700         call dword ptr [0x77e6ac]
// 00482e00  eb4b                 jmp 0x482e4d
// 00482e02  57                   push edi
// 00482e03  8bcd                 mov ecx, ebp
// 00482e05  e8c6f8ffff           call 0x4826d0
// 00482e0a  84c0                 test al, al
// 00482e0c  7516                 jne 0x482e24
// 00482e0e  3806                 cmp byte ptr [esi], al
// 00482e10  753b                 jne 0x482e4d
// 00482e12  837e2010             cmp dword ptr [esi + 0x20], 0x10
// 00482e16  0f829d010000         jb 0x482fb9
// 00482e1c  8b7e0c               mov edi, dword ptr [esi + 0xc]
// 00482e1f  e998010000           jmp 0x482fbc
// 00482e24  57                   push edi
// 00482e25  8bcd                 mov ecx, ebp
// 00482e27  e834f8ffff           call 0x482660
// 00482e2c  8bf8                 mov edi, eax
// 00482e2e  8b4f44               mov ecx, dword ptr [edi + 0x44]
// 00482e31  51                   push ecx
// 00482e32  e899f7ffff           call 0x4825d0
// 00482e37  8bd0                 mov edx, eax
// 00482e39  8b4624               mov eax, dword ptr [esi + 0x24]
// 00482e3c  50                   push eax
// 00482e3d  e88ef7ffff           call 0x4825d0
// 00482e42  83c408               add esp, 8
// 00482e45  3bd0                 cmp edx, eax
// 00482e47  0f85ba010000         jne 0x483007
// 00482e4d  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00482e51  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00482e55  8344242030           add dword ptr [esp + 0x20], 0x30
// 00482e5a  83c001               add eax, 1
// 00482e5d  3b8194010000         cmp eax, dword ptr [ecx + 0x194]
// 00482e63  8944241c             mov dword ptr [esp + 0x1c], eax
// 00482e67  0f8cd5feffff         jl 0x482d42
// 00482e6d  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00482e71  3b4d04               cmp ecx, dword ptr [ebp + 4]
// 00482e74  0f8d15030000         jge 0x48318f
// 00482e7a  8b4508               mov eax, dword ptr [ebp + 8]
// 00482e7d  8b6d0c               mov ebp, dword ptr [ebp + 0xc]
// 00482e80  85ed                 test ebp, ebp
// 00482e82  89442418             mov dword ptr [esp + 0x18], eax
// 00482e86  896c241c             mov dword ptr [esp + 0x1c], ebp
// 00482e8a  0f85a4020000         jne 0x483134
// 00482e90  8bbc2498000000       mov edi, dword ptr [esp + 0x98]
// 00482e97  8b9c2494000000       mov ebx, dword ptr [esp + 0x94]
// 00482e9e  c68424a800000001     mov byte ptr [esp + 0xa8], 1
// 00482ea6  80bc24a800000001     cmp byte ptr [esp + 0xa8], 1
// 00482eae  0f84db020000         je 0x48318f
// 00482eb4  8b542414             mov edx, dword ptr [esp + 0x14]
// 00482eb8  33ed                 xor ebp, ebp
// 00482eba  39aa94010000         cmp dword ptr [edx + 0x194], ebp
// 00482ec0  7e39                 jle 0x482efb
// 00482ec2  33f6                 xor esi, esi
// 00482ec4  8b442414             mov eax, dword ptr [esp + 0x14]
// 00482ec8  8b8090010000         mov eax, dword ptr [eax + 0x190]
// 00482ece  03c6                 add eax, esi
// 00482ed0  8d4f04               lea ecx, [edi + 4]
// 00482ed3  51                   push ecx
// 00482ed4  83c008               add eax, 8
// 00482ed7  50                   push eax
// 00482ed8  ff1594e67700         call dword ptr [0x77e694]
// 00482ede  83c408               add esp, 8
// 00482ee1  84c0                 test al, al
// 00482ee3  0f857e020000         jne 0x483167
// 00482ee9  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00482eed  83c501               add ebp, 1
// 00482ef0  83c630               add esi, 0x30
// 00482ef3  3ba994010000         cmp ebp, dword ptr [ecx + 0x194]
// 00482ef9  7cc9                 jl 0x482ec4
// 00482efb  6868a77900           push 0x79a768
// 00482f00  8d4c2444             lea ecx, [esp + 0x44]
// 00482f04  ff1598e67700         call dword ptr [0x77e698]
// 00482f0a  8d4f04               lea ecx, [edi + 4]
// 00482f0d  51                   push ecx
// 00482f0e  50                   push eax
// 00482f0f  8d442464             lea eax, [esp + 0x64]
// 00482f13  50                   push eax
// 00482f14  c784241c01000009000000 mov dword ptr [esp + 0x11c], 9
// 00482f1f  ff1568e57700         call dword ptr [0x77e568]
// 00482f25  6834627900           push 0x796234
// 00482f2a  50                   push eax
// 00482f2b  8d8c248c000000       lea ecx, [esp + 0x8c]
// 00482f32  51                   push ecx
// 00482f33  c68424280100000a     mov byte ptr [esp + 0x128], 0xa
// 00482f3b  ff1544e67700         call dword ptr [0x77e644]
// 00482f41  83c418               add esp, 0x18
// 00482f44  50                   push eax
// 00482f45  8d4c2428             lea ecx, [esp + 0x28]
// 00482f49  c68424140100000b     mov byte ptr [esp + 0x114], 0xb
// 00482f51  ff159ce67700         call dword ptr [0x77e69c]
// 00482f57  687cc78400           push 0x84c77c
// 00482f5c  8d542428             lea edx, [esp + 0x28]
// 00482f60  52                   push edx
// 00482f61  e838dc1a00           call 0x630b9e
// 00482f66  83bc24ac00000010     cmp dword ptr [esp + 0xac], 0x10
// 00482f6e  8b842498000000       mov eax, dword ptr [esp + 0x98]
// 00482f75  7307                 jae 0x482f7e
// 00482f77  8d842498000000       lea eax, [esp + 0x98]
// 00482f7e  50                   push eax
// 00482f7f  8d542428             lea edx, [esp + 0x28]
// 00482f83  6828a77900           push 0x79a728
// 00482f88  52                   push edx
// 00482f89  e832e80700           call 0x5017c0
// 00482f8e  83c40c               add esp, 0xc
// 00482f91  50                   push eax
// 00482f92  8d8c24b4000000       lea ecx, [esp + 0xb4]
// 00482f99  c684241401000002     mov byte ptr [esp + 0x114], 2
// 00482fa1  ff159ce67700         call dword ptr [0x77e69c]
// 00482fa7  687cc78400           push 0x84c77c
// 00482fac  8d8424b4000000       lea eax, [esp + 0xb4]
// 00482fb3  50                   push eax
// 00482fb4  e8e5db1a00           call 0x630b9e
// 00482fb9  8d7e0c               lea edi, [esi + 0xc]
// 00482fbc  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 00482fbf  51                   push ecx
// 00482fc0  e8fbd6ffff           call 0x4806c0
// 00482fc5  50                   push eax
// 00482fc6  57                   push edi
// 00482fc7  8d9424d8000000       lea edx, [esp + 0xd8]
// 00482fce  68d8a67900           push 0x79a6d8
// 00482fd3  52                   push edx
// 00482fd4  e8e7e70700           call 0x5017c0
// 00482fd9  83c414               add esp, 0x14
// 00482fdc  50                   push eax
// 00482fdd  8d8c24b4000000       lea ecx, [esp + 0xb4]
// 00482fe4  c784241401000003000000 mov dword ptr [esp + 0x114], 3
// 00482fef  ff159ce67700         call dword ptr [0x77e69c]
// 00482ff5  687cc78400           push 0x84c77c
// 00482ffa  8d8424b4000000       lea eax, [esp + 0xb4]
// 00483001  50                   push eax
// 00483002  e897db1a00           call 0x630b9e
// 00483007  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 0048300a  51                   push ecx
// 0048300b  e8b0d6ffff           call 0x4806c0
// 00483010  83c404               add esp, 4
// 00483013  50                   push eax
// 00483014  8d8c24b4000000       lea ecx, [esp + 0xb4]
// 0048301b  ff1598e67700         call dword ptr [0x77e698]
// 00483021  8b5744               mov edx, dword ptr [edi + 0x44]
// 00483024  52                   push edx
// 00483025  c784241401000004000000 mov dword ptr [esp + 0x114], 4
// 00483030  e88bd6ffff           call 0x4806c0
// 00483035  83c404               add esp, 4
// 00483038  50                   push eax
// 00483039  8d8c2498000000       lea ecx, [esp + 0x98]
// 00483040  ff1598e67700         call dword ptr [0x77e698]
// 00483046  8b4624               mov eax, dword ptr [esi + 0x24]
// 00483049  50                   push eax
// 0048304a  c684241401000005     mov byte ptr [esp + 0x114], 5
// 00483052  e879f5ffff           call 0x4825d0
// 00483057  50                   push eax
// 00483058  e863d6ffff           call 0x4806c0
// 0048305d  83c408               add esp, 8
// 00483060  50                   push eax
// 00483061  8d8c24d0000000       lea ecx, [esp + 0xd0]
// 00483068  ff1598e67700         call dword ptr [0x77e698]
// 0048306e  8b4f44               mov ecx, dword ptr [edi + 0x44]
// 00483071  51                   push ecx
// 00483072  c684241401000006     mov byte ptr [esp + 0x114], 6
// 0048307a  e851f5ffff           call 0x4825d0
// 0048307f  50                   push eax
// 00483080  e83bd6ffff           call 0x4806c0
// 00483085  83c408               add esp, 8
// 00483088  50                   push eax
// 00483089  8d8c24ec000000       lea ecx, [esp + 0xec]
// 00483090  ff1598e67700         call dword ptr [0x77e698]
// 00483096  8b8424ac000000       mov eax, dword ptr [esp + 0xac]
// 0048309d  8b942498000000       mov edx, dword ptr [esp + 0x98]
// 004830a4  bb10000000           mov ebx, 0x10
// 004830a9  3bc3                 cmp eax, ebx
// 004830ab  c684241001000007     mov byte ptr [esp + 0x110], 7
// 004830b3  8bfa                 mov edi, edx
// 004830b5  7309                 jae 0x4830c0
// 004830b7  8dbc2498000000       lea edi, [esp + 0x98]
// 004830be  8bd7                 mov edx, edi
// 004830c0  399c24e4000000       cmp dword ptr [esp + 0xe4], ebx
// 004830c7  8b8c24d0000000       mov ecx, dword ptr [esp + 0xd0]
// 004830ce  7307                 jae 0x4830d7
// 004830d0  8d8c24d0000000       lea ecx, [esp + 0xd0]
// 004830d7  399c24c8000000       cmp dword ptr [esp + 0xc8], ebx
// 004830de  8b8424b4000000       mov eax, dword ptr [esp + 0xb4]
// 004830e5  7307                 jae 0x4830ee
// 004830e7  8d8424b4000000       lea eax, [esp + 0xb4]
// 004830ee  395e20               cmp dword ptr [esi + 0x20], ebx
// 004830f1  7205                 jb 0x4830f8
// 004830f3  8b760c               mov esi, dword ptr [esi + 0xc]
// 004830f6  eb03                 jmp 0x4830fb
// 004830f8  83c60c               add esi, 0xc
// 004830fb  57                   push edi
// 004830fc  52                   push edx
// 004830fd  51                   push ecx
// 004830fe  50                   push eax
// 004830ff  56                   push esi
// 00483100  8d542454             lea edx, [esp + 0x54]
// 00483104  6878a67900           push 0x79a678
// 00483109  52                   push edx
// 0048310a  e8b1e60700           call 0x5017c0
// 0048310f  83c41c               add esp, 0x1c
// 00483112  50                   push eax
// 00483113  8d4c2428             lea ecx, [esp + 0x28]
// 00483117  c684241401000008     mov byte ptr [esp + 0x114], 8
// 0048311f  ff159ce67700         call dword ptr [0x77e69c]
// 00483125  687cc78400           push 0x84c77c
// 0048312a  8d442428             lea eax, [esp + 0x28]
// 0048312e  50                   push eax
// 0048312f  e86ada1a00           call 0x630b9e
// 00483134  8b38                 mov edi, dword ptr [eax]
// 00483136  33db                 xor ebx, ebx
// 00483138  85ff                 test edi, edi
// 0048313a  889c24a8000000       mov byte ptr [esp + 0xa8], bl
// 00483141  0f855ffdffff         jne 0x482ea6
// 00483147  eb07                 jmp 0x483150
// 00483149  8da42400000000       lea esp, [esp]
// 00483150  83c301               add ebx, 1
// 00483153  3bdd                 cmp ebx, ebp
// 00483155  0f8d43fdffff         jge 0x482e9e
// 0048315b  8b3c98               mov edi, dword ptr [eax + ebx*4]
// 0048315e  85ff                 test edi, edi
// 00483160  74ee                 je 0x483150
// 00483162  e93ffdffff           jmp 0x482ea6
// 00483167  8b7f68               mov edi, dword ptr [edi + 0x68]
// 0048316a  85ff                 test edi, edi
// 0048316c  0f8534fdffff         jne 0x482ea6
// 00483172  83c301               add ebx, 1
// 00483175  3b5c241c             cmp ebx, dword ptr [esp + 0x1c]
// 00483179  0f8d1ffdffff         jge 0x482e9e
// 0048317f  8b542418             mov edx, dword ptr [esp + 0x18]
// 00483183  8b3c9a               mov edi, dword ptr [edx + ebx*4]
// 00483186  85ff                 test edi, edi
// 00483188  74e8                 je 0x483172
// 0048318a  e917fdffff           jmp 0x482ea6
// 0048318f  8b8c2408010000       mov ecx, dword ptr [esp + 0x108]
// 00483196  64890d00000000       mov dword ptr fs:[0], ecx
// 0048319d  59                   pop ecx
// 0048319e  5f                   pop edi
// 0048319f  5e                   pop esi
// 004831a0  5d                   pop ebp
// 004831a1  5b                   pop ebx
// 004831a2  8b8c24f0000000       mov ecx, dword ptr [esp + 0xf0]
// 004831a9  33cc                 xor ecx, esp
// 004831ab  e86ed81a00           call 0x630a1e
// 004831b0  81c400010000         add esp, 0x100
// 004831b6  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\Shader.cpp (function ?validateArgList@VertexAndPixelShader@G3D@@QBEXABVArgList@12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shader.cpp
