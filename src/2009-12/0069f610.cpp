// roc 2009-12 0069f610  unit: std::strstream  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0069f610
//
// 0069f610  a1642bb600           mov eax, dword ptr [0xb62b64]
// 0069f615  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0069f619  50                   push eax
// 0069f61a  6a01                 push 1
// 0069f61c  51                   push ecx
// 0069f61d  e83eb00e00           call 0x78a660
// 0069f622  83c40c               add esp, 0xc
// 0069f625  33c0                 xor eax, eax
// 0069f627  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_gc@?$Bridge@VCoordinateFrame@G3D@@$00@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
