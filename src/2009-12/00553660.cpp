// roc 2009-12 00553660  unit: RBX::Network::ClientReplicator  size: 126 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00553660
//
// 00553660  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00553664  53                   push ebx
// 00553665  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 00553669  56                   push esi
// 0055366a  57                   push edi
// 0055366b  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0055366f  8b849f14010000       mov eax, dword ptr [edi + ebx*4 + 0x114]
// 00553676  8b4808               mov ecx, dword ptr [eax + 8]
// 00553679  8bb49f10010000       mov esi, dword ptr [edi + ebx*4 + 0x110]
// 00553680  890a                 mov dword ptr [edx], ecx
// 00553682  8b5004               mov edx, dword ptr [eax + 4]
// 00553685  85d2                 test edx, edx
// 00553687  7e1e                 jle 0x5536a7
// 00553689  8d4c9008             lea ecx, [eax + edx*4 + 8]
// 0055368d  55                   push ebp
// 0055368e  8bff                 mov edi, edi
// 00553690  8b69fc               mov ebp, dword ptr [ecx - 4]
// 00553693  8929                 mov dword ptr [ecx], ebp
// 00553695  8b697c               mov ebp, dword ptr [ecx + 0x7c]
// 00553698  89a980000000         mov dword ptr [ecx + 0x80], ebp
// 0055369e  4a                   dec edx
// 0055369f  83e904               sub ecx, 4
// 005536a2  85d2                 test edx, edx
// 005536a4  7fea                 jg 0x553690
// 005536a6  5d                   pop ebp
// 005536a7  8b4e04               mov ecx, dword ptr [esi + 4]
// 005536aa  8b548e04             mov edx, dword ptr [esi + ecx*4 + 4]
// 005536ae  895008               mov dword ptr [eax + 8], edx
// 005536b1  8b4e04               mov ecx, dword ptr [esi + 4]
// 005536b4  8b948e84000000       mov edx, dword ptr [esi + ecx*4 + 0x84]
// 005536bb  ff4004               inc dword ptr [eax + 4]
// 005536be  899088000000         mov dword ptr [eax + 0x88], edx
// 005536c4  ff4e04               dec dword ptr [esi + 4]
// 005536c7  8b4808               mov ecx, dword ptr [eax + 8]
// 005536ca  894c9f08             mov dword ptr [edi + ebx*4 + 8], ecx
// 005536ce  8b5008               mov edx, dword ptr [eax + 8]
// 005536d1  8b442418             mov eax, dword ptr [esp + 0x18]
// 005536d5  5f                   pop edi
// 005536d6  5e                   pop esi
// 005536d7  895004               mov dword ptr [eax + 4], edx
// 005536da  5b                   pop ebx
// 005536db  c20c00               ret 0xc
// library rbxgs-raknet/ReliabilityLayer.cpp (function ?RotateRight@?$BPlusTree@IPAUInternalPacket@@$0CA@@DataStructures@@IAEXPAU?$Page@IPAUInternalPacket@@$0CA@@2@HPAUReturnAction@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet ReliabilityLayer.cpp
