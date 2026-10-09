// roc 2009-12 007037d0  unit: std::D::DU?$char_traits::V?$basic_string::$$CBV?$map::V?$shared_ptr::?$holder  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007037d0
//
// 007037d0  56                   push esi
// 007037d1  6a0c                 push 0xc
// 007037d3  8bf1                 mov esi, ecx
// 007037d5  e886000f00           call 0x7f3860
// 007037da  83c404               add esp, 4
// 007037dd  85c0                 test eax, eax
// 007037df  7424                 je 0x703805
// 007037e1  c7002ce09d00         mov dword ptr [eax], 0x9de02c
// 007037e7  8b4e04               mov ecx, dword ptr [esi + 4]
// 007037ea  894804               mov dword ptr [eax + 4], ecx
// 007037ed  8b4e08               mov ecx, dword ptr [esi + 8]
// 007037f0  894808               mov dword ptr [eax + 8], ecx
// 007037f3  85c9                 test ecx, ecx
// 007037f5  7410                 je 0x703807
// 007037f7  83c104               add ecx, 4
// 007037fa  ba01000000           mov edx, 1
// 007037ff  f00fc111             lock xadd dword ptr [ecx], edx
// 00703803  5e                   pop esi
// 00703804  c3                   ret 
// 00703805  33c0                 xor eax, eax
// 00703807  5e                   pop esi
// 00703808  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ?clone@?$holder@V?$shared_ptr@VInstance@RBX@@@boost@@@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
