// roc 2007-03 004a5840  unit: seg_004a0000  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004a5840
//
// 004a5840  56                   push esi
// 004a5841  6a0c                 push 0xc
// 004a5843  8bf1                 mov esi, ecx
// 004a5845  e8be881700           call 0x61e108
// 004a584a  83c404               add esp, 4
// 004a584d  85c0                 test eax, eax
// 004a584f  7424                 je 0x4a5875
// 004a5851  c7000cca7900         mov dword ptr [eax], 0x79ca0c
// 004a5857  8b4e04               mov ecx, dword ptr [esi + 4]
// 004a585a  894804               mov dword ptr [eax + 4], ecx
// 004a585d  8b4e08               mov ecx, dword ptr [esi + 8]
// 004a5860  85c9                 test ecx, ecx
// 004a5862  894808               mov dword ptr [eax + 8], ecx
// 004a5865  7410                 je 0x4a5877
// 004a5867  83c104               add ecx, 4
// 004a586a  ba01000000           mov edx, 1
// 004a586f  f00fc111             lock xadd dword ptr [ecx], edx
// 004a5873  5e                   pop esi
// 004a5874  c3                   ret 
// 004a5875  33c0                 xor eax, eax
// 004a5877  5e                   pop esi
// 004a5878  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ?clone@?$holder@V?$shared_ptr@VInstance@RBX@@@boost@@@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
