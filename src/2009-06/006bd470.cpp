// from server: 100% by tester
// roc 2007-03 005bc700  unit: seg_005b0000  size: 79 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005bc700
//
// 005bc700  83ec0c               sub esp, 0xc
// 005bc703  8b442414             mov eax, dword ptr [esp + 0x14]
// 005bc707  d94124               fld dword ptr [ecx + 0x24]
// 005bc70a  d800                 fadd dword ptr [eax]
// 005bc70c  56                   push esi
// 005bc70d  8b742414             mov esi, dword ptr [esp + 0x14]
// 005bc711  51                   push ecx
// 005bc712  d95c2408             fstp dword ptr [esp + 8]
// 005bc716  d94128               fld dword ptr [ecx + 0x28]
// 005bc719  d84004               fadd dword ptr [eax + 4]
// 005bc71c  d95c240c             fstp dword ptr [esp + 0xc]
// 005bc720  d9412c               fld dword ptr [ecx + 0x2c]
// 005bc723  8bce                 mov ecx, esi
// 005bc725  d84008               fadd dword ptr [eax + 8]
// 005bc728  d95c2410             fstp dword ptr [esp + 0x10]
// 005bc72c  e84f22f4ff           call 0x4fe980
// 005bc731  d9442404             fld dword ptr [esp + 4]
// 005bc735  8bc6                 mov eax, esi
// 005bc737  d95e24               fstp dword ptr [esi + 0x24]
// 005bc73a  d9442408             fld dword ptr [esp + 8]
// 005bc73e  d95e28               fstp dword ptr [esi + 0x28]
// 005bc741  d944240c             fld dword ptr [esp + 0xc]
// 005bc745  d95e2c               fstp dword ptr [esi + 0x2c]
// 005bc748  5e                   pop esi
// 005bc749  83c40c               add esp, 0xc
// 005bc74c  c20800               ret 8
// library rbxgs/script\LuaAtomicClasses.cpp (function ??HCoordinateFrame@G3D@@QBE?AV01@ABVVector3@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaAtomicClasses.cpp
