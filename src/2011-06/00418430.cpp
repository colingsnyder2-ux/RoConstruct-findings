// roc 2011-06 00418430  unit: RBX::Reflection::VValue::$$CBV?$vector::$$A6AXV?$shared_ptr::V?$function::V?$shared_ptr::?$holder  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00418430
//
// 00418430  56                   push esi
// 00418431  6a0c                 push 0xc
// 00418433  8bf1                 mov esi, ecx
// 00418435  e8241c3f00           call 0x80a05e
// 0041843a  83c404               add esp, 4
// 0041843d  85c0                 test eax, eax
// 0041843f  7424                 je 0x418465
// 00418441  c700d0e9a500         mov dword ptr [eax], 0xa5e9d0
// 00418447  8b4e04               mov ecx, dword ptr [esi + 4]
// 0041844a  894804               mov dword ptr [eax + 4], ecx
// 0041844d  8b4e08               mov ecx, dword ptr [esi + 8]
// 00418450  894808               mov dword ptr [eax + 8], ecx
// 00418453  85c9                 test ecx, ecx
// 00418455  7410                 je 0x418467
// 00418457  83c104               add ecx, 4
// 0041845a  ba01000000           mov edx, 1
// 0041845f  f00fc111             lock xadd dword ptr [ecx], edx
// 00418463  5e                   pop esi
// 00418464  c3                   ret 
// 00418465  33c0                 xor eax, eax
// 00418467  5e                   pop esi
// 00418468  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ?clone@?$holder@V?$shared_ptr@VInstance@RBX@@@boost@@@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
