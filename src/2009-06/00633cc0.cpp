// roc 2009-06 00633cc0  unit: RBX::VScriptContext::?$FactoryProduct  size: 60 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00633cc0
//
// 00633cc0  51                   push ecx
// 00633cc1  56                   push esi
// 00633cc2  83ec30               sub esp, 0x30
// 00633cc5  8bf4                 mov esi, esp
// 00633cc7  8d442440             lea eax, [esp + 0x40]
// 00633ccb  89642434             mov dword ptr [esp + 0x34], esp
// 00633ccf  50                   push eax
// 00633cd0  8bce                 mov ecx, esi
// 00633cd2  e8a962e6ff           call 0x499f80
// 00633cd7  d9442464             fld dword ptr [esp + 0x64]
// 00633cdb  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 00633cdf  d95e24               fstp dword ptr [esi + 0x24]
// 00633ce2  d9442468             fld dword ptr [esp + 0x68]
// 00633ce6  51                   push ecx
// 00633ce7  d95e28               fstp dword ptr [esi + 0x28]
// 00633cea  d9442470             fld dword ptr [esp + 0x70]
// 00633cee  d95e2c               fstp dword ptr [esi + 0x2c]
// 00633cf1  e89af9ffff           call 0x633690
// 00633cf6  83c434               add esp, 0x34
// 00633cf9  5e                   pop esi
// 00633cfa  59                   pop ecx
// 00633cfb  c3                   ret 
// library rbxgs/script\LuaAtomicClasses.cpp (function ?pushCoordinateFrame@CoordinateFrameBridge@Lua@RBX@@SAXPAUlua_State@@VCoordinateFrame@G3D@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaAtomicClasses.cpp
