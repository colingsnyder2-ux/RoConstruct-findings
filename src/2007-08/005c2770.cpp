// roc 2007-08 005c2770  unit: RBX::Lua::LuaArguments  size: 100 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005c2770
//
// 005c2770  83ec34               sub esp, 0x34
// 005c2773  a180be8a00           mov eax, dword ptr [0x8abe80]
// 005c2778  56                   push esi
// 005c2779  57                   push edi
// 005c277a  8b7c2440             mov edi, dword ptr [esp + 0x40]
// 005c277e  50                   push eax
// 005c277f  6a01                 push 1
// 005c2781  57                   push edi
// 005c2782  e8b9caffff           call 0x5bf240
// 005c2787  83c40c               add esp, 0xc
// 005c278a  8d4c240c             lea ecx, [esp + 0xc]
// 005c278e  51                   push ecx
// 005c278f  8bc8                 mov ecx, eax
// 005c2791  e81a29ebff           call 0x4750b0
// 005c2796  83ec30               sub esp, 0x30
// 005c2799  8bf4                 mov esi, esp
// 005c279b  8d54243c             lea edx, [esp + 0x3c]
// 005c279f  89642438             mov dword ptr [esp + 0x38], esp
// 005c27a3  52                   push edx
// 005c27a4  8bce                 mov ecx, esi
// 005c27a6  e8256ef4ff           call 0x5095d0
// 005c27ab  d9442460             fld dword ptr [esp + 0x60]
// 005c27af  d95e24               fstp dword ptr [esi + 0x24]
// 005c27b2  57                   push edi
// 005c27b3  d9442468             fld dword ptr [esp + 0x68]
// 005c27b7  d95e28               fstp dword ptr [esi + 0x28]
// 005c27ba  d944246c             fld dword ptr [esp + 0x6c]
// 005c27be  d95e2c               fstp dword ptr [esi + 0x2c]
// 005c27c1  e8ba1ff7ff           call 0x534780
// 005c27c6  83c434               add esp, 0x34
// 005c27c9  5f                   pop edi
// 005c27ca  b801000000           mov eax, 1
// 005c27cf  5e                   pop esi
// 005c27d0  83c434               add esp, 0x34
// 005c27d3  c3                   ret 
// library rbxgs/script\LuaAtomicClasses.cpp (function ?on_inverse@CoordinateFrameBridge@Lua@RBX@@CAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaAtomicClasses.cpp
