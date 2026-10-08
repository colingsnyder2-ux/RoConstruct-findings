// roc 2009-06 006b4160  unit: RBX::BlockBlockContact  size: 109 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006b4160
//
// 006b4160  6aff                 push -1
// 006b4162  6848098600           push 0x860948
// 006b4167  64a100000000         mov eax, dword ptr fs:[0]
// 006b416d  50                   push eax
// 006b416e  64892500000000       mov dword ptr fs:[0], esp
// 006b4175  83ec0c               sub esp, 0xc
// 006b4178  56                   push esi
// 006b4179  33f6                 xor esi, esi
// 006b417b  89742408             mov dword ptr [esp + 8], esi
// 006b417f  8974240c             mov dword ptr [esp + 0xc], esi
// 006b4183  89742404             mov dword ptr [esp + 4], esi
// 006b4187  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 006b418b  8d442404             lea eax, [esp + 4]
// 006b418f  50                   push eax
// 006b4190  51                   push ecx
// 006b4191  89742420             mov dword ptr [esp + 0x20], esi
// 006b4195  e816faffff           call 0x6b3bb0
// 006b419a  83c408               add esp, 8
// 006b419d  3bc6                 cmp eax, esi
// 006b419f  5e                   pop esi
// 006b41a0  740b                 je 0x6b41ad
// 006b41a2  8d1424               lea edx, [esp]
// 006b41a5  52                   push edx
// 006b41a6  8bc8                 mov ecx, eax
// 006b41a8  e853b4fcff           call 0x67f600
// 006b41ad  8b0424               mov eax, dword ptr [esp]
// 006b41b0  50                   push eax
// 006b41b1  c7442418ffffffff     mov dword ptr [esp + 0x18], 0xffffffff
// 006b41b9  e8d270ebff           call 0x56b290
// 006b41be  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 006b41c2  64890d00000000       mov dword ptr fs:[0], ecx
// 006b41c9  83c41c               add esp, 0x1c
// 006b41cc  c3                   ret 
// library rbxgs/tool\DragUtilities.cpp (function ?unJoinFromOutsiders@DragUtilities@RBX@@SAXABV?$vector@V?$weak_ptr@VPartInstance@RBX@@@boost@@V?$allocator@V?$weak_ptr@VPartInstance@RBX@@@boost@@@std@@@std@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs tool/DragUtilities.cpp
