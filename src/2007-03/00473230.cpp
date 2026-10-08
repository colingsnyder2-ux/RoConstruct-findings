// roc 2007-03 00473230  unit: seg_00470000  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00473230
//
// 00473230  8b442404             mov eax, dword ptr [esp + 4]
// 00473234  56                   push esi
// 00473235  50                   push eax
// 00473236  8bf1                 mov esi, ecx
// 00473238  e843b70800           call 0x4fe980
// 0047323d  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00473241  d900                 fld dword ptr [eax]
// 00473243  d95e24               fstp dword ptr [esi + 0x24]
// 00473246  d94004               fld dword ptr [eax + 4]
// 00473249  d95e28               fstp dword ptr [esi + 0x28]
// 0047324c  d94008               fld dword ptr [eax + 8]
// 0047324f  8bc6                 mov eax, esi
// 00473251  d95e2c               fstp dword ptr [esi + 0x2c]
// 00473254  5e                   pop esi
// 00473255  c20800               ret 8
// library rbxgs/script\LuaAtomicClasses.cpp (function ??0CoordinateFrame@G3D@@QAE@ABVMatrix3@1@ABVVector3@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaAtomicClasses.cpp
