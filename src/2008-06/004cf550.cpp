// roc 2008-06 004cf550  unit: RBX::Network::PhysicsSender  size: 126 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004cf550
//
// 004cf550  8b54240c             mov edx, dword ptr [esp + 0xc]
// 004cf554  53                   push ebx
// 004cf555  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 004cf559  56                   push esi
// 004cf55a  57                   push edi
// 004cf55b  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 004cf55f  8b849f14010000       mov eax, dword ptr [edi + ebx*4 + 0x114]
// 004cf566  8b4808               mov ecx, dword ptr [eax + 8]
// 004cf569  8bb49f10010000       mov esi, dword ptr [edi + ebx*4 + 0x110]
// 004cf570  890a                 mov dword ptr [edx], ecx
// 004cf572  8b5004               mov edx, dword ptr [eax + 4]
// 004cf575  85d2                 test edx, edx
// 004cf577  7e1e                 jle 0x4cf597
// 004cf579  8d4c9008             lea ecx, [eax + edx*4 + 8]
// 004cf57d  55                   push ebp
// 004cf57e  8bff                 mov edi, edi
// 004cf580  8b69fc               mov ebp, dword ptr [ecx - 4]
// 004cf583  8929                 mov dword ptr [ecx], ebp
// 004cf585  8b697c               mov ebp, dword ptr [ecx + 0x7c]
// 004cf588  89a980000000         mov dword ptr [ecx + 0x80], ebp
// 004cf58e  4a                   dec edx
// 004cf58f  83e904               sub ecx, 4
// 004cf592  85d2                 test edx, edx
// 004cf594  7fea                 jg 0x4cf580
// 004cf596  5d                   pop ebp
// 004cf597  8b4e04               mov ecx, dword ptr [esi + 4]
// 004cf59a  8b548e04             mov edx, dword ptr [esi + ecx*4 + 4]
// 004cf59e  895008               mov dword ptr [eax + 8], edx
// 004cf5a1  8b4e04               mov ecx, dword ptr [esi + 4]
// 004cf5a4  8b948e84000000       mov edx, dword ptr [esi + ecx*4 + 0x84]
// 004cf5ab  ff4004               inc dword ptr [eax + 4]
// 004cf5ae  899088000000         mov dword ptr [eax + 0x88], edx
// 004cf5b4  ff4e04               dec dword ptr [esi + 4]
// 004cf5b7  8b4808               mov ecx, dword ptr [eax + 8]
// 004cf5ba  894c9f08             mov dword ptr [edi + ebx*4 + 8], ecx
// 004cf5be  8b5008               mov edx, dword ptr [eax + 8]
// 004cf5c1  8b442418             mov eax, dword ptr [esp + 0x18]
// 004cf5c5  5f                   pop edi
// 004cf5c6  5e                   pop esi
// 004cf5c7  895004               mov dword ptr [eax + 4], edx
// 004cf5ca  5b                   pop ebx
// 004cf5cb  c20c00               ret 0xc
// library rbxgs-raknet/ReliabilityLayer.cpp (function ?RotateRight@?$BPlusTree@IPAUInternalPacket@@$0CA@@DataStructures@@IAEXPAU?$Page@IPAUInternalPacket@@$0CA@@2@HPAUReturnAction@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet ReliabilityLayer.cpp
