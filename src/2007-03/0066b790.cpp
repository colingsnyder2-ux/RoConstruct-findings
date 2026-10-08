// roc 2007-03 0066b790  unit: seg_00660000  size: 14 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0066b790
//
// 0066b790  56                   push esi
// 0066b791  8bf1                 mov esi, ecx
// 0066b793  56                   push esi
// 0066b794  ff1514ef7700         call dword ptr [0x77ef14]
// 0066b79a  8bc6                 mov eax, esi
// 0066b79c  5e                   pop esi
// 0066b79d  c3                   ret 
// library rbxgs/script\LuaMemory.cpp (function ??0win32_mutex@pool@details@boost@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaMemory.cpp
