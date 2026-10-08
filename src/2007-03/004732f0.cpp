// roc 2007-03 004732f0  unit: seg_00470000  size: 147 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004732f0
//
// 004732f0  83ec30               sub esp, 0x30
// 004732f3  8b442438             mov eax, dword ptr [esp + 0x38]
// 004732f7  d94104               fld dword ptr [ecx + 4]
// 004732fa  d84828               fmul dword ptr [eax + 0x28]
// 004732fd  56                   push esi
// 004732fe  d94024               fld dword ptr [eax + 0x24]
// 00473301  50                   push eax
// 00473302  d809                 fmul dword ptr [ecx]
// 00473304  dec1                 faddp st(1)
// 00473306  d94108               fld dword ptr [ecx + 8]
// 00473309  d8482c               fmul dword ptr [eax + 0x2c]
// 0047330c  dec1                 faddp st(1)
// 0047330e  d84124               fadd dword ptr [ecx + 0x24]
// 00473311  d95c2408             fstp dword ptr [esp + 8]
// 00473315  d9410c               fld dword ptr [ecx + 0xc]
// 00473318  d84824               fmul dword ptr [eax + 0x24]
// 0047331b  d94110               fld dword ptr [ecx + 0x10]
// 0047331e  d84828               fmul dword ptr [eax + 0x28]
// 00473321  dec1                 faddp st(1)
// 00473323  d94114               fld dword ptr [ecx + 0x14]
// 00473326  d8482c               fmul dword ptr [eax + 0x2c]
// 00473329  dec1                 faddp st(1)
// 0047332b  d84128               fadd dword ptr [ecx + 0x28]
// 0047332e  d95c240c             fstp dword ptr [esp + 0xc]
// 00473332  d94118               fld dword ptr [ecx + 0x18]
// 00473335  d84824               fmul dword ptr [eax + 0x24]
// 00473338  d9411c               fld dword ptr [ecx + 0x1c]
// 0047333b  d84828               fmul dword ptr [eax + 0x28]
// 0047333e  dec1                 faddp st(1)
// 00473340  d94120               fld dword ptr [ecx + 0x20]
// 00473343  d8482c               fmul dword ptr [eax + 0x2c]
// 00473346  8d442414             lea eax, [esp + 0x14]
// 0047334a  50                   push eax
// 0047334b  dec1                 faddp st(1)
// 0047334d  d8412c               fadd dword ptr [ecx + 0x2c]
// 00473350  d95c2414             fstp dword ptr [esp + 0x14]
// 00473354  e8a7b70800           call 0x4feb00
// 00473359  8b742438             mov esi, dword ptr [esp + 0x38]
// 0047335d  50                   push eax
// 0047335e  8bce                 mov ecx, esi
// 00473360  e81bb60800           call 0x4fe980
// 00473365  d9442404             fld dword ptr [esp + 4]
// 00473369  d95e24               fstp dword ptr [esi + 0x24]
// 0047336c  8bc6                 mov eax, esi
// 0047336e  d9442408             fld dword ptr [esp + 8]
// 00473372  d95e28               fstp dword ptr [esi + 0x28]
// 00473375  d944240c             fld dword ptr [esp + 0xc]
// 00473379  d95e2c               fstp dword ptr [esi + 0x2c]
// 0047337c  5e                   pop esi
// 0047337d  83c430               add esp, 0x30
// 00473380  c20800               ret 8
// library rbxgs/script\LuaAtomicClasses.cpp (function ??DCoordinateFrame@G3D@@QBE?AV01@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaAtomicClasses.cpp
