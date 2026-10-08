// roc 2010-06 00503a30  unit: RBX::Network::ClientReplicator  size: 619 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00503a30
//
// 00503a30  53                   push ebx
// 00503a31  55                   push ebp
// 00503a32  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 00503a36  56                   push esi
// 00503a37  57                   push edi
// 00503a38  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 00503a3c  8d44241c             lea eax, [esp + 0x1c]
// 00503a40  50                   push eax
// 00503a41  57                   push edi
// 00503a42  55                   push ebp
// 00503a43  8bd9                 mov ebx, ecx
// 00503a45  e866e3ffff           call 0x501db0
// 00503a4a  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00503a4e  8d7101               lea esi, [ecx + 1]
// 00503a51  84c0                 test al, al
// 00503a53  7502                 jne 0x503a57
// 00503a55  8bf1                 mov esi, ecx
// 00503a57  803f00               cmp byte ptr [edi], 0
// 00503a5a  0f8515020000         jne 0x503c75
// 00503a60  8b84b710010000       mov eax, dword ptr [edi + esi*4 + 0x110]
// 00503a67  803801               cmp byte ptr [eax], 1
// 00503a6a  0f8588010000         jne 0x503bf8
// 00503a70  83780420             cmp dword ptr [eax + 4], 0x20
// 00503a74  0f857e010000         jne 0x503bf8
// 00503a7a  41                   inc ecx
// 00503a7b  3bf1                 cmp esi, ecx
// 00503a7d  7510                 jne 0x503a8f
// 00503a7f  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00503a83  c60100               mov byte ptr [ecx], 0
// 00503a86  5f                   pop edi
// 00503a87  5e                   pop esi
// 00503a88  5d                   pop ebp
// 00503a89  33c0                 xor eax, eax
// 00503a8b  5b                   pop ebx
// 00503a8c  c21400               ret 0x14
// 00503a8f  56                   push esi
// 00503a90  57                   push edi
// 00503a91  8bcb                 mov ecx, ebx
// 00503a93  e8d8e4ffff           call 0x501f70
// 00503a98  84c0                 test al, al
// 00503a9a  0f84a8000000         je 0x503b48
// 00503aa0  8b542420             mov edx, dword ptr [esp + 0x20]
// 00503aa4  c7420801000000       mov dword ptr [edx + 8], 1
// 00503aab  8b8cb710010000       mov ecx, dword ptr [edi + esi*4 + 0x110]
// 00503ab2  3b6908               cmp ebp, dword ptr [ecx + 8]
// 00503ab5  763f                 jbe 0x503af6
// 00503ab7  52                   push edx
// 00503ab8  56                   push esi
// 00503ab9  57                   push edi
// 00503aba  8bcb                 mov ecx, ebx
// 00503abc  e88fe5ffff           call 0x502050
// 00503ac1  8b84b710010000       mov eax, dword ptr [edi + esi*4 + 0x110]
// 00503ac8  8d542420             lea edx, [esp + 0x20]
// 00503acc  52                   push edx
// 00503acd  50                   push eax
// 00503ace  55                   push ebp
// 00503acf  8bcb                 mov ecx, ebx
// 00503ad1  e8dae2ffff           call 0x501db0
// 00503ad6  8b84b710010000       mov eax, dword ptr [edi + esi*4 + 0x110]
// 00503add  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00503ae1  6a00                 push 0
// 00503ae3  50                   push eax
// 00503ae4  8b442428             mov eax, dword ptr [esp + 0x28]
// 00503ae8  6a00                 push 0
// 00503aea  50                   push eax
// 00503aeb  51                   push ecx
// 00503aec  55                   push ebp
// 00503aed  8bcb                 mov ecx, ebx
// 00503aef  e8ccf0ffff           call 0x502bc0
// 00503af4  eb3b                 jmp 0x503b31
// 00503af6  8b84b70c010000       mov eax, dword ptr [edi + esi*4 + 0x10c]
// 00503afd  8b5908               mov ebx, dword ptr [ecx + 8]
// 00503b00  891a                 mov dword ptr [edx], ebx
// 00503b02  896a04               mov dword ptr [edx + 4], ebp
// 00503b05  8b5004               mov edx, dword ptr [eax + 4]
// 00503b08  8b5908               mov ebx, dword ptr [ecx + 8]
// 00503b0b  895c9008             mov dword ptr [eax + edx*4 + 8], ebx
// 00503b0f  8b5004               mov edx, dword ptr [eax + 4]
// 00503b12  8b9988000000         mov ebx, dword ptr [ecx + 0x88]
// 00503b18  899c9088000000       mov dword ptr [eax + edx*4 + 0x88], ebx
// 00503b1f  ff4004               inc dword ptr [eax + 4]
// 00503b22  8b442418             mov eax, dword ptr [esp + 0x18]
// 00503b26  896908               mov dword ptr [ecx + 8], ebp
// 00503b29  8b10                 mov edx, dword ptr [eax]
// 00503b2b  899188000000         mov dword ptr [ecx + 0x88], edx
// 00503b31  8b84b710010000       mov eax, dword ptr [edi + esi*4 + 0x110]
// 00503b38  8b4808               mov ecx, dword ptr [eax + 8]
// 00503b3b  894cb704             mov dword ptr [edi + esi*4 + 4], ecx
// 00503b3f  5f                   pop edi
// 00503b40  5e                   pop esi
// 00503b41  5d                   pop ebp
// 00503b42  33c0                 xor eax, eax
// 00503b44  5b                   pop ebx
// 00503b45  c21400               ret 0x14
// 00503b48  56                   push esi
// 00503b49  57                   push edi
// 00503b4a  8bcb                 mov ecx, ebx
// 00503b4c  e84fe4ffff           call 0x501fa0
// 00503b51  84c0                 test al, al
// 00503b53  0f849f000000         je 0x503bf8
// 00503b59  8b442420             mov eax, dword ptr [esp + 0x20]
// 00503b5d  c7400801000000       mov dword ptr [eax + 8], 1
// 00503b64  8b8cb710010000       mov ecx, dword ptr [edi + esi*4 + 0x110]
// 00503b6b  8b5104               mov edx, dword ptr [ecx + 4]
// 00503b6e  3b6c9104             cmp ebp, dword ptr [ecx + edx*4 + 4]
// 00503b72  733f                 jae 0x503bb3
// 00503b74  50                   push eax
// 00503b75  56                   push esi
// 00503b76  57                   push edi
// 00503b77  8bcb                 mov ecx, ebx
// 00503b79  e852e4ffff           call 0x501fd0
// 00503b7e  8b84b710010000       mov eax, dword ptr [edi + esi*4 + 0x110]
// 00503b85  8d4c2420             lea ecx, [esp + 0x20]
// 00503b89  51                   push ecx
// 00503b8a  50                   push eax
// 00503b8b  55                   push ebp
// 00503b8c  8bcb                 mov ecx, ebx
// 00503b8e  e81de2ffff           call 0x501db0
// 00503b93  8b84b710010000       mov eax, dword ptr [edi + esi*4 + 0x110]
// 00503b9a  8b542420             mov edx, dword ptr [esp + 0x20]
// 00503b9e  6a00                 push 0
// 00503ba0  50                   push eax
// 00503ba1  8b442420             mov eax, dword ptr [esp + 0x20]
// 00503ba5  6a00                 push 0
// 00503ba7  52                   push edx
// 00503ba8  50                   push eax
// 00503ba9  55                   push ebp
// 00503baa  8bcb                 mov ecx, ebx
// 00503bac  e80ff0ffff           call 0x502bc0
// 00503bb1  eb2e                 jmp 0x503be1
// 00503bb3  8b8cb714010000       mov ecx, dword ptr [edi + esi*4 + 0x114]
// 00503bba  8b5108               mov edx, dword ptr [ecx + 8]
// 00503bbd  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00503bc1  6a00                 push 0
// 00503bc3  8910                 mov dword ptr [eax], edx
// 00503bc5  8b84b714010000       mov eax, dword ptr [edi + esi*4 + 0x114]
// 00503bcc  50                   push eax
// 00503bcd  6a00                 push 0
// 00503bcf  6a00                 push 0
// 00503bd1  51                   push ecx
// 00503bd2  55                   push ebp
// 00503bd3  8bcb                 mov ecx, ebx
// 00503bd5  e8e6efffff           call 0x502bc0
// 00503bda  8b542420             mov edx, dword ptr [esp + 0x20]
// 00503bde  896a04               mov dword ptr [edx + 4], ebp
// 00503be1  8b84b714010000       mov eax, dword ptr [edi + esi*4 + 0x114]
// 00503be8  8b4808               mov ecx, dword ptr [eax + 8]
// 00503beb  894cb708             mov dword ptr [edi + esi*4 + 8], ecx
// 00503bef  5f                   pop edi
// 00503bf0  5e                   pop esi
// 00503bf1  5d                   pop ebp
// 00503bf2  33c0                 xor eax, eax
// 00503bf4  5b                   pop ebx
// 00503bf5  c21400               ret 0x14
// 00503bf8  8b542424             mov edx, dword ptr [esp + 0x24]
// 00503bfc  8b442420             mov eax, dword ptr [esp + 0x20]
// 00503c00  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00503c04  52                   push edx
// 00503c05  50                   push eax
// 00503c06  8b84b710010000       mov eax, dword ptr [edi + esi*4 + 0x110]
// 00503c0d  50                   push eax
// 00503c0e  51                   push ecx
// 00503c0f  55                   push ebp
// 00503c10  8bcb                 mov ecx, ebx
// 00503c12  e819feffff           call 0x503a30
// 00503c17  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00503c1b  83790801             cmp dword ptr [ecx + 8], 1
// 00503c1f  7513                 jne 0x503c34
// 00503c21  85f6                 test esi, esi
// 00503c23  7e0f                 jle 0x503c34
// 00503c25  8b54b704             mov edx, dword ptr [edi + esi*4 + 4]
// 00503c29  3b11                 cmp edx, dword ptr [ecx]
// 00503c2b  7507                 jne 0x503c34
// 00503c2d  8b5104               mov edx, dword ptr [ecx + 4]
// 00503c30  8954b704             mov dword ptr [edi + esi*4 + 4], edx
// 00503c34  85c0                 test eax, eax
// 00503c36  0f844afeffff         je 0x503a86
// 00503c3c  803800               cmp byte ptr [eax], 0
// 00503c3f  51                   push ecx
// 00503c40  57                   push edi
// 00503c41  50                   push eax
// 00503c42  56                   push esi
// 00503c43  7519                 jne 0x503c5e
// 00503c45  ff4804               dec dword ptr [eax + 4]
// 00503c48  8b442428             mov eax, dword ptr [esp + 0x28]
// 00503c4c  8b09                 mov ecx, dword ptr [ecx]
// 00503c4e  50                   push eax
// 00503c4f  51                   push ecx
// 00503c50  8bcb                 mov ecx, ebx
// 00503c52  e869efffff           call 0x502bc0
// 00503c57  5f                   pop edi
// 00503c58  5e                   pop esi
// 00503c59  5d                   pop ebp
// 00503c5a  5b                   pop ebx
// 00503c5b  c21400               ret 0x14
// 00503c5e  8b542428             mov edx, dword ptr [esp + 0x28]
// 00503c62  8b4008               mov eax, dword ptr [eax + 8]
// 00503c65  52                   push edx
// 00503c66  50                   push eax
// 00503c67  8bcb                 mov ecx, ebx
// 00503c69  e852efffff           call 0x502bc0
// 00503c6e  5f                   pop edi
// 00503c6f  5e                   pop esi
// 00503c70  5d                   pop ebp
// 00503c71  5b                   pop ebx
// 00503c72  c21400               ret 0x14
// 00503c75  41                   inc ecx
// 00503c76  3bf1                 cmp esi, ecx
// 00503c78  0f8401feffff         je 0x503a7f
// 00503c7e  8b542420             mov edx, dword ptr [esp + 0x20]
// 00503c82  8b442418             mov eax, dword ptr [esp + 0x18]
// 00503c86  52                   push edx
// 00503c87  57                   push edi
// 00503c88  6a00                 push 0
// 00503c8a  56                   push esi
// 00503c8b  50                   push eax
// 00503c8c  55                   push ebp
// 00503c8d  8bcb                 mov ecx, ebx
// 00503c8f  e82cefffff           call 0x502bc0
// 00503c94  5f                   pop edi
// 00503c95  5e                   pop esi
// 00503c96  5d                   pop ebp
// 00503c97  5b                   pop ebx
// 00503c98  c21400               ret 0x14
// library rbxgs-raknet/ReliabilityLayer.cpp (function ?InsertBranchDown@?$BPlusTree@IPAUInternalPacket@@$0CA@@DataStructures@@IAEPAU?$Page@IPAUInternalPacket@@$0CA@@2@IABQAUInternalPacket@@PAU32@PAUReturnAction@12@PA_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet ReliabilityLayer.cpp
