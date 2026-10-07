// roc 2007-08 00537650  unit: RBX::Lua::ThreadRef::VNode::V?$shared_ptr::?$TItem  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00537650
//
// 00537650  55                   push ebp
// 00537651  8bec                 mov ebp, esp
// 00537653  6aff                 push -1
// 00537655  68200b7500           push 0x750b20
// 0053765a  64a100000000         mov eax, dword ptr fs:[0]
// 00537660  50                   push eax
// 00537661  64892500000000       mov dword ptr fs:[0], esp
// 00537668  83ec08               sub esp, 8
// 0053766b  53                   push ebx
// 0053766c  8b5d0c               mov ebx, dword ptr [ebp + 0xc]
// 0053766f  56                   push esi
// 00537670  8b7508               mov esi, dword ptr [ebp + 8]
// 00537673  57                   push edi
// 00537674  8b7d10               mov edi, dword ptr [ebp + 0x10]
// 00537677  8965f0               mov dword ptr [ebp - 0x10], esp
// 0053767a  897dec               mov dword ptr [ebp - 0x14], edi
// 0053767d  c745fc00000000       mov dword ptr [ebp - 4], 0
// 00537684  3bf3                 cmp esi, ebx
// 00537686  7440                 je 0x5376c8
// 00537688  56                   push esi
// 00537689  57                   push edi
// 0053768a  e87160efff           call 0x42d700
// 0053768f  83c708               add edi, 8
// 00537692  83c408               add esp, 8
// 00537695  897d10               mov dword ptr [ebp + 0x10], edi
// 00537698  83c608               add esi, 8
// 0053769b  ebe7                 jmp 0x537684
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$_Uninit_copy@PBVValue@Reflection@RBX@@PAV123@V?$allocator@VValue@Reflection@RBX@@@std@@@std@@YAPAVValue@Reflection@RBX@@PBV123@0PAV123@AAV?$allocator@VValue@Reflection@RBX@@@0@U_Nonscalar_ptr_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
