// roc 2011-06 004e48a0  unit: RBX::Reflection::VValue::$$CBV?$vector::V?$shared_ptr::?$holder  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004e48a0
//
// 004e48a0  56                   push esi
// 004e48a1  6a0c                 push 0xc
// 004e48a3  8bf1                 mov esi, ecx
// 004e48a5  e8b4573200           call 0x80a05e
// 004e48aa  83c404               add esp, 4
// 004e48ad  85c0                 test eax, eax
// 004e48af  7424                 je 0x4e48d5
// 004e48b1  c70058a5a700         mov dword ptr [eax], 0xa7a558
// 004e48b7  8b4e04               mov ecx, dword ptr [esi + 4]
// 004e48ba  894804               mov dword ptr [eax + 4], ecx
// 004e48bd  8b4e08               mov ecx, dword ptr [esi + 8]
// 004e48c0  894808               mov dword ptr [eax + 8], ecx
// 004e48c3  85c9                 test ecx, ecx
// 004e48c5  7410                 je 0x4e48d7
// 004e48c7  83c104               add ecx, 4
// 004e48ca  ba01000000           mov edx, 1
// 004e48cf  f00fc111             lock xadd dword ptr [ecx], edx
// 004e48d3  5e                   pop esi
// 004e48d4  c3                   ret 
// 004e48d5  33c0                 xor eax, eax
// 004e48d7  5e                   pop esi
// 004e48d8  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ?clone@?$holder@V?$shared_ptr@VInstance@RBX@@@boost@@@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
