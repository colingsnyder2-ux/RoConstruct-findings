// roc 2008-06 0061dc70  unit: RBX::Lua::LuaArguments  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0061dc70
//
// 0061dc70  83ec34               sub esp, 0x34
// 0061dc73  a1c8b19500           mov eax, dword ptr [0x95b1c8]
// 0061dc78  56                   push esi
// 0061dc79  57                   push edi
// 0061dc7a  8b7c2440             mov edi, dword ptr [esp + 0x40]
// 0061dc7e  50                   push eax
// 0061dc7f  6a01                 push 1
// 0061dc81  57                   push edi
// 0061dc82  e82939ffff           call 0x6115b0
// 0061dc87  8b0dc0b19500         mov ecx, dword ptr [0x95b1c0]
// 0061dc8d  51                   push ecx
// 0061dc8e  6a02                 push 2
// 0061dc90  57                   push edi
// 0061dc91  8bf0                 mov esi, eax
// 0061dc93  e81839ffff           call 0x6115b0
// 0061dc98  83c418               add esp, 0x18
// 0061dc9b  50                   push eax
// 0061dc9c  8d542410             lea edx, [esp + 0x10]
// 0061dca0  52                   push edx
// 0061dca1  8bce                 mov ecx, esi
// 0061dca3  e898eaffff           call 0x61c740
// 0061dca8  83ec30               sub esp, 0x30
// 0061dcab  8bf4                 mov esi, esp
// 0061dcad  8d44243c             lea eax, [esp + 0x3c]
// 0061dcb1  89642438             mov dword ptr [esp + 0x38], esp
// 0061dcb5  50                   push eax
// 0061dcb6  8bce                 mov ecx, esi
// 0061dcb8  e86355efff           call 0x513220
// 0061dcbd  d9442460             fld dword ptr [esp + 0x60]
// 0061dcc1  d95e24               fstp dword ptr [esi + 0x24]
// 0061dcc4  57                   push edi
// 0061dcc5  d9442468             fld dword ptr [esp + 0x68]
// 0061dcc9  d95e28               fstp dword ptr [esi + 0x28]
// 0061dccc  d944246c             fld dword ptr [esp + 0x6c]
// 0061dcd0  d95e2c               fstp dword ptr [esi + 0x2c]
// 0061dcd3  e878aff8ff           call 0x5a8c50
// 0061dcd8  83c434               add esp, 0x34
// 0061dcdb  5f                   pop edi
// 0061dcdc  b801000000           mov eax, 1
// 0061dce1  5e                   pop esi
// 0061dce2  83c434               add esp, 0x34
// 0061dce5  c3                   ret 
// library rbxgs/script\LuaAtomicClasses.cpp (function ?on_add@CoordinateFrameBridge@Lua@RBX@@CAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaAtomicClasses.cpp
