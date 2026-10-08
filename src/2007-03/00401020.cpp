// roc 2007-03 00401020  unit: seg_00400000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00401020
//
// 00401020  8b01                 mov eax, dword ptr [ecx]
// 00401022  50                   push eax
// 00401023  ff1588ea7700         call dword ptr [0x77ea88]
// 00401029  c3                   ret 
// library rbxgs/script\LuaMemory.cpp (function ??1?$guard@Vwin32_mutex@pool@details@boost@@@pool@details@boost@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaMemory.cpp
