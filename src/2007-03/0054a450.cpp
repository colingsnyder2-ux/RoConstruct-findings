// roc 2007-03 0054a450  unit: seg_00540000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0054a450
//
// 0054a450  8b01                 mov eax, dword ptr [ecx]
// 0054a452  50                   push eax
// 0054a453  ff15f4ef7700         call dword ptr [0x77eff4]
// 0054a459  c3                   ret 
// library rbxgs/script\LuaMemory.cpp (function ??1?$guard@Vwin32_mutex@pool@details@boost@@@pool@details@boost@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaMemory.cpp
