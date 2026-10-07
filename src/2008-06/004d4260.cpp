// roc 2008-06 004d4260  unit: seg_004d0000  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004d4260
//
// 004d4260  a104279700           mov eax, dword ptr [0x972704]
// 004d4265  40                   inc eax
// 004d4266  a304279700           mov dword ptr [0x972704], eax
// 004d426b  83f801               cmp eax, 1
// 004d426e  7525                 jne 0x4d4295
// 004d4270  6a0c                 push 0xc
// 004d4272  e8a9c61c00           call 0x6a0920
// 004d4277  33c9                 xor ecx, ecx
// 004d4279  83c404               add esp, 4
// 004d427c  3bc1                 cmp eax, ecx
// 004d427e  740e                 je 0x4d428e
// 004d4280  894808               mov dword ptr [eax + 8], ecx
// 004d4283  8908                 mov dword ptr [eax], ecx
// 004d4285  894804               mov dword ptr [eax + 4], ecx
// 004d4288  a300279700           mov dword ptr [0x972700], eax
// 004d428d  c3                   ret 
// 004d428e  33c0                 xor eax, eax
// 004d4290  a300279700           mov dword ptr [0x972700], eax
// 004d4295  c3                   ret 
// library rbx2016-raknet/StringTable.cpp (function ?AddReference@StringTable@RakNet@@SAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet StringTable.cpp
