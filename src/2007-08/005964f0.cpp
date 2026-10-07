// roc 2007-08 005964f0  unit: RBX::LaserTool  size: 9 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005964f0
//
// 005964f0  33c0                 xor eax, eax
// 005964f2  894108               mov dword ptr [ecx + 8], eax
// 005964f5  89410c               mov dword ptr [ecx + 0xc], eax
// 005964f8  c3                   ret 
// library rbxgs/script\LuaMemory.cpp (function ?clearHeapMax@LuaAllocator@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaMemory.cpp
