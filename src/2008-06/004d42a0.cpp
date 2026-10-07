// roc 2008-06 004d42a0  unit: seg_004d0000  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004d42a0
//
// 004d42a0  833d0427970000       cmp dword ptr [0x972704], 0
// 004d42a7  7e2f                 jle 0x4d42d8
// 004d42a9  832d0427970001       sub dword ptr [0x972704], 1
// 004d42b0  7526                 jne 0x4d42d8
// 004d42b2  8b0d00279700         mov ecx, dword ptr [0x972700]
// 004d42b8  56                   push esi
// 004d42b9  8bf1                 mov esi, ecx
// 004d42bb  85c9                 test ecx, ecx
// 004d42bd  740e                 je 0x4d42cd
// 004d42bf  e82cffffff           call 0x4d41f0
// 004d42c4  56                   push esi
// 004d42c5  e8b0c31c00           call 0x6a067a
// 004d42ca  83c404               add esp, 4
// 004d42cd  c7050027970000000000 mov dword ptr [0x972700], 0
// 004d42d7  5e                   pop esi
// 004d42d8  c3                   ret 
// library rbx2016-raknet/StringCompressor.cpp (function ?RemoveReference@StringCompressor@RakNet@@SAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet StringCompressor.cpp
