// roc 2009-12 00426dc0  unit: boost::any::H::?$holder  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00426dc0
//
// 00426dc0  55                   push ebp
// 00426dc1  8bec                 mov ebp, esp
// 00426dc3  6aff                 push -1
// 00426dc5  68e0939200           push 0x9293e0
// 00426dca  64a100000000         mov eax, dword ptr fs:[0]
// 00426dd0  50                   push eax
// 00426dd1  64892500000000       mov dword ptr fs:[0], esp
// 00426dd8  83ec08               sub esp, 8
// 00426ddb  53                   push ebx
// 00426ddc  8b5d0c               mov ebx, dword ptr [ebp + 0xc]
// 00426ddf  56                   push esi
// 00426de0  8b7508               mov esi, dword ptr [ebp + 8]
// 00426de3  57                   push edi
// 00426de4  8b7d10               mov edi, dword ptr [ebp + 0x10]
// 00426de7  8965f0               mov dword ptr [ebp - 0x10], esp
// 00426dea  897dec               mov dword ptr [ebp - 0x14], edi
// 00426ded  c745fc00000000       mov dword ptr [ebp - 4], 0
// 00426df4  3bf3                 cmp esi, ebx
// 00426df6  7440                 je 0x426e38
// 00426df8  56                   push esi
// 00426df9  57                   push edi
// 00426dfa  e8c1f9ffff           call 0x4267c0
// 00426dff  83c708               add edi, 8
// 00426e02  83c408               add esp, 8
// 00426e05  897d10               mov dword ptr [ebp + 0x10], edi
// 00426e08  83c608               add esi, 8
// 00426e0b  ebe7                 jmp 0x426df4
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$_Uninit_copy@PBVValue@Reflection@RBX@@PAV123@V?$allocator@VValue@Reflection@RBX@@@std@@@std@@YAPAVValue@Reflection@RBX@@PBV123@0PAV123@AAV?$allocator@VValue@Reflection@RBX@@@0@U_Nonscalar_ptr_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
