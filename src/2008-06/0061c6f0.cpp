// roc 2008-06 0061c6f0  unit: RBX::Lua::LuaArguments  size: 79 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0061c6f0
//
// 0061c6f0  83ec0c               sub esp, 0xc
// 0061c6f3  8b442414             mov eax, dword ptr [esp + 0x14]
// 0061c6f7  d94124               fld dword ptr [ecx + 0x24]
// 0061c6fa  d800                 fadd dword ptr [eax]
// 0061c6fc  56                   push esi
// 0061c6fd  8b742414             mov esi, dword ptr [esp + 0x14]
// 0061c701  51                   push ecx
// 0061c702  d95c2408             fstp dword ptr [esp + 8]
// 0061c706  d94128               fld dword ptr [ecx + 0x28]
// 0061c709  d84004               fadd dword ptr [eax + 4]
// 0061c70c  d95c240c             fstp dword ptr [esp + 0xc]
// 0061c710  d9412c               fld dword ptr [ecx + 0x2c]
// 0061c713  8bce                 mov ecx, esi
// 0061c715  d84008               fadd dword ptr [eax + 8]
// 0061c718  d95c2410             fstp dword ptr [esp + 0x10]
// 0061c71c  e8ff6aefff           call 0x513220
// 0061c721  d9442404             fld dword ptr [esp + 4]
// 0061c725  8bc6                 mov eax, esi
// 0061c727  d95e24               fstp dword ptr [esi + 0x24]
// 0061c72a  d9442408             fld dword ptr [esp + 8]
// 0061c72e  d95e28               fstp dword ptr [esi + 0x28]
// 0061c731  d944240c             fld dword ptr [esp + 0xc]
// 0061c735  d95e2c               fstp dword ptr [esi + 0x2c]
// 0061c738  5e                   pop esi
// 0061c739  83c40c               add esp, 0xc
// 0061c73c  c20800               ret 8
// library rbxgs/script\LuaAtomicClasses.cpp (function ??HCoordinateFrame@G3D@@QBE?AV01@ABVVector3@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaAtomicClasses.cpp
