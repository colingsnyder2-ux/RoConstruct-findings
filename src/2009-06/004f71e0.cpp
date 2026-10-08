// roc 2009-06 004f71e0  unit: RBX::Network::ClientReplicator  size: 619 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004f71e0
//
// 004f71e0  53                   push ebx
// 004f71e1  55                   push ebp
// 004f71e2  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 004f71e6  56                   push esi
// 004f71e7  57                   push edi
// 004f71e8  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 004f71ec  8d44241c             lea eax, [esp + 0x1c]
// 004f71f0  50                   push eax
// 004f71f1  57                   push edi
// 004f71f2  55                   push ebp
// 004f71f3  8bd9                 mov ebx, ecx
// 004f71f5  e896e3ffff           call 0x4f5590
// 004f71fa  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 004f71fe  8d7101               lea esi, [ecx + 1]
// 004f7201  84c0                 test al, al
// 004f7203  7502                 jne 0x4f7207
// 004f7205  8bf1                 mov esi, ecx
// 004f7207  803f00               cmp byte ptr [edi], 0
// 004f720a  0f8515020000         jne 0x4f7425
// 004f7210  8b84b710010000       mov eax, dword ptr [edi + esi*4 + 0x110]
// 004f7217  803801               cmp byte ptr [eax], 1
// 004f721a  0f8588010000         jne 0x4f73a8
// 004f7220  83780420             cmp dword ptr [eax + 4], 0x20
// 004f7224  0f857e010000         jne 0x4f73a8
// 004f722a  41                   inc ecx
// 004f722b  3bf1                 cmp esi, ecx
// 004f722d  7510                 jne 0x4f723f
// 004f722f  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 004f7233  c60100               mov byte ptr [ecx], 0
// 004f7236  5f                   pop edi
// 004f7237  5e                   pop esi
// 004f7238  5d                   pop ebp
// 004f7239  33c0                 xor eax, eax
// 004f723b  5b                   pop ebx
// 004f723c  c21400               ret 0x14
// 004f723f  56                   push esi
// 004f7240  57                   push edi
// 004f7241  8bcb                 mov ecx, ebx
// 004f7243  e808e5ffff           call 0x4f5750
// 004f7248  84c0                 test al, al
// 004f724a  0f84a8000000         je 0x4f72f8
// 004f7250  8b542420             mov edx, dword ptr [esp + 0x20]
// 004f7254  c7420801000000       mov dword ptr [edx + 8], 1
// 004f725b  8b8cb710010000       mov ecx, dword ptr [edi + esi*4 + 0x110]
// 004f7262  3b6908               cmp ebp, dword ptr [ecx + 8]
// 004f7265  763f                 jbe 0x4f72a6
// 004f7267  52                   push edx
// 004f7268  56                   push esi
// 004f7269  57                   push edi
// 004f726a  8bcb                 mov ecx, ebx
// 004f726c  e8bfe5ffff           call 0x4f5830
// 004f7271  8b84b710010000       mov eax, dword ptr [edi + esi*4 + 0x110]
// 004f7278  8d542420             lea edx, [esp + 0x20]
// 004f727c  52                   push edx
// 004f727d  50                   push eax
// 004f727e  55                   push ebp
// 004f727f  8bcb                 mov ecx, ebx
// 004f7281  e80ae3ffff           call 0x4f5590
// 004f7286  8b84b710010000       mov eax, dword ptr [edi + esi*4 + 0x110]
// 004f728d  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 004f7291  6a00                 push 0
// 004f7293  50                   push eax
// 004f7294  8b442428             mov eax, dword ptr [esp + 0x28]
// 004f7298  6a00                 push 0
// 004f729a  50                   push eax
// 004f729b  51                   push ecx
// 004f729c  55                   push ebp
// 004f729d  8bcb                 mov ecx, ebx
// 004f729f  e8dcf0ffff           call 0x4f6380
// 004f72a4  eb3b                 jmp 0x4f72e1
// 004f72a6  8b84b70c010000       mov eax, dword ptr [edi + esi*4 + 0x10c]
// 004f72ad  8b5908               mov ebx, dword ptr [ecx + 8]
// 004f72b0  891a                 mov dword ptr [edx], ebx
// 004f72b2  896a04               mov dword ptr [edx + 4], ebp
// 004f72b5  8b5004               mov edx, dword ptr [eax + 4]
// 004f72b8  8b5908               mov ebx, dword ptr [ecx + 8]
// 004f72bb  895c9008             mov dword ptr [eax + edx*4 + 8], ebx
// 004f72bf  8b5004               mov edx, dword ptr [eax + 4]
// 004f72c2  8b9988000000         mov ebx, dword ptr [ecx + 0x88]
// 004f72c8  899c9088000000       mov dword ptr [eax + edx*4 + 0x88], ebx
// 004f72cf  ff4004               inc dword ptr [eax + 4]
// 004f72d2  8b442418             mov eax, dword ptr [esp + 0x18]
// 004f72d6  896908               mov dword ptr [ecx + 8], ebp
// 004f72d9  8b10                 mov edx, dword ptr [eax]
// 004f72db  899188000000         mov dword ptr [ecx + 0x88], edx
// 004f72e1  8b84b710010000       mov eax, dword ptr [edi + esi*4 + 0x110]
// 004f72e8  8b4808               mov ecx, dword ptr [eax + 8]
// 004f72eb  894cb704             mov dword ptr [edi + esi*4 + 4], ecx
// 004f72ef  5f                   pop edi
// 004f72f0  5e                   pop esi
// 004f72f1  5d                   pop ebp
// 004f72f2  33c0                 xor eax, eax
// 004f72f4  5b                   pop ebx
// 004f72f5  c21400               ret 0x14
// 004f72f8  56                   push esi
// 004f72f9  57                   push edi
// 004f72fa  8bcb                 mov ecx, ebx
// 004f72fc  e87fe4ffff           call 0x4f5780
// 004f7301  84c0                 test al, al
// 004f7303  0f849f000000         je 0x4f73a8
// 004f7309  8b442420             mov eax, dword ptr [esp + 0x20]
// 004f730d  c7400801000000       mov dword ptr [eax + 8], 1
// 004f7314  8b8cb710010000       mov ecx, dword ptr [edi + esi*4 + 0x110]
// 004f731b  8b5104               mov edx, dword ptr [ecx + 4]
// 004f731e  3b6c9104             cmp ebp, dword ptr [ecx + edx*4 + 4]
// 004f7322  733f                 jae 0x4f7363
// 004f7324  50                   push eax
// 004f7325  56                   push esi
// 004f7326  57                   push edi
// 004f7327  8bcb                 mov ecx, ebx
// 004f7329  e882e4ffff           call 0x4f57b0
// 004f732e  8b84b710010000       mov eax, dword ptr [edi + esi*4 + 0x110]
// 004f7335  8d4c2420             lea ecx, [esp + 0x20]
// 004f7339  51                   push ecx
// 004f733a  50                   push eax
// 004f733b  55                   push ebp
// 004f733c  8bcb                 mov ecx, ebx
// 004f733e  e84de2ffff           call 0x4f5590
// 004f7343  8b84b710010000       mov eax, dword ptr [edi + esi*4 + 0x110]
// 004f734a  8b542420             mov edx, dword ptr [esp + 0x20]
// 004f734e  6a00                 push 0
// 004f7350  50                   push eax
// 004f7351  8b442420             mov eax, dword ptr [esp + 0x20]
// 004f7355  6a00                 push 0
// 004f7357  52                   push edx
// 004f7358  50                   push eax
// 004f7359  55                   push ebp
// 004f735a  8bcb                 mov ecx, ebx
// 004f735c  e81ff0ffff           call 0x4f6380
// 004f7361  eb2e                 jmp 0x4f7391
// 004f7363  8b8cb714010000       mov ecx, dword ptr [edi + esi*4 + 0x114]
// 004f736a  8b5108               mov edx, dword ptr [ecx + 8]
// 004f736d  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 004f7371  6a00                 push 0
// 004f7373  8910                 mov dword ptr [eax], edx
// 004f7375  8b84b714010000       mov eax, dword ptr [edi + esi*4 + 0x114]
// 004f737c  50                   push eax
// 004f737d  6a00                 push 0
// 004f737f  6a00                 push 0
// 004f7381  51                   push ecx
// 004f7382  55                   push ebp
// 004f7383  8bcb                 mov ecx, ebx
// 004f7385  e8f6efffff           call 0x4f6380
// 004f738a  8b542420             mov edx, dword ptr [esp + 0x20]
// 004f738e  896a04               mov dword ptr [edx + 4], ebp
// 004f7391  8b84b714010000       mov eax, dword ptr [edi + esi*4 + 0x114]
// 004f7398  8b4808               mov ecx, dword ptr [eax + 8]
// 004f739b  894cb708             mov dword ptr [edi + esi*4 + 8], ecx
// 004f739f  5f                   pop edi
// 004f73a0  5e                   pop esi
// 004f73a1  5d                   pop ebp
// 004f73a2  33c0                 xor eax, eax
// 004f73a4  5b                   pop ebx
// 004f73a5  c21400               ret 0x14
// 004f73a8  8b542424             mov edx, dword ptr [esp + 0x24]
// 004f73ac  8b442420             mov eax, dword ptr [esp + 0x20]
// 004f73b0  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 004f73b4  52                   push edx
// 004f73b5  50                   push eax
// 004f73b6  8b84b710010000       mov eax, dword ptr [edi + esi*4 + 0x110]
// 004f73bd  50                   push eax
// 004f73be  51                   push ecx
// 004f73bf  55                   push ebp
// 004f73c0  8bcb                 mov ecx, ebx
// 004f73c2  e819feffff           call 0x4f71e0
// 004f73c7  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 004f73cb  83790801             cmp dword ptr [ecx + 8], 1
// 004f73cf  7513                 jne 0x4f73e4
// 004f73d1  85f6                 test esi, esi
// 004f73d3  7e0f                 jle 0x4f73e4
// 004f73d5  8b54b704             mov edx, dword ptr [edi + esi*4 + 4]
// 004f73d9  3b11                 cmp edx, dword ptr [ecx]
// 004f73db  7507                 jne 0x4f73e4
// 004f73dd  8b5104               mov edx, dword ptr [ecx + 4]
// 004f73e0  8954b704             mov dword ptr [edi + esi*4 + 4], edx
// 004f73e4  85c0                 test eax, eax
// 004f73e6  0f844afeffff         je 0x4f7236
// 004f73ec  803800               cmp byte ptr [eax], 0
// 004f73ef  51                   push ecx
// 004f73f0  57                   push edi
// 004f73f1  50                   push eax
// 004f73f2  56                   push esi
// 004f73f3  7519                 jne 0x4f740e
// 004f73f5  ff4804               dec dword ptr [eax + 4]
// 004f73f8  8b442428             mov eax, dword ptr [esp + 0x28]
// 004f73fc  8b09                 mov ecx, dword ptr [ecx]
// 004f73fe  50                   push eax
// 004f73ff  51                   push ecx
// 004f7400  8bcb                 mov ecx, ebx
// 004f7402  e879efffff           call 0x4f6380
// 004f7407  5f                   pop edi
// 004f7408  5e                   pop esi
// 004f7409  5d                   pop ebp
// 004f740a  5b                   pop ebx
// 004f740b  c21400               ret 0x14
// 004f740e  8b542428             mov edx, dword ptr [esp + 0x28]
// 004f7412  8b4008               mov eax, dword ptr [eax + 8]
// 004f7415  52                   push edx
// 004f7416  50                   push eax
// 004f7417  8bcb                 mov ecx, ebx
// 004f7419  e862efffff           call 0x4f6380
// 004f741e  5f                   pop edi
// 004f741f  5e                   pop esi
// 004f7420  5d                   pop ebp
// 004f7421  5b                   pop ebx
// 004f7422  c21400               ret 0x14
// 004f7425  41                   inc ecx
// 004f7426  3bf1                 cmp esi, ecx
// 004f7428  0f8401feffff         je 0x4f722f
// 004f742e  8b542420             mov edx, dword ptr [esp + 0x20]
// 004f7432  8b442418             mov eax, dword ptr [esp + 0x18]
// 004f7436  52                   push edx
// 004f7437  57                   push edi
// 004f7438  6a00                 push 0
// 004f743a  56                   push esi
// 004f743b  50                   push eax
// 004f743c  55                   push ebp
// 004f743d  8bcb                 mov ecx, ebx
// 004f743f  e83cefffff           call 0x4f6380
// 004f7444  5f                   pop edi
// 004f7445  5e                   pop esi
// 004f7446  5d                   pop ebp
// 004f7447  5b                   pop ebx
// 004f7448  c21400               ret 0x14
// library rbxgs-raknet/ReliabilityLayer.cpp (function ?InsertBranchDown@?$BPlusTree@IPAUInternalPacket@@$0CA@@DataStructures@@IAEPAU?$Page@IPAUInternalPacket@@$0CA@@2@IABQAUInternalPacket@@PAU32@PAUReturnAction@12@PA_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet ReliabilityLayer.cpp
