// roc 2009-06 006bd4c0  unit: RBX::Lua::LuaArguments  size: 79 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006bd4c0
//
// 006bd4c0  83ec0c               sub esp, 0xc
// 006bd4c3  8b442414             mov eax, dword ptr [esp + 0x14]
// 006bd4c7  d94124               fld dword ptr [ecx + 0x24]
// 006bd4ca  d820                 fsub dword ptr [eax]
// 006bd4cc  56                   push esi
// 006bd4cd  8b742414             mov esi, dword ptr [esp + 0x14]
// 006bd4d1  51                   push ecx
// 006bd4d2  d95c2408             fstp dword ptr [esp + 8]
// 006bd4d6  d94128               fld dword ptr [ecx + 0x28]
// 006bd4d9  d86004               fsub dword ptr [eax + 4]
// 006bd4dc  d95c240c             fstp dword ptr [esp + 0xc]
// 006bd4e0  d9412c               fld dword ptr [ecx + 0x2c]
// 006bd4e3  8bce                 mov ecx, esi
// 006bd4e5  d86008               fsub dword ptr [eax + 8]
// 006bd4e8  d95c2410             fstp dword ptr [esp + 0x10]
// 006bd4ec  e88fcaddff           call 0x499f80
// 006bd4f1  d9442404             fld dword ptr [esp + 4]
// 006bd4f5  8bc6                 mov eax, esi
// 006bd4f7  d95e24               fstp dword ptr [esi + 0x24]
// 006bd4fa  d9442408             fld dword ptr [esp + 8]
// 006bd4fe  d95e28               fstp dword ptr [esi + 0x28]
// 006bd501  d944240c             fld dword ptr [esp + 0xc]
// 006bd505  d95e2c               fstp dword ptr [esi + 0x2c]
// 006bd508  5e                   pop esi
// 006bd509  83c40c               add esp, 0xc
// 006bd50c  c20800               ret 8
// library rbxgs/script\LuaAtomicClasses.cpp (function ??GCoordinateFrame@G3D@@QBE?AV01@ABVVector3@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaAtomicClasses.cpp
