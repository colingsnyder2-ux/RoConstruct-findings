// roc 2011-06 00418760  unit: RBX::Reflection::VValue::$$CBV?$vector::$$A6AXV?$shared_ptr::V?$function::V?$shared_ptr::?$holder  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00418760
//
// 00418760  55                   push ebp
// 00418761  8bec                 mov ebp, esp
// 00418763  6aff                 push -1
// 00418765  68e0e19c00           push 0x9ce1e0
// 0041876a  64a100000000         mov eax, dword ptr fs:[0]
// 00418770  50                   push eax
// 00418771  64892500000000       mov dword ptr fs:[0], esp
// 00418778  83ec08               sub esp, 8
// 0041877b  53                   push ebx
// 0041877c  8b5d10               mov ebx, dword ptr [ebp + 0x10]
// 0041877f  56                   push esi
// 00418780  8b750c               mov esi, dword ptr [ebp + 0xc]
// 00418783  57                   push edi
// 00418784  8b7d08               mov edi, dword ptr [ebp + 8]
// 00418787  8965f0               mov dword ptr [ebp - 0x10], esp
// 0041878a  897dec               mov dword ptr [ebp - 0x14], edi
// 0041878d  c745fc00000000       mov dword ptr [ebp - 4], 0
// 00418794  85f6                 test esi, esi
// 00418796  7638                 jbe 0x4187d0
// 00418798  53                   push ebx
// 00418799  57                   push edi
// 0041879a  e851f5ffff           call 0x417cf0
// 0041879f  83c408               add esp, 8
// 004187a2  4e                   dec esi
// 004187a3  83c708               add edi, 8
// 004187a6  897d08               mov dword ptr [ebp + 8], edi
// 004187a9  ebe9                 jmp 0x418794
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$_Uninit_fill_n@PAVValue@Reflection@RBX@@IV123@V?$allocator@VValue@Reflection@RBX@@@std@@@std@@YAXPAVValue@Reflection@RBX@@IABV123@AAV?$allocator@VValue@Reflection@RBX@@@0@U_Nonscalar_ptr_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
