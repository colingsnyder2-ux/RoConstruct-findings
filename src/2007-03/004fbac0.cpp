// roc 2007-03 004fbac0  unit: seg_004f0000  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004fbac0
//
// 004fbac0  8b542404             mov edx, dword ptr [esp + 4]
// 004fbac4  56                   push esi
// 004fbac5  8d4114               lea eax, [ecx + 0x14]
// 004fbac8  57                   push edi
// 004fbac9  b909000000           mov ecx, 9
// 004fbace  8bf2                 mov esi, edx
// 004fbad0  8bf8                 mov edi, eax
// 004fbad2  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 004fbad4  d94224               fld dword ptr [edx + 0x24]
// 004fbad7  d95824               fstp dword ptr [eax + 0x24]
// 004fbada  d94228               fld dword ptr [edx + 0x28]
// 004fbadd  d95828               fstp dword ptr [eax + 0x28]
// 004fbae0  d9422c               fld dword ptr [edx + 0x2c]
// 004fbae3  d9582c               fstp dword ptr [eax + 0x2c]
// 004fbae6  5f                   pop edi
// 004fbae7  5e                   pop esi
// 004fbae8  c20400               ret 4
// library rbxgs-g3d/G3Dcpp\GCamera.cpp (function ?setCoordinateFrame@GCamera@G3D@@QAEXABVCoordinateFrame@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-g3d G3Dcpp/GCamera.cpp
