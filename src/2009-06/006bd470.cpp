// roc 2009-06 006bd470  unit: RBX::Lua::LuaArguments  size: 79 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006bd470
//
// 006bd470  83ec0c               sub esp, 0xc
// 006bd473  8b442414             mov eax, dword ptr [esp + 0x14]
// 006bd477  d94124               fld dword ptr [ecx + 0x24]
// 006bd47a  d800                 fadd dword ptr [eax]
// 006bd47c  56                   push esi
// 006bd47d  8b742414             mov esi, dword ptr [esp + 0x14]
// 006bd481  51                   push ecx
// 006bd482  d95c2408             fstp dword ptr [esp + 8]
// 006bd486  d94128               fld dword ptr [ecx + 0x28]
// 006bd489  d84004               fadd dword ptr [eax + 4]
// 006bd48c  d95c240c             fstp dword ptr [esp + 0xc]
// 006bd490  d9412c               fld dword ptr [ecx + 0x2c]
// 006bd493  8bce                 mov ecx, esi
// 006bd495  d84008               fadd dword ptr [eax + 8]
// 006bd498  d95c2410             fstp dword ptr [esp + 0x10]
// 006bd49c  e8dfcaddff           call 0x499f80
// 006bd4a1  d9442404             fld dword ptr [esp + 4]
// 006bd4a5  8bc6                 mov eax, esi
// 006bd4a7  d95e24               fstp dword ptr [esi + 0x24]
// 006bd4aa  d9442408             fld dword ptr [esp + 8]
// 006bd4ae  d95e28               fstp dword ptr [esi + 0x28]
// 006bd4b1  d944240c             fld dword ptr [esp + 0xc]
// 006bd4b5  d95e2c               fstp dword ptr [esi + 0x2c]
// 006bd4b8  5e                   pop esi
// 006bd4b9  83c40c               add esp, 0xc
// 006bd4bc  c20800               ret 8
// library rbxgs/script\LuaAtomicClasses.cpp (function ??HCoordinateFrame@G3D@@QBE?AV01@ABVVector3@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaAtomicClasses.cpp
