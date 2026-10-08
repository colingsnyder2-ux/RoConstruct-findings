// roc 2010-06 005032a0  unit: RBX::Network::ClientReplicator  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005032a0
//
// 005032a0  53                   push ebx
// 005032a1  56                   push esi
// 005032a2  57                   push edi
// 005032a3  33db                 xor ebx, ebx
// 005032a5  8d7168               lea esi, [ecx + 0x68]
// 005032a8  8b3e                 mov edi, dword ptr [esi]
// 005032aa  8b5604               mov edx, dword ptr [esi + 4]
// 005032ad  3bfa                 cmp edi, edx
// 005032af  7706                 ja 0x5032b7
// 005032b1  2bd7                 sub edx, edi
// 005032b3  8bc2                 mov eax, edx
// 005032b5  eb07                 jmp 0x5032be
// 005032b7  8b4608               mov eax, dword ptr [esi + 8]
// 005032ba  2bc7                 sub eax, edi
// 005032bc  03c2                 add eax, edx
// 005032be  85c0                 test eax, eax
// 005032c0  771b                 ja 0x5032dd
// 005032c2  43                   inc ebx
// 005032c3  83c610               add esi, 0x10
// 005032c6  83fb04               cmp ebx, 4
// 005032c9  72dd                 jb 0x5032a8
// 005032cb  83792000             cmp dword ptr [ecx + 0x20], 0
// 005032cf  7712                 ja 0x5032e3
// 005032d1  83794c00             cmp dword ptr [ecx + 0x4c], 0
// 005032d5  750c                 jne 0x5032e3
// 005032d7  5f                   pop edi
// 005032d8  5e                   pop esi
// 005032d9  33c0                 xor eax, eax
// 005032db  5b                   pop ebx
// 005032dc  c3                   ret 
// 005032dd  5f                   pop edi
// 005032de  5e                   pop esi
// 005032df  b001                 mov al, 1
// 005032e1  5b                   pop ebx
// 005032e2  c3                   ret 
// 005032e3  5f                   pop edi
// 005032e4  5e                   pop esi
// 005032e5  b801000000           mov eax, 1
// 005032ea  5b                   pop ebx
// 005032eb  c3                   ret 
// library rbxgs-raknet/ReliabilityLayer.cpp (function ?IsOutgoingDataWaiting@ReliabilityLayer@@QAE_NXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet ReliabilityLayer.cpp
