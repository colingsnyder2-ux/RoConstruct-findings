// roc 2007-08 005c1530  unit: RBX::Lua::LuaArguments  size: 79 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005c1530
//
// 005c1530  83ec0c               sub esp, 0xc
// 005c1533  8b442414             mov eax, dword ptr [esp + 0x14]
// 005c1537  d94124               fld dword ptr [ecx + 0x24]
// 005c153a  d800                 fadd dword ptr [eax]
// 005c153c  56                   push esi
// 005c153d  8b742414             mov esi, dword ptr [esp + 0x14]
// 005c1541  51                   push ecx
// 005c1542  d95c2408             fstp dword ptr [esp + 8]
// 005c1546  d94128               fld dword ptr [ecx + 0x28]
// 005c1549  d84004               fadd dword ptr [eax + 4]
// 005c154c  d95c240c             fstp dword ptr [esp + 0xc]
// 005c1550  d9412c               fld dword ptr [ecx + 0x2c]
// 005c1553  8bce                 mov ecx, esi
// 005c1555  d84008               fadd dword ptr [eax + 8]
// 005c1558  d95c2410             fstp dword ptr [esp + 0x10]
// 005c155c  e86f80f4ff           call 0x5095d0
// 005c1561  d9442404             fld dword ptr [esp + 4]
// 005c1565  8bc6                 mov eax, esi
// 005c1567  d95e24               fstp dword ptr [esi + 0x24]
// 005c156a  d9442408             fld dword ptr [esp + 8]
// 005c156e  d95e28               fstp dword ptr [esi + 0x28]
// 005c1571  d944240c             fld dword ptr [esp + 0xc]
// 005c1575  d95e2c               fstp dword ptr [esi + 0x2c]
// 005c1578  5e                   pop esi
// 005c1579  83c40c               add esp, 0xc
// 005c157c  c20800               ret 8
// library rbxgs/script\LuaAtomicClasses.cpp (function ??HCoordinateFrame@G3D@@QBE?AV01@ABVVector3@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaAtomicClasses.cpp
