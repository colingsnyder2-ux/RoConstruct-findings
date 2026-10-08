// roc 2007-08 005ba670  unit: RBX::VFaceInstance::?$EnumPropDescriptor  size: 109 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005ba670
//
// 005ba670  6aff                 push -1
// 005ba672  6888937500           push 0x759388
// 005ba677  64a100000000         mov eax, dword ptr fs:[0]
// 005ba67d  50                   push eax
// 005ba67e  64892500000000       mov dword ptr fs:[0], esp
// 005ba685  83ec0c               sub esp, 0xc
// 005ba688  56                   push esi
// 005ba689  33f6                 xor esi, esi
// 005ba68b  89742408             mov dword ptr [esp + 8], esi
// 005ba68f  8974240c             mov dword ptr [esp + 0xc], esi
// 005ba693  89742404             mov dword ptr [esp + 4], esi
// 005ba697  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005ba69b  8d442404             lea eax, [esp + 4]
// 005ba69f  50                   push eax
// 005ba6a0  51                   push ecx
// 005ba6a1  89742420             mov dword ptr [esp + 0x20], esi
// 005ba6a5  e886feffff           call 0x5ba530
// 005ba6aa  83c408               add esp, 8
// 005ba6ad  3bc6                 cmp eax, esi
// 005ba6af  5e                   pop esi
// 005ba6b0  740b                 je 0x5ba6bd
// 005ba6b2  8d1424               lea edx, [esp]
// 005ba6b5  52                   push edx
// 005ba6b6  8bc8                 mov ecx, eax
// 005ba6b8  e8e3fffeff           call 0x5aa6a0
// 005ba6bd  8b0424               mov eax, dword ptr [esp]
// 005ba6c0  50                   push eax
// 005ba6c1  c7442418ffffffff     mov dword ptr [esp + 0x18], 0xffffffff
// 005ba6c9  e84251f4ff           call 0x4ff810
// 005ba6ce  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005ba6d2  64890d00000000       mov dword ptr fs:[0], ecx
// 005ba6d9  83c41c               add esp, 0x1c
// 005ba6dc  c3                   ret 
// library rbxgs/tool\DragUtilities.cpp (function ?unJoinFromOutsiders@DragUtilities@RBX@@SAXABV?$vector@V?$weak_ptr@VPartInstance@RBX@@@boost@@V?$allocator@V?$weak_ptr@VPartInstance@RBX@@@boost@@@std@@@std@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs tool/DragUtilities.cpp
