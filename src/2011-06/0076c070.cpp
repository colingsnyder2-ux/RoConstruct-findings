// roc 2011-06 0076c070  unit: seg_00760000  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0076c070
//
// 0076c070  a1d4efc800           mov eax, dword ptr [0xc8efd4]
// 0076c075  56                   push esi
// 0076c076  8b742408             mov esi, dword ptr [esp + 8]
// 0076c07a  50                   push eax
// 0076c07b  6a01                 push 1
// 0076c07d  56                   push esi
// 0076c07e  e8fd7fffff           call 0x764080
// 0076c083  56                   push esi
// 0076c084  50                   push eax
// 0076c085  e80652efff           call 0x661290
// 0076c08a  83c414               add esp, 0x14
// 0076c08d  5e                   pop esi
// 0076c08e  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_tostring@?$Bridge@VCoordinateFrame@G3D@@$00@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
