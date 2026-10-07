// roc 2008-06 005a9000  unit: RBX::VScriptContext::?$FactoryProduct  size: 60 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005a9000
//
// 005a9000  51                   push ecx
// 005a9001  56                   push esi
// 005a9002  83ec30               sub esp, 0x30
// 005a9005  8bf4                 mov esi, esp
// 005a9007  8d442440             lea eax, [esp + 0x40]
// 005a900b  89642434             mov dword ptr [esp + 0x34], esp
// 005a900f  50                   push eax
// 005a9010  8bce                 mov ecx, esi
// 005a9012  e809a2f6ff           call 0x513220
// 005a9017  d9442464             fld dword ptr [esp + 0x64]
// 005a901b  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 005a901f  d95e24               fstp dword ptr [esi + 0x24]
// 005a9022  d9442468             fld dword ptr [esp + 0x68]
// 005a9026  51                   push ecx
// 005a9027  d95e28               fstp dword ptr [esi + 0x28]
// 005a902a  d9442470             fld dword ptr [esp + 0x70]
// 005a902e  d95e2c               fstp dword ptr [esi + 0x2c]
// 005a9031  e81afcffff           call 0x5a8c50
// 005a9036  83c434               add esp, 0x34
// 005a9039  5e                   pop esi
// 005a903a  59                   pop ecx
// 005a903b  c3                   ret 
// library rbxgs/script\LuaAtomicClasses.cpp (function ?pushCoordinateFrame@CoordinateFrameBridge@Lua@RBX@@SAXPAUlua_State@@VCoordinateFrame@G3D@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaAtomicClasses.cpp
