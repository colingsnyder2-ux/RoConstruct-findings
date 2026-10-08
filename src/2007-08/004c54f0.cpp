// roc 2007-08 004c54f0  unit: RakPeer  size: 130 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004c54f0
//
// 004c54f0  8b54240c             mov edx, dword ptr [esp + 0xc]
// 004c54f4  53                   push ebx
// 004c54f5  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 004c54f9  56                   push esi
// 004c54fa  57                   push edi
// 004c54fb  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 004c54ff  8b849f14010000       mov eax, dword ptr [edi + ebx*4 + 0x114]
// 004c5506  8b4808               mov ecx, dword ptr [eax + 8]
// 004c5509  8bb49f10010000       mov esi, dword ptr [edi + ebx*4 + 0x110]
// 004c5510  890a                 mov dword ptr [edx], ecx
// 004c5512  8b5004               mov edx, dword ptr [eax + 4]
// 004c5515  85d2                 test edx, edx
// 004c5517  7e20                 jle 0x4c5539
// 004c5519  8d4c9008             lea ecx, [eax + edx*4 + 8]
// 004c551d  55                   push ebp
// 004c551e  8bff                 mov edi, edi
// 004c5520  8b69fc               mov ebp, dword ptr [ecx - 4]
// 004c5523  8929                 mov dword ptr [ecx], ebp
// 004c5525  8b697c               mov ebp, dword ptr [ecx + 0x7c]
// 004c5528  89a980000000         mov dword ptr [ecx + 0x80], ebp
// 004c552e  83ea01               sub edx, 1
// 004c5531  83e904               sub ecx, 4
// 004c5534  85d2                 test edx, edx
// 004c5536  7fe8                 jg 0x4c5520
// 004c5538  5d                   pop ebp
// 004c5539  8b4e04               mov ecx, dword ptr [esi + 4]
// 004c553c  8b548e04             mov edx, dword ptr [esi + ecx*4 + 4]
// 004c5540  895008               mov dword ptr [eax + 8], edx
// 004c5543  8b4e04               mov ecx, dword ptr [esi + 4]
// 004c5546  8b948e84000000       mov edx, dword ptr [esi + ecx*4 + 0x84]
// 004c554d  83400401             add dword ptr [eax + 4], 1
// 004c5551  899088000000         mov dword ptr [eax + 0x88], edx
// 004c5557  834604ff             add dword ptr [esi + 4], -1
// 004c555b  8b4808               mov ecx, dword ptr [eax + 8]
// 004c555e  894c9f08             mov dword ptr [edi + ebx*4 + 8], ecx
// 004c5562  8b5008               mov edx, dword ptr [eax + 8]
// 004c5565  8b442418             mov eax, dword ptr [esp + 0x18]
// 004c5569  5f                   pop edi
// 004c556a  5e                   pop esi
// 004c556b  895004               mov dword ptr [eax + 4], edx
// 004c556e  5b                   pop ebx
// 004c556f  c20c00               ret 0xc
// library rbxgs-raknet/ReliabilityLayer.cpp (function ?RotateRight@?$BPlusTree@IPAUInternalPacket@@$0CA@@DataStructures@@IAEXPAU?$Page@IPAUInternalPacket@@$0CA@@2@HPAUReturnAction@12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet ReliabilityLayer.cpp
