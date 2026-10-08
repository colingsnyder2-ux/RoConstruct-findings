// roc 2010-06 0071ad40  unit: RBX::BlockBlockContact  size: 109 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0071ad40
//
// 0071ad40  6aff                 push -1
// 0071ad42  68e8829a00           push 0x9a82e8
// 0071ad47  64a100000000         mov eax, dword ptr fs:[0]
// 0071ad4d  50                   push eax
// 0071ad4e  64892500000000       mov dword ptr fs:[0], esp
// 0071ad55  83ec0c               sub esp, 0xc
// 0071ad58  56                   push esi
// 0071ad59  33f6                 xor esi, esi
// 0071ad5b  89742408             mov dword ptr [esp + 8], esi
// 0071ad5f  8974240c             mov dword ptr [esp + 0xc], esi
// 0071ad63  89742404             mov dword ptr [esp + 4], esi
// 0071ad67  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0071ad6b  8d442404             lea eax, [esp + 4]
// 0071ad6f  50                   push eax
// 0071ad70  51                   push ecx
// 0071ad71  89742420             mov dword ptr [esp + 0x20], esi
// 0071ad75  e8e6f7ffff           call 0x71a560
// 0071ad7a  83c408               add esp, 8
// 0071ad7d  3bc6                 cmp eax, esi
// 0071ad7f  5e                   pop esi
// 0071ad80  740b                 je 0x71ad8d
// 0071ad82  8d1424               lea edx, [esp]
// 0071ad85  52                   push edx
// 0071ad86  8bc8                 mov ecx, eax
// 0071ad88  e8a301f8ff           call 0x69af30
// 0071ad8d  8b0424               mov eax, dword ptr [esp]
// 0071ad90  50                   push eax
// 0071ad91  c7442418ffffffff     mov dword ptr [esp + 0x18], 0xffffffff
// 0071ad99  e8222ce3ff           call 0x54d9c0
// 0071ad9e  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0071ada2  64890d00000000       mov dword ptr fs:[0], ecx
// 0071ada9  83c41c               add esp, 0x1c
// 0071adac  c3                   ret 
// library rbxgs/tool\DragUtilities.cpp (function ?unJoinFromOutsiders@DragUtilities@RBX@@SAXABV?$vector@V?$weak_ptr@VPartInstance@RBX@@@boost@@V?$allocator@V?$weak_ptr@VPartInstance@RBX@@@boost@@@std@@@std@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs tool/DragUtilities.cpp
