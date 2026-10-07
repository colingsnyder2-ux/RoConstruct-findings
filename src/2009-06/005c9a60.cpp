// roc 2009-06 005c9a60  unit: RBX::VTaskSchedulerSettings::?$FactoryProduct  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005c9a60
//
// 005c9a60  55                   push ebp
// 005c9a61  8bec                 mov ebp, esp
// 005c9a63  6aff                 push -1
// 005c9a65  6800228600           push 0x862200
// 005c9a6a  64a100000000         mov eax, dword ptr fs:[0]
// 005c9a70  50                   push eax
// 005c9a71  64892500000000       mov dword ptr fs:[0], esp
// 005c9a78  83ec08               sub esp, 8
// 005c9a7b  53                   push ebx
// 005c9a7c  8b5d0c               mov ebx, dword ptr [ebp + 0xc]
// 005c9a7f  56                   push esi
// 005c9a80  8b7508               mov esi, dword ptr [ebp + 8]
// 005c9a83  57                   push edi
// 005c9a84  8b7d10               mov edi, dword ptr [ebp + 0x10]
// 005c9a87  8965f0               mov dword ptr [ebp - 0x10], esp
// 005c9a8a  897dec               mov dword ptr [ebp - 0x14], edi
// 005c9a8d  c745fc00000000       mov dword ptr [ebp - 4], 0
// 005c9a94  3bf3                 cmp esi, ebx
// 005c9a96  7440                 je 0x5c9ad8
// 005c9a98  56                   push esi
// 005c9a99  57                   push edi
// 005c9a9a  e851c1e5ff           call 0x425bf0
// 005c9a9f  83c708               add edi, 8
// 005c9aa2  83c408               add esp, 8
// 005c9aa5  897d10               mov dword ptr [ebp + 0x10], edi
// 005c9aa8  83c608               add esi, 8
// 005c9aab  ebe7                 jmp 0x5c9a94
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$_Uninit_copy@PBVValue@Reflection@RBX@@PAV123@V?$allocator@VValue@Reflection@RBX@@@std@@@std@@YAPAVValue@Reflection@RBX@@PBV123@0PAV123@AAV?$allocator@VValue@Reflection@RBX@@@0@U_Nonscalar_ptr_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
