// roc 2009-06 00634840  unit: RBX::VScriptContext::?$FactoryProduct  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00634840
//
// 00634840  a1ec2aa200           mov eax, dword ptr [0xa22aec]
// 00634845  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00634849  50                   push eax
// 0063484a  6a01                 push 1
// 0063484c  51                   push ecx
// 0063484d  e85e630800           call 0x6babb0
// 00634852  83c40c               add esp, 0xc
// 00634855  33c0                 xor eax, eax
// 00634857  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_gc@?$Bridge@VCoordinateFrame@G3D@@$00@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
