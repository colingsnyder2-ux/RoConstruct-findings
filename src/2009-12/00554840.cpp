// roc 2009-12 00554840  unit: RBX::Network::ClientReplicator  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00554840
//
// 00554840  53                   push ebx
// 00554841  56                   push esi
// 00554842  57                   push edi
// 00554843  33db                 xor ebx, ebx
// 00554845  8d7168               lea esi, [ecx + 0x68]
// 00554848  8b3e                 mov edi, dword ptr [esi]
// 0055484a  8b5604               mov edx, dword ptr [esi + 4]
// 0055484d  3bfa                 cmp edi, edx
// 0055484f  7706                 ja 0x554857
// 00554851  2bd7                 sub edx, edi
// 00554853  8bc2                 mov eax, edx
// 00554855  eb07                 jmp 0x55485e
// 00554857  8b4608               mov eax, dword ptr [esi + 8]
// 0055485a  2bc7                 sub eax, edi
// 0055485c  03c2                 add eax, edx
// 0055485e  85c0                 test eax, eax
// 00554860  771b                 ja 0x55487d
// 00554862  43                   inc ebx
// 00554863  83c610               add esi, 0x10
// 00554866  83fb04               cmp ebx, 4
// 00554869  72dd                 jb 0x554848
// 0055486b  83792000             cmp dword ptr [ecx + 0x20], 0
// 0055486f  7712                 ja 0x554883
// 00554871  83794c00             cmp dword ptr [ecx + 0x4c], 0
// 00554875  750c                 jne 0x554883
// 00554877  5f                   pop edi
// 00554878  5e                   pop esi
// 00554879  33c0                 xor eax, eax
// 0055487b  5b                   pop ebx
// 0055487c  c3                   ret 
// 0055487d  5f                   pop edi
// 0055487e  5e                   pop esi
// 0055487f  b001                 mov al, 1
// 00554881  5b                   pop ebx
// 00554882  c3                   ret 
// 00554883  5f                   pop edi
// 00554884  5e                   pop esi
// 00554885  b801000000           mov eax, 1
// 0055488a  5b                   pop ebx
// 0055488b  c3                   ret 
// library rbxgs-raknet/ReliabilityLayer.cpp (function ?IsOutgoingDataWaiting@ReliabilityLayer@@QAE_NXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet ReliabilityLayer.cpp
