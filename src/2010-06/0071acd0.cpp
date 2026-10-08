// roc 2010-06 0071acd0  unit: RBX::BlockBlockContact  size: 109 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0071acd0
//
// 0071acd0  6aff                 push -1
// 0071acd2  68e8829a00           push 0x9a82e8
// 0071acd7  64a100000000         mov eax, dword ptr fs:[0]
// 0071acdd  50                   push eax
// 0071acde  64892500000000       mov dword ptr fs:[0], esp
// 0071ace5  83ec0c               sub esp, 0xc
// 0071ace8  56                   push esi
// 0071ace9  33f6                 xor esi, esi
// 0071aceb  89742408             mov dword ptr [esp + 8], esi
// 0071acef  8974240c             mov dword ptr [esp + 0xc], esi
// 0071acf3  89742404             mov dword ptr [esp + 4], esi
// 0071acf7  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0071acfb  8d442404             lea eax, [esp + 4]
// 0071acff  50                   push eax
// 0071ad00  51                   push ecx
// 0071ad01  89742420             mov dword ptr [esp + 0x20], esi
// 0071ad05  e856f8ffff           call 0x71a560
// 0071ad0a  83c408               add esp, 8
// 0071ad0d  3bc6                 cmp eax, esi
// 0071ad0f  5e                   pop esi
// 0071ad10  740b                 je 0x71ad1d
// 0071ad12  8d1424               lea edx, [esp]
// 0071ad15  52                   push edx
// 0071ad16  8bc8                 mov ecx, eax
// 0071ad18  e863faf7ff           call 0x69a780
// 0071ad1d  8b0424               mov eax, dword ptr [esp]
// 0071ad20  50                   push eax
// 0071ad21  c7442418ffffffff     mov dword ptr [esp + 0x18], 0xffffffff
// 0071ad29  e8922ce3ff           call 0x54d9c0
// 0071ad2e  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0071ad32  64890d00000000       mov dword ptr fs:[0], ecx
// 0071ad39  83c41c               add esp, 0x1c
// 0071ad3c  c3                   ret 
// library rbxgs/tool\DragUtilities.cpp (function ?unJoinFromOutsiders@DragUtilities@RBX@@SAXABV?$vector@V?$weak_ptr@VPartInstance@RBX@@@boost@@V?$allocator@V?$weak_ptr@VPartInstance@RBX@@@boost@@@std@@@std@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs tool/DragUtilities.cpp
