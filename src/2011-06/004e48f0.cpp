// roc 2011-06 004e48f0  unit: std::D::DU?$char_traits::V?$basic_string::$$CBV?$map::V?$shared_ptr::?$holder  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004e48f0
//
// 004e48f0  56                   push esi
// 004e48f1  6a0c                 push 0xc
// 004e48f3  8bf1                 mov esi, ecx
// 004e48f5  e864573200           call 0x80a05e
// 004e48fa  83c404               add esp, 4
// 004e48fd  85c0                 test eax, eax
// 004e48ff  7424                 je 0x4e4925
// 004e4901  c70068a5a700         mov dword ptr [eax], 0xa7a568
// 004e4907  8b4e04               mov ecx, dword ptr [esi + 4]
// 004e490a  894804               mov dword ptr [eax + 4], ecx
// 004e490d  8b4e08               mov ecx, dword ptr [esi + 8]
// 004e4910  894808               mov dword ptr [eax + 8], ecx
// 004e4913  85c9                 test ecx, ecx
// 004e4915  7410                 je 0x4e4927
// 004e4917  83c104               add ecx, 4
// 004e491a  ba01000000           mov edx, 1
// 004e491f  f00fc111             lock xadd dword ptr [ecx], edx
// 004e4923  5e                   pop esi
// 004e4924  c3                   ret 
// 004e4925  33c0                 xor eax, eax
// 004e4927  5e                   pop esi
// 004e4928  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ?clone@?$holder@V?$shared_ptr@VInstance@RBX@@@boost@@@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
