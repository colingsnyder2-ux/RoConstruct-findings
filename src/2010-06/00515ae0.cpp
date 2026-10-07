// roc 2010-06 00515ae0  unit: RakPeer  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00515ae0
//
// 00515ae0  8b5104               mov edx, dword ptr [ecx + 4]
// 00515ae3  8b442404             mov eax, dword ptr [esp + 4]
// 00515ae7  3bc2                 cmp eax, edx
// 00515ae9  731e                 jae 0x515b09
// 00515aeb  4a                   dec edx
// 00515aec  3bc2                 cmp eax, edx
// 00515aee  7316                 jae 0x515b06
// 00515af0  56                   push esi
// 00515af1  8b11                 mov edx, dword ptr [ecx]
// 00515af3  8b748204             mov esi, dword ptr [edx + eax*4 + 4]
// 00515af7  8d1482               lea edx, [edx + eax*4]
// 00515afa  8932                 mov dword ptr [edx], esi
// 00515afc  8b5104               mov edx, dword ptr [ecx + 4]
// 00515aff  40                   inc eax
// 00515b00  4a                   dec edx
// 00515b01  3bc2                 cmp eax, edx
// 00515b03  72ec                 jb 0x515af1
// 00515b05  5e                   pop esi
// 00515b06  ff4904               dec dword ptr [ecx + 4]
// 00515b09  c20400               ret 4
// library rbx2016-raknet/CloudServer.cpp (function ?RemoveAtIndex@?$List@PAVCloudServerQueryFilter@RakNet@@@DataStructures@@QAEXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet CloudServer.cpp
