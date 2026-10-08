// roc 2007-03 004bf030  unit: seg_004b0000  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004bf030
//
// 004bf030  833d909e8b0000       cmp dword ptr [0x8b9e90], 0
// 004bf037  7e2f                 jle 0x4bf068
// 004bf039  832d909e8b0001       sub dword ptr [0x8b9e90], 1
// 004bf040  7526                 jne 0x4bf068
// 004bf042  8b0d8c9e8b00         mov ecx, dword ptr [0x8b9e8c]
// 004bf048  85c9                 test ecx, ecx
// 004bf04a  56                   push esi
// 004bf04b  8bf1                 mov esi, ecx
// 004bf04d  740e                 je 0x4bf05d
// 004bf04f  e82cffffff           call 0x4bef80
// 004bf054  56                   push esi
// 004bf055  e896f01500           call 0x61e0f0
// 004bf05a  83c404               add esp, 4
// 004bf05d  c7058c9e8b0000000000 mov dword ptr [0x8b9e8c], 0
// 004bf067  5e                   pop esi
// 004bf068  c3                   ret 
// library rbxgs-raknet/StringCompressor.cpp (function ?RemoveReference@StringCompressor@@SAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet StringCompressor.cpp
