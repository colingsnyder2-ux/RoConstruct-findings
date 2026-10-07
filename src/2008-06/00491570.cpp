// roc 2008-06 00491570  unit: RBX::Reflection::VDescribedBase::V?$shared_ptr::?$holder  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00491570
//
// 00491570  56                   push esi
// 00491571  6a0c                 push 0xc
// 00491573  8bf1                 mov esi, ecx
// 00491575  e8a6f32000           call 0x6a0920
// 0049157a  83c404               add esp, 4
// 0049157d  85c0                 test eax, eax
// 0049157f  7424                 je 0x4915a5
// 00491581  c700901b8200         mov dword ptr [eax], 0x821b90
// 00491587  8b4e04               mov ecx, dword ptr [esi + 4]
// 0049158a  894804               mov dword ptr [eax + 4], ecx
// 0049158d  8b4e08               mov ecx, dword ptr [esi + 8]
// 00491590  894808               mov dword ptr [eax + 8], ecx
// 00491593  85c9                 test ecx, ecx
// 00491595  7410                 je 0x4915a7
// 00491597  83c104               add ecx, 4
// 0049159a  ba01000000           mov edx, 1
// 0049159f  f00fc111             lock xadd dword ptr [ecx], edx
// 004915a3  5e                   pop esi
// 004915a4  c3                   ret 
// 004915a5  33c0                 xor eax, eax
// 004915a7  5e                   pop esi
// 004915a8  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ?clone@?$holder@V?$shared_ptr@VInstance@RBX@@@boost@@@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
