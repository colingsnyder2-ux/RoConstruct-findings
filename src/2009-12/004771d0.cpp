// roc 2009-12 004771d0  unit: RBX::Reflection::VValue::$$CBV?$vector::V?$shared_ptr::?$holder  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004771d0
//
// 004771d0  56                   push esi
// 004771d1  6a0c                 push 0xc
// 004771d3  8bf1                 mov esi, ecx
// 004771d5  e886c63700           call 0x7f3860
// 004771da  83c404               add esp, 4
// 004771dd  85c0                 test eax, eax
// 004771df  7424                 je 0x477205
// 004771e1  c700c41b9b00         mov dword ptr [eax], 0x9b1bc4
// 004771e7  8b4e04               mov ecx, dword ptr [esi + 4]
// 004771ea  894804               mov dword ptr [eax + 4], ecx
// 004771ed  8b4e08               mov ecx, dword ptr [esi + 8]
// 004771f0  894808               mov dword ptr [eax + 8], ecx
// 004771f3  85c9                 test ecx, ecx
// 004771f5  7410                 je 0x477207
// 004771f7  83c104               add ecx, 4
// 004771fa  ba01000000           mov edx, 1
// 004771ff  f00fc111             lock xadd dword ptr [ecx], edx
// 00477203  5e                   pop esi
// 00477204  c3                   ret 
// 00477205  33c0                 xor eax, eax
// 00477207  5e                   pop esi
// 00477208  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ?clone@?$holder@V?$shared_ptr@VInstance@RBX@@@boost@@@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
