// roc 2007-08 005c2670  unit: RBX::Lua::LuaArguments  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005c2670
//
// 005c2670  83ec34               sub esp, 0x34
// 005c2673  a180be8a00           mov eax, dword ptr [0x8abe80]
// 005c2678  56                   push esi
// 005c2679  57                   push edi
// 005c267a  8b7c2440             mov edi, dword ptr [esp + 0x40]
// 005c267e  50                   push eax
// 005c267f  6a01                 push 1
// 005c2681  57                   push edi
// 005c2682  e8b9cbffff           call 0x5bf240
// 005c2687  8b0d78be8a00         mov ecx, dword ptr [0x8abe78]
// 005c268d  51                   push ecx
// 005c268e  6a02                 push 2
// 005c2690  57                   push edi
// 005c2691  8bf0                 mov esi, eax
// 005c2693  e8a8cbffff           call 0x5bf240
// 005c2698  83c418               add esp, 0x18
// 005c269b  50                   push eax
// 005c269c  8d542410             lea edx, [esp + 0x10]
// 005c26a0  52                   push edx
// 005c26a1  8bce                 mov ecx, esi
// 005c26a3  e888eeffff           call 0x5c1530
// 005c26a8  83ec30               sub esp, 0x30
// 005c26ab  8bf4                 mov esi, esp
// 005c26ad  8d44243c             lea eax, [esp + 0x3c]
// 005c26b1  89642438             mov dword ptr [esp + 0x38], esp
// 005c26b5  50                   push eax
// 005c26b6  8bce                 mov ecx, esi
// 005c26b8  e8136ff4ff           call 0x5095d0
// 005c26bd  d9442460             fld dword ptr [esp + 0x60]
// 005c26c1  d95e24               fstp dword ptr [esi + 0x24]
// 005c26c4  57                   push edi
// 005c26c5  d9442468             fld dword ptr [esp + 0x68]
// 005c26c9  d95e28               fstp dword ptr [esi + 0x28]
// 005c26cc  d944246c             fld dword ptr [esp + 0x6c]
// 005c26d0  d95e2c               fstp dword ptr [esi + 0x2c]
// 005c26d3  e8a820f7ff           call 0x534780
// 005c26d8  83c434               add esp, 0x34
// 005c26db  5f                   pop edi
// 005c26dc  b801000000           mov eax, 1
// 005c26e1  5e                   pop esi
// 005c26e2  83c434               add esp, 0x34
// 005c26e5  c3                   ret 
// library rbxgs/script\LuaAtomicClasses.cpp (function ?on_add@CoordinateFrameBridge@Lua@RBX@@CAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaAtomicClasses.cpp
