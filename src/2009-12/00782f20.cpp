// roc 2009-12 00782f20  unit: RBX::BlockBlockContact  size: 109 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00782f20
//
// 00782f20  6aff                 push -1
// 00782f22  68e8369500           push 0x9536e8
// 00782f27  64a100000000         mov eax, dword ptr fs:[0]
// 00782f2d  50                   push eax
// 00782f2e  64892500000000       mov dword ptr fs:[0], esp
// 00782f35  83ec0c               sub esp, 0xc
// 00782f38  56                   push esi
// 00782f39  33f6                 xor esi, esi
// 00782f3b  89742408             mov dword ptr [esp + 8], esi
// 00782f3f  8974240c             mov dword ptr [esp + 0xc], esi
// 00782f43  89742404             mov dword ptr [esp + 4], esi
// 00782f47  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00782f4b  8d442404             lea eax, [esp + 4]
// 00782f4f  50                   push eax
// 00782f50  51                   push ecx
// 00782f51  89742420             mov dword ptr [esp + 0x20], esi
// 00782f55  e8e6f7ffff           call 0x782740
// 00782f5a  83c408               add esp, 8
// 00782f5d  3bc6                 cmp eax, esi
// 00782f5f  5e                   pop esi
// 00782f60  740b                 je 0x782f6d
// 00782f62  8d1424               lea edx, [esp]
// 00782f65  52                   push edx
// 00782f66  8bc8                 mov ecx, eax
// 00782f68  e84385f9ff           call 0x71b4b0
// 00782f6d  8b0424               mov eax, dword ptr [esp]
// 00782f70  50                   push eax
// 00782f71  c7442418ffffffff     mov dword ptr [esp + 0x18], 0xffffffff
// 00782f79  e86274e6ff           call 0x5ea3e0
// 00782f7e  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00782f82  64890d00000000       mov dword ptr fs:[0], ecx
// 00782f89  83c41c               add esp, 0x1c
// 00782f8c  c3                   ret 
// library rbxgs/tool\DragUtilities.cpp (function ?unJoinFromOutsiders@DragUtilities@RBX@@SAXABV?$vector@V?$weak_ptr@VPartInstance@RBX@@@boost@@V?$allocator@V?$weak_ptr@VPartInstance@RBX@@@boost@@@std@@@std@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs tool/DragUtilities.cpp
