// roc 2007-03 005bc750  unit: seg_005b0000  size: 79 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005bc750
//
// 005bc750  83ec0c               sub esp, 0xc
// 005bc753  8b442414             mov eax, dword ptr [esp + 0x14]
// 005bc757  d94124               fld dword ptr [ecx + 0x24]
// 005bc75a  d820                 fsub dword ptr [eax]
// 005bc75c  56                   push esi
// 005bc75d  8b742414             mov esi, dword ptr [esp + 0x14]
// 005bc761  51                   push ecx
// 005bc762  d95c2408             fstp dword ptr [esp + 8]
// 005bc766  d94128               fld dword ptr [ecx + 0x28]
// 005bc769  d86004               fsub dword ptr [eax + 4]
// 005bc76c  d95c240c             fstp dword ptr [esp + 0xc]
// 005bc770  d9412c               fld dword ptr [ecx + 0x2c]
// 005bc773  8bce                 mov ecx, esi
// 005bc775  d86008               fsub dword ptr [eax + 8]
// 005bc778  d95c2410             fstp dword ptr [esp + 0x10]
// 005bc77c  e8ff21f4ff           call 0x4fe980
// 005bc781  d9442404             fld dword ptr [esp + 4]
// 005bc785  8bc6                 mov eax, esi
// 005bc787  d95e24               fstp dword ptr [esi + 0x24]
// 005bc78a  d9442408             fld dword ptr [esp + 8]
// 005bc78e  d95e28               fstp dword ptr [esi + 0x28]
// 005bc791  d944240c             fld dword ptr [esp + 0xc]
// 005bc795  d95e2c               fstp dword ptr [esi + 0x2c]
// 005bc798  5e                   pop esi
// 005bc799  83c40c               add esp, 0xc
// 005bc79c  c20800               ret 8
// library rbxgs/script\LuaAtomicClasses.cpp (function ??GCoordinateFrame@G3D@@QBE?AV01@ABVVector3@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaAtomicClasses.cpp
