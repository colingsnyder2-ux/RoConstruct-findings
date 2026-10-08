// roc 2012-06 006a2460  unit: std::D::DU?$char_traits::?$basic_istringstream  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 006a2460
//
// 006a2460  e89b91f8ff           call 0x62b600
// 006a2465  8b442404             mov eax, dword ptr [esp + 4]
// 006a2469  83ec08               sub esp, 8
// 006a246c  dd1c24               fstp qword ptr [esp]
// 006a246f  50                   push eax
// 006a2470  e83bfc1800           call 0x8320b0
// 006a2475  83c40c               add esp, 0xc
// 006a2478  b801000000           mov eax, 1
// 006a247d  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?tick@ScriptContext@RBX@@CAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
