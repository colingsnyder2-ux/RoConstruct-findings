// roc 2009-06 004f7b10  unit: RBX::Network::ClientReplicator  size: 207 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004f7b10
//
// 004f7b10  83ec10               sub esp, 0x10
// 004f7b13  53                   push ebx
// 004f7b14  56                   push esi
// 004f7b15  8bf1                 mov esi, ecx
// 004f7b17  57                   push edi
// 004f7b18  8b7e14               mov edi, dword ptr [esi + 0x14]
// 004f7b1b  33db                 xor ebx, ebx
// 004f7b1d  3bfb                 cmp edi, ebx
// 004f7b1f  750b                 jne 0x4f7b2c
// 004f7b21  5f                   pop edi
// 004f7b22  5e                   pop esi
// 004f7b23  32c0                 xor al, al
// 004f7b25  5b                   pop ebx
// 004f7b26  83c410               add esp, 0x10
// 004f7b29  c20800               ret 8
// 004f7b2c  895c2418             mov dword ptr [esp + 0x18], ebx
// 004f7b30  885c240f             mov byte ptr [esp + 0xf], bl
// 004f7b34  3b7e18               cmp edi, dword ptr [esi + 0x18]
// 004f7b37  7554                 jne 0x4f7b8d
// 004f7b39  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 004f7b3d  8d442420             lea eax, [esp + 0x20]
// 004f7b41  50                   push eax
// 004f7b42  57                   push edi
// 004f7b43  51                   push ecx
// 004f7b44  8bce                 mov ecx, esi
// 004f7b46  e845daffff           call 0x4f5590
// 004f7b4b  84c0                 test al, al
// 004f7b4d  74d2                 je 0x4f7b21
// 004f7b4f  8b442420             mov eax, dword ptr [esp + 0x20]
// 004f7b53  8b948788000000       mov edx, dword ptr [edi + eax*4 + 0x88]
// 004f7b5a  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 004f7b5e  8911                 mov dword ptr [ecx], edx
// 004f7b60  8b5614               mov edx, dword ptr [esi + 0x14]
// 004f7b63  52                   push edx
// 004f7b64  50                   push eax
// 004f7b65  8bce                 mov ecx, esi
// 004f7b67  e8a4d9ffff           call 0x4f5510
// 004f7b6c  8b4614               mov eax, dword ptr [esi + 0x14]
// 004f7b6f  395804               cmp dword ptr [eax + 4], ebx
// 004f7b72  7560                 jne 0x4f7bd4
// 004f7b74  50                   push eax
// 004f7b75  8bce                 mov ecx, esi
// 004f7b77  e824e7ffff           call 0x4f62a0
// 004f7b7c  5f                   pop edi
// 004f7b7d  895e14               mov dword ptr [esi + 0x14], ebx
// 004f7b80  895e18               mov dword ptr [esi + 0x18], ebx
// 004f7b83  5e                   pop esi
// 004f7b84  b001                 mov al, 1
// 004f7b86  5b                   pop ebx
// 004f7b87  83c410               add esp, 0x10
// 004f7b8a  c20800               ret 8
// 004f7b8d  8b442424             mov eax, dword ptr [esp + 0x24]
// 004f7b91  8b5708               mov edx, dword ptr [edi + 8]
// 004f7b94  50                   push eax
// 004f7b95  8d4c2414             lea ecx, [esp + 0x14]
// 004f7b99  51                   push ecx
// 004f7b9a  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 004f7b9e  52                   push edx
// 004f7b9f  8d44241b             lea eax, [esp + 0x1b]
// 004f7ba3  50                   push eax
// 004f7ba4  57                   push edi
// 004f7ba5  51                   push ecx
// 004f7ba6  8bce                 mov ecx, esi
// 004f7ba8  e8a3f8ffff           call 0x4f7450
// 004f7bad  84c0                 test al, al
// 004f7baf  0f846cffffff         je 0x4f7b21
// 004f7bb5  385c240f             cmp byte ptr [esp + 0xf], bl
// 004f7bb9  7419                 je 0x4f7bd4
// 004f7bbb  8b4614               mov eax, dword ptr [esi + 0x14]
// 004f7bbe  395804               cmp dword ptr [eax + 4], ebx
// 004f7bc1  7511                 jne 0x4f7bd4
// 004f7bc3  8b9010010000         mov edx, dword ptr [eax + 0x110]
// 004f7bc9  50                   push eax
// 004f7bca  8bce                 mov ecx, esi
// 004f7bcc  895614               mov dword ptr [esi + 0x14], edx
// 004f7bcf  e8cce6ffff           call 0x4f62a0
// 004f7bd4  5f                   pop edi
// 004f7bd5  5e                   pop esi
// 004f7bd6  b001                 mov al, 1
// 004f7bd8  5b                   pop ebx
// 004f7bd9  83c410               add esp, 0x10
// 004f7bdc  c20800               ret 8
// library rbxgs-raknet/ReliabilityLayer.cpp (function ?Delete@?$BPlusTree@IPAUInternalPacket@@$0CA@@DataStructures@@QAE_NIAAPAUInternalPacket@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet ReliabilityLayer.cpp
