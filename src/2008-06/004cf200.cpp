// roc 2008-06 004cf200  unit: RBX::Network::PhysicsSender  size: 123 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004cf200
//
// 004cf200  8b442408             mov eax, dword ptr [esp + 8]
// 004cf204  8b4804               mov ecx, dword ptr [eax + 4]
// 004cf207  8b542404             mov edx, dword ptr [esp + 4]
// 004cf20b  49                   dec ecx
// 004cf20c  3bd1                 cmp edx, ecx
// 004cf20e  56                   push esi
// 004cf20f  8bf2                 mov esi, edx
// 004cf211  7d17                 jge 0x4cf22a
// 004cf213  8d4c9008             lea ecx, [eax + edx*4 + 8]
// 004cf217  57                   push edi
// 004cf218  8b7904               mov edi, dword ptr [ecx + 4]
// 004cf21b  8939                 mov dword ptr [ecx], edi
// 004cf21d  8b7804               mov edi, dword ptr [eax + 4]
// 004cf220  46                   inc esi
// 004cf221  4f                   dec edi
// 004cf222  83c104               add ecx, 4
// 004cf225  3bf7                 cmp esi, edi
// 004cf227  7cef                 jl 0x4cf218
// 004cf229  5f                   pop edi
// 004cf22a  8b4804               mov ecx, dword ptr [eax + 4]
// 004cf22d  49                   dec ecx
// 004cf22e  803800               cmp byte ptr [eax], 0
// 004cf231  7425                 je 0x4cf258
// 004cf233  3bd1                 cmp edx, ecx
// 004cf235  7d3d                 jge 0x4cf274
// 004cf237  8d8c9088000000       lea ecx, [eax + edx*4 + 0x88]
// 004cf23e  8bff                 mov edi, edi
// 004cf240  8b7104               mov esi, dword ptr [ecx + 4]
// 004cf243  8931                 mov dword ptr [ecx], esi
// 004cf245  8b7004               mov esi, dword ptr [eax + 4]
// 004cf248  42                   inc edx
// 004cf249  4e                   dec esi
// 004cf24a  83c104               add ecx, 4
// 004cf24d  3bd6                 cmp edx, esi
// 004cf24f  7cef                 jl 0x4cf240
// 004cf251  ff4804               dec dword ptr [eax + 4]
// 004cf254  5e                   pop esi
// 004cf255  c20800               ret 8
// 004cf258  3bd1                 cmp edx, ecx
// 004cf25a  7d18                 jge 0x4cf274
// 004cf25c  8d8c9014010000       lea ecx, [eax + edx*4 + 0x114]
// 004cf263  8b7104               mov esi, dword ptr [ecx + 4]
// 004cf266  8931                 mov dword ptr [ecx], esi
// 004cf268  8b7004               mov esi, dword ptr [eax + 4]
// 004cf26b  42                   inc edx
// 004cf26c  4e                   dec esi
// 004cf26d  83c104               add ecx, 4
// 004cf270  3bd6                 cmp edx, esi
// 004cf272  7cef                 jl 0x4cf263
// 004cf274  ff4804               dec dword ptr [eax + 4]
// 004cf277  5e                   pop esi
// 004cf278  c20800               ret 8
// library rbxgs-raknet/ReliabilityLayer.cpp (function ?DeleteFromPageAtIndex@?$BPlusTree@IPAUInternalPacket@@$0CA@@DataStructures@@IAEXHPAU?$Page@IPAUInternalPacket@@$0CA@@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet ReliabilityLayer.cpp
