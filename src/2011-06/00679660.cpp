// roc 2011-06 00679660  unit: RBX::SpecialShape  size: 9 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00679660
//
// 00679660  33c0                 xor eax, eax
// 00679662  894108               mov dword ptr [ecx + 8], eax
// 00679665  89410c               mov dword ptr [ecx + 0xc], eax
// 00679668  c3                   ret 
// library rbxgs/script\LuaMemory.cpp (function ?clearHeapMax@LuaAllocator@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaMemory.cpp
