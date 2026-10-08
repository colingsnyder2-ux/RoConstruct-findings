// roc 2008-06 0060ec60  unit: RBX::BlockBlockContact  size: 109 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0060ec60
//
// 0060ec60  6aff                 push -1
// 0060ec62  68a88d7d00           push 0x7d8da8
// 0060ec67  64a100000000         mov eax, dword ptr fs:[0]
// 0060ec6d  50                   push eax
// 0060ec6e  64892500000000       mov dword ptr fs:[0], esp
// 0060ec75  83ec0c               sub esp, 0xc
// 0060ec78  56                   push esi
// 0060ec79  33f6                 xor esi, esi
// 0060ec7b  89742408             mov dword ptr [esp + 8], esi
// 0060ec7f  8974240c             mov dword ptr [esp + 0xc], esi
// 0060ec83  89742404             mov dword ptr [esp + 4], esi
// 0060ec87  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0060ec8b  8d442404             lea eax, [esp + 4]
// 0060ec8f  50                   push eax
// 0060ec90  51                   push ecx
// 0060ec91  89742420             mov dword ptr [esp + 0x20], esi
// 0060ec95  e896feffff           call 0x60eb30
// 0060ec9a  83c408               add esp, 8
// 0060ec9d  3bc6                 cmp eax, esi
// 0060ec9f  5e                   pop esi
// 0060eca0  740b                 je 0x60ecad
// 0060eca2  8d1424               lea edx, [esp]
// 0060eca5  52                   push edx
// 0060eca6  8bc8                 mov ecx, eax
// 0060eca8  e883c0fdff           call 0x5ead30
// 0060ecad  8b0424               mov eax, dword ptr [esp]
// 0060ecb0  50                   push eax
// 0060ecb1  c7442418ffffffff     mov dword ptr [esp + 0x18], 0xffffffff
// 0060ecb9  e86290efff           call 0x507d20
// 0060ecbe  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0060ecc2  64890d00000000       mov dword ptr fs:[0], ecx
// 0060ecc9  83c41c               add esp, 0x1c
// 0060eccc  c3                   ret 
// library rbxgs/tool\DragUtilities.cpp (function ?unJoinFromOutsiders@DragUtilities@RBX@@SAXABV?$vector@V?$weak_ptr@VPartInstance@RBX@@@boost@@V?$allocator@V?$weak_ptr@VPartInstance@RBX@@@boost@@@std@@@std@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs tool/DragUtilities.cpp
