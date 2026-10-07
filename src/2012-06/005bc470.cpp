// roc 2012-06 005bc470  unit: RakNet::RakPeer  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 005bc470
//
// 005bc470  8b5104               mov edx, dword ptr [ecx + 4]
// 005bc473  8b442404             mov eax, dword ptr [esp + 4]
// 005bc477  3bc2                 cmp eax, edx
// 005bc479  731e                 jae 0x5bc499
// 005bc47b  4a                   dec edx
// 005bc47c  3bc2                 cmp eax, edx
// 005bc47e  7316                 jae 0x5bc496
// 005bc480  56                   push esi
// 005bc481  8b11                 mov edx, dword ptr [ecx]
// 005bc483  8b748204             mov esi, dword ptr [edx + eax*4 + 4]
// 005bc487  8d1482               lea edx, [edx + eax*4]
// 005bc48a  8932                 mov dword ptr [edx], esi
// 005bc48c  8b5104               mov edx, dword ptr [ecx + 4]
// 005bc48f  40                   inc eax
// 005bc490  4a                   dec edx
// 005bc491  3bc2                 cmp eax, edx
// 005bc493  72ec                 jb 0x5bc481
// 005bc495  5e                   pop esi
// 005bc496  ff4904               dec dword ptr [ecx + 4]
// 005bc499  c20400               ret 4
// library rbx2016-raknet/CloudServer.cpp (function ?RemoveAtIndex@?$List@PAVCloudServerQueryFilter@RakNet@@@DataStructures@@QAEXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet CloudServer.cpp
