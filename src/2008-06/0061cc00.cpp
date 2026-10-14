// roc 2008-06 0061cc00  unit: RBX::Lua::LuaArguments  size: 85 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0061cc00
//
// 0061cc00  a1c0b19500           mov eax, dword ptr [0x95b1c0]
// 0061cc05  56                   push esi
// 0061cc06  57                   push edi
// 0061cc07  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0061cc0b  50                   push eax
// 0061cc0c  6a01                 push 1
// 0061cc0e  57                   push edi
// 0061cc0f  e89c49ffff           call 0x6115b0
// 0061cc14  8b0dc0b19500         mov ecx, dword ptr [0x95b1c0]
// 0061cc1a  51                   push ecx
// 0061cc1b  6a02                 push 2
// 0061cc1d  57                   push edi
// 0061cc1e  8bf0                 mov esi, eax
// 0061cc20  e88b49ffff           call 0x6115b0
// 0061cc25  d94604               fld dword ptr [esi + 4]
// 0061cc28  d86004               fsub dword ptr [eax + 4]
// 0061cc2b  83c40c               add esp, 0xc
// 0061cc2e  d94608               fld dword ptr [esi + 8]
// 0061cc31  8bcc                 mov ecx, esp
// 0061cc33  d86008               fsub dword ptr [eax + 8]
// 0061cc36  57                   push edi
// 0061cc37  d906                 fld dword ptr [esi]
// 0061cc39  d820                 fsub dword ptr [eax]
// 0061cc3b  d919                 fstp dword ptr [ecx]
// 0061cc3d  d9c9                 fxch st(1)
// 0061cc3f  d95904               fstp dword ptr [ecx + 4]
// 0061cc42  d95908               fstp dword ptr [ecx + 8]
// 0061cc45  e8f6c3f8ff           call 0x5a9040
// 0061cc4a  83c410               add esp, 0x10
// 0061cc4d  5f                   pop edi
// 0061cc4e  b801000000           mov eax, 1
// 0061cc53  5e                   pop esi
// 0061cc54  c3                   ret 
// library rbxgs-dll/script\LuaAtomicClasses.cpp (function ?on_sub@Vector3Bridge@Lua@RBX@@CAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /fp:fast
// roc-lib: rbxgs-dll script/LuaAtomicClasses.cpp
