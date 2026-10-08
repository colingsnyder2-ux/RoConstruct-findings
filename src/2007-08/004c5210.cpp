// roc 2007-08 004c5210  unit: RakPeer  size: 149 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004c5210
//
// 004c5210  8b442408             mov eax, dword ptr [esp + 8]
// 004c5214  8b4804               mov ecx, dword ptr [eax + 4]
// 004c5217  8b542404             mov edx, dword ptr [esp + 4]
// 004c521b  83e901               sub ecx, 1
// 004c521e  3bd1                 cmp edx, ecx
// 004c5220  56                   push esi
// 004c5221  8bf2                 mov esi, edx
// 004c5223  7d21                 jge 0x4c5246
// 004c5225  8d4c9008             lea ecx, [eax + edx*4 + 8]
// 004c5229  57                   push edi
// 004c522a  8d9b00000000         lea ebx, [ebx]
// 004c5230  8b7904               mov edi, dword ptr [ecx + 4]
// 004c5233  8939                 mov dword ptr [ecx], edi
// 004c5235  8b7804               mov edi, dword ptr [eax + 4]
// 004c5238  83c601               add esi, 1
// 004c523b  83ef01               sub edi, 1
// 004c523e  83c104               add ecx, 4
// 004c5241  3bf7                 cmp esi, edi
// 004c5243  7ceb                 jl 0x4c5230
// 004c5245  5f                   pop edi
// 004c5246  8b4804               mov ecx, dword ptr [eax + 4]
// 004c5249  83e901               sub ecx, 1
// 004c524c  803800               cmp byte ptr [eax], 0
// 004c524f  742c                 je 0x4c527d
// 004c5251  3bd1                 cmp edx, ecx
// 004c5253  7d48                 jge 0x4c529d
// 004c5255  8d8c9088000000       lea ecx, [eax + edx*4 + 0x88]
// 004c525c  8d642400             lea esp, [esp]
// 004c5260  8b7104               mov esi, dword ptr [ecx + 4]
// 004c5263  8931                 mov dword ptr [ecx], esi
// 004c5265  8b7004               mov esi, dword ptr [eax + 4]
// 004c5268  83c201               add edx, 1
// 004c526b  83ee01               sub esi, 1
// 004c526e  83c104               add ecx, 4
// 004c5271  3bd6                 cmp edx, esi
// 004c5273  7ceb                 jl 0x4c5260
// 004c5275  834004ff             add dword ptr [eax + 4], -1
// 004c5279  5e                   pop esi
// 004c527a  c20800               ret 8
// 004c527d  3bd1                 cmp edx, ecx
// 004c527f  7d1c                 jge 0x4c529d
// 004c5281  8d8c9014010000       lea ecx, [eax + edx*4 + 0x114]
// 004c5288  8b7104               mov esi, dword ptr [ecx + 4]
// 004c528b  8931                 mov dword ptr [ecx], esi
// 004c528d  8b7004               mov esi, dword ptr [eax + 4]
// 004c5290  83c201               add edx, 1
// 004c5293  83ee01               sub esi, 1
// 004c5296  83c104               add ecx, 4
// 004c5299  3bd6                 cmp edx, esi
// 004c529b  7ceb                 jl 0x4c5288
// 004c529d  834004ff             add dword ptr [eax + 4], -1
// 004c52a1  5e                   pop esi
// 004c52a2  c20800               ret 8
// library rbxgs-raknet/ReliabilityLayer.cpp (function ?DeleteFromPageAtIndex@?$BPlusTree@IPAUInternalPacket@@$0CA@@DataStructures@@IAEXHPAU?$Page@IPAUInternalPacket@@$0CA@@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet ReliabilityLayer.cpp
