// roc 2009-06 004f7be0  unit: RBX::Network::ClientReplicator  size: 230 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004f7be0
//
// 004f7be0  83ec10               sub esp, 0x10
// 004f7be3  56                   push esi
// 004f7be4  8bf1                 mov esi, ecx
// 004f7be6  8b4614               mov eax, dword ptr [esi + 0x14]
// 004f7be9  57                   push edi
// 004f7bea  85c0                 test eax, eax
// 004f7bec  7555                 jne 0x4f7c43
// 004f7bee  e8fde5ffff           call 0x4f61f0
// 004f7bf3  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 004f7bf7  894614               mov dword ptr [esi + 0x14], eax
// 004f7bfa  c60001               mov byte ptr [eax], 1
// 004f7bfd  8b4614               mov eax, dword ptr [esi + 0x14]
// 004f7c00  894618               mov dword ptr [esi + 0x18], eax
// 004f7c03  c7400401000000       mov dword ptr [eax + 4], 1
// 004f7c0a  8b4614               mov eax, dword ptr [esi + 0x14]
// 004f7c0d  894808               mov dword ptr [eax + 8], ecx
// 004f7c10  8b5614               mov edx, dword ptr [esi + 0x14]
// 004f7c13  8b442420             mov eax, dword ptr [esp + 0x20]
// 004f7c17  8b08                 mov ecx, dword ptr [eax]
// 004f7c19  898a88000000         mov dword ptr [edx + 0x88], ecx
// 004f7c1f  8b5614               mov edx, dword ptr [esi + 0x14]
// 004f7c22  c7820801000000000000 mov dword ptr [edx + 0x108], 0
// 004f7c2c  8b4614               mov eax, dword ptr [esi + 0x14]
// 004f7c2f  5f                   pop edi
// 004f7c30  c7800c01000000000000 mov dword ptr [eax + 0x10c], 0
// 004f7c3a  b001                 mov al, 1
// 004f7c3c  5e                   pop esi
// 004f7c3d  83c410               add esp, 0x10
// 004f7c40  c20800               ret 8
// 004f7c43  8d4c240b             lea ecx, [esp + 0xb]
// 004f7c47  51                   push ecx
// 004f7c48  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 004f7c4c  8d542410             lea edx, [esp + 0x10]
// 004f7c50  52                   push edx
// 004f7c51  50                   push eax
// 004f7c52  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 004f7c56  50                   push eax
// 004f7c57  51                   push ecx
// 004f7c58  8bce                 mov ecx, esi
// 004f7c5a  c644241f01           mov byte ptr [esp + 0x1f], 1
// 004f7c5f  c744242800000000     mov dword ptr [esp + 0x28], 0
// 004f7c67  e874f5ffff           call 0x4f71e0
// 004f7c6c  807c240b00           cmp byte ptr [esp + 0xb], 0
// 004f7c71  8bf8                 mov edi, eax
// 004f7c73  750a                 jne 0x4f7c7f
// 004f7c75  5f                   pop edi
// 004f7c76  32c0                 xor al, al
// 004f7c78  5e                   pop esi
// 004f7c79  83c410               add esp, 0x10
// 004f7c7c  c20800               ret 8
// 004f7c7f  85ff                 test edi, edi
// 004f7c81  7439                 je 0x4f7cbc
// 004f7c83  803f00               cmp byte ptr [edi], 0
// 004f7c86  55                   push ebp
// 004f7c87  7509                 jne 0x4f7c92
// 004f7c89  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 004f7c8d  ff4f04               dec dword ptr [edi + 4]
// 004f7c90  eb03                 jmp 0x4f7c95
// 004f7c92  8b6f08               mov ebp, dword ptr [edi + 8]
// 004f7c95  8bce                 mov ecx, esi
// 004f7c97  e854e5ffff           call 0x4f61f0
// 004f7c9c  896808               mov dword ptr [eax + 8], ebp
// 004f7c9f  c60000               mov byte ptr [eax], 0
// 004f7ca2  c7400401000000       mov dword ptr [eax + 4], 1
// 004f7ca9  8b5614               mov edx, dword ptr [esi + 0x14]
// 004f7cac  899010010000         mov dword ptr [eax + 0x110], edx
// 004f7cb2  89b814010000         mov dword ptr [eax + 0x114], edi
// 004f7cb8  894614               mov dword ptr [esi + 0x14], eax
// 004f7cbb  5d                   pop ebp
// 004f7cbc  5f                   pop edi
// 004f7cbd  b001                 mov al, 1
// 004f7cbf  5e                   pop esi
// 004f7cc0  83c410               add esp, 0x10
// 004f7cc3  c20800               ret 8
// library rbxgs-raknet/ReliabilityLayer.cpp (function ?Insert@?$BPlusTree@IPAUInternalPacket@@$0CA@@DataStructures@@QAE_NIABQAUInternalPacket@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet ReliabilityLayer.cpp
