// roc 2007-08 005c26f0  unit: RBX::Lua::LuaArguments  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005c26f0
//
// 005c26f0  83ec34               sub esp, 0x34
// 005c26f3  a180be8a00           mov eax, dword ptr [0x8abe80]
// 005c26f8  56                   push esi
// 005c26f9  57                   push edi
// 005c26fa  8b7c2440             mov edi, dword ptr [esp + 0x40]
// 005c26fe  50                   push eax
// 005c26ff  6a01                 push 1
// 005c2701  57                   push edi
// 005c2702  e839cbffff           call 0x5bf240
// 005c2707  8b0d78be8a00         mov ecx, dword ptr [0x8abe78]
// 005c270d  51                   push ecx
// 005c270e  6a02                 push 2
// 005c2710  57                   push edi
// 005c2711  8bf0                 mov esi, eax
// 005c2713  e828cbffff           call 0x5bf240
// 005c2718  83c418               add esp, 0x18
// 005c271b  50                   push eax
// 005c271c  8d542410             lea edx, [esp + 0x10]
// 005c2720  52                   push edx
// 005c2721  8bce                 mov ecx, esi
// 005c2723  e858eeffff           call 0x5c1580
// 005c2728  83ec30               sub esp, 0x30
// 005c272b  8bf4                 mov esi, esp
// 005c272d  8d44243c             lea eax, [esp + 0x3c]
// 005c2731  89642438             mov dword ptr [esp + 0x38], esp
// 005c2735  50                   push eax
// 005c2736  8bce                 mov ecx, esi
// 005c2738  e8936ef4ff           call 0x5095d0
// 005c273d  d9442460             fld dword ptr [esp + 0x60]
// 005c2741  d95e24               fstp dword ptr [esi + 0x24]
// 005c2744  57                   push edi
// 005c2745  d9442468             fld dword ptr [esp + 0x68]
// 005c2749  d95e28               fstp dword ptr [esi + 0x28]
// 005c274c  d944246c             fld dword ptr [esp + 0x6c]
// 005c2750  d95e2c               fstp dword ptr [esi + 0x2c]
// 005c2753  e82820f7ff           call 0x534780
// 005c2758  83c434               add esp, 0x34
// 005c275b  5f                   pop edi
// 005c275c  b801000000           mov eax, 1
// 005c2761  5e                   pop esi
// 005c2762  83c434               add esp, 0x34
// 005c2765  c3                   ret 
// library rbxgs/script\LuaAtomicClasses.cpp (function ?on_add@CoordinateFrameBridge@Lua@RBX@@CAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaAtomicClasses.cpp
