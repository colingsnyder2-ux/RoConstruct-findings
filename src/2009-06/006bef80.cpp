// roc 2009-06 006bef80  unit: RBX::Lua::LuaArguments  size: 100 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006bef80
//
// 006bef80  83ec34               sub esp, 0x34
// 006bef83  a1fc2aa200           mov eax, dword ptr [0xa22afc]
// 006bef88  56                   push esi
// 006bef89  57                   push edi
// 006bef8a  8b7c2440             mov edi, dword ptr [esp + 0x40]
// 006bef8e  50                   push eax
// 006bef8f  6a01                 push 1
// 006bef91  57                   push edi
// 006bef92  e819bcffff           call 0x6babb0
// 006bef97  83c40c               add esp, 0xc
// 006bef9a  8d4c240c             lea ecx, [esp + 0xc]
// 006bef9e  51                   push ecx
// 006bef9f  8bc8                 mov ecx, eax
// 006befa1  e86a09deff           call 0x49f910
// 006befa6  83ec30               sub esp, 0x30
// 006befa9  8bf4                 mov esi, esp
// 006befab  8d54243c             lea edx, [esp + 0x3c]
// 006befaf  89642438             mov dword ptr [esp + 0x38], esp
// 006befb3  52                   push edx
// 006befb4  8bce                 mov ecx, esi
// 006befb6  e8c5afddff           call 0x499f80
// 006befbb  d9442460             fld dword ptr [esp + 0x60]
// 006befbf  d95e24               fstp dword ptr [esi + 0x24]
// 006befc2  57                   push edi
// 006befc3  d9442468             fld dword ptr [esp + 0x68]
// 006befc7  d95e28               fstp dword ptr [esi + 0x28]
// 006befca  d944246c             fld dword ptr [esp + 0x6c]
// 006befce  d95e2c               fstp dword ptr [esi + 0x2c]
// 006befd1  e8ba46f7ff           call 0x633690
// 006befd6  83c434               add esp, 0x34
// 006befd9  5f                   pop edi
// 006befda  b801000000           mov eax, 1
// 006befdf  5e                   pop esi
// 006befe0  83c434               add esp, 0x34
// 006befe3  c3                   ret 
// library rbxgs/script\LuaAtomicClasses.cpp (function ?on_inverse@CoordinateFrameBridge@Lua@RBX@@CAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaAtomicClasses.cpp
