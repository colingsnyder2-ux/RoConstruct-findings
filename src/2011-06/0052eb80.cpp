// roc 2011-06 0052eb80  unit: RBX::Network::ProfiledRakPeer  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0052eb80
//
// 0052eb80  8b442408             mov eax, dword ptr [esp + 8]
// 0052eb84  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0052eb88  3dffff7f00           cmp eax, 0x7fffff
// 0052eb8d  7619                 jbe 0x52eba8
// 0052eb8f  8d90020080ff         lea edx, [eax - 0x7ffffe]
// 0052eb95  81e2ffffff00         and edx, 0xffffff
// 0052eb9b  3bca                 cmp ecx, edx
// 0052eb9d  721d                 jb 0x52ebbc
// 0052eb9f  3bc8                 cmp ecx, eax
// 0052eba1  7319                 jae 0x52ebbc
// 0052eba3  b001                 mov al, 1
// 0052eba5  c20800               ret 8
// 0052eba8  8d90000080ff         lea edx, [eax - 0x800000]
// 0052ebae  81e2ffffff00         and edx, 0xffffff
// 0052ebb4  3bca                 cmp ecx, edx
// 0052ebb6  73eb                 jae 0x52eba3
// 0052ebb8  3bc8                 cmp ecx, eax
// 0052ebba  72e7                 jb 0x52eba3
// 0052ebbc  32c0                 xor al, al
// 0052ebbe  c20800               ret 8
// library rbx2016-raknet/ReliabilityLayer.cpp (function ?IsOlderOrderedPacket@ReliabilityLayer@RakNet@@AAE_NUuint24_t@2@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet ReliabilityLayer.cpp
