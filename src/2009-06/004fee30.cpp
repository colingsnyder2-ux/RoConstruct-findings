// roc 2009-06 004fee30  unit: RakPeer  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004fee30
//
// 004fee30  56                   push esi
// 004fee31  8bf1                 mov esi, ecx
// 004fee33  8b06                 mov eax, dword ptr [esi]
// 004fee35  8b5020               mov edx, dword ptr [eax + 0x20]
// 004fee38  57                   push edi
// 004fee39  ffd2                 call edx
// 004fee3b  8bce                 mov ecx, esi
// 004fee3d  668bf8               mov di, ax
// 004fee40  e81bffffff           call 0x4fed60
// 004fee45  663bc7               cmp ax, di
// 004fee48  5f                   pop edi
// 004fee49  5e                   pop esi
// 004fee4a  1bc0                 sbb eax, eax
// 004fee4c  f7d8                 neg eax
// 004fee4e  c3                   ret 
// library rbx2016-raknet/RakPeer.cpp (function ?AllowIncomingConnections@RakPeer@RakNet@@IBE_NXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet RakPeer.cpp
