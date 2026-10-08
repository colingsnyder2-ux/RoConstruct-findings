// roc 2008-06 0060ecd0  unit: RBX::BlockBlockContact  size: 109 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0060ecd0
//
// 0060ecd0  6aff                 push -1
// 0060ecd2  68a88d7d00           push 0x7d8da8
// 0060ecd7  64a100000000         mov eax, dword ptr fs:[0]
// 0060ecdd  50                   push eax
// 0060ecde  64892500000000       mov dword ptr fs:[0], esp
// 0060ece5  83ec0c               sub esp, 0xc
// 0060ece8  56                   push esi
// 0060ece9  33f6                 xor esi, esi
// 0060eceb  89742408             mov dword ptr [esp + 8], esi
// 0060ecef  8974240c             mov dword ptr [esp + 0xc], esi
// 0060ecf3  89742404             mov dword ptr [esp + 4], esi
// 0060ecf7  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0060ecfb  8d442404             lea eax, [esp + 4]
// 0060ecff  50                   push eax
// 0060ed00  51                   push ecx
// 0060ed01  89742420             mov dword ptr [esp + 0x20], esi
// 0060ed05  e826feffff           call 0x60eb30
// 0060ed0a  83c408               add esp, 8
// 0060ed0d  3bc6                 cmp eax, esi
// 0060ed0f  5e                   pop esi
// 0060ed10  740b                 je 0x60ed1d
// 0060ed12  8d1424               lea edx, [esp]
// 0060ed15  52                   push edx
// 0060ed16  8bc8                 mov ecx, eax
// 0060ed18  e8f3c0fdff           call 0x5eae10
// 0060ed1d  8b0424               mov eax, dword ptr [esp]
// 0060ed20  50                   push eax
// 0060ed21  c7442418ffffffff     mov dword ptr [esp + 0x18], 0xffffffff
// 0060ed29  e8f28fefff           call 0x507d20
// 0060ed2e  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0060ed32  64890d00000000       mov dword ptr fs:[0], ecx
// 0060ed39  83c41c               add esp, 0x1c
// 0060ed3c  c3                   ret 
// library rbxgs/tool\DragUtilities.cpp (function ?unJoinFromOutsiders@DragUtilities@RBX@@SAXABV?$vector@V?$weak_ptr@VPartInstance@RBX@@@boost@@V?$allocator@V?$weak_ptr@VPartInstance@RBX@@@boost@@@std@@@std@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs tool/DragUtilities.cpp
