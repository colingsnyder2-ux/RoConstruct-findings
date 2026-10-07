// roc 2010-06 00427450  unit: std::D::DU?$char_traits::V?$basic_string::?$holder  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00427450
//
// 00427450  55                   push ebp
// 00427451  8bec                 mov ebp, esp
// 00427453  6aff                 push -1
// 00427455  6840fd9700           push 0x97fd40
// 0042745a  64a100000000         mov eax, dword ptr fs:[0]
// 00427460  50                   push eax
// 00427461  64892500000000       mov dword ptr fs:[0], esp
// 00427468  83ec08               sub esp, 8
// 0042746b  53                   push ebx
// 0042746c  8b5d10               mov ebx, dword ptr [ebp + 0x10]
// 0042746f  56                   push esi
// 00427470  8b750c               mov esi, dword ptr [ebp + 0xc]
// 00427473  57                   push edi
// 00427474  8b7d08               mov edi, dword ptr [ebp + 8]
// 00427477  8965f0               mov dword ptr [ebp - 0x10], esp
// 0042747a  897dec               mov dword ptr [ebp - 0x14], edi
// 0042747d  c745fc00000000       mov dword ptr [ebp - 4], 0
// 00427484  85f6                 test esi, esi
// 00427486  7638                 jbe 0x4274c0
// 00427488  53                   push ebx
// 00427489  57                   push edi
// 0042748a  e871f7ffff           call 0x426c00
// 0042748f  83c408               add esp, 8
// 00427492  4e                   dec esi
// 00427493  83c708               add edi, 8
// 00427496  897d08               mov dword ptr [ebp + 8], edi
// 00427499  ebe9                 jmp 0x427484
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$_Uninit_fill_n@PAVValue@Reflection@RBX@@IV123@V?$allocator@VValue@Reflection@RBX@@@std@@@std@@YAXPAVValue@Reflection@RBX@@IABV123@AAV?$allocator@VValue@Reflection@RBX@@@0@U_Nonscalar_ptr_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
