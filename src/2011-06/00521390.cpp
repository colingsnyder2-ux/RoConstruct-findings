// roc 2011-06 00521390  unit: RBX::Network::ProfiledRakPeer  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00521390
//
// 00521390  8b5104               mov edx, dword ptr [ecx + 4]
// 00521393  8b442404             mov eax, dword ptr [esp + 4]
// 00521397  3bc2                 cmp eax, edx
// 00521399  731e                 jae 0x5213b9
// 0052139b  4a                   dec edx
// 0052139c  3bc2                 cmp eax, edx
// 0052139e  7316                 jae 0x5213b6
// 005213a0  56                   push esi
// 005213a1  8b11                 mov edx, dword ptr [ecx]
// 005213a3  8b748204             mov esi, dword ptr [edx + eax*4 + 4]
// 005213a7  8d1482               lea edx, [edx + eax*4]
// 005213aa  8932                 mov dword ptr [edx], esi
// 005213ac  8b5104               mov edx, dword ptr [ecx + 4]
// 005213af  40                   inc eax
// 005213b0  4a                   dec edx
// 005213b1  3bc2                 cmp eax, edx
// 005213b3  72ec                 jb 0x5213a1
// 005213b5  5e                   pop esi
// 005213b6  ff4904               dec dword ptr [ecx + 4]
// 005213b9  c20400               ret 4
// library rbx2016-raknet/CloudServer.cpp (function ?RemoveAtIndex@?$List@PAVCloudServerQueryFilter@RakNet@@@DataStructures@@QAEXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet CloudServer.cpp
