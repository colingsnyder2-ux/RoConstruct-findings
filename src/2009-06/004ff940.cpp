// roc 2009-06 004ff940  unit: RakPeer  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004ff940
//
// 004ff940  8b5104               mov edx, dword ptr [ecx + 4]
// 004ff943  8b442404             mov eax, dword ptr [esp + 4]
// 004ff947  3bc2                 cmp eax, edx
// 004ff949  731e                 jae 0x4ff969
// 004ff94b  4a                   dec edx
// 004ff94c  3bc2                 cmp eax, edx
// 004ff94e  7316                 jae 0x4ff966
// 004ff950  56                   push esi
// 004ff951  8b11                 mov edx, dword ptr [ecx]
// 004ff953  8b748204             mov esi, dword ptr [edx + eax*4 + 4]
// 004ff957  8d1482               lea edx, [edx + eax*4]
// 004ff95a  8932                 mov dword ptr [edx], esi
// 004ff95c  8b5104               mov edx, dword ptr [ecx + 4]
// 004ff95f  40                   inc eax
// 004ff960  4a                   dec edx
// 004ff961  3bc2                 cmp eax, edx
// 004ff963  72ec                 jb 0x4ff951
// 004ff965  5e                   pop esi
// 004ff966  ff4904               dec dword ptr [ecx + 4]
// 004ff969  c20400               ret 4
// library rbx2016-raknet/CloudServer.cpp (function ?RemoveAtIndex@?$List@PAVCloudServerQueryFilter@RakNet@@@DataStructures@@QAEXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet CloudServer.cpp
