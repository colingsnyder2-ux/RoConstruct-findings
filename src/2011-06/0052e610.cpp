// roc 2011-06 0052e610  unit: RBX::Network::ProfiledRakPeer  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0052e610
//
// 0052e610  8b5104               mov edx, dword ptr [ecx + 4]
// 0052e613  56                   push esi
// 0052e614  8b710c               mov esi, dword ptr [ecx + 0xc]
// 0052e617  57                   push edi
// 0052e618  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0052e61c  8d043a               lea eax, [edx + edi]
// 0052e61f  3bc6                 cmp eax, esi
// 0052e621  720d                 jb 0x52e630
// 0052e623  8bc2                 mov eax, edx
// 0052e625  2bc6                 sub eax, esi
// 0052e627  0301                 add eax, dword ptr [ecx]
// 0052e629  03c7                 add eax, edi
// 0052e62b  5f                   pop edi
// 0052e62c  5e                   pop esi
// 0052e62d  c20400               ret 4
// 0052e630  8b01                 mov eax, dword ptr [ecx]
// 0052e632  03c2                 add eax, edx
// 0052e634  03c7                 add eax, edi
// 0052e636  5f                   pop edi
// 0052e637  5e                   pop esi
// 0052e638  c20400               ret 4
// library rbx2016-raknet/ReliabilityLayer.cpp (function ??A?$Queue@_N@DataStructures@@QBEAA_NI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet ReliabilityLayer.cpp
