// roc 2010-06 00502200  unit: RBX::Network::ClientReplicator  size: 106 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00502200
//
// 00502200  8b442404             mov eax, dword ptr [esp + 4]
// 00502204  8b4804               mov ecx, dword ptr [eax + 4]
// 00502207  49                   dec ecx
// 00502208  33d2                 xor edx, edx
// 0050220a  56                   push esi
// 0050220b  85c9                 test ecx, ecx
// 0050220d  7e14                 jle 0x502223
// 0050220f  8d4808               lea ecx, [eax + 8]
// 00502212  8b7104               mov esi, dword ptr [ecx + 4]
// 00502215  8931                 mov dword ptr [ecx], esi
// 00502217  8b7004               mov esi, dword ptr [eax + 4]
// 0050221a  42                   inc edx
// 0050221b  4e                   dec esi
// 0050221c  83c104               add ecx, 4
// 0050221f  3bd6                 cmp edx, esi
// 00502221  7cef                 jl 0x502212
// 00502223  33d2                 xor edx, edx
// 00502225  3810                 cmp byte ptr [eax], dl
// 00502227  7420                 je 0x502249
// 00502229  395004               cmp dword ptr [eax + 4], edx
// 0050222c  7e35                 jle 0x502263
// 0050222e  8d8888000000         lea ecx, [eax + 0x88]
// 00502234  8b7104               mov esi, dword ptr [ecx + 4]
// 00502237  8931                 mov dword ptr [ecx], esi
// 00502239  42                   inc edx
// 0050223a  83c104               add ecx, 4
// 0050223d  3b5004               cmp edx, dword ptr [eax + 4]
// 00502240  7cf2                 jl 0x502234
// 00502242  ff4804               dec dword ptr [eax + 4]
// 00502245  5e                   pop esi
// 00502246  c20400               ret 4
// 00502249  83780400             cmp dword ptr [eax + 4], 0
// 0050224d  7e14                 jle 0x502263
// 0050224f  8d8810010000         lea ecx, [eax + 0x110]
// 00502255  8b7104               mov esi, dword ptr [ecx + 4]
// 00502258  8931                 mov dword ptr [ecx], esi
// 0050225a  42                   inc edx
// 0050225b  83c104               add ecx, 4
// 0050225e  3b5004               cmp edx, dword ptr [eax + 4]
// 00502261  7cf2                 jl 0x502255
// 00502263  ff4804               dec dword ptr [eax + 4]
// 00502266  5e                   pop esi
// 00502267  c20400               ret 4
// library rbxgs-raknet/ReliabilityLayer.cpp (function ?ShiftNodeLeft@?$BPlusTree@IPAUInternalPacket@@$0CA@@DataStructures@@IAEXPAU?$Page@IPAUInternalPacket@@$0CA@@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet ReliabilityLayer.cpp
