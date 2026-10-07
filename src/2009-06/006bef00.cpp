// roc 2009-06 006bef00  unit: RBX::Lua::LuaArguments  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006bef00
//
// 006bef00  83ec34               sub esp, 0x34
// 006bef03  a1fc2aa200           mov eax, dword ptr [0xa22afc]
// 006bef08  56                   push esi
// 006bef09  57                   push edi
// 006bef0a  8b7c2440             mov edi, dword ptr [esp + 0x40]
// 006bef0e  50                   push eax
// 006bef0f  6a01                 push 1
// 006bef11  57                   push edi
// 006bef12  e899bcffff           call 0x6babb0
// 006bef17  8b0df02aa200         mov ecx, dword ptr [0xa22af0]
// 006bef1d  51                   push ecx
// 006bef1e  6a02                 push 2
// 006bef20  57                   push edi
// 006bef21  8bf0                 mov esi, eax
// 006bef23  e888bcffff           call 0x6babb0
// 006bef28  83c418               add esp, 0x18
// 006bef2b  50                   push eax
// 006bef2c  8d542410             lea edx, [esp + 0x10]
// 006bef30  52                   push edx
// 006bef31  8bce                 mov ecx, esi
// 006bef33  e888e5ffff           call 0x6bd4c0
// 006bef38  83ec30               sub esp, 0x30
// 006bef3b  8bf4                 mov esi, esp
// 006bef3d  8d44243c             lea eax, [esp + 0x3c]
// 006bef41  89642438             mov dword ptr [esp + 0x38], esp
// 006bef45  50                   push eax
// 006bef46  8bce                 mov ecx, esi
// 006bef48  e833b0ddff           call 0x499f80
// 006bef4d  d9442460             fld dword ptr [esp + 0x60]
// 006bef51  d95e24               fstp dword ptr [esi + 0x24]
// 006bef54  57                   push edi
// 006bef55  d9442468             fld dword ptr [esp + 0x68]
// 006bef59  d95e28               fstp dword ptr [esi + 0x28]
// 006bef5c  d944246c             fld dword ptr [esp + 0x6c]
// 006bef60  d95e2c               fstp dword ptr [esi + 0x2c]
// 006bef63  e82847f7ff           call 0x633690
// 006bef68  83c434               add esp, 0x34
// 006bef6b  5f                   pop edi
// 006bef6c  b801000000           mov eax, 1
// 006bef71  5e                   pop esi
// 006bef72  83c434               add esp, 0x34
// 006bef75  c3                   ret 
// library rbxgs/script\LuaAtomicClasses.cpp (function ?on_add@CoordinateFrameBridge@Lua@RBX@@CAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaAtomicClasses.cpp
