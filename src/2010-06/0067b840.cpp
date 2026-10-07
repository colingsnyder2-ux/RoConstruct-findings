// roc 2010-06 0067b840  unit: std::D::DU?$char_traits::V?$basic_string::$$CBV?$map::V?$shared_ptr::?$holder  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0067b840
//
// 0067b840  56                   push esi
// 0067b841  6a0c                 push 0xc
// 0067b843  8bf1                 mov esi, ecx
// 0067b845  e856c11200           call 0x7a79a0
// 0067b84a  83c404               add esp, 4
// 0067b84d  85c0                 test eax, eax
// 0067b84f  7424                 je 0x67b875
// 0067b851  c7001cd8a300         mov dword ptr [eax], 0xa3d81c
// 0067b857  8b4e04               mov ecx, dword ptr [esi + 4]
// 0067b85a  894804               mov dword ptr [eax + 4], ecx
// 0067b85d  8b4e08               mov ecx, dword ptr [esi + 8]
// 0067b860  894808               mov dword ptr [eax + 8], ecx
// 0067b863  85c9                 test ecx, ecx
// 0067b865  7410                 je 0x67b877
// 0067b867  83c104               add ecx, 4
// 0067b86a  ba01000000           mov edx, 1
// 0067b86f  f00fc111             lock xadd dword ptr [ecx], edx
// 0067b873  5e                   pop esi
// 0067b874  c3                   ret 
// 0067b875  33c0                 xor eax, eax
// 0067b877  5e                   pop esi
// 0067b878  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ?clone@?$holder@V?$shared_ptr@VInstance@RBX@@@boost@@@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
