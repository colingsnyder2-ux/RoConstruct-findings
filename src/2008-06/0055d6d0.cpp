// roc 2008-06 0055d6d0  unit: std::D::DU?$char_traits::V?$basic_string::?$sp_counted_impl_p  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0055d6d0
//
// 0055d6d0  55                   push ebp
// 0055d6d1  8bec                 mov ebp, esp
// 0055d6d3  6aff                 push -1
// 0055d6d5  6890e87c00           push 0x7ce890
// 0055d6da  64a100000000         mov eax, dword ptr fs:[0]
// 0055d6e0  50                   push eax
// 0055d6e1  64892500000000       mov dword ptr fs:[0], esp
// 0055d6e8  83ec08               sub esp, 8
// 0055d6eb  53                   push ebx
// 0055d6ec  8b5d0c               mov ebx, dword ptr [ebp + 0xc]
// 0055d6ef  56                   push esi
// 0055d6f0  8b7508               mov esi, dword ptr [ebp + 8]
// 0055d6f3  57                   push edi
// 0055d6f4  8b7d10               mov edi, dword ptr [ebp + 0x10]
// 0055d6f7  8965f0               mov dword ptr [ebp - 0x10], esp
// 0055d6fa  897dec               mov dword ptr [ebp - 0x14], edi
// 0055d6fd  c745fc00000000       mov dword ptr [ebp - 4], 0
// 0055d704  3bf3                 cmp esi, ebx
// 0055d706  7440                 je 0x55d748
// 0055d708  56                   push esi
// 0055d709  57                   push edi
// 0055d70a  e8b1f8ecff           call 0x42cfc0
// 0055d70f  83c708               add edi, 8
// 0055d712  83c408               add esp, 8
// 0055d715  897d10               mov dword ptr [ebp + 0x10], edi
// 0055d718  83c608               add esi, 8
// 0055d71b  ebe7                 jmp 0x55d704
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$_Uninit_copy@PBVValue@Reflection@RBX@@PAV123@V?$allocator@VValue@Reflection@RBX@@@std@@@std@@YAPAVValue@Reflection@RBX@@PBV123@0PAV123@AAV?$allocator@VValue@Reflection@RBX@@@0@U_Nonscalar_ptr_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
