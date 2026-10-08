// roc 2008-06 004d0d60  unit: RBX::Network::PhysicsSender  size: 619 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004d0d60
//
// 004d0d60  53                   push ebx
// 004d0d61  55                   push ebp
// 004d0d62  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 004d0d66  56                   push esi
// 004d0d67  57                   push edi
// 004d0d68  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 004d0d6c  8d44241c             lea eax, [esp + 0x1c]
// 004d0d70  50                   push eax
// 004d0d71  57                   push edi
// 004d0d72  55                   push ebp
// 004d0d73  8bd9                 mov ebx, ecx
// 004d0d75  e806e5ffff           call 0x4cf280
// 004d0d7a  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 004d0d7e  8d7101               lea esi, [ecx + 1]
// 004d0d81  84c0                 test al, al
// 004d0d83  7502                 jne 0x4d0d87
// 004d0d85  8bf1                 mov esi, ecx
// 004d0d87  803f00               cmp byte ptr [edi], 0
// 004d0d8a  0f8515020000         jne 0x4d0fa5
// 004d0d90  8b84b710010000       mov eax, dword ptr [edi + esi*4 + 0x110]
// 004d0d97  803801               cmp byte ptr [eax], 1
// 004d0d9a  0f8588010000         jne 0x4d0f28
// 004d0da0  83780420             cmp dword ptr [eax + 4], 0x20
// 004d0da4  0f857e010000         jne 0x4d0f28
// 004d0daa  41                   inc ecx
// 004d0dab  3bf1                 cmp esi, ecx
// 004d0dad  7510                 jne 0x4d0dbf
// 004d0daf  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 004d0db3  c60100               mov byte ptr [ecx], 0
// 004d0db6  5f                   pop edi
// 004d0db7  5e                   pop esi
// 004d0db8  5d                   pop ebp
// 004d0db9  33c0                 xor eax, eax
// 004d0dbb  5b                   pop ebx
// 004d0dbc  c21400               ret 0x14
// 004d0dbf  56                   push esi
// 004d0dc0  57                   push edi
// 004d0dc1  8bcb                 mov ecx, ebx
// 004d0dc3  e828e7ffff           call 0x4cf4f0
// 004d0dc8  84c0                 test al, al
// 004d0dca  0f84a8000000         je 0x4d0e78
// 004d0dd0  8b542420             mov edx, dword ptr [esp + 0x20]
// 004d0dd4  c7420801000000       mov dword ptr [edx + 8], 1
// 004d0ddb  8b8cb710010000       mov ecx, dword ptr [edi + esi*4 + 0x110]
// 004d0de2  3b6908               cmp ebp, dword ptr [ecx + 8]
// 004d0de5  763f                 jbe 0x4d0e26
// 004d0de7  52                   push edx
// 004d0de8  56                   push esi
// 004d0de9  57                   push edi
// 004d0dea  8bcb                 mov ecx, ebx
// 004d0dec  e8dfe7ffff           call 0x4cf5d0
// 004d0df1  8b84b710010000       mov eax, dword ptr [edi + esi*4 + 0x110]
// 004d0df8  8d542420             lea edx, [esp + 0x20]
// 004d0dfc  52                   push edx
// 004d0dfd  50                   push eax
// 004d0dfe  55                   push ebp
// 004d0dff  8bcb                 mov ecx, ebx
// 004d0e01  e87ae4ffff           call 0x4cf280
// 004d0e06  8b84b710010000       mov eax, dword ptr [edi + esi*4 + 0x110]
// 004d0e0d  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 004d0e11  6a00                 push 0
// 004d0e13  50                   push eax
// 004d0e14  8b442428             mov eax, dword ptr [esp + 0x28]
// 004d0e18  6a00                 push 0
// 004d0e1a  50                   push eax
// 004d0e1b  51                   push ecx
// 004d0e1c  55                   push ebp
// 004d0e1d  8bcb                 mov ecx, ebx
// 004d0e1f  e8dcf0ffff           call 0x4cff00
// 004d0e24  eb3b                 jmp 0x4d0e61
// 004d0e26  8b84b70c010000       mov eax, dword ptr [edi + esi*4 + 0x10c]
// 004d0e2d  8b5908               mov ebx, dword ptr [ecx + 8]
// 004d0e30  891a                 mov dword ptr [edx], ebx
// 004d0e32  896a04               mov dword ptr [edx + 4], ebp
// 004d0e35  8b5004               mov edx, dword ptr [eax + 4]
// 004d0e38  8b5908               mov ebx, dword ptr [ecx + 8]
// 004d0e3b  895c9008             mov dword ptr [eax + edx*4 + 8], ebx
// 004d0e3f  8b5004               mov edx, dword ptr [eax + 4]
// 004d0e42  8b9988000000         mov ebx, dword ptr [ecx + 0x88]
// 004d0e48  899c9088000000       mov dword ptr [eax + edx*4 + 0x88], ebx
// 004d0e4f  ff4004               inc dword ptr [eax + 4]
// 004d0e52  8b442418             mov eax, dword ptr [esp + 0x18]
// 004d0e56  896908               mov dword ptr [ecx + 8], ebp
// 004d0e59  8b10                 mov edx, dword ptr [eax]
// 004d0e5b  899188000000         mov dword ptr [ecx + 0x88], edx
// 004d0e61  8b84b710010000       mov eax, dword ptr [edi + esi*4 + 0x110]
// 004d0e68  8b4808               mov ecx, dword ptr [eax + 8]
// 004d0e6b  894cb704             mov dword ptr [edi + esi*4 + 4], ecx
// 004d0e6f  5f                   pop edi
// 004d0e70  5e                   pop esi
// 004d0e71  5d                   pop ebp
// 004d0e72  33c0                 xor eax, eax
// 004d0e74  5b                   pop ebx
// 004d0e75  c21400               ret 0x14
// 004d0e78  56                   push esi
// 004d0e79  57                   push edi
// 004d0e7a  8bcb                 mov ecx, ebx
// 004d0e7c  e89fe6ffff           call 0x4cf520
// 004d0e81  84c0                 test al, al
// 004d0e83  0f849f000000         je 0x4d0f28
// 004d0e89  8b442420             mov eax, dword ptr [esp + 0x20]
// 004d0e8d  c7400801000000       mov dword ptr [eax + 8], 1
// 004d0e94  8b8cb710010000       mov ecx, dword ptr [edi + esi*4 + 0x110]
// 004d0e9b  8b5104               mov edx, dword ptr [ecx + 4]
// 004d0e9e  3b6c9104             cmp ebp, dword ptr [ecx + edx*4 + 4]
// 004d0ea2  733f                 jae 0x4d0ee3
// 004d0ea4  50                   push eax
// 004d0ea5  56                   push esi
// 004d0ea6  57                   push edi
// 004d0ea7  8bcb                 mov ecx, ebx
// 004d0ea9  e8a2e6ffff           call 0x4cf550
// 004d0eae  8b84b710010000       mov eax, dword ptr [edi + esi*4 + 0x110]
// 004d0eb5  8d4c2420             lea ecx, [esp + 0x20]
// 004d0eb9  51                   push ecx
// 004d0eba  50                   push eax
// 004d0ebb  55                   push ebp
// 004d0ebc  8bcb                 mov ecx, ebx
// 004d0ebe  e8bde3ffff           call 0x4cf280
// 004d0ec3  8b84b710010000       mov eax, dword ptr [edi + esi*4 + 0x110]
// 004d0eca  8b542420             mov edx, dword ptr [esp + 0x20]
// 004d0ece  6a00                 push 0
// 004d0ed0  50                   push eax
// 004d0ed1  8b442420             mov eax, dword ptr [esp + 0x20]
// 004d0ed5  6a00                 push 0
// 004d0ed7  52                   push edx
// 004d0ed8  50                   push eax
// 004d0ed9  55                   push ebp
// 004d0eda  8bcb                 mov ecx, ebx
// 004d0edc  e81ff0ffff           call 0x4cff00
// 004d0ee1  eb2e                 jmp 0x4d0f11
// 004d0ee3  8b8cb714010000       mov ecx, dword ptr [edi + esi*4 + 0x114]
// 004d0eea  8b5108               mov edx, dword ptr [ecx + 8]
// 004d0eed  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 004d0ef1  6a00                 push 0
// 004d0ef3  8910                 mov dword ptr [eax], edx
// 004d0ef5  8b84b714010000       mov eax, dword ptr [edi + esi*4 + 0x114]
// 004d0efc  50                   push eax
// 004d0efd  6a00                 push 0
// 004d0eff  6a00                 push 0
// 004d0f01  51                   push ecx
// 004d0f02  55                   push ebp
// 004d0f03  8bcb                 mov ecx, ebx
// 004d0f05  e8f6efffff           call 0x4cff00
// 004d0f0a  8b542420             mov edx, dword ptr [esp + 0x20]
// 004d0f0e  896a04               mov dword ptr [edx + 4], ebp
// 004d0f11  8b84b714010000       mov eax, dword ptr [edi + esi*4 + 0x114]
// 004d0f18  8b4808               mov ecx, dword ptr [eax + 8]
// 004d0f1b  894cb708             mov dword ptr [edi + esi*4 + 8], ecx
// 004d0f1f  5f                   pop edi
// 004d0f20  5e                   pop esi
// 004d0f21  5d                   pop ebp
// 004d0f22  33c0                 xor eax, eax
// 004d0f24  5b                   pop ebx
// 004d0f25  c21400               ret 0x14
// 004d0f28  8b542424             mov edx, dword ptr [esp + 0x24]
// 004d0f2c  8b442420             mov eax, dword ptr [esp + 0x20]
// 004d0f30  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 004d0f34  52                   push edx
// 004d0f35  50                   push eax
// 004d0f36  8b84b710010000       mov eax, dword ptr [edi + esi*4 + 0x110]
// 004d0f3d  50                   push eax
// 004d0f3e  51                   push ecx
// 004d0f3f  55                   push ebp
// 004d0f40  8bcb                 mov ecx, ebx
// 004d0f42  e819feffff           call 0x4d0d60
// 004d0f47  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 004d0f4b  83790801             cmp dword ptr [ecx + 8], 1
// 004d0f4f  7513                 jne 0x4d0f64
// 004d0f51  85f6                 test esi, esi
// 004d0f53  7e0f                 jle 0x4d0f64
// 004d0f55  8b54b704             mov edx, dword ptr [edi + esi*4 + 4]
// 004d0f59  3b11                 cmp edx, dword ptr [ecx]
// 004d0f5b  7507                 jne 0x4d0f64
// 004d0f5d  8b5104               mov edx, dword ptr [ecx + 4]
// 004d0f60  8954b704             mov dword ptr [edi + esi*4 + 4], edx
// 004d0f64  85c0                 test eax, eax
// 004d0f66  0f844afeffff         je 0x4d0db6
// 004d0f6c  803800               cmp byte ptr [eax], 0
// 004d0f6f  51                   push ecx
// 004d0f70  57                   push edi
// 004d0f71  50                   push eax
// 004d0f72  56                   push esi
// 004d0f73  7519                 jne 0x4d0f8e
// 004d0f75  ff4804               dec dword ptr [eax + 4]
// 004d0f78  8b442428             mov eax, dword ptr [esp + 0x28]
// 004d0f7c  8b09                 mov ecx, dword ptr [ecx]
// 004d0f7e  50                   push eax
// 004d0f7f  51                   push ecx
// 004d0f80  8bcb                 mov ecx, ebx
// 004d0f82  e879efffff           call 0x4cff00
// 004d0f87  5f                   pop edi
// 004d0f88  5e                   pop esi
// 004d0f89  5d                   pop ebp
// 004d0f8a  5b                   pop ebx
// 004d0f8b  c21400               ret 0x14
// 004d0f8e  8b542428             mov edx, dword ptr [esp + 0x28]
// 004d0f92  8b4008               mov eax, dword ptr [eax + 8]
// 004d0f95  52                   push edx
// 004d0f96  50                   push eax
// 004d0f97  8bcb                 mov ecx, ebx
// 004d0f99  e862efffff           call 0x4cff00
// 004d0f9e  5f                   pop edi
// 004d0f9f  5e                   pop esi
// 004d0fa0  5d                   pop ebp
// 004d0fa1  5b                   pop ebx
// 004d0fa2  c21400               ret 0x14
// 004d0fa5  41                   inc ecx
// 004d0fa6  3bf1                 cmp esi, ecx
// 004d0fa8  0f8401feffff         je 0x4d0daf
// 004d0fae  8b542420             mov edx, dword ptr [esp + 0x20]
// 004d0fb2  8b442418             mov eax, dword ptr [esp + 0x18]
// 004d0fb6  52                   push edx
// 004d0fb7  57                   push edi
// 004d0fb8  6a00                 push 0
// 004d0fba  56                   push esi
// 004d0fbb  50                   push eax
// 004d0fbc  55                   push ebp
// 004d0fbd  8bcb                 mov ecx, ebx
// 004d0fbf  e83cefffff           call 0x4cff00
// 004d0fc4  5f                   pop edi
// 004d0fc5  5e                   pop esi
// 004d0fc6  5d                   pop ebp
// 004d0fc7  5b                   pop ebx
// 004d0fc8  c21400               ret 0x14
// library rbxgs-raknet/ReliabilityLayer.cpp (function ?InsertBranchDown@?$BPlusTree@IPAUInternalPacket@@$0CA@@DataStructures@@IAEPAU?$Page@IPAUInternalPacket@@$0CA@@2@IABQAUInternalPacket@@PAU32@PAUReturnAction@12@PA_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet ReliabilityLayer.cpp
