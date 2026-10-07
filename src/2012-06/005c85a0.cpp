// roc 2012-06 005c85a0  unit: RBX::AdornRbxGfx  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 005c85a0
//
// 005c85a0  8b442408             mov eax, dword ptr [esp + 8]
// 005c85a4  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005c85a8  3bc1                 cmp eax, ecx
// 005c85aa  7414                 je 0x5c85c0
// 005c85ac  2bc1                 sub eax, ecx
// 005c85ae  25ffffff00           and eax, 0xffffff
// 005c85b3  3dffff7f00           cmp eax, 0x7fffff
// 005c85b8  7306                 jae 0x5c85c0
// 005c85ba  b801000000           mov eax, 1
// 005c85bf  c3                   ret 
// 005c85c0  33c0                 xor eax, eax
// 005c85c2  c3                   ret 
// library rbx2016-raknet/CCRakNetSlidingWindow.cpp (function ?LessThan@CCRakNetSlidingWindow@RakNet@@SA_NUuint24_t@2@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet CCRakNetSlidingWindow.cpp
