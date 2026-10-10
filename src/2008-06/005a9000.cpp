// from server: 100% by tester
// roc 2007-03 00537020  unit: seg_00530000  size: 60 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00537020
//
// 00537020  51                   push ecx
// 00537021  56                   push esi
// 00537022  83ec30               sub esp, 0x30
// 00537025  8bf4                 mov esi, esp
// 00537027  8d442440             lea eax, [esp + 0x40]
// 0053702b  89642434             mov dword ptr [esp + 0x34], esp
// 0053702f  50                   push eax
// 00537030  8bce                 mov ecx, esi
// 00537032  e84979fcff           call 0x4fe980
// 00537037  d9442464             fld dword ptr [esp + 0x64]
// 0053703b  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 0053703f  d95e24               fstp dword ptr [esi + 0x24]
// 00537042  d9442468             fld dword ptr [esp + 0x68]
// 00537046  51                   push ecx
// 00537047  d95e28               fstp dword ptr [esi + 0x28]
// 0053704a  d9442470             fld dword ptr [esp + 0x70]
// 0053704e  d95e2c               fstp dword ptr [esi + 0x2c]
// 00537051  e8dafaffff           call 0x536b30
// 00537056  83c434               add esp, 0x34
// 00537059  5e                   pop esi
// 0053705a  59                   pop ecx
// 0053705b  c3                   ret 
// library rbxgs/script\LuaAtomicClasses.cpp (function ?pushCoordinateFrame@CoordinateFrameBridge@Lua@RBX@@SAXPAUlua_State@@VCoordinateFrame@G3D@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaAtomicClasses.cpp
