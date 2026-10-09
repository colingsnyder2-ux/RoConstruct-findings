// roc 2009-12 004f6ab0  unit: RBX::VInstance::V?$shared_ptr::?$holder  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004f6ab0
//
// 004f6ab0  56                   push esi
// 004f6ab1  6a0c                 push 0xc
// 004f6ab3  8bf1                 mov esi, ecx
// 004f6ab5  e8a6cd2f00           call 0x7f3860
// 004f6aba  83c404               add esp, 4
// 004f6abd  85c0                 test eax, eax
// 004f6abf  7424                 je 0x4f6ae5
// 004f6ac1  c700d4a19b00         mov dword ptr [eax], 0x9ba1d4
// 004f6ac7  8b4e04               mov ecx, dword ptr [esi + 4]
// 004f6aca  894804               mov dword ptr [eax + 4], ecx
// 004f6acd  8b4e08               mov ecx, dword ptr [esi + 8]
// 004f6ad0  894808               mov dword ptr [eax + 8], ecx
// 004f6ad3  85c9                 test ecx, ecx
// 004f6ad5  7410                 je 0x4f6ae7
// 004f6ad7  83c104               add ecx, 4
// 004f6ada  ba01000000           mov edx, 1
// 004f6adf  f00fc111             lock xadd dword ptr [ecx], edx
// 004f6ae3  5e                   pop esi
// 004f6ae4  c3                   ret 
// 004f6ae5  33c0                 xor eax, eax
// 004f6ae7  5e                   pop esi
// 004f6ae8  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ?clone@?$holder@V?$shared_ptr@VInstance@RBX@@@boost@@@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
