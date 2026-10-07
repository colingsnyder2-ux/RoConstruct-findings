// roc 2009-06 004badf0  unit: RBX::Reflection::VDescribedBase::V?$shared_ptr::?$holder  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004badf0
//
// 004badf0  56                   push esi
// 004badf1  6a0c                 push 0xc
// 004badf3  8bf1                 mov esi, ecx
// 004badf5  e83edc2500           call 0x718a38
// 004badfa  83c404               add esp, 4
// 004badfd  85c0                 test eax, eax
// 004badff  7424                 je 0x4bae25
// 004bae01  c70034468c00         mov dword ptr [eax], 0x8c4634
// 004bae07  8b4e04               mov ecx, dword ptr [esi + 4]
// 004bae0a  894804               mov dword ptr [eax + 4], ecx
// 004bae0d  8b4e08               mov ecx, dword ptr [esi + 8]
// 004bae10  894808               mov dword ptr [eax + 8], ecx
// 004bae13  85c9                 test ecx, ecx
// 004bae15  7410                 je 0x4bae27
// 004bae17  83c104               add ecx, 4
// 004bae1a  ba01000000           mov edx, 1
// 004bae1f  f00fc111             lock xadd dword ptr [ecx], edx
// 004bae23  5e                   pop esi
// 004bae24  c3                   ret 
// 004bae25  33c0                 xor eax, eax
// 004bae27  5e                   pop esi
// 004bae28  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ?clone@?$holder@V?$shared_ptr@VInstance@RBX@@@boost@@@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
