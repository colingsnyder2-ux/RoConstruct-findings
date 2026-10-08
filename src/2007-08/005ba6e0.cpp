// roc 2007-08 005ba6e0  unit: RBX::VFaceInstance::?$EnumPropDescriptor  size: 109 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005ba6e0
//
// 005ba6e0  6aff                 push -1
// 005ba6e2  6888937500           push 0x759388
// 005ba6e7  64a100000000         mov eax, dword ptr fs:[0]
// 005ba6ed  50                   push eax
// 005ba6ee  64892500000000       mov dword ptr fs:[0], esp
// 005ba6f5  83ec0c               sub esp, 0xc
// 005ba6f8  56                   push esi
// 005ba6f9  33f6                 xor esi, esi
// 005ba6fb  89742408             mov dword ptr [esp + 8], esi
// 005ba6ff  8974240c             mov dword ptr [esp + 0xc], esi
// 005ba703  89742404             mov dword ptr [esp + 4], esi
// 005ba707  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005ba70b  8d442404             lea eax, [esp + 4]
// 005ba70f  50                   push eax
// 005ba710  51                   push ecx
// 005ba711  89742420             mov dword ptr [esp + 0x20], esi
// 005ba715  e816feffff           call 0x5ba530
// 005ba71a  83c408               add esp, 8
// 005ba71d  3bc6                 cmp eax, esi
// 005ba71f  5e                   pop esi
// 005ba720  740b                 je 0x5ba72d
// 005ba722  8d1424               lea edx, [esp]
// 005ba725  52                   push edx
// 005ba726  8bc8                 mov ecx, eax
// 005ba728  e85300ffff           call 0x5aa780
// 005ba72d  8b0424               mov eax, dword ptr [esp]
// 005ba730  50                   push eax
// 005ba731  c7442418ffffffff     mov dword ptr [esp + 0x18], 0xffffffff
// 005ba739  e8d250f4ff           call 0x4ff810
// 005ba73e  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005ba742  64890d00000000       mov dword ptr fs:[0], ecx
// 005ba749  83c41c               add esp, 0x1c
// 005ba74c  c3                   ret 
// library rbxgs/tool\DragUtilities.cpp (function ?unJoinFromOutsiders@DragUtilities@RBX@@SAXABV?$vector@V?$weak_ptr@VPartInstance@RBX@@@boost@@V?$allocator@V?$weak_ptr@VPartInstance@RBX@@@boost@@@std@@@std@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs tool/DragUtilities.cpp
