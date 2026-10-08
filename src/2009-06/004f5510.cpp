// roc 2009-06 004f5510  unit: RBX::Network::ClientReplicator  size: 123 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004f5510
//
// 004f5510  8b442408             mov eax, dword ptr [esp + 8]
// 004f5514  8b4804               mov ecx, dword ptr [eax + 4]
// 004f5517  8b542404             mov edx, dword ptr [esp + 4]
// 004f551b  49                   dec ecx
// 004f551c  3bd1                 cmp edx, ecx
// 004f551e  56                   push esi
// 004f551f  8bf2                 mov esi, edx
// 004f5521  7d17                 jge 0x4f553a
// 004f5523  8d4c9008             lea ecx, [eax + edx*4 + 8]
// 004f5527  57                   push edi
// 004f5528  8b7904               mov edi, dword ptr [ecx + 4]
// 004f552b  8939                 mov dword ptr [ecx], edi
// 004f552d  8b7804               mov edi, dword ptr [eax + 4]
// 004f5530  46                   inc esi
// 004f5531  4f                   dec edi
// 004f5532  83c104               add ecx, 4
// 004f5535  3bf7                 cmp esi, edi
// 004f5537  7cef                 jl 0x4f5528
// 004f5539  5f                   pop edi
// 004f553a  8b4804               mov ecx, dword ptr [eax + 4]
// 004f553d  49                   dec ecx
// 004f553e  803800               cmp byte ptr [eax], 0
// 004f5541  7425                 je 0x4f5568
// 004f5543  3bd1                 cmp edx, ecx
// 004f5545  7d3d                 jge 0x4f5584
// 004f5547  8d8c9088000000       lea ecx, [eax + edx*4 + 0x88]
// 004f554e  8bff                 mov edi, edi
// 004f5550  8b7104               mov esi, dword ptr [ecx + 4]
// 004f5553  8931                 mov dword ptr [ecx], esi
// 004f5555  8b7004               mov esi, dword ptr [eax + 4]
// 004f5558  42                   inc edx
// 004f5559  4e                   dec esi
// 004f555a  83c104               add ecx, 4
// 004f555d  3bd6                 cmp edx, esi
// 004f555f  7cef                 jl 0x4f5550
// 004f5561  ff4804               dec dword ptr [eax + 4]
// 004f5564  5e                   pop esi
// 004f5565  c20800               ret 8
// 004f5568  3bd1                 cmp edx, ecx
// 004f556a  7d18                 jge 0x4f5584
// 004f556c  8d8c9014010000       lea ecx, [eax + edx*4 + 0x114]
// 004f5573  8b7104               mov esi, dword ptr [ecx + 4]
// 004f5576  8931                 mov dword ptr [ecx], esi
// 004f5578  8b7004               mov esi, dword ptr [eax + 4]
// 004f557b  42                   inc edx
// 004f557c  4e                   dec esi
// 004f557d  83c104               add ecx, 4
// 004f5580  3bd6                 cmp edx, esi
// 004f5582  7cef                 jl 0x4f5573
// 004f5584  ff4804               dec dword ptr [eax + 4]
// 004f5587  5e                   pop esi
// 004f5588  c20800               ret 8
// library rbxgs-raknet/ReliabilityLayer.cpp (function ?DeleteFromPageAtIndex@?$BPlusTree@IPAUInternalPacket@@$0CA@@DataStructures@@IAEXHPAU?$Page@IPAUInternalPacket@@$0CA@@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet ReliabilityLayer.cpp
