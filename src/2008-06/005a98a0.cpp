// roc 2008-06 005a98a0  unit: RBX::VScriptContext::?$FactoryProduct  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005a98a0
//
// 005a98a0  a1bcb19500           mov eax, dword ptr [0x95b1bc]
// 005a98a5  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005a98a9  50                   push eax
// 005a98aa  6a01                 push 1
// 005a98ac  51                   push ecx
// 005a98ad  e8fe7c0600           call 0x6115b0
// 005a98b2  83c40c               add esp, 0xc
// 005a98b5  33c0                 xor eax, eax
// 005a98b7  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_gc@?$Bridge@VCoordinateFrame@G3D@@$00@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
