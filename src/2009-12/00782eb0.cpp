// roc 2009-12 00782eb0  unit: RBX::BlockBlockContact  size: 109 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00782eb0
//
// 00782eb0  6aff                 push -1
// 00782eb2  68e8369500           push 0x9536e8
// 00782eb7  64a100000000         mov eax, dword ptr fs:[0]
// 00782ebd  50                   push eax
// 00782ebe  64892500000000       mov dword ptr fs:[0], esp
// 00782ec5  83ec0c               sub esp, 0xc
// 00782ec8  56                   push esi
// 00782ec9  33f6                 xor esi, esi
// 00782ecb  89742408             mov dword ptr [esp + 8], esi
// 00782ecf  8974240c             mov dword ptr [esp + 0xc], esi
// 00782ed3  89742404             mov dword ptr [esp + 4], esi
// 00782ed7  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00782edb  8d442404             lea eax, [esp + 4]
// 00782edf  50                   push eax
// 00782ee0  51                   push ecx
// 00782ee1  89742420             mov dword ptr [esp + 0x20], esi
// 00782ee5  e856f8ffff           call 0x782740
// 00782eea  83c408               add esp, 8
// 00782eed  3bc6                 cmp eax, esi
// 00782eef  5e                   pop esi
// 00782ef0  740b                 je 0x782efd
// 00782ef2  8d1424               lea edx, [esp]
// 00782ef5  52                   push edx
// 00782ef6  8bc8                 mov ecx, eax
// 00782ef8  e8037ef9ff           call 0x71ad00
// 00782efd  8b0424               mov eax, dword ptr [esp]
// 00782f00  50                   push eax
// 00782f01  c7442418ffffffff     mov dword ptr [esp + 0x18], 0xffffffff
// 00782f09  e8d274e6ff           call 0x5ea3e0
// 00782f0e  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00782f12  64890d00000000       mov dword ptr fs:[0], ecx
// 00782f19  83c41c               add esp, 0x1c
// 00782f1c  c3                   ret 
// library rbxgs/tool\DragUtilities.cpp (function ?unJoinFromOutsiders@DragUtilities@RBX@@SAXABV?$vector@V?$weak_ptr@VPartInstance@RBX@@@boost@@V?$allocator@V?$weak_ptr@VPartInstance@RBX@@@boost@@@std@@@std@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs tool/DragUtilities.cpp
