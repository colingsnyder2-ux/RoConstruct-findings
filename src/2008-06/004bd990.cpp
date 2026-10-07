// roc 2008-06 004bd990  unit: ProfiledRakPeer  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004bd990
//
// 004bd990  8b5104               mov edx, dword ptr [ecx + 4]
// 004bd993  8b442404             mov eax, dword ptr [esp + 4]
// 004bd997  3bc2                 cmp eax, edx
// 004bd999  731e                 jae 0x4bd9b9
// 004bd99b  4a                   dec edx
// 004bd99c  3bc2                 cmp eax, edx
// 004bd99e  7316                 jae 0x4bd9b6
// 004bd9a0  56                   push esi
// 004bd9a1  8b11                 mov edx, dword ptr [ecx]
// 004bd9a3  8b748204             mov esi, dword ptr [edx + eax*4 + 4]
// 004bd9a7  8d1482               lea edx, [edx + eax*4]
// 004bd9aa  8932                 mov dword ptr [edx], esi
// 004bd9ac  8b5104               mov edx, dword ptr [ecx + 4]
// 004bd9af  40                   inc eax
// 004bd9b0  4a                   dec edx
// 004bd9b1  3bc2                 cmp eax, edx
// 004bd9b3  72ec                 jb 0x4bd9a1
// 004bd9b5  5e                   pop esi
// 004bd9b6  ff4904               dec dword ptr [ecx + 4]
// 004bd9b9  c20400               ret 4
// library rbx2016-raknet/CloudServer.cpp (function ?RemoveAtIndex@?$List@PAVCloudServerQueryFilter@RakNet@@@DataStructures@@QAEXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet CloudServer.cpp
