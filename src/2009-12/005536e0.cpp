// roc 2009-12 005536e0  unit: RBX::Network::ClientReplicator  size: 134 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005536e0
//
// 005536e0  53                   push ebx
// 005536e1  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 005536e5  55                   push ebp
// 005536e6  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 005536ea  56                   push esi
// 005536eb  57                   push edi
// 005536ec  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 005536f0  8b8c9f10010000       mov ecx, dword ptr [edi + ebx*4 + 0x110]
// 005536f7  8b849f0c010000       mov eax, dword ptr [edi + ebx*4 + 0x10c]
// 005536fe  8b7108               mov esi, dword ptr [ecx + 8]
// 00553701  897500               mov dword ptr [ebp], esi
// 00553704  8b7004               mov esi, dword ptr [eax + 4]
// 00553707  8b6908               mov ebp, dword ptr [ecx + 8]
// 0055370a  8d5108               lea edx, [ecx + 8]
// 0055370d  896cb008             mov dword ptr [eax + esi*4 + 8], ebp
// 00553711  8b7004               mov esi, dword ptr [eax + 4]
// 00553714  8ba988000000         mov ebp, dword ptr [ecx + 0x88]
// 0055371a  89acb088000000       mov dword ptr [eax + esi*4 + 0x88], ebp
// 00553721  ff4004               inc dword ptr [eax + 4]
// 00553724  8b4104               mov eax, dword ptr [ecx + 4]
// 00553727  48                   dec eax
// 00553728  33f6                 xor esi, esi
// 0055372a  85c0                 test eax, eax
// 0055372c  7e1f                 jle 0x55374d
// 0055372e  8bc2                 mov eax, edx
// 00553730  8b6804               mov ebp, dword ptr [eax + 4]
// 00553733  8928                 mov dword ptr [eax], ebp
// 00553735  8ba884000000         mov ebp, dword ptr [eax + 0x84]
// 0055373b  89a880000000         mov dword ptr [eax + 0x80], ebp
// 00553741  8b6904               mov ebp, dword ptr [ecx + 4]
// 00553744  46                   inc esi
// 00553745  4d                   dec ebp
// 00553746  83c004               add eax, 4
// 00553749  3bf5                 cmp esi, ebp
// 0055374b  7ce3                 jl 0x553730
// 0055374d  ff4904               dec dword ptr [ecx + 4]
// 00553750  8b0a                 mov ecx, dword ptr [edx]
// 00553752  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00553756  894c9f04             mov dword ptr [edi + ebx*4 + 4], ecx
// 0055375a  8b12                 mov edx, dword ptr [edx]
// 0055375c  5f                   pop edi
// 0055375d  5e                   pop esi
// 0055375e  5d                   pop ebp
// 0055375f  895004               mov dword ptr [eax + 4], edx
// 00553762  5b                   pop ebx
// 00553763  c20c00               ret 0xc
// library rbxgs-raknet/ReliabilityLayer.cpp (function ?RotateLeft@?$BPlusTree@IPAUInternalPacket@@$0CA@@DataStructures@@IAEXPAU?$Page@IPAUInternalPacket@@$0CA@@2@HPAUReturnAction@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet ReliabilityLayer.cpp
