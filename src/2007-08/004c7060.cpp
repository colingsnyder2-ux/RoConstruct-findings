// roc 2007-08 004c7060  unit: RakPeer  size: 625 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004c7060
//
// 004c7060  53                   push ebx
// 004c7061  55                   push ebp
// 004c7062  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 004c7066  56                   push esi
// 004c7067  57                   push edi
// 004c7068  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 004c706c  8d44241c             lea eax, [esp + 0x1c]
// 004c7070  50                   push eax
// 004c7071  57                   push edi
// 004c7072  55                   push ebp
// 004c7073  8bd9                 mov ebx, ecx
// 004c7075  e836e2ffff           call 0x4c52b0
// 004c707a  84c0                 test al, al
// 004c707c  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 004c7080  8d7101               lea esi, [ecx + 1]
// 004c7083  7502                 jne 0x4c7087
// 004c7085  8bf1                 mov esi, ecx
// 004c7087  803f00               cmp byte ptr [edi], 0
// 004c708a  0f8519020000         jne 0x4c72a9
// 004c7090  8b84b710010000       mov eax, dword ptr [edi + esi*4 + 0x110]
// 004c7097  803801               cmp byte ptr [eax], 1
// 004c709a  0f858b010000         jne 0x4c722b
// 004c70a0  83780420             cmp dword ptr [eax + 4], 0x20
// 004c70a4  0f8581010000         jne 0x4c722b
// 004c70aa  83c101               add ecx, 1
// 004c70ad  3bf1                 cmp esi, ecx
// 004c70af  7510                 jne 0x4c70c1
// 004c70b1  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 004c70b5  c60100               mov byte ptr [ecx], 0
// 004c70b8  5f                   pop edi
// 004c70b9  5e                   pop esi
// 004c70ba  5d                   pop ebp
// 004c70bb  33c0                 xor eax, eax
// 004c70bd  5b                   pop ebx
// 004c70be  c21400               ret 0x14
// 004c70c1  56                   push esi
// 004c70c2  57                   push edi
// 004c70c3  8bcb                 mov ecx, ebx
// 004c70c5  e8c6e3ffff           call 0x4c5490
// 004c70ca  84c0                 test al, al
// 004c70cc  0f84a9000000         je 0x4c717b
// 004c70d2  8b542420             mov edx, dword ptr [esp + 0x20]
// 004c70d6  c7420801000000       mov dword ptr [edx + 8], 1
// 004c70dd  8b8cb710010000       mov ecx, dword ptr [edi + esi*4 + 0x110]
// 004c70e4  3b6908               cmp ebp, dword ptr [ecx + 8]
// 004c70e7  763f                 jbe 0x4c7128
// 004c70e9  52                   push edx
// 004c70ea  56                   push esi
// 004c70eb  57                   push edi
// 004c70ec  8bcb                 mov ecx, ebx
// 004c70ee  e88de4ffff           call 0x4c5580
// 004c70f3  8b84b710010000       mov eax, dword ptr [edi + esi*4 + 0x110]
// 004c70fa  8d542420             lea edx, [esp + 0x20]
// 004c70fe  52                   push edx
// 004c70ff  50                   push eax
// 004c7100  55                   push ebp
// 004c7101  8bcb                 mov ecx, ebx
// 004c7103  e8a8e1ffff           call 0x4c52b0
// 004c7108  8b84b710010000       mov eax, dword ptr [edi + esi*4 + 0x110]
// 004c710f  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 004c7113  6a00                 push 0
// 004c7115  50                   push eax
// 004c7116  8b442428             mov eax, dword ptr [esp + 0x28]
// 004c711a  6a00                 push 0
// 004c711c  50                   push eax
// 004c711d  51                   push ecx
// 004c711e  55                   push ebp
// 004c711f  8bcb                 mov ecx, ebx
// 004c7121  e8caeeffff           call 0x4c5ff0
// 004c7126  eb3c                 jmp 0x4c7164
// 004c7128  8b84b70c010000       mov eax, dword ptr [edi + esi*4 + 0x10c]
// 004c712f  8b5908               mov ebx, dword ptr [ecx + 8]
// 004c7132  891a                 mov dword ptr [edx], ebx
// 004c7134  896a04               mov dword ptr [edx + 4], ebp
// 004c7137  8b5004               mov edx, dword ptr [eax + 4]
// 004c713a  8b5908               mov ebx, dword ptr [ecx + 8]
// 004c713d  895c9008             mov dword ptr [eax + edx*4 + 8], ebx
// 004c7141  8b5004               mov edx, dword ptr [eax + 4]
// 004c7144  8b9988000000         mov ebx, dword ptr [ecx + 0x88]
// 004c714a  899c9088000000       mov dword ptr [eax + edx*4 + 0x88], ebx
// 004c7151  83400401             add dword ptr [eax + 4], 1
// 004c7155  8b442418             mov eax, dword ptr [esp + 0x18]
// 004c7159  896908               mov dword ptr [ecx + 8], ebp
// 004c715c  8b10                 mov edx, dword ptr [eax]
// 004c715e  899188000000         mov dword ptr [ecx + 0x88], edx
// 004c7164  8b84b710010000       mov eax, dword ptr [edi + esi*4 + 0x110]
// 004c716b  8b4808               mov ecx, dword ptr [eax + 8]
// 004c716e  894cb704             mov dword ptr [edi + esi*4 + 4], ecx
// 004c7172  5f                   pop edi
// 004c7173  5e                   pop esi
// 004c7174  5d                   pop ebp
// 004c7175  33c0                 xor eax, eax
// 004c7177  5b                   pop ebx
// 004c7178  c21400               ret 0x14
// 004c717b  56                   push esi
// 004c717c  57                   push edi
// 004c717d  8bcb                 mov ecx, ebx
// 004c717f  e83ce3ffff           call 0x4c54c0
// 004c7184  84c0                 test al, al
// 004c7186  0f849f000000         je 0x4c722b
// 004c718c  8b442420             mov eax, dword ptr [esp + 0x20]
// 004c7190  c7400801000000       mov dword ptr [eax + 8], 1
// 004c7197  8b8cb710010000       mov ecx, dword ptr [edi + esi*4 + 0x110]
// 004c719e  8b5104               mov edx, dword ptr [ecx + 4]
// 004c71a1  3b6c9104             cmp ebp, dword ptr [ecx + edx*4 + 4]
// 004c71a5  733f                 jae 0x4c71e6
// 004c71a7  50                   push eax
// 004c71a8  56                   push esi
// 004c71a9  57                   push edi
// 004c71aa  8bcb                 mov ecx, ebx
// 004c71ac  e83fe3ffff           call 0x4c54f0
// 004c71b1  8b84b710010000       mov eax, dword ptr [edi + esi*4 + 0x110]
// 004c71b8  8d4c2420             lea ecx, [esp + 0x20]
// 004c71bc  51                   push ecx
// 004c71bd  50                   push eax
// 004c71be  55                   push ebp
// 004c71bf  8bcb                 mov ecx, ebx
// 004c71c1  e8eae0ffff           call 0x4c52b0
// 004c71c6  8b84b710010000       mov eax, dword ptr [edi + esi*4 + 0x110]
// 004c71cd  8b542420             mov edx, dword ptr [esp + 0x20]
// 004c71d1  6a00                 push 0
// 004c71d3  50                   push eax
// 004c71d4  8b442420             mov eax, dword ptr [esp + 0x20]
// 004c71d8  6a00                 push 0
// 004c71da  52                   push edx
// 004c71db  50                   push eax
// 004c71dc  55                   push ebp
// 004c71dd  8bcb                 mov ecx, ebx
// 004c71df  e80ceeffff           call 0x4c5ff0
// 004c71e4  eb2e                 jmp 0x4c7214
// 004c71e6  8b8cb714010000       mov ecx, dword ptr [edi + esi*4 + 0x114]
// 004c71ed  8b5108               mov edx, dword ptr [ecx + 8]
// 004c71f0  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 004c71f4  6a00                 push 0
// 004c71f6  8910                 mov dword ptr [eax], edx
// 004c71f8  8b84b714010000       mov eax, dword ptr [edi + esi*4 + 0x114]
// 004c71ff  50                   push eax
// 004c7200  6a00                 push 0
// 004c7202  6a00                 push 0
// 004c7204  51                   push ecx
// 004c7205  55                   push ebp
// 004c7206  8bcb                 mov ecx, ebx
// 004c7208  e8e3edffff           call 0x4c5ff0
// 004c720d  8b542420             mov edx, dword ptr [esp + 0x20]
// 004c7211  896a04               mov dword ptr [edx + 4], ebp
// 004c7214  8b84b714010000       mov eax, dword ptr [edi + esi*4 + 0x114]
// 004c721b  8b4808               mov ecx, dword ptr [eax + 8]
// 004c721e  894cb708             mov dword ptr [edi + esi*4 + 8], ecx
// 004c7222  5f                   pop edi
// 004c7223  5e                   pop esi
// 004c7224  5d                   pop ebp
// 004c7225  33c0                 xor eax, eax
// 004c7227  5b                   pop ebx
// 004c7228  c21400               ret 0x14
// 004c722b  8b542424             mov edx, dword ptr [esp + 0x24]
// 004c722f  8b442420             mov eax, dword ptr [esp + 0x20]
// 004c7233  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 004c7237  52                   push edx
// 004c7238  50                   push eax
// 004c7239  8b84b710010000       mov eax, dword ptr [edi + esi*4 + 0x110]
// 004c7240  50                   push eax
// 004c7241  51                   push ecx
// 004c7242  55                   push ebp
// 004c7243  8bcb                 mov ecx, ebx
// 004c7245  e816feffff           call 0x4c7060
// 004c724a  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 004c724e  83790801             cmp dword ptr [ecx + 8], 1
// 004c7252  7513                 jne 0x4c7267
// 004c7254  85f6                 test esi, esi
// 004c7256  7e0f                 jle 0x4c7267
// 004c7258  8b54b704             mov edx, dword ptr [edi + esi*4 + 4]
// 004c725c  3b11                 cmp edx, dword ptr [ecx]
// 004c725e  7507                 jne 0x4c7267
// 004c7260  8b5104               mov edx, dword ptr [ecx + 4]
// 004c7263  8954b704             mov dword ptr [edi + esi*4 + 4], edx
// 004c7267  85c0                 test eax, eax
// 004c7269  0f8449feffff         je 0x4c70b8
// 004c726f  803800               cmp byte ptr [eax], 0
// 004c7272  51                   push ecx
// 004c7273  57                   push edi
// 004c7274  50                   push eax
// 004c7275  56                   push esi
// 004c7276  751a                 jne 0x4c7292
// 004c7278  834004ff             add dword ptr [eax + 4], -1
// 004c727c  8b442428             mov eax, dword ptr [esp + 0x28]
// 004c7280  8b09                 mov ecx, dword ptr [ecx]
// 004c7282  50                   push eax
// 004c7283  51                   push ecx
// 004c7284  8bcb                 mov ecx, ebx
// 004c7286  e865edffff           call 0x4c5ff0
// 004c728b  5f                   pop edi
// 004c728c  5e                   pop esi
// 004c728d  5d                   pop ebp
// 004c728e  5b                   pop ebx
// 004c728f  c21400               ret 0x14
// 004c7292  8b542428             mov edx, dword ptr [esp + 0x28]
// 004c7296  8b4008               mov eax, dword ptr [eax + 8]
// 004c7299  52                   push edx
// 004c729a  50                   push eax
// 004c729b  8bcb                 mov ecx, ebx
// 004c729d  e84eedffff           call 0x4c5ff0
// 004c72a2  5f                   pop edi
// 004c72a3  5e                   pop esi
// 004c72a4  5d                   pop ebp
// 004c72a5  5b                   pop ebx
// 004c72a6  c21400               ret 0x14
// 004c72a9  83c101               add ecx, 1
// 004c72ac  3bf1                 cmp esi, ecx
// 004c72ae  0f84fdfdffff         je 0x4c70b1
// 004c72b4  8b542420             mov edx, dword ptr [esp + 0x20]
// 004c72b8  8b442418             mov eax, dword ptr [esp + 0x18]
// 004c72bc  52                   push edx
// 004c72bd  57                   push edi
// 004c72be  6a00                 push 0
// 004c72c0  56                   push esi
// 004c72c1  50                   push eax
// 004c72c2  55                   push ebp
// 004c72c3  8bcb                 mov ecx, ebx
// 004c72c5  e826edffff           call 0x4c5ff0
// 004c72ca  5f                   pop edi
// 004c72cb  5e                   pop esi
// 004c72cc  5d                   pop ebp
// 004c72cd  5b                   pop ebx
// 004c72ce  c21400               ret 0x14
// library rbxgs-raknet/ReliabilityLayer.cpp (function ?InsertBranchDown@?$BPlusTree@IPAUInternalPacket@@$0CA@@DataStructures@@IAEPAU?$Page@IPAUInternalPacket@@$0CA@@2@IABQAUInternalPacket@@PAU32@PAUReturnAction@12@PA_N@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet ReliabilityLayer.cpp
