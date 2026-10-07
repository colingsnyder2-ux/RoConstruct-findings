// roc 2008-06 0049b670  unit: RBX::VInstance::V?$shared_ptr::$$CBV?$vector::V?$shared_ptr::?$holder  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0049b670
//
// 0049b670  56                   push esi
// 0049b671  6a0c                 push 0xc
// 0049b673  8bf1                 mov esi, ecx
// 0049b675  e8a6522000           call 0x6a0920
// 0049b67a  83c404               add esp, 4
// 0049b67d  85c0                 test eax, eax
// 0049b67f  7424                 je 0x49b6a5
// 0049b681  c700b8298200         mov dword ptr [eax], 0x8229b8
// 0049b687  8b4e04               mov ecx, dword ptr [esi + 4]
// 0049b68a  894804               mov dword ptr [eax + 4], ecx
// 0049b68d  8b4e08               mov ecx, dword ptr [esi + 8]
// 0049b690  894808               mov dword ptr [eax + 8], ecx
// 0049b693  85c9                 test ecx, ecx
// 0049b695  7410                 je 0x49b6a7
// 0049b697  83c104               add ecx, 4
// 0049b69a  ba01000000           mov edx, 1
// 0049b69f  f00fc111             lock xadd dword ptr [ecx], edx
// 0049b6a3  5e                   pop esi
// 0049b6a4  c3                   ret 
// 0049b6a5  33c0                 xor eax, eax
// 0049b6a7  5e                   pop esi
// 0049b6a8  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ?clone@?$holder@V?$shared_ptr@VInstance@RBX@@@boost@@@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
