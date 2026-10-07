// roc 2009-06 006563d0  unit: RBX::LaserTool  size: 9 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006563d0
//
// 006563d0  33c0                 xor eax, eax
// 006563d2  894108               mov dword ptr [ecx + 8], eax
// 006563d5  89410c               mov dword ptr [ecx + 0xc], eax
// 006563d8  c3                   ret 
// library rbxgs/script\LuaMemory.cpp (function ?clearHeapMax@LuaAllocator@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaMemory.cpp
