// roc 2010-06 00427220  unit: std::D::DU?$char_traits::V?$basic_string::?$holder  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00427220
//
// 00427220  55                   push ebp
// 00427221  8bec                 mov ebp, esp
// 00427223  6aff                 push -1
// 00427225  6830fd9700           push 0x97fd30
// 0042722a  64a100000000         mov eax, dword ptr fs:[0]
// 00427230  50                   push eax
// 00427231  64892500000000       mov dword ptr fs:[0], esp
// 00427238  83ec08               sub esp, 8
// 0042723b  53                   push ebx
// 0042723c  8b5d0c               mov ebx, dword ptr [ebp + 0xc]
// 0042723f  56                   push esi
// 00427240  8b7508               mov esi, dword ptr [ebp + 8]
// 00427243  57                   push edi
// 00427244  8b7d10               mov edi, dword ptr [ebp + 0x10]
// 00427247  8965f0               mov dword ptr [ebp - 0x10], esp
// 0042724a  897dec               mov dword ptr [ebp - 0x14], edi
// 0042724d  c745fc00000000       mov dword ptr [ebp - 4], 0
// 00427254  3bf3                 cmp esi, ebx
// 00427256  7440                 je 0x427298
// 00427258  56                   push esi
// 00427259  57                   push edi
// 0042725a  e8a1f9ffff           call 0x426c00
// 0042725f  83c708               add edi, 8
// 00427262  83c408               add esp, 8
// 00427265  897d10               mov dword ptr [ebp + 0x10], edi
// 00427268  83c608               add esi, 8
// 0042726b  ebe7                 jmp 0x427254
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$_Uninit_copy@PBVValue@Reflection@RBX@@PAV123@V?$allocator@VValue@Reflection@RBX@@@std@@@std@@YAPAVValue@Reflection@RBX@@PBV123@0PAV123@AAV?$allocator@VValue@Reflection@RBX@@@0@U_Nonscalar_ptr_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
