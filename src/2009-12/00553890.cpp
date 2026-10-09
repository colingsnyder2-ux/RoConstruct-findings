// roc 2009-12 00553890  unit: RBX::Network::ClientReplicator  size: 106 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00553890
//
// 00553890  8b442404             mov eax, dword ptr [esp + 4]
// 00553894  8b4804               mov ecx, dword ptr [eax + 4]
// 00553897  49                   dec ecx
// 00553898  33d2                 xor edx, edx
// 0055389a  56                   push esi
// 0055389b  85c9                 test ecx, ecx
// 0055389d  7e14                 jle 0x5538b3
// 0055389f  8d4808               lea ecx, [eax + 8]
// 005538a2  8b7104               mov esi, dword ptr [ecx + 4]
// 005538a5  8931                 mov dword ptr [ecx], esi
// 005538a7  8b7004               mov esi, dword ptr [eax + 4]
// 005538aa  42                   inc edx
// 005538ab  4e                   dec esi
// 005538ac  83c104               add ecx, 4
// 005538af  3bd6                 cmp edx, esi
// 005538b1  7cef                 jl 0x5538a2
// 005538b3  33d2                 xor edx, edx
// 005538b5  3810                 cmp byte ptr [eax], dl
// 005538b7  7420                 je 0x5538d9
// 005538b9  395004               cmp dword ptr [eax + 4], edx
// 005538bc  7e35                 jle 0x5538f3
// 005538be  8d8888000000         lea ecx, [eax + 0x88]
// 005538c4  8b7104               mov esi, dword ptr [ecx + 4]
// 005538c7  8931                 mov dword ptr [ecx], esi
// 005538c9  42                   inc edx
// 005538ca  83c104               add ecx, 4
// 005538cd  3b5004               cmp edx, dword ptr [eax + 4]
// 005538d0  7cf2                 jl 0x5538c4
// 005538d2  ff4804               dec dword ptr [eax + 4]
// 005538d5  5e                   pop esi
// 005538d6  c20400               ret 4
// 005538d9  83780400             cmp dword ptr [eax + 4], 0
// 005538dd  7e14                 jle 0x5538f3
// 005538df  8d8810010000         lea ecx, [eax + 0x110]
// 005538e5  8b7104               mov esi, dword ptr [ecx + 4]
// 005538e8  8931                 mov dword ptr [ecx], esi
// 005538ea  42                   inc edx
// 005538eb  83c104               add ecx, 4
// 005538ee  3b5004               cmp edx, dword ptr [eax + 4]
// 005538f1  7cf2                 jl 0x5538e5
// 005538f3  ff4804               dec dword ptr [eax + 4]
// 005538f6  5e                   pop esi
// 005538f7  c20400               ret 4
// library rbxgs-raknet/ReliabilityLayer.cpp (function ?ShiftNodeLeft@?$BPlusTree@IPAUInternalPacket@@$0CA@@DataStructures@@IAEXPAU?$Page@IPAUInternalPacket@@$0CA@@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet ReliabilityLayer.cpp
