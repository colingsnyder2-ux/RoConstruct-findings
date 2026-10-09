// roc 2009-12 005559d0  unit: RBX::Network::ClientReplicator  size: 230 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005559d0
//
// 005559d0  83ec10               sub esp, 0x10
// 005559d3  56                   push esi
// 005559d4  8bf1                 mov esi, ecx
// 005559d6  8b4614               mov eax, dword ptr [esi + 0x14]
// 005559d9  57                   push edi
// 005559da  85c0                 test eax, eax
// 005559dc  7555                 jne 0x555a33
// 005559de  e8fde5ffff           call 0x553fe0
// 005559e3  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005559e7  894614               mov dword ptr [esi + 0x14], eax
// 005559ea  c60001               mov byte ptr [eax], 1
// 005559ed  8b4614               mov eax, dword ptr [esi + 0x14]
// 005559f0  894618               mov dword ptr [esi + 0x18], eax
// 005559f3  c7400401000000       mov dword ptr [eax + 4], 1
// 005559fa  8b4614               mov eax, dword ptr [esi + 0x14]
// 005559fd  894808               mov dword ptr [eax + 8], ecx
// 00555a00  8b5614               mov edx, dword ptr [esi + 0x14]
// 00555a03  8b442420             mov eax, dword ptr [esp + 0x20]
// 00555a07  8b08                 mov ecx, dword ptr [eax]
// 00555a09  898a88000000         mov dword ptr [edx + 0x88], ecx
// 00555a0f  8b5614               mov edx, dword ptr [esi + 0x14]
// 00555a12  c7820801000000000000 mov dword ptr [edx + 0x108], 0
// 00555a1c  8b4614               mov eax, dword ptr [esi + 0x14]
// 00555a1f  5f                   pop edi
// 00555a20  c7800c01000000000000 mov dword ptr [eax + 0x10c], 0
// 00555a2a  b001                 mov al, 1
// 00555a2c  5e                   pop esi
// 00555a2d  83c410               add esp, 0x10
// 00555a30  c20800               ret 8
// 00555a33  8d4c240b             lea ecx, [esp + 0xb]
// 00555a37  51                   push ecx
// 00555a38  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00555a3c  8d542410             lea edx, [esp + 0x10]
// 00555a40  52                   push edx
// 00555a41  50                   push eax
// 00555a42  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00555a46  50                   push eax
// 00555a47  51                   push ecx
// 00555a48  8bce                 mov ecx, esi
// 00555a4a  c644241f01           mov byte ptr [esp + 0x1f], 1
// 00555a4f  c744242800000000     mov dword ptr [esp + 0x28], 0
// 00555a57  e874f5ffff           call 0x554fd0
// 00555a5c  807c240b00           cmp byte ptr [esp + 0xb], 0
// 00555a61  8bf8                 mov edi, eax
// 00555a63  750a                 jne 0x555a6f
// 00555a65  5f                   pop edi
// 00555a66  32c0                 xor al, al
// 00555a68  5e                   pop esi
// 00555a69  83c410               add esp, 0x10
// 00555a6c  c20800               ret 8
// 00555a6f  85ff                 test edi, edi
// 00555a71  7439                 je 0x555aac
// 00555a73  803f00               cmp byte ptr [edi], 0
// 00555a76  55                   push ebp
// 00555a77  7509                 jne 0x555a82
// 00555a79  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 00555a7d  ff4f04               dec dword ptr [edi + 4]
// 00555a80  eb03                 jmp 0x555a85
// 00555a82  8b6f08               mov ebp, dword ptr [edi + 8]
// 00555a85  8bce                 mov ecx, esi
// 00555a87  e854e5ffff           call 0x553fe0
// 00555a8c  896808               mov dword ptr [eax + 8], ebp
// 00555a8f  c60000               mov byte ptr [eax], 0
// 00555a92  c7400401000000       mov dword ptr [eax + 4], 1
// 00555a99  8b5614               mov edx, dword ptr [esi + 0x14]
// 00555a9c  899010010000         mov dword ptr [eax + 0x110], edx
// 00555aa2  89b814010000         mov dword ptr [eax + 0x114], edi
// 00555aa8  894614               mov dword ptr [esi + 0x14], eax
// 00555aab  5d                   pop ebp
// 00555aac  5f                   pop edi
// 00555aad  b001                 mov al, 1
// 00555aaf  5e                   pop esi
// 00555ab0  83c410               add esp, 0x10
// 00555ab3  c20800               ret 8
// library rbxgs-raknet/ReliabilityLayer.cpp (function ?Insert@?$BPlusTree@IPAUInternalPacket@@$0CA@@DataStructures@@QAE_NIABQAUInternalPacket@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet ReliabilityLayer.cpp
