// roc 2009-06 004263d0  unit: boost::any::H::?$holder  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004263d0
//
// 004263d0  55                   push ebp
// 004263d1  8bec                 mov ebp, esp
// 004263d3  6aff                 push -1
// 004263d5  68a0ed8400           push 0x84eda0
// 004263da  64a100000000         mov eax, dword ptr fs:[0]
// 004263e0  50                   push eax
// 004263e1  64892500000000       mov dword ptr fs:[0], esp
// 004263e8  83ec08               sub esp, 8
// 004263eb  53                   push ebx
// 004263ec  8b5d10               mov ebx, dword ptr [ebp + 0x10]
// 004263ef  56                   push esi
// 004263f0  8b750c               mov esi, dword ptr [ebp + 0xc]
// 004263f3  57                   push edi
// 004263f4  8b7d08               mov edi, dword ptr [ebp + 8]
// 004263f7  8965f0               mov dword ptr [ebp - 0x10], esp
// 004263fa  897dec               mov dword ptr [ebp - 0x14], edi
// 004263fd  c745fc00000000       mov dword ptr [ebp - 4], 0
// 00426404  85f6                 test esi, esi
// 00426406  7638                 jbe 0x426440
// 00426408  53                   push ebx
// 00426409  57                   push edi
// 0042640a  e8e1f7ffff           call 0x425bf0
// 0042640f  83c408               add esp, 8
// 00426412  4e                   dec esi
// 00426413  83c708               add edi, 8
// 00426416  897d08               mov dword ptr [ebp + 8], edi
// 00426419  ebe9                 jmp 0x426404
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$_Uninit_fill_n@PAVValue@Reflection@RBX@@IV123@V?$allocator@VValue@Reflection@RBX@@@std@@@std@@YAXPAVValue@Reflection@RBX@@IABV123@AAV?$allocator@VValue@Reflection@RBX@@@0@U_Nonscalar_ptr_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
