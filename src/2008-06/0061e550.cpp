// roc 2008-06 0061e550  unit: RBX::Lua::LuaArguments  size: 159 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0061e550
//
// 0061e550  83ec58               sub esp, 0x58
// 0061e553  53                   push ebx
// 0061e554  56                   push esi
// 0061e555  57                   push edi
// 0061e556  8d4c2434             lea ecx, [esp + 0x34]
// 0061e55a  e8719de5ff           call 0x4782d0
// 0061e55f  8b5c2468             mov ebx, dword ptr [esp + 0x68]
// 0061e563  6a03                 push 3
// 0061e565  53                   push ebx
// 0061e566  e81532ffff           call 0x611780
// 0061e56b  d95c2404             fstp dword ptr [esp + 4]
// 0061e56f  83c404               add esp, 4
// 0061e572  6a02                 push 2
// 0061e574  53                   push ebx
// 0061e575  e80632ffff           call 0x611780
// 0061e57a  d95c2404             fstp dword ptr [esp + 4]
// 0061e57e  83c404               add esp, 4
// 0061e581  6a01                 push 1
// 0061e583  53                   push ebx
// 0061e584  e8f731ffff           call 0x611780
// 0061e589  d95c2404             fstp dword ptr [esp + 4]
// 0061e58d  83c404               add esp, 4
// 0061e590  8d44241c             lea eax, [esp + 0x1c]
// 0061e594  50                   push eax
// 0061e595  e82656efff           call 0x513bc0
// 0061e59a  8bf0                 mov esi, eax
// 0061e59c  83ec20               sub esp, 0x20
// 0061e59f  b909000000           mov ecx, 9
// 0061e5a4  8d7c2464             lea edi, [esp + 0x64]
// 0061e5a8  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 0061e5aa  8bf4                 mov esi, esp
// 0061e5ac  8d4c2464             lea ecx, [esp + 0x64]
// 0061e5b0  8964243c             mov dword ptr [esp + 0x3c], esp
// 0061e5b4  51                   push ecx
// 0061e5b5  8bce                 mov ecx, esi
// 0061e5b7  e8644cefff           call 0x513220
// 0061e5bc  53                   push ebx
// 0061e5bd  d984248c000000       fld dword ptr [esp + 0x8c]
// 0061e5c4  d95e24               fstp dword ptr [esi + 0x24]
// 0061e5c7  d9842490000000       fld dword ptr [esp + 0x90]
// 0061e5ce  d95e28               fstp dword ptr [esi + 0x28]
// 0061e5d1  d9842494000000       fld dword ptr [esp + 0x94]
// 0061e5d8  d95e2c               fstp dword ptr [esi + 0x2c]
// 0061e5db  e870a6f8ff           call 0x5a8c50
// 0061e5e0  83c434               add esp, 0x34
// 0061e5e3  5f                   pop edi
// 0061e5e4  5e                   pop esi
// 0061e5e5  b801000000           mov eax, 1
// 0061e5ea  5b                   pop ebx
// 0061e5eb  83c458               add esp, 0x58
// 0061e5ee  c3                   ret 
// library rbxgs-dll/script\LuaAtomicClasses.cpp (function ?fromEulerAnglesXYZ@CoordinateFrameBridge@Lua@RBX@@CAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /fp:fast
// roc-lib: rbxgs-dll script/LuaAtomicClasses.cpp
