// roc 2011-06 004d5040  unit: RBX::VInstance::V?$shared_ptr::$$CBV?$vector::V?$shared_ptr::?$holder  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004d5040
//
// 004d5040  56                   push esi
// 004d5041  6a0c                 push 0xc
// 004d5043  8bf1                 mov esi, ecx
// 004d5045  e814503300           call 0x80a05e
// 004d504a  83c404               add esp, 4
// 004d504d  85c0                 test eax, eax
// 004d504f  7424                 je 0x4d5075
// 004d5051  c700a48fa700         mov dword ptr [eax], 0xa78fa4
// 004d5057  8b4e04               mov ecx, dword ptr [esi + 4]
// 004d505a  894804               mov dword ptr [eax + 4], ecx
// 004d505d  8b4e08               mov ecx, dword ptr [esi + 8]
// 004d5060  894808               mov dword ptr [eax + 8], ecx
// 004d5063  85c9                 test ecx, ecx
// 004d5065  7410                 je 0x4d5077
// 004d5067  83c104               add ecx, 4
// 004d506a  ba01000000           mov edx, 1
// 004d506f  f00fc111             lock xadd dword ptr [ecx], edx
// 004d5073  5e                   pop esi
// 004d5074  c3                   ret 
// 004d5075  33c0                 xor eax, eax
// 004d5077  5e                   pop esi
// 004d5078  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ?clone@?$holder@V?$shared_ptr@VInstance@RBX@@@boost@@@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
