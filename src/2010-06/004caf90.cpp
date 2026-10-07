// roc 2010-06 004caf90  unit: RBX::VInstance::V?$shared_ptr::$$CBV?$vector::V?$shared_ptr::?$holder  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004caf90
//
// 004caf90  56                   push esi
// 004caf91  6a0c                 push 0xc
// 004caf93  8bf1                 mov esi, ecx
// 004caf95  e806ca2d00           call 0x7a79a0
// 004caf9a  83c404               add esp, 4
// 004caf9d  85c0                 test eax, eax
// 004caf9f  7424                 je 0x4cafc5
// 004cafa1  c7008893a100         mov dword ptr [eax], 0xa19388
// 004cafa7  8b4e04               mov ecx, dword ptr [esi + 4]
// 004cafaa  894804               mov dword ptr [eax + 4], ecx
// 004cafad  8b4e08               mov ecx, dword ptr [esi + 8]
// 004cafb0  894808               mov dword ptr [eax + 8], ecx
// 004cafb3  85c9                 test ecx, ecx
// 004cafb5  7410                 je 0x4cafc7
// 004cafb7  83c104               add ecx, 4
// 004cafba  ba01000000           mov edx, 1
// 004cafbf  f00fc111             lock xadd dword ptr [ecx], edx
// 004cafc3  5e                   pop esi
// 004cafc4  c3                   ret 
// 004cafc5  33c0                 xor eax, eax
// 004cafc7  5e                   pop esi
// 004cafc8  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ?clone@?$holder@V?$shared_ptr@VInstance@RBX@@@boost@@@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
