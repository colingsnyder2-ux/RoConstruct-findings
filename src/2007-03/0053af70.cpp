// roc 2007-03 0053af70  unit: seg_00530000  size: 104 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0053af70
//
// 0053af70  6aff                 push -1
// 0053af72  68181a7500           push 0x751a18
// 0053af77  64a100000000         mov eax, dword ptr fs:[0]
// 0053af7d  50                   push eax
// 0053af7e  64892500000000       mov dword ptr fs:[0], esp
// 0053af85  51                   push ecx
// 0053af86  53                   push ebx
// 0053af87  56                   push esi
// 0053af88  57                   push edi
// 0053af89  8bf9                 mov edi, ecx
// 0053af8b  897c240c             mov dword ptr [esp + 0xc], edi
// 0053af8f  8b4708               mov eax, dword ptr [edi + 8]
// 0053af92  8d7704               lea esi, [edi + 4]
// 0053af95  33db                 xor ebx, ebx
// 0053af97  3bc3                 cmp eax, ebx
// 0053af99  895c2418             mov dword ptr [esp + 0x18], ebx
// 0053af9d  7418                 je 0x53afb7
// 0053af9f  8b4e08               mov ecx, dword ptr [esi + 8]
// 0053afa2  51                   push ecx
// 0053afa3  50                   push eax
// 0053afa4  8bce                 mov ecx, esi
// 0053afa6  e8453aefff           call 0x42e9f0
// 0053afab  8b5604               mov edx, dword ptr [esi + 4]
// 0053afae  52                   push edx
// 0053afaf  e83c310e00           call 0x61e0f0
// 0053afb4  83c404               add esp, 4
// 0053afb7  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0053afbb  895e04               mov dword ptr [esi + 4], ebx
// 0053afbe  895e08               mov dword ptr [esi + 8], ebx
// 0053afc1  895e0c               mov dword ptr [esi + 0xc], ebx
// 0053afc4  c7076c617800         mov dword ptr [edi], 0x78616c
// 0053afca  5f                   pop edi
// 0053afcb  5e                   pop esi
// 0053afcc  5b                   pop ebx
// 0053afcd  64890d00000000       mov dword ptr fs:[0], ecx
// 0053afd4  83c410               add esp, 0x10
// 0053afd7  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ??1?$holder@V?$vector@VValue@Reflection@RBX@@V?$allocator@VValue@Reflection@RBX@@@std@@@std@@@any@boost@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
