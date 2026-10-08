// roc 2008-06 005a9600  unit: RBX::VScriptContext::?$FactoryProduct  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005a9600
//
// 005a9600  a1c0b19500           mov eax, dword ptr [0x95b1c0]
// 005a9605  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005a9609  50                   push eax
// 005a960a  6a01                 push 1
// 005a960c  51                   push ecx
// 005a960d  e89e7f0600           call 0x6115b0
// 005a9612  83c40c               add esp, 0xc
// 005a9615  33c0                 xor eax, eax
// 005a9617  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_gc@?$Bridge@VCoordinateFrame@G3D@@$00@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
