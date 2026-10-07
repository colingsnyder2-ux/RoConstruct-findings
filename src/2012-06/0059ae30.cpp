// roc 2012-06 0059ae30  unit: VAuthoringSettings::?$FactoryProduct  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0059ae30
//
// 0059ae30  8b442408             mov eax, dword ptr [esp + 8]
// 0059ae34  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0059ae38  3dffff7f00           cmp eax, 0x7fffff
// 0059ae3d  7619                 jbe 0x59ae58
// 0059ae3f  8d90020080ff         lea edx, [eax - 0x7ffffe]
// 0059ae45  81e2ffffff00         and edx, 0xffffff
// 0059ae4b  3bca                 cmp ecx, edx
// 0059ae4d  721d                 jb 0x59ae6c
// 0059ae4f  3bc8                 cmp ecx, eax
// 0059ae51  7319                 jae 0x59ae6c
// 0059ae53  b001                 mov al, 1
// 0059ae55  c20800               ret 8
// 0059ae58  8d90000080ff         lea edx, [eax - 0x800000]
// 0059ae5e  81e2ffffff00         and edx, 0xffffff
// 0059ae64  3bca                 cmp ecx, edx
// 0059ae66  73eb                 jae 0x59ae53
// 0059ae68  3bc8                 cmp ecx, eax
// 0059ae6a  72e7                 jb 0x59ae53
// 0059ae6c  32c0                 xor al, al
// 0059ae6e  c20800               ret 8
// library rbx2016-raknet/ReliabilityLayer.cpp (function ?IsOlderOrderedPacket@ReliabilityLayer@RakNet@@AAE_NUuint24_t@2@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet ReliabilityLayer.cpp
