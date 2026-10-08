// roc 2007-03 005b53f0  unit: seg_005b0000  size: 109 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005b53f0
//
// 005b53f0  6aff                 push -1
// 005b53f2  6818a07500           push 0x75a018
// 005b53f7  64a100000000         mov eax, dword ptr fs:[0]
// 005b53fd  50                   push eax
// 005b53fe  64892500000000       mov dword ptr fs:[0], esp
// 005b5405  83ec0c               sub esp, 0xc
// 005b5408  56                   push esi
// 005b5409  33f6                 xor esi, esi
// 005b540b  89742408             mov dword ptr [esp + 8], esi
// 005b540f  8974240c             mov dword ptr [esp + 0xc], esi
// 005b5413  89742404             mov dword ptr [esp + 4], esi
// 005b5417  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005b541b  8d442404             lea eax, [esp + 4]
// 005b541f  50                   push eax
// 005b5420  51                   push ecx
// 005b5421  89742420             mov dword ptr [esp + 0x20], esi
// 005b5425  e886feffff           call 0x5b52b0
// 005b542a  83c408               add esp, 8
// 005b542d  3bc6                 cmp eax, esi
// 005b542f  5e                   pop esi
// 005b5430  740b                 je 0x5b543d
// 005b5432  8d1424               lea edx, [esp]
// 005b5435  52                   push edx
// 005b5436  8bc8                 mov ecx, eax
// 005b5438  e8f38cffff           call 0x5ae130
// 005b543d  8b0424               mov eax, dword ptr [esp]
// 005b5440  50                   push eax
// 005b5441  c7442418ffffffff     mov dword ptr [esp + 0x18], 0xffffffff
// 005b5449  e832dff3ff           call 0x4f3380
// 005b544e  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005b5452  64890d00000000       mov dword ptr fs:[0], ecx
// 005b5459  83c41c               add esp, 0x1c
// 005b545c  c3                   ret 
// library rbxgs/tool\DragUtilities.cpp (function ?unJoinFromOutsiders@DragUtilities@RBX@@SAXABV?$vector@V?$weak_ptr@VPartInstance@RBX@@@boost@@V?$allocator@V?$weak_ptr@VPartInstance@RBX@@@boost@@@std@@@std@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs tool/DragUtilities.cpp
