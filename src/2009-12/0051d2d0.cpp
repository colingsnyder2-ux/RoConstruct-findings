// roc 2009-12 0051d2d0  unit: RBX::VInstance::V?$shared_ptr::$$CBV?$vector::V?$shared_ptr::?$holder  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0051d2d0
//
// 0051d2d0  56                   push esi
// 0051d2d1  6a0c                 push 0xc
// 0051d2d3  8bf1                 mov esi, ecx
// 0051d2d5  e886652d00           call 0x7f3860
// 0051d2da  83c404               add esp, 4
// 0051d2dd  85c0                 test eax, eax
// 0051d2df  7424                 je 0x51d305
// 0051d2e1  c700b8b59b00         mov dword ptr [eax], 0x9bb5b8
// 0051d2e7  8b4e04               mov ecx, dword ptr [esi + 4]
// 0051d2ea  894804               mov dword ptr [eax + 4], ecx
// 0051d2ed  8b4e08               mov ecx, dword ptr [esi + 8]
// 0051d2f0  894808               mov dword ptr [eax + 8], ecx
// 0051d2f3  85c9                 test ecx, ecx
// 0051d2f5  7410                 je 0x51d307
// 0051d2f7  83c104               add ecx, 4
// 0051d2fa  ba01000000           mov edx, 1
// 0051d2ff  f00fc111             lock xadd dword ptr [ecx], edx
// 0051d303  5e                   pop esi
// 0051d304  c3                   ret 
// 0051d305  33c0                 xor eax, eax
// 0051d307  5e                   pop esi
// 0051d308  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ?clone@?$holder@V?$shared_ptr@VInstance@RBX@@@boost@@@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
