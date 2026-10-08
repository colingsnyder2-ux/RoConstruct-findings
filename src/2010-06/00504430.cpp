// roc 2010-06 00504430  unit: RBX::Network::ClientReplicator  size: 230 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00504430
//
// 00504430  83ec10               sub esp, 0x10
// 00504433  56                   push esi
// 00504434  8bf1                 mov esi, ecx
// 00504436  8b4614               mov eax, dword ptr [esi + 0x14]
// 00504439  57                   push edi
// 0050443a  85c0                 test eax, eax
// 0050443c  7555                 jne 0x504493
// 0050443e  e84de5ffff           call 0x502990
// 00504443  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00504447  894614               mov dword ptr [esi + 0x14], eax
// 0050444a  c60001               mov byte ptr [eax], 1
// 0050444d  8b4614               mov eax, dword ptr [esi + 0x14]
// 00504450  894618               mov dword ptr [esi + 0x18], eax
// 00504453  c7400401000000       mov dword ptr [eax + 4], 1
// 0050445a  8b4614               mov eax, dword ptr [esi + 0x14]
// 0050445d  894808               mov dword ptr [eax + 8], ecx
// 00504460  8b5614               mov edx, dword ptr [esi + 0x14]
// 00504463  8b442420             mov eax, dword ptr [esp + 0x20]
// 00504467  8b08                 mov ecx, dword ptr [eax]
// 00504469  898a88000000         mov dword ptr [edx + 0x88], ecx
// 0050446f  8b5614               mov edx, dword ptr [esi + 0x14]
// 00504472  c7820801000000000000 mov dword ptr [edx + 0x108], 0
// 0050447c  8b4614               mov eax, dword ptr [esi + 0x14]
// 0050447f  5f                   pop edi
// 00504480  c7800c01000000000000 mov dword ptr [eax + 0x10c], 0
// 0050448a  b001                 mov al, 1
// 0050448c  5e                   pop esi
// 0050448d  83c410               add esp, 0x10
// 00504490  c20800               ret 8
// 00504493  8d4c240b             lea ecx, [esp + 0xb]
// 00504497  51                   push ecx
// 00504498  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0050449c  8d542410             lea edx, [esp + 0x10]
// 005044a0  52                   push edx
// 005044a1  50                   push eax
// 005044a2  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 005044a6  50                   push eax
// 005044a7  51                   push ecx
// 005044a8  8bce                 mov ecx, esi
// 005044aa  c644241f01           mov byte ptr [esp + 0x1f], 1
// 005044af  c744242800000000     mov dword ptr [esp + 0x28], 0
// 005044b7  e874f5ffff           call 0x503a30
// 005044bc  807c240b00           cmp byte ptr [esp + 0xb], 0
// 005044c1  8bf8                 mov edi, eax
// 005044c3  750a                 jne 0x5044cf
// 005044c5  5f                   pop edi
// 005044c6  32c0                 xor al, al
// 005044c8  5e                   pop esi
// 005044c9  83c410               add esp, 0x10
// 005044cc  c20800               ret 8
// 005044cf  85ff                 test edi, edi
// 005044d1  7439                 je 0x50450c
// 005044d3  803f00               cmp byte ptr [edi], 0
// 005044d6  55                   push ebp
// 005044d7  7509                 jne 0x5044e2
// 005044d9  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 005044dd  ff4f04               dec dword ptr [edi + 4]
// 005044e0  eb03                 jmp 0x5044e5
// 005044e2  8b6f08               mov ebp, dword ptr [edi + 8]
// 005044e5  8bce                 mov ecx, esi
// 005044e7  e8a4e4ffff           call 0x502990
// 005044ec  896808               mov dword ptr [eax + 8], ebp
// 005044ef  c60000               mov byte ptr [eax], 0
// 005044f2  c7400401000000       mov dword ptr [eax + 4], 1
// 005044f9  8b5614               mov edx, dword ptr [esi + 0x14]
// 005044fc  899010010000         mov dword ptr [eax + 0x110], edx
// 00504502  89b814010000         mov dword ptr [eax + 0x114], edi
// 00504508  894614               mov dword ptr [esi + 0x14], eax
// 0050450b  5d                   pop ebp
// 0050450c  5f                   pop edi
// 0050450d  b001                 mov al, 1
// 0050450f  5e                   pop esi
// 00504510  83c410               add esp, 0x10
// 00504513  c20800               ret 8
// library rbxgs-raknet/ReliabilityLayer.cpp (function ?Insert@?$BPlusTree@IPAUInternalPacket@@$0CA@@DataStructures@@QAE_NIABQAUInternalPacket@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet ReliabilityLayer.cpp
