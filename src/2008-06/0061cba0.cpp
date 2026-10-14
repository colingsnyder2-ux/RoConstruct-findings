// roc 2008-06 0061cba0  unit: RBX::Lua::LuaArguments  size: 85 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0061cba0
//
// 0061cba0  a1c0b19500           mov eax, dword ptr [0x95b1c0]
// 0061cba5  56                   push esi
// 0061cba6  57                   push edi
// 0061cba7  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0061cbab  50                   push eax
// 0061cbac  6a01                 push 1
// 0061cbae  57                   push edi
// 0061cbaf  e8fc49ffff           call 0x6115b0
// 0061cbb4  8b0dc0b19500         mov ecx, dword ptr [0x95b1c0]
// 0061cbba  51                   push ecx
// 0061cbbb  6a02                 push 2
// 0061cbbd  57                   push edi
// 0061cbbe  8bf0                 mov esi, eax
// 0061cbc0  e8eb49ffff           call 0x6115b0
// 0061cbc5  d94004               fld dword ptr [eax + 4]
// 0061cbc8  d84604               fadd dword ptr [esi + 4]
// 0061cbcb  83c40c               add esp, 0xc
// 0061cbce  d94008               fld dword ptr [eax + 8]
// 0061cbd1  8bcc                 mov ecx, esp
// 0061cbd3  d84608               fadd dword ptr [esi + 8]
// 0061cbd6  57                   push edi
// 0061cbd7  d900                 fld dword ptr [eax]
// 0061cbd9  d806                 fadd dword ptr [esi]
// 0061cbdb  d919                 fstp dword ptr [ecx]
// 0061cbdd  d9c9                 fxch st(1)
// 0061cbdf  d95904               fstp dword ptr [ecx + 4]
// 0061cbe2  d95908               fstp dword ptr [ecx + 8]
// 0061cbe5  e856c4f8ff           call 0x5a9040
// 0061cbea  83c410               add esp, 0x10
// 0061cbed  5f                   pop edi
// 0061cbee  b801000000           mov eax, 1
// 0061cbf3  5e                   pop esi
// 0061cbf4  c3                   ret 
// library rbxgs-dll/script\LuaAtomicClasses.cpp (function ?on_add@Vector3Bridge@Lua@RBX@@CAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /fp:fast
// roc-lib: rbxgs-dll script/LuaAtomicClasses.cpp
