// roc 2011-06 00418470  unit: RBX::Reflection::VValue::$$CBV?$vector::$$A6AXV?$shared_ptr::V?$function::V?$shared_ptr::?$holder  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00418470
//
// 00418470  55                   push ebp
// 00418471  8bec                 mov ebp, esp
// 00418473  6aff                 push -1
// 00418475  68d0e19c00           push 0x9ce1d0
// 0041847a  64a100000000         mov eax, dword ptr fs:[0]
// 00418480  50                   push eax
// 00418481  64892500000000       mov dword ptr fs:[0], esp
// 00418488  83ec08               sub esp, 8
// 0041848b  53                   push ebx
// 0041848c  8b5d0c               mov ebx, dword ptr [ebp + 0xc]
// 0041848f  56                   push esi
// 00418490  8b7508               mov esi, dword ptr [ebp + 8]
// 00418493  57                   push edi
// 00418494  8b7d10               mov edi, dword ptr [ebp + 0x10]
// 00418497  8965f0               mov dword ptr [ebp - 0x10], esp
// 0041849a  897dec               mov dword ptr [ebp - 0x14], edi
// 0041849d  c745fc00000000       mov dword ptr [ebp - 4], 0
// 004184a4  3bf3                 cmp esi, ebx
// 004184a6  7440                 je 0x4184e8
// 004184a8  56                   push esi
// 004184a9  57                   push edi
// 004184aa  e841f8ffff           call 0x417cf0
// 004184af  83c708               add edi, 8
// 004184b2  83c408               add esp, 8
// 004184b5  897d10               mov dword ptr [ebp + 0x10], edi
// 004184b8  83c608               add esi, 8
// 004184bb  ebe7                 jmp 0x4184a4
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$_Uninit_copy@PBVValue@Reflection@RBX@@PAV123@V?$allocator@VValue@Reflection@RBX@@@std@@@std@@YAPAVValue@Reflection@RBX@@PBV123@0PAV123@AAV?$allocator@VValue@Reflection@RBX@@@0@U_Nonscalar_ptr_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
