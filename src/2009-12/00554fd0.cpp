// roc 2009-12 00554fd0  unit: RBX::Network::ClientReplicator  size: 619 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00554fd0
//
// 00554fd0  53                   push ebx
// 00554fd1  55                   push ebp
// 00554fd2  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 00554fd6  56                   push esi
// 00554fd7  57                   push edi
// 00554fd8  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 00554fdc  8d44241c             lea eax, [esp + 0x1c]
// 00554fe0  50                   push eax
// 00554fe1  57                   push edi
// 00554fe2  55                   push ebp
// 00554fe3  8bd9                 mov ebx, ecx
// 00554fe5  e826e5ffff           call 0x553510
// 00554fea  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00554fee  8d7101               lea esi, [ecx + 1]
// 00554ff1  84c0                 test al, al
// 00554ff3  7502                 jne 0x554ff7
// 00554ff5  8bf1                 mov esi, ecx
// 00554ff7  803f00               cmp byte ptr [edi], 0
// 00554ffa  0f8515020000         jne 0x555215
// 00555000  8b84b710010000       mov eax, dword ptr [edi + esi*4 + 0x110]
// 00555007  803801               cmp byte ptr [eax], 1
// 0055500a  0f8588010000         jne 0x555198
// 00555010  83780420             cmp dword ptr [eax + 4], 0x20
// 00555014  0f857e010000         jne 0x555198
// 0055501a  41                   inc ecx
// 0055501b  3bf1                 cmp esi, ecx
// 0055501d  7510                 jne 0x55502f
// 0055501f  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00555023  c60100               mov byte ptr [ecx], 0
// 00555026  5f                   pop edi
// 00555027  5e                   pop esi
// 00555028  5d                   pop ebp
// 00555029  33c0                 xor eax, eax
// 0055502b  5b                   pop ebx
// 0055502c  c21400               ret 0x14
// 0055502f  56                   push esi
// 00555030  57                   push edi
// 00555031  8bcb                 mov ecx, ebx
// 00555033  e8c8e5ffff           call 0x553600
// 00555038  84c0                 test al, al
// 0055503a  0f84a8000000         je 0x5550e8
// 00555040  8b542420             mov edx, dword ptr [esp + 0x20]
// 00555044  c7420801000000       mov dword ptr [edx + 8], 1
// 0055504b  8b8cb710010000       mov ecx, dword ptr [edi + esi*4 + 0x110]
// 00555052  3b6908               cmp ebp, dword ptr [ecx + 8]
// 00555055  763f                 jbe 0x555096
// 00555057  52                   push edx
// 00555058  56                   push esi
// 00555059  57                   push edi
// 0055505a  8bcb                 mov ecx, ebx
// 0055505c  e87fe6ffff           call 0x5536e0
// 00555061  8b84b710010000       mov eax, dword ptr [edi + esi*4 + 0x110]
// 00555068  8d542420             lea edx, [esp + 0x20]
// 0055506c  52                   push edx
// 0055506d  50                   push eax
// 0055506e  55                   push ebp
// 0055506f  8bcb                 mov ecx, ebx
// 00555071  e89ae4ffff           call 0x553510
// 00555076  8b84b710010000       mov eax, dword ptr [edi + esi*4 + 0x110]
// 0055507d  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00555081  6a00                 push 0
// 00555083  50                   push eax
// 00555084  8b442428             mov eax, dword ptr [esp + 0x28]
// 00555088  6a00                 push 0
// 0055508a  50                   push eax
// 0055508b  51                   push ecx
// 0055508c  55                   push ebp
// 0055508d  8bcb                 mov ecx, ebx
// 0055508f  e8dcf0ffff           call 0x554170
// 00555094  eb3b                 jmp 0x5550d1
// 00555096  8b84b70c010000       mov eax, dword ptr [edi + esi*4 + 0x10c]
// 0055509d  8b5908               mov ebx, dword ptr [ecx + 8]
// 005550a0  891a                 mov dword ptr [edx], ebx
// 005550a2  896a04               mov dword ptr [edx + 4], ebp
// 005550a5  8b5004               mov edx, dword ptr [eax + 4]
// 005550a8  8b5908               mov ebx, dword ptr [ecx + 8]
// 005550ab  895c9008             mov dword ptr [eax + edx*4 + 8], ebx
// 005550af  8b5004               mov edx, dword ptr [eax + 4]
// 005550b2  8b9988000000         mov ebx, dword ptr [ecx + 0x88]
// 005550b8  899c9088000000       mov dword ptr [eax + edx*4 + 0x88], ebx
// 005550bf  ff4004               inc dword ptr [eax + 4]
// 005550c2  8b442418             mov eax, dword ptr [esp + 0x18]
// 005550c6  896908               mov dword ptr [ecx + 8], ebp
// 005550c9  8b10                 mov edx, dword ptr [eax]
// 005550cb  899188000000         mov dword ptr [ecx + 0x88], edx
// 005550d1  8b84b710010000       mov eax, dword ptr [edi + esi*4 + 0x110]
// 005550d8  8b4808               mov ecx, dword ptr [eax + 8]
// 005550db  894cb704             mov dword ptr [edi + esi*4 + 4], ecx
// 005550df  5f                   pop edi
// 005550e0  5e                   pop esi
// 005550e1  5d                   pop ebp
// 005550e2  33c0                 xor eax, eax
// 005550e4  5b                   pop ebx
// 005550e5  c21400               ret 0x14
// 005550e8  56                   push esi
// 005550e9  57                   push edi
// 005550ea  8bcb                 mov ecx, ebx
// 005550ec  e83fe5ffff           call 0x553630
// 005550f1  84c0                 test al, al
// 005550f3  0f849f000000         je 0x555198
// 005550f9  8b442420             mov eax, dword ptr [esp + 0x20]
// 005550fd  c7400801000000       mov dword ptr [eax + 8], 1
// 00555104  8b8cb710010000       mov ecx, dword ptr [edi + esi*4 + 0x110]
// 0055510b  8b5104               mov edx, dword ptr [ecx + 4]
// 0055510e  3b6c9104             cmp ebp, dword ptr [ecx + edx*4 + 4]
// 00555112  733f                 jae 0x555153
// 00555114  50                   push eax
// 00555115  56                   push esi
// 00555116  57                   push edi
// 00555117  8bcb                 mov ecx, ebx
// 00555119  e842e5ffff           call 0x553660
// 0055511e  8b84b710010000       mov eax, dword ptr [edi + esi*4 + 0x110]
// 00555125  8d4c2420             lea ecx, [esp + 0x20]
// 00555129  51                   push ecx
// 0055512a  50                   push eax
// 0055512b  55                   push ebp
// 0055512c  8bcb                 mov ecx, ebx
// 0055512e  e8dde3ffff           call 0x553510
// 00555133  8b84b710010000       mov eax, dword ptr [edi + esi*4 + 0x110]
// 0055513a  8b542420             mov edx, dword ptr [esp + 0x20]
// 0055513e  6a00                 push 0
// 00555140  50                   push eax
// 00555141  8b442420             mov eax, dword ptr [esp + 0x20]
// 00555145  6a00                 push 0
// 00555147  52                   push edx
// 00555148  50                   push eax
// 00555149  55                   push ebp
// 0055514a  8bcb                 mov ecx, ebx
// 0055514c  e81ff0ffff           call 0x554170
// 00555151  eb2e                 jmp 0x555181
// 00555153  8b8cb714010000       mov ecx, dword ptr [edi + esi*4 + 0x114]
// 0055515a  8b5108               mov edx, dword ptr [ecx + 8]
// 0055515d  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00555161  6a00                 push 0
// 00555163  8910                 mov dword ptr [eax], edx
// 00555165  8b84b714010000       mov eax, dword ptr [edi + esi*4 + 0x114]
// 0055516c  50                   push eax
// 0055516d  6a00                 push 0
// 0055516f  6a00                 push 0
// 00555171  51                   push ecx
// 00555172  55                   push ebp
// 00555173  8bcb                 mov ecx, ebx
// 00555175  e8f6efffff           call 0x554170
// 0055517a  8b542420             mov edx, dword ptr [esp + 0x20]
// 0055517e  896a04               mov dword ptr [edx + 4], ebp
// 00555181  8b84b714010000       mov eax, dword ptr [edi + esi*4 + 0x114]
// 00555188  8b4808               mov ecx, dword ptr [eax + 8]
// 0055518b  894cb708             mov dword ptr [edi + esi*4 + 8], ecx
// 0055518f  5f                   pop edi
// 00555190  5e                   pop esi
// 00555191  5d                   pop ebp
// 00555192  33c0                 xor eax, eax
// 00555194  5b                   pop ebx
// 00555195  c21400               ret 0x14
// 00555198  8b542424             mov edx, dword ptr [esp + 0x24]
// 0055519c  8b442420             mov eax, dword ptr [esp + 0x20]
// 005551a0  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 005551a4  52                   push edx
// 005551a5  50                   push eax
// 005551a6  8b84b710010000       mov eax, dword ptr [edi + esi*4 + 0x110]
// 005551ad  50                   push eax
// 005551ae  51                   push ecx
// 005551af  55                   push ebp
// 005551b0  8bcb                 mov ecx, ebx
// 005551b2  e819feffff           call 0x554fd0
// 005551b7  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005551bb  83790801             cmp dword ptr [ecx + 8], 1
// 005551bf  7513                 jne 0x5551d4
// 005551c1  85f6                 test esi, esi
// 005551c3  7e0f                 jle 0x5551d4
// 005551c5  8b54b704             mov edx, dword ptr [edi + esi*4 + 4]
// 005551c9  3b11                 cmp edx, dword ptr [ecx]
// 005551cb  7507                 jne 0x5551d4
// 005551cd  8b5104               mov edx, dword ptr [ecx + 4]
// 005551d0  8954b704             mov dword ptr [edi + esi*4 + 4], edx
// 005551d4  85c0                 test eax, eax
// 005551d6  0f844afeffff         je 0x555026
// 005551dc  803800               cmp byte ptr [eax], 0
// 005551df  51                   push ecx
// 005551e0  57                   push edi
// 005551e1  50                   push eax
// 005551e2  56                   push esi
// 005551e3  7519                 jne 0x5551fe
// 005551e5  ff4804               dec dword ptr [eax + 4]
// 005551e8  8b442428             mov eax, dword ptr [esp + 0x28]
// 005551ec  8b09                 mov ecx, dword ptr [ecx]
// 005551ee  50                   push eax
// 005551ef  51                   push ecx
// 005551f0  8bcb                 mov ecx, ebx
// 005551f2  e879efffff           call 0x554170
// 005551f7  5f                   pop edi
// 005551f8  5e                   pop esi
// 005551f9  5d                   pop ebp
// 005551fa  5b                   pop ebx
// 005551fb  c21400               ret 0x14
// 005551fe  8b542428             mov edx, dword ptr [esp + 0x28]
// 00555202  8b4008               mov eax, dword ptr [eax + 8]
// 00555205  52                   push edx
// 00555206  50                   push eax
// 00555207  8bcb                 mov ecx, ebx
// 00555209  e862efffff           call 0x554170
// 0055520e  5f                   pop edi
// 0055520f  5e                   pop esi
// 00555210  5d                   pop ebp
// 00555211  5b                   pop ebx
// 00555212  c21400               ret 0x14
// 00555215  41                   inc ecx
// 00555216  3bf1                 cmp esi, ecx
// 00555218  0f8401feffff         je 0x55501f
// 0055521e  8b542420             mov edx, dword ptr [esp + 0x20]
// 00555222  8b442418             mov eax, dword ptr [esp + 0x18]
// 00555226  52                   push edx
// 00555227  57                   push edi
// 00555228  6a00                 push 0
// 0055522a  56                   push esi
// 0055522b  50                   push eax
// 0055522c  55                   push ebp
// 0055522d  8bcb                 mov ecx, ebx
// 0055522f  e83cefffff           call 0x554170
// 00555234  5f                   pop edi
// 00555235  5e                   pop esi
// 00555236  5d                   pop ebp
// 00555237  5b                   pop ebx
// 00555238  c21400               ret 0x14
// library rbxgs-raknet/ReliabilityLayer.cpp (function ?InsertBranchDown@?$BPlusTree@IPAUInternalPacket@@$0CA@@DataStructures@@IAEPAU?$Page@IPAUInternalPacket@@$0CA@@2@IABQAUInternalPacket@@PAU32@PAUReturnAction@12@PA_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet ReliabilityLayer.cpp
