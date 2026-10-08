// roc 2007-03 00537920  unit: seg_00530000  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00537920
//
// 00537920  a14c828a00           mov eax, dword ptr [0x8a824c]
// 00537925  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00537929  50                   push eax
// 0053792a  6a01                 push 1
// 0053792c  51                   push ecx
// 0053792d  e87e2b0800           call 0x5ba4b0
// 00537932  83c40c               add esp, 0xc
// 00537935  33c0                 xor eax, eax
// 00537937  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_gc@?$Bridge@VCoordinateFrame@G3D@@$00@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
