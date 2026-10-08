// roc 2010-06 00502050  unit: RBX::Network::ClientReplicator  size: 134 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00502050
//
// 00502050  53                   push ebx
// 00502051  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 00502055  55                   push ebp
// 00502056  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 0050205a  56                   push esi
// 0050205b  57                   push edi
// 0050205c  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 00502060  8b8c9f10010000       mov ecx, dword ptr [edi + ebx*4 + 0x110]
// 00502067  8b849f0c010000       mov eax, dword ptr [edi + ebx*4 + 0x10c]
// 0050206e  8b7108               mov esi, dword ptr [ecx + 8]
// 00502071  897500               mov dword ptr [ebp], esi
// 00502074  8b7004               mov esi, dword ptr [eax + 4]
// 00502077  8b6908               mov ebp, dword ptr [ecx + 8]
// 0050207a  8d5108               lea edx, [ecx + 8]
// 0050207d  896cb008             mov dword ptr [eax + esi*4 + 8], ebp
// 00502081  8b7004               mov esi, dword ptr [eax + 4]
// 00502084  8ba988000000         mov ebp, dword ptr [ecx + 0x88]
// 0050208a  89acb088000000       mov dword ptr [eax + esi*4 + 0x88], ebp
// 00502091  ff4004               inc dword ptr [eax + 4]
// 00502094  8b4104               mov eax, dword ptr [ecx + 4]
// 00502097  48                   dec eax
// 00502098  33f6                 xor esi, esi
// 0050209a  85c0                 test eax, eax
// 0050209c  7e1f                 jle 0x5020bd
// 0050209e  8bc2                 mov eax, edx
// 005020a0  8b6804               mov ebp, dword ptr [eax + 4]
// 005020a3  8928                 mov dword ptr [eax], ebp
// 005020a5  8ba884000000         mov ebp, dword ptr [eax + 0x84]
// 005020ab  89a880000000         mov dword ptr [eax + 0x80], ebp
// 005020b1  8b6904               mov ebp, dword ptr [ecx + 4]
// 005020b4  46                   inc esi
// 005020b5  4d                   dec ebp
// 005020b6  83c004               add eax, 4
// 005020b9  3bf5                 cmp esi, ebp
// 005020bb  7ce3                 jl 0x5020a0
// 005020bd  ff4904               dec dword ptr [ecx + 4]
// 005020c0  8b0a                 mov ecx, dword ptr [edx]
// 005020c2  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 005020c6  894c9f04             mov dword ptr [edi + ebx*4 + 4], ecx
// 005020ca  8b12                 mov edx, dword ptr [edx]
// 005020cc  5f                   pop edi
// 005020cd  5e                   pop esi
// 005020ce  5d                   pop ebp
// 005020cf  895004               mov dword ptr [eax + 4], edx
// 005020d2  5b                   pop ebx
// 005020d3  c20c00               ret 0xc
// library rbxgs-raknet/ReliabilityLayer.cpp (function ?RotateLeft@?$BPlusTree@IPAUInternalPacket@@$0CA@@DataStructures@@IAEXPAU?$Page@IPAUInternalPacket@@$0CA@@2@HPAUReturnAction@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet ReliabilityLayer.cpp
