// roc 2009-12 00427330  unit: boost::any::H::?$holder  size: 104 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00427330
//
// 00427330  6aff                 push -1
// 00427332  68d8c59300           push 0x93c5d8
// 00427337  64a100000000         mov eax, dword ptr fs:[0]
// 0042733d  50                   push eax
// 0042733e  64892500000000       mov dword ptr fs:[0], esp
// 00427345  51                   push ecx
// 00427346  56                   push esi
// 00427347  8bf1                 mov esi, ecx
// 00427349  57                   push edi
// 0042734a  89742408             mov dword ptr [esp + 8], esi
// 0042734e  8b460c               mov eax, dword ptr [esi + 0xc]
// 00427351  33ff                 xor edi, edi
// 00427353  897c2414             mov dword ptr [esp + 0x14], edi
// 00427357  3bc7                 cmp eax, edi
// 00427359  7418                 je 0x427373
// 0042735b  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 0042735e  51                   push ecx
// 0042735f  50                   push eax
// 00427360  8bce                 mov ecx, esi
// 00427362  e829ffffff           call 0x427290
// 00427367  8b560c               mov edx, dword ptr [esi + 0xc]
// 0042736a  52                   push edx
// 0042736b  e8eac43c00           call 0x7f385a
// 00427370  83c404               add esp, 4
// 00427373  8b06                 mov eax, dword ptr [esi]
// 00427375  50                   push eax
// 00427376  897e0c               mov dword ptr [esi + 0xc], edi
// 00427379  897e10               mov dword ptr [esi + 0x10], edi
// 0042737c  897e14               mov dword ptr [esi + 0x14], edi
// 0042737f  e8d6c43c00           call 0x7f385a
// 00427384  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00427388  83c404               add esp, 4
// 0042738b  5f                   pop edi
// 0042738c  5e                   pop esi
// 0042738d  64890d00000000       mov dword ptr fs:[0], ecx
// 00427394  83c410               add esp, 0x10
// 00427397  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ??1?$vector@VValue@Reflection@RBX@@V?$allocator@VValue@Reflection@RBX@@@std@@@std@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
