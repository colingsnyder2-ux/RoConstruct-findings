// roc 2009-12 0047d810  unit: RBX::LDraw2Lua::LuaWriter  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0047d810
//
// 0047d810  8b442404             mov eax, dword ptr [esp + 4]
// 0047d814  56                   push esi
// 0047d815  50                   push eax
// 0047d816  8bf1                 mov esi, ecx
// 0047d818  e8e3601700           call 0x5f3900
// 0047d81d  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0047d821  d900                 fld dword ptr [eax]
// 0047d823  d95e24               fstp dword ptr [esi + 0x24]
// 0047d826  d94004               fld dword ptr [eax + 4]
// 0047d829  d95e28               fstp dword ptr [esi + 0x28]
// 0047d82c  d94008               fld dword ptr [eax + 8]
// 0047d82f  8bc6                 mov eax, esi
// 0047d831  d95e2c               fstp dword ptr [esi + 0x2c]
// 0047d834  5e                   pop esi
// 0047d835  c20800               ret 8
// library rbxgs-appdraw/Draw.cpp (function ??0CoordinateFrame@G3D@@QAE@ABVMatrix3@1@ABVVector3@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw Draw.cpp
