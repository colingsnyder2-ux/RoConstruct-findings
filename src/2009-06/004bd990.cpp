// roc 2009-06 004bd990  unit: RBX::VInstance::V?$shared_ptr::?$holder  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004bd990
//
// 004bd990  56                   push esi
// 004bd991  6a0c                 push 0xc
// 004bd993  8bf1                 mov esi, ecx
// 004bd995  e89eb02500           call 0x718a38
// 004bd99a  83c404               add esp, 4
// 004bd99d  85c0                 test eax, eax
// 004bd99f  7424                 je 0x4bd9c5
// 004bd9a1  c7006c498c00         mov dword ptr [eax], 0x8c496c
// 004bd9a7  8b4e04               mov ecx, dword ptr [esi + 4]
// 004bd9aa  894804               mov dword ptr [eax + 4], ecx
// 004bd9ad  8b4e08               mov ecx, dword ptr [esi + 8]
// 004bd9b0  894808               mov dword ptr [eax + 8], ecx
// 004bd9b3  85c9                 test ecx, ecx
// 004bd9b5  7410                 je 0x4bd9c7
// 004bd9b7  83c104               add ecx, 4
// 004bd9ba  ba01000000           mov edx, 1
// 004bd9bf  f00fc111             lock xadd dword ptr [ecx], edx
// 004bd9c3  5e                   pop esi
// 004bd9c4  c3                   ret 
// 004bd9c5  33c0                 xor eax, eax
// 004bd9c7  5e                   pop esi
// 004bd9c8  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ?clone@?$holder@V?$shared_ptr@VInstance@RBX@@@boost@@@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
