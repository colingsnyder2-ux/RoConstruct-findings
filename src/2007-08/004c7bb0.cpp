// roc 2007-08 004c7bb0  unit: RakPeer  size: 231 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004c7bb0
//
// 004c7bb0  83ec10               sub esp, 0x10
// 004c7bb3  56                   push esi
// 004c7bb4  8bf1                 mov esi, ecx
// 004c7bb6  8b4614               mov eax, dword ptr [esi + 0x14]
// 004c7bb9  85c0                 test eax, eax
// 004c7bbb  57                   push edi
// 004c7bbc  7555                 jne 0x4c7c13
// 004c7bbe  e8cddfffff           call 0x4c5b90
// 004c7bc3  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 004c7bc7  894614               mov dword ptr [esi + 0x14], eax
// 004c7bca  c60001               mov byte ptr [eax], 1
// 004c7bcd  8b4614               mov eax, dword ptr [esi + 0x14]
// 004c7bd0  894618               mov dword ptr [esi + 0x18], eax
// 004c7bd3  c7400401000000       mov dword ptr [eax + 4], 1
// 004c7bda  8b4614               mov eax, dword ptr [esi + 0x14]
// 004c7bdd  894808               mov dword ptr [eax + 8], ecx
// 004c7be0  8b5614               mov edx, dword ptr [esi + 0x14]
// 004c7be3  8b442420             mov eax, dword ptr [esp + 0x20]
// 004c7be7  8b08                 mov ecx, dword ptr [eax]
// 004c7be9  898a88000000         mov dword ptr [edx + 0x88], ecx
// 004c7bef  8b5614               mov edx, dword ptr [esi + 0x14]
// 004c7bf2  c7820801000000000000 mov dword ptr [edx + 0x108], 0
// 004c7bfc  8b4614               mov eax, dword ptr [esi + 0x14]
// 004c7bff  5f                   pop edi
// 004c7c00  c7800c01000000000000 mov dword ptr [eax + 0x10c], 0
// 004c7c0a  b001                 mov al, 1
// 004c7c0c  5e                   pop esi
// 004c7c0d  83c410               add esp, 0x10
// 004c7c10  c20800               ret 8
// 004c7c13  8d4c240b             lea ecx, [esp + 0xb]
// 004c7c17  51                   push ecx
// 004c7c18  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 004c7c1c  8d542410             lea edx, [esp + 0x10]
// 004c7c20  52                   push edx
// 004c7c21  50                   push eax
// 004c7c22  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 004c7c26  50                   push eax
// 004c7c27  51                   push ecx
// 004c7c28  8bce                 mov ecx, esi
// 004c7c2a  c644241f01           mov byte ptr [esp + 0x1f], 1
// 004c7c2f  c744242800000000     mov dword ptr [esp + 0x28], 0
// 004c7c37  e824f4ffff           call 0x4c7060
// 004c7c3c  807c240b00           cmp byte ptr [esp + 0xb], 0
// 004c7c41  8bf8                 mov edi, eax
// 004c7c43  750a                 jne 0x4c7c4f
// 004c7c45  5f                   pop edi
// 004c7c46  32c0                 xor al, al
// 004c7c48  5e                   pop esi
// 004c7c49  83c410               add esp, 0x10
// 004c7c4c  c20800               ret 8
// 004c7c4f  85ff                 test edi, edi
// 004c7c51  743a                 je 0x4c7c8d
// 004c7c53  803f00               cmp byte ptr [edi], 0
// 004c7c56  55                   push ebp
// 004c7c57  750a                 jne 0x4c7c63
// 004c7c59  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 004c7c5d  834704ff             add dword ptr [edi + 4], -1
// 004c7c61  eb03                 jmp 0x4c7c66
// 004c7c63  8b6f08               mov ebp, dword ptr [edi + 8]
// 004c7c66  8bce                 mov ecx, esi
// 004c7c68  e823dfffff           call 0x4c5b90
// 004c7c6d  896808               mov dword ptr [eax + 8], ebp
// 004c7c70  c60000               mov byte ptr [eax], 0
// 004c7c73  c7400401000000       mov dword ptr [eax + 4], 1
// 004c7c7a  8b5614               mov edx, dword ptr [esi + 0x14]
// 004c7c7d  899010010000         mov dword ptr [eax + 0x110], edx
// 004c7c83  89b814010000         mov dword ptr [eax + 0x114], edi
// 004c7c89  894614               mov dword ptr [esi + 0x14], eax
// 004c7c8c  5d                   pop ebp
// 004c7c8d  5f                   pop edi
// 004c7c8e  b001                 mov al, 1
// 004c7c90  5e                   pop esi
// 004c7c91  83c410               add esp, 0x10
// 004c7c94  c20800               ret 8
// library rbxgs-raknet/ReliabilityLayer.cpp (function ?Insert@?$BPlusTree@IPAUInternalPacket@@$0CA@@DataStructures@@QAE_NIABQAUInternalPacket@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet ReliabilityLayer.cpp
