// roc 2011-06 00537110  unit: CSHA1  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00537110
//
// 00537110  8b442408             mov eax, dword ptr [esp + 8]
// 00537114  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00537118  3bc1                 cmp eax, ecx
// 0053711a  7414                 je 0x537130
// 0053711c  2bc1                 sub eax, ecx
// 0053711e  25ffffff00           and eax, 0xffffff
// 00537123  3dffff7f00           cmp eax, 0x7fffff
// 00537128  7306                 jae 0x537130
// 0053712a  b801000000           mov eax, 1
// 0053712f  c3                   ret 
// 00537130  33c0                 xor eax, eax
// 00537132  c3                   ret 
// library rbx2016-raknet/CCRakNetSlidingWindow.cpp (function ?LessThan@CCRakNetSlidingWindow@RakNet@@SA_NUuint24_t@2@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet CCRakNetSlidingWindow.cpp
