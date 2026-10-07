// roc 2010-06 004a4b90  unit: RBX::VInstance::V?$shared_ptr::?$holder  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004a4b90
//
// 004a4b90  56                   push esi
// 004a4b91  6a0c                 push 0xc
// 004a4b93  8bf1                 mov esi, ecx
// 004a4b95  e8062e3000           call 0x7a79a0
// 004a4b9a  83c404               add esp, 4
// 004a4b9d  85c0                 test eax, eax
// 004a4b9f  7424                 je 0x4a4bc5
// 004a4ba1  c700847ea100         mov dword ptr [eax], 0xa17e84
// 004a4ba7  8b4e04               mov ecx, dword ptr [esi + 4]
// 004a4baa  894804               mov dword ptr [eax + 4], ecx
// 004a4bad  8b4e08               mov ecx, dword ptr [esi + 8]
// 004a4bb0  894808               mov dword ptr [eax + 8], ecx
// 004a4bb3  85c9                 test ecx, ecx
// 004a4bb5  7410                 je 0x4a4bc7
// 004a4bb7  83c104               add ecx, 4
// 004a4bba  ba01000000           mov edx, 1
// 004a4bbf  f00fc111             lock xadd dword ptr [ecx], edx
// 004a4bc3  5e                   pop esi
// 004a4bc4  c3                   ret 
// 004a4bc5  33c0                 xor eax, eax
// 004a4bc7  5e                   pop esi
// 004a4bc8  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ?clone@?$holder@V?$shared_ptr@VInstance@RBX@@@boost@@@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
