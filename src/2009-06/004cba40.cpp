// roc 2009-06 004cba40  unit: RBX::VInstance::V?$shared_ptr::$$CBV?$vector::V?$shared_ptr::?$holder  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004cba40
//
// 004cba40  56                   push esi
// 004cba41  6a0c                 push 0xc
// 004cba43  8bf1                 mov esi, ecx
// 004cba45  e8eecf2400           call 0x718a38
// 004cba4a  83c404               add esp, 4
// 004cba4d  85c0                 test eax, eax
// 004cba4f  7424                 je 0x4cba75
// 004cba51  c70078518c00         mov dword ptr [eax], 0x8c5178
// 004cba57  8b4e04               mov ecx, dword ptr [esi + 4]
// 004cba5a  894804               mov dword ptr [eax + 4], ecx
// 004cba5d  8b4e08               mov ecx, dword ptr [esi + 8]
// 004cba60  894808               mov dword ptr [eax + 8], ecx
// 004cba63  85c9                 test ecx, ecx
// 004cba65  7410                 je 0x4cba77
// 004cba67  83c104               add ecx, 4
// 004cba6a  ba01000000           mov edx, 1
// 004cba6f  f00fc111             lock xadd dword ptr [ecx], edx
// 004cba73  5e                   pop esi
// 004cba74  c3                   ret 
// 004cba75  33c0                 xor eax, eax
// 004cba77  5e                   pop esi
// 004cba78  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ?clone@?$holder@V?$shared_ptr@VInstance@RBX@@@boost@@@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
