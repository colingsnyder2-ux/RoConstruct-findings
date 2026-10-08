// roc 2010-06 00501fd0  unit: RBX::Network::ClientReplicator  size: 126 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00501fd0
//
// 00501fd0  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00501fd4  53                   push ebx
// 00501fd5  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 00501fd9  56                   push esi
// 00501fda  57                   push edi
// 00501fdb  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00501fdf  8b849f14010000       mov eax, dword ptr [edi + ebx*4 + 0x114]
// 00501fe6  8b4808               mov ecx, dword ptr [eax + 8]
// 00501fe9  8bb49f10010000       mov esi, dword ptr [edi + ebx*4 + 0x110]
// 00501ff0  890a                 mov dword ptr [edx], ecx
// 00501ff2  8b5004               mov edx, dword ptr [eax + 4]
// 00501ff5  85d2                 test edx, edx
// 00501ff7  7e1e                 jle 0x502017
// 00501ff9  8d4c9008             lea ecx, [eax + edx*4 + 8]
// 00501ffd  55                   push ebp
// 00501ffe  8bff                 mov edi, edi
// 00502000  8b69fc               mov ebp, dword ptr [ecx - 4]
// 00502003  8929                 mov dword ptr [ecx], ebp
// 00502005  8b697c               mov ebp, dword ptr [ecx + 0x7c]
// 00502008  89a980000000         mov dword ptr [ecx + 0x80], ebp
// 0050200e  4a                   dec edx
// 0050200f  83e904               sub ecx, 4
// 00502012  85d2                 test edx, edx
// 00502014  7fea                 jg 0x502000
// 00502016  5d                   pop ebp
// 00502017  8b4e04               mov ecx, dword ptr [esi + 4]
// 0050201a  8b548e04             mov edx, dword ptr [esi + ecx*4 + 4]
// 0050201e  895008               mov dword ptr [eax + 8], edx
// 00502021  8b4e04               mov ecx, dword ptr [esi + 4]
// 00502024  8b948e84000000       mov edx, dword ptr [esi + ecx*4 + 0x84]
// 0050202b  ff4004               inc dword ptr [eax + 4]
// 0050202e  899088000000         mov dword ptr [eax + 0x88], edx
// 00502034  ff4e04               dec dword ptr [esi + 4]
// 00502037  8b4808               mov ecx, dword ptr [eax + 8]
// 0050203a  894c9f08             mov dword ptr [edi + ebx*4 + 8], ecx
// 0050203e  8b5008               mov edx, dword ptr [eax + 8]
// 00502041  8b442418             mov eax, dword ptr [esp + 0x18]
// 00502045  5f                   pop edi
// 00502046  5e                   pop esi
// 00502047  895004               mov dword ptr [eax + 4], edx
// 0050204a  5b                   pop ebx
// 0050204b  c20c00               ret 0xc
// library rbxgs-raknet/ReliabilityLayer.cpp (function ?RotateRight@?$BPlusTree@IPAUInternalPacket@@$0CA@@DataStructures@@IAEXPAU?$Page@IPAUInternalPacket@@$0CA@@2@HPAUReturnAction@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet ReliabilityLayer.cpp
