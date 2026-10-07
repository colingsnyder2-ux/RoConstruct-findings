// roc 2009-06 006bee80  unit: RBX::Lua::LuaArguments  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006bee80
//
// 006bee80  83ec34               sub esp, 0x34
// 006bee83  a1fc2aa200           mov eax, dword ptr [0xa22afc]
// 006bee88  56                   push esi
// 006bee89  57                   push edi
// 006bee8a  8b7c2440             mov edi, dword ptr [esp + 0x40]
// 006bee8e  50                   push eax
// 006bee8f  6a01                 push 1
// 006bee91  57                   push edi
// 006bee92  e819bdffff           call 0x6babb0
// 006bee97  8b0df02aa200         mov ecx, dword ptr [0xa22af0]
// 006bee9d  51                   push ecx
// 006bee9e  6a02                 push 2
// 006beea0  57                   push edi
// 006beea1  8bf0                 mov esi, eax
// 006beea3  e808bdffff           call 0x6babb0
// 006beea8  83c418               add esp, 0x18
// 006beeab  50                   push eax
// 006beeac  8d542410             lea edx, [esp + 0x10]
// 006beeb0  52                   push edx
// 006beeb1  8bce                 mov ecx, esi
// 006beeb3  e8b8e5ffff           call 0x6bd470
// 006beeb8  83ec30               sub esp, 0x30
// 006beebb  8bf4                 mov esi, esp
// 006beebd  8d44243c             lea eax, [esp + 0x3c]
// 006beec1  89642438             mov dword ptr [esp + 0x38], esp
// 006beec5  50                   push eax
// 006beec6  8bce                 mov ecx, esi
// 006beec8  e8b3b0ddff           call 0x499f80
// 006beecd  d9442460             fld dword ptr [esp + 0x60]
// 006beed1  d95e24               fstp dword ptr [esi + 0x24]
// 006beed4  57                   push edi
// 006beed5  d9442468             fld dword ptr [esp + 0x68]
// 006beed9  d95e28               fstp dword ptr [esi + 0x28]
// 006beedc  d944246c             fld dword ptr [esp + 0x6c]
// 006beee0  d95e2c               fstp dword ptr [esi + 0x2c]
// 006beee3  e8a847f7ff           call 0x633690
// 006beee8  83c434               add esp, 0x34
// 006beeeb  5f                   pop edi
// 006beeec  b801000000           mov eax, 1
// 006beef1  5e                   pop esi
// 006beef2  83c434               add esp, 0x34
// 006beef5  c3                   ret 
// library rbxgs/script\LuaAtomicClasses.cpp (function ?on_add@CoordinateFrameBridge@Lua@RBX@@CAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaAtomicClasses.cpp
