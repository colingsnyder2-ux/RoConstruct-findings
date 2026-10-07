// roc 2008-06 0061dbf0  unit: RBX::Lua::LuaArguments  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0061dbf0
//
// 0061dbf0  83ec34               sub esp, 0x34
// 0061dbf3  a1c8b19500           mov eax, dword ptr [0x95b1c8]
// 0061dbf8  56                   push esi
// 0061dbf9  57                   push edi
// 0061dbfa  8b7c2440             mov edi, dword ptr [esp + 0x40]
// 0061dbfe  50                   push eax
// 0061dbff  6a01                 push 1
// 0061dc01  57                   push edi
// 0061dc02  e8a939ffff           call 0x6115b0
// 0061dc07  8b0dc0b19500         mov ecx, dword ptr [0x95b1c0]
// 0061dc0d  51                   push ecx
// 0061dc0e  6a02                 push 2
// 0061dc10  57                   push edi
// 0061dc11  8bf0                 mov esi, eax
// 0061dc13  e89839ffff           call 0x6115b0
// 0061dc18  83c418               add esp, 0x18
// 0061dc1b  50                   push eax
// 0061dc1c  8d542410             lea edx, [esp + 0x10]
// 0061dc20  52                   push edx
// 0061dc21  8bce                 mov ecx, esi
// 0061dc23  e8c8eaffff           call 0x61c6f0
// 0061dc28  83ec30               sub esp, 0x30
// 0061dc2b  8bf4                 mov esi, esp
// 0061dc2d  8d44243c             lea eax, [esp + 0x3c]
// 0061dc31  89642438             mov dword ptr [esp + 0x38], esp
// 0061dc35  50                   push eax
// 0061dc36  8bce                 mov ecx, esi
// 0061dc38  e8e355efff           call 0x513220
// 0061dc3d  d9442460             fld dword ptr [esp + 0x60]
// 0061dc41  d95e24               fstp dword ptr [esi + 0x24]
// 0061dc44  57                   push edi
// 0061dc45  d9442468             fld dword ptr [esp + 0x68]
// 0061dc49  d95e28               fstp dword ptr [esi + 0x28]
// 0061dc4c  d944246c             fld dword ptr [esp + 0x6c]
// 0061dc50  d95e2c               fstp dword ptr [esi + 0x2c]
// 0061dc53  e8f8aff8ff           call 0x5a8c50
// 0061dc58  83c434               add esp, 0x34
// 0061dc5b  5f                   pop edi
// 0061dc5c  b801000000           mov eax, 1
// 0061dc61  5e                   pop esi
// 0061dc62  83c434               add esp, 0x34
// 0061dc65  c3                   ret 
// library rbxgs/script\LuaAtomicClasses.cpp (function ?on_add@CoordinateFrameBridge@Lua@RBX@@CAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaAtomicClasses.cpp
