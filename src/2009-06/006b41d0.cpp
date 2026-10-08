// roc 2009-06 006b41d0  unit: RBX::BlockBlockContact  size: 109 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006b41d0
//
// 006b41d0  6aff                 push -1
// 006b41d2  6848098600           push 0x860948
// 006b41d7  64a100000000         mov eax, dword ptr fs:[0]
// 006b41dd  50                   push eax
// 006b41de  64892500000000       mov dword ptr fs:[0], esp
// 006b41e5  83ec0c               sub esp, 0xc
// 006b41e8  56                   push esi
// 006b41e9  33f6                 xor esi, esi
// 006b41eb  89742408             mov dword ptr [esp + 8], esi
// 006b41ef  8974240c             mov dword ptr [esp + 0xc], esi
// 006b41f3  89742404             mov dword ptr [esp + 4], esi
// 006b41f7  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 006b41fb  8d442404             lea eax, [esp + 4]
// 006b41ff  50                   push eax
// 006b4200  51                   push ecx
// 006b4201  89742420             mov dword ptr [esp + 0x20], esi
// 006b4205  e8a6f9ffff           call 0x6b3bb0
// 006b420a  83c408               add esp, 8
// 006b420d  3bc6                 cmp eax, esi
// 006b420f  5e                   pop esi
// 006b4210  740b                 je 0x6b421d
// 006b4212  8d1424               lea edx, [esp]
// 006b4215  52                   push edx
// 006b4216  8bc8                 mov ecx, eax
// 006b4218  e833bbfcff           call 0x67fd50
// 006b421d  8b0424               mov eax, dword ptr [esp]
// 006b4220  50                   push eax
// 006b4221  c7442418ffffffff     mov dword ptr [esp + 0x18], 0xffffffff
// 006b4229  e86270ebff           call 0x56b290
// 006b422e  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 006b4232  64890d00000000       mov dword ptr fs:[0], ecx
// 006b4239  83c41c               add esp, 0x1c
// 006b423c  c3                   ret 
// library rbxgs/tool\DragUtilities.cpp (function ?unJoinFromOutsiders@DragUtilities@RBX@@SAXABV?$vector@V?$weak_ptr@VPartInstance@RBX@@@boost@@V?$allocator@V?$weak_ptr@VPartInstance@RBX@@@boost@@@std@@@std@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs tool/DragUtilities.cpp
