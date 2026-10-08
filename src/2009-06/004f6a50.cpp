// roc 2009-06 004f6a50  unit: RBX::Network::ClientReplicator  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004f6a50
//
// 004f6a50  53                   push ebx
// 004f6a51  56                   push esi
// 004f6a52  57                   push edi
// 004f6a53  33db                 xor ebx, ebx
// 004f6a55  8d7168               lea esi, [ecx + 0x68]
// 004f6a58  8b3e                 mov edi, dword ptr [esi]
// 004f6a5a  8b5604               mov edx, dword ptr [esi + 4]
// 004f6a5d  3bfa                 cmp edi, edx
// 004f6a5f  7706                 ja 0x4f6a67
// 004f6a61  2bd7                 sub edx, edi
// 004f6a63  8bc2                 mov eax, edx
// 004f6a65  eb07                 jmp 0x4f6a6e
// 004f6a67  8b4608               mov eax, dword ptr [esi + 8]
// 004f6a6a  2bc7                 sub eax, edi
// 004f6a6c  03c2                 add eax, edx
// 004f6a6e  85c0                 test eax, eax
// 004f6a70  771b                 ja 0x4f6a8d
// 004f6a72  43                   inc ebx
// 004f6a73  83c610               add esi, 0x10
// 004f6a76  83fb04               cmp ebx, 4
// 004f6a79  72dd                 jb 0x4f6a58
// 004f6a7b  83792000             cmp dword ptr [ecx + 0x20], 0
// 004f6a7f  7712                 ja 0x4f6a93
// 004f6a81  83794c00             cmp dword ptr [ecx + 0x4c], 0
// 004f6a85  750c                 jne 0x4f6a93
// 004f6a87  5f                   pop edi
// 004f6a88  5e                   pop esi
// 004f6a89  33c0                 xor eax, eax
// 004f6a8b  5b                   pop ebx
// 004f6a8c  c3                   ret 
// 004f6a8d  5f                   pop edi
// 004f6a8e  5e                   pop esi
// 004f6a8f  b001                 mov al, 1
// 004f6a91  5b                   pop ebx
// 004f6a92  c3                   ret 
// 004f6a93  5f                   pop edi
// 004f6a94  5e                   pop esi
// 004f6a95  b801000000           mov eax, 1
// 004f6a9a  5b                   pop ebx
// 004f6a9b  c3                   ret 
// library rbxgs-raknet/ReliabilityLayer.cpp (function ?IsOutgoingDataWaiting@ReliabilityLayer@@QAE_NXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet ReliabilityLayer.cpp
