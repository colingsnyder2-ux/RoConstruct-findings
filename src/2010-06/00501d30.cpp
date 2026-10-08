// roc 2010-06 00501d30  unit: RBX::Network::ClientReplicator  size: 123 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00501d30
//
// 00501d30  8b442408             mov eax, dword ptr [esp + 8]
// 00501d34  8b4804               mov ecx, dword ptr [eax + 4]
// 00501d37  8b542404             mov edx, dword ptr [esp + 4]
// 00501d3b  49                   dec ecx
// 00501d3c  3bd1                 cmp edx, ecx
// 00501d3e  56                   push esi
// 00501d3f  8bf2                 mov esi, edx
// 00501d41  7d17                 jge 0x501d5a
// 00501d43  8d4c9008             lea ecx, [eax + edx*4 + 8]
// 00501d47  57                   push edi
// 00501d48  8b7904               mov edi, dword ptr [ecx + 4]
// 00501d4b  8939                 mov dword ptr [ecx], edi
// 00501d4d  8b7804               mov edi, dword ptr [eax + 4]
// 00501d50  46                   inc esi
// 00501d51  4f                   dec edi
// 00501d52  83c104               add ecx, 4
// 00501d55  3bf7                 cmp esi, edi
// 00501d57  7cef                 jl 0x501d48
// 00501d59  5f                   pop edi
// 00501d5a  8b4804               mov ecx, dword ptr [eax + 4]
// 00501d5d  49                   dec ecx
// 00501d5e  803800               cmp byte ptr [eax], 0
// 00501d61  7425                 je 0x501d88
// 00501d63  3bd1                 cmp edx, ecx
// 00501d65  7d3d                 jge 0x501da4
// 00501d67  8d8c9088000000       lea ecx, [eax + edx*4 + 0x88]
// 00501d6e  8bff                 mov edi, edi
// 00501d70  8b7104               mov esi, dword ptr [ecx + 4]
// 00501d73  8931                 mov dword ptr [ecx], esi
// 00501d75  8b7004               mov esi, dword ptr [eax + 4]
// 00501d78  42                   inc edx
// 00501d79  4e                   dec esi
// 00501d7a  83c104               add ecx, 4
// 00501d7d  3bd6                 cmp edx, esi
// 00501d7f  7cef                 jl 0x501d70
// 00501d81  ff4804               dec dword ptr [eax + 4]
// 00501d84  5e                   pop esi
// 00501d85  c20800               ret 8
// 00501d88  3bd1                 cmp edx, ecx
// 00501d8a  7d18                 jge 0x501da4
// 00501d8c  8d8c9014010000       lea ecx, [eax + edx*4 + 0x114]
// 00501d93  8b7104               mov esi, dword ptr [ecx + 4]
// 00501d96  8931                 mov dword ptr [ecx], esi
// 00501d98  8b7004               mov esi, dword ptr [eax + 4]
// 00501d9b  42                   inc edx
// 00501d9c  4e                   dec esi
// 00501d9d  83c104               add ecx, 4
// 00501da0  3bd6                 cmp edx, esi
// 00501da2  7cef                 jl 0x501d93
// 00501da4  ff4804               dec dword ptr [eax + 4]
// 00501da7  5e                   pop esi
// 00501da8  c20800               ret 8
// library rbxgs-raknet/ReliabilityLayer.cpp (function ?DeleteFromPageAtIndex@?$BPlusTree@IPAUInternalPacket@@$0CA@@DataStructures@@IAEXHPAU?$Page@IPAUInternalPacket@@$0CA@@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet ReliabilityLayer.cpp
