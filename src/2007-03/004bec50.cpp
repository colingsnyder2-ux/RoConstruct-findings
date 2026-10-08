// roc 2007-03 004bec50  unit: seg_004b0000  size: 14 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004bec50
//
// 004bec50  56                   push esi
// 004bec51  8bf1                 mov esi, ecx
// 004bec53  56                   push esi
// 004bec54  ff15c8d27700         call dword ptr [0x77d2c8]
// 004bec5a  8bc6                 mov eax, esi
// 004bec5c  5e                   pop esi
// 004bec5d  c3                   ret 
// library rbxgs/script\LuaMemory.cpp (function ??0win32_mutex@pool@details@boost@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaMemory.cpp
