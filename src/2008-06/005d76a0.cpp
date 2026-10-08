// roc 2008-06 005d76a0  unit: RBX::Humanoid  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005d76a0
//
// 005d76a0  56                   push esi
// 005d76a1  e87ac7f3ff           call 0x513e20
// 005d76a6  8b742408             mov esi, dword ptr [esp + 8]
// 005d76aa  50                   push eax
// 005d76ab  8bce                 mov ecx, esi
// 005d76ad  e86ebbf3ff           call 0x513220
// 005d76b2  d9ee                 fldz 
// 005d76b4  d95624               fst dword ptr [esi + 0x24]
// 005d76b7  8bc6                 mov eax, esi
// 005d76b9  d905ac9b8100         fld dword ptr [0x819bac]
// 005d76bf  d95e28               fstp dword ptr [esi + 0x28]
// 005d76c2  d95e2c               fstp dword ptr [esi + 0x2c]
// 005d76c5  5e                   pop esi
// 005d76c6  c20400               ret 4
// library rbxgs/humanoid\Humanoid.cpp (function ?getTopOfHead@Humanoid@RBX@@QBE?AVCoordinateFrame@G3D@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs humanoid/Humanoid.cpp
