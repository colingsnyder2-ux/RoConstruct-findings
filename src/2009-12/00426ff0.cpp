// roc 2009-12 00426ff0  unit: boost::any::H::?$holder  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00426ff0
//
// 00426ff0  55                   push ebp
// 00426ff1  8bec                 mov ebp, esp
// 00426ff3  6aff                 push -1
// 00426ff5  68f0939200           push 0x9293f0
// 00426ffa  64a100000000         mov eax, dword ptr fs:[0]
// 00427000  50                   push eax
// 00427001  64892500000000       mov dword ptr fs:[0], esp
// 00427008  83ec08               sub esp, 8
// 0042700b  53                   push ebx
// 0042700c  8b5d10               mov ebx, dword ptr [ebp + 0x10]
// 0042700f  56                   push esi
// 00427010  8b750c               mov esi, dword ptr [ebp + 0xc]
// 00427013  57                   push edi
// 00427014  8b7d08               mov edi, dword ptr [ebp + 8]
// 00427017  8965f0               mov dword ptr [ebp - 0x10], esp
// 0042701a  897dec               mov dword ptr [ebp - 0x14], edi
// 0042701d  c745fc00000000       mov dword ptr [ebp - 4], 0
// 00427024  85f6                 test esi, esi
// 00427026  7638                 jbe 0x427060
// 00427028  53                   push ebx
// 00427029  57                   push edi
// 0042702a  e891f7ffff           call 0x4267c0
// 0042702f  83c408               add esp, 8
// 00427032  4e                   dec esi
// 00427033  83c708               add edi, 8
// 00427036  897d08               mov dword ptr [ebp + 8], edi
// 00427039  ebe9                 jmp 0x427024
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$_Uninit_fill_n@PAVValue@Reflection@RBX@@IV123@V?$allocator@VValue@Reflection@RBX@@@std@@@std@@YAXPAVValue@Reflection@RBX@@IABV123@AAV?$allocator@VValue@Reflection@RBX@@@0@U_Nonscalar_ptr_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
