// roc 2007-08 00534d10  unit: std::logic_error  size: 60 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00534d10
//
// 00534d10  51                   push ecx
// 00534d11  56                   push esi
// 00534d12  83ec30               sub esp, 0x30
// 00534d15  8bf4                 mov esi, esp
// 00534d17  8d442440             lea eax, [esp + 0x40]
// 00534d1b  89642434             mov dword ptr [esp + 0x34], esp
// 00534d1f  50                   push eax
// 00534d20  8bce                 mov ecx, esi
// 00534d22  e8a948fdff           call 0x5095d0
// 00534d27  d9442464             fld dword ptr [esp + 0x64]
// 00534d2b  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 00534d2f  d95e24               fstp dword ptr [esi + 0x24]
// 00534d32  d9442468             fld dword ptr [esp + 0x68]
// 00534d36  51                   push ecx
// 00534d37  d95e28               fstp dword ptr [esi + 0x28]
// 00534d3a  d9442470             fld dword ptr [esp + 0x70]
// 00534d3e  d95e2c               fstp dword ptr [esi + 0x2c]
// 00534d41  e83afaffff           call 0x534780
// 00534d46  83c434               add esp, 0x34
// 00534d49  5e                   pop esi
// 00534d4a  59                   pop ecx
// 00534d4b  c3                   ret 
// library rbxgs/script\LuaAtomicClasses.cpp (function ?pushCoordinateFrame@CoordinateFrameBridge@Lua@RBX@@SAXPAUlua_State@@VCoordinateFrame@G3D@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaAtomicClasses.cpp
