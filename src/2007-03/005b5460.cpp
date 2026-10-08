// roc 2007-03 005b5460  unit: seg_005b0000  size: 109 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005b5460
//
// 005b5460  6aff                 push -1
// 005b5462  6818a07500           push 0x75a018
// 005b5467  64a100000000         mov eax, dword ptr fs:[0]
// 005b546d  50                   push eax
// 005b546e  64892500000000       mov dword ptr fs:[0], esp
// 005b5475  83ec0c               sub esp, 0xc
// 005b5478  56                   push esi
// 005b5479  33f6                 xor esi, esi
// 005b547b  89742408             mov dword ptr [esp + 8], esi
// 005b547f  8974240c             mov dword ptr [esp + 0xc], esi
// 005b5483  89742404             mov dword ptr [esp + 4], esi
// 005b5487  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005b548b  8d442404             lea eax, [esp + 4]
// 005b548f  50                   push eax
// 005b5490  51                   push ecx
// 005b5491  89742420             mov dword ptr [esp + 0x20], esi
// 005b5495  e816feffff           call 0x5b52b0
// 005b549a  83c408               add esp, 8
// 005b549d  3bc6                 cmp eax, esi
// 005b549f  5e                   pop esi
// 005b54a0  740b                 je 0x5b54ad
// 005b54a2  8d1424               lea edx, [esp]
// 005b54a5  52                   push edx
// 005b54a6  8bc8                 mov ecx, eax
// 005b54a8  e8638dffff           call 0x5ae210
// 005b54ad  8b0424               mov eax, dword ptr [esp]
// 005b54b0  50                   push eax
// 005b54b1  c7442418ffffffff     mov dword ptr [esp + 0x18], 0xffffffff
// 005b54b9  e8c2def3ff           call 0x4f3380
// 005b54be  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005b54c2  64890d00000000       mov dword ptr fs:[0], ecx
// 005b54c9  83c41c               add esp, 0x1c
// 005b54cc  c3                   ret 
// library rbxgs/tool\DragUtilities.cpp (function ?unJoinFromOutsiders@DragUtilities@RBX@@SAXABV?$vector@V?$weak_ptr@VPartInstance@RBX@@@boost@@V?$allocator@V?$weak_ptr@VPartInstance@RBX@@@boost@@@std@@@std@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs tool/DragUtilities.cpp
