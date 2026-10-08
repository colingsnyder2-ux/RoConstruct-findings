// roc 2009-06 004f57b0  unit: RBX::Network::ClientReplicator  size: 126 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004f57b0
//
// 004f57b0  8b54240c             mov edx, dword ptr [esp + 0xc]
// 004f57b4  53                   push ebx
// 004f57b5  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 004f57b9  56                   push esi
// 004f57ba  57                   push edi
// 004f57bb  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 004f57bf  8b849f14010000       mov eax, dword ptr [edi + ebx*4 + 0x114]
// 004f57c6  8b4808               mov ecx, dword ptr [eax + 8]
// 004f57c9  8bb49f10010000       mov esi, dword ptr [edi + ebx*4 + 0x110]
// 004f57d0  890a                 mov dword ptr [edx], ecx
// 004f57d2  8b5004               mov edx, dword ptr [eax + 4]
// 004f57d5  85d2                 test edx, edx
// 004f57d7  7e1e                 jle 0x4f57f7
// 004f57d9  8d4c9008             lea ecx, [eax + edx*4 + 8]
// 004f57dd  55                   push ebp
// 004f57de  8bff                 mov edi, edi
// 004f57e0  8b69fc               mov ebp, dword ptr [ecx - 4]
// 004f57e3  8929                 mov dword ptr [ecx], ebp
// 004f57e5  8b697c               mov ebp, dword ptr [ecx + 0x7c]
// 004f57e8  89a980000000         mov dword ptr [ecx + 0x80], ebp
// 004f57ee  4a                   dec edx
// 004f57ef  83e904               sub ecx, 4
// 004f57f2  85d2                 test edx, edx
// 004f57f4  7fea                 jg 0x4f57e0
// 004f57f6  5d                   pop ebp
// 004f57f7  8b4e04               mov ecx, dword ptr [esi + 4]
// 004f57fa  8b548e04             mov edx, dword ptr [esi + ecx*4 + 4]
// 004f57fe  895008               mov dword ptr [eax + 8], edx
// 004f5801  8b4e04               mov ecx, dword ptr [esi + 4]
// 004f5804  8b948e84000000       mov edx, dword ptr [esi + ecx*4 + 0x84]
// 004f580b  ff4004               inc dword ptr [eax + 4]
// 004f580e  899088000000         mov dword ptr [eax + 0x88], edx
// 004f5814  ff4e04               dec dword ptr [esi + 4]
// 004f5817  8b4808               mov ecx, dword ptr [eax + 8]
// 004f581a  894c9f08             mov dword ptr [edi + ebx*4 + 8], ecx
// 004f581e  8b5008               mov edx, dword ptr [eax + 8]
// 004f5821  8b442418             mov eax, dword ptr [esp + 0x18]
// 004f5825  5f                   pop edi
// 004f5826  5e                   pop esi
// 004f5827  895004               mov dword ptr [eax + 4], edx
// 004f582a  5b                   pop ebx
// 004f582b  c20c00               ret 0xc
// library rbxgs-raknet/ReliabilityLayer.cpp (function ?RotateRight@?$BPlusTree@IPAUInternalPacket@@$0CA@@DataStructures@@IAEXPAU?$Page@IPAUInternalPacket@@$0CA@@2@HPAUReturnAction@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet ReliabilityLayer.cpp
