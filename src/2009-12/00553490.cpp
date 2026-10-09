// roc 2009-12 00553490  unit: RBX::Network::ClientReplicator  size: 123 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00553490
//
// 00553490  8b442408             mov eax, dword ptr [esp + 8]
// 00553494  8b4804               mov ecx, dword ptr [eax + 4]
// 00553497  8b542404             mov edx, dword ptr [esp + 4]
// 0055349b  49                   dec ecx
// 0055349c  3bd1                 cmp edx, ecx
// 0055349e  56                   push esi
// 0055349f  8bf2                 mov esi, edx
// 005534a1  7d17                 jge 0x5534ba
// 005534a3  8d4c9008             lea ecx, [eax + edx*4 + 8]
// 005534a7  57                   push edi
// 005534a8  8b7904               mov edi, dword ptr [ecx + 4]
// 005534ab  8939                 mov dword ptr [ecx], edi
// 005534ad  8b7804               mov edi, dword ptr [eax + 4]
// 005534b0  46                   inc esi
// 005534b1  4f                   dec edi
// 005534b2  83c104               add ecx, 4
// 005534b5  3bf7                 cmp esi, edi
// 005534b7  7cef                 jl 0x5534a8
// 005534b9  5f                   pop edi
// 005534ba  8b4804               mov ecx, dword ptr [eax + 4]
// 005534bd  49                   dec ecx
// 005534be  803800               cmp byte ptr [eax], 0
// 005534c1  7425                 je 0x5534e8
// 005534c3  3bd1                 cmp edx, ecx
// 005534c5  7d3d                 jge 0x553504
// 005534c7  8d8c9088000000       lea ecx, [eax + edx*4 + 0x88]
// 005534ce  8bff                 mov edi, edi
// 005534d0  8b7104               mov esi, dword ptr [ecx + 4]
// 005534d3  8931                 mov dword ptr [ecx], esi
// 005534d5  8b7004               mov esi, dword ptr [eax + 4]
// 005534d8  42                   inc edx
// 005534d9  4e                   dec esi
// 005534da  83c104               add ecx, 4
// 005534dd  3bd6                 cmp edx, esi
// 005534df  7cef                 jl 0x5534d0
// 005534e1  ff4804               dec dword ptr [eax + 4]
// 005534e4  5e                   pop esi
// 005534e5  c20800               ret 8
// 005534e8  3bd1                 cmp edx, ecx
// 005534ea  7d18                 jge 0x553504
// 005534ec  8d8c9014010000       lea ecx, [eax + edx*4 + 0x114]
// 005534f3  8b7104               mov esi, dword ptr [ecx + 4]
// 005534f6  8931                 mov dword ptr [ecx], esi
// 005534f8  8b7004               mov esi, dword ptr [eax + 4]
// 005534fb  42                   inc edx
// 005534fc  4e                   dec esi
// 005534fd  83c104               add ecx, 4
// 00553500  3bd6                 cmp edx, esi
// 00553502  7cef                 jl 0x5534f3
// 00553504  ff4804               dec dword ptr [eax + 4]
// 00553507  5e                   pop esi
// 00553508  c20800               ret 8
// library rbxgs-raknet/ReliabilityLayer.cpp (function ?DeleteFromPageAtIndex@?$BPlusTree@IPAUInternalPacket@@$0CA@@DataStructures@@IAEXHPAU?$Page@IPAUInternalPacket@@$0CA@@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet ReliabilityLayer.cpp
