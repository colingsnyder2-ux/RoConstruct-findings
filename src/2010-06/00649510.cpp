// roc 2010-06 00649510  unit: RBX::LaserTool  size: 9 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00649510
//
// 00649510  33c0                 xor eax, eax
// 00649512  894108               mov dword ptr [ecx + 8], eax
// 00649515  89410c               mov dword ptr [ecx + 0xc], eax
// 00649518  c3                   ret 
// library rbxgs/script\LuaMemory.cpp (function ?clearHeapMax@LuaAllocator@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaMemory.cpp
