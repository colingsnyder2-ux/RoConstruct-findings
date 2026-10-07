// roc 2010-06 00514f30  unit: RakPeer  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00514f30
//
// 00514f30  56                   push esi
// 00514f31  8bf1                 mov esi, ecx
// 00514f33  8b06                 mov eax, dword ptr [esi]
// 00514f35  8b5020               mov edx, dword ptr [eax + 0x20]
// 00514f38  57                   push edi
// 00514f39  ffd2                 call edx
// 00514f3b  8bce                 mov ecx, esi
// 00514f3d  668bf8               mov di, ax
// 00514f40  e81bffffff           call 0x514e60
// 00514f45  663bc7               cmp ax, di
// 00514f48  5f                   pop edi
// 00514f49  5e                   pop esi
// 00514f4a  1bc0                 sbb eax, eax
// 00514f4c  f7d8                 neg eax
// 00514f4e  c3                   ret 
// library rbx2016-raknet/RakPeer.cpp (function ?AllowIncomingConnections@RakPeer@RakNet@@IBE_NXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet RakPeer.cpp
