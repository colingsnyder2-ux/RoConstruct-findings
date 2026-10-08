// roc 2007-03 00473260  unit: seg_00470000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00473260
//
// 00473260  56                   push esi
// 00473261  57                   push edi
// 00473262  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00473266  57                   push edi
// 00473267  8bf1                 mov esi, ecx
// 00473269  e812b70800           call 0x4fe980
// 0047326e  d94724               fld dword ptr [edi + 0x24]
// 00473271  d95e24               fstp dword ptr [esi + 0x24]
// 00473274  8bc6                 mov eax, esi
// 00473276  d94728               fld dword ptr [edi + 0x28]
// 00473279  d95e28               fstp dword ptr [esi + 0x28]
// 0047327c  d9472c               fld dword ptr [edi + 0x2c]
// 0047327f  5f                   pop edi
// 00473280  d95e2c               fstp dword ptr [esi + 0x2c]
// 00473283  5e                   pop esi
// 00473284  c20400               ret 4
// library rbxgs/script\LuaAtomicClasses.cpp (function ??0CoordinateFrame@G3D@@QAE@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaAtomicClasses.cpp
