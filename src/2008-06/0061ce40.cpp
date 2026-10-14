// roc 2008-06 0061ce40  unit: RBX::Lua::LuaArguments  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0061ce40
//
// 0061ce40  a1c0b19500           mov eax, dword ptr [0x95b1c0]
// 0061ce45  56                   push esi
// 0061ce46  8b742408             mov esi, dword ptr [esp + 8]
// 0061ce4a  50                   push eax
// 0061ce4b  6a01                 push 1
// 0061ce4d  56                   push esi
// 0061ce4e  e85d47ffff           call 0x6115b0
// 0061ce53  d94004               fld dword ptr [eax + 4]
// 0061ce56  d9e0                 fchs 
// 0061ce58  8bcc                 mov ecx, esp
// 0061ce5a  d94008               fld dword ptr [eax + 8]
// 0061ce5d  56                   push esi
// 0061ce5e  d9e0                 fchs 
// 0061ce60  d900                 fld dword ptr [eax]
// 0061ce62  d9e0                 fchs 
// 0061ce64  d919                 fstp dword ptr [ecx]
// 0061ce66  d9c9                 fxch st(1)
// 0061ce68  d95904               fstp dword ptr [ecx + 4]
// 0061ce6b  d95908               fstp dword ptr [ecx + 8]
// 0061ce6e  e8cdc1f8ff           call 0x5a9040
// 0061ce73  83c410               add esp, 0x10
// 0061ce76  b801000000           mov eax, 1
// 0061ce7b  5e                   pop esi
// 0061ce7c  c3                   ret 
// library rbxgs-dll/script\LuaAtomicClasses.cpp (function ?on_unm@Vector3Bridge@Lua@RBX@@CAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /fp:fast
// roc-lib: rbxgs-dll script/LuaAtomicClasses.cpp
