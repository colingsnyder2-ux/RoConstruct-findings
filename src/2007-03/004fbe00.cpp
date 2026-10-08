// roc 2007-03 004fbe00  unit: seg_004f0000  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004fbe00
//
// 004fbe00  8b542404             mov edx, dword ptr [esp + 4]
// 004fbe04  56                   push esi
// 004fbe05  8d4114               lea eax, [ecx + 0x14]
// 004fbe08  57                   push edi
// 004fbe09  b909000000           mov ecx, 9
// 004fbe0e  8bf0                 mov esi, eax
// 004fbe10  8bfa                 mov edi, edx
// 004fbe12  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 004fbe14  d94024               fld dword ptr [eax + 0x24]
// 004fbe17  d95a24               fstp dword ptr [edx + 0x24]
// 004fbe1a  d94028               fld dword ptr [eax + 0x28]
// 004fbe1d  d95a28               fstp dword ptr [edx + 0x28]
// 004fbe20  d9402c               fld dword ptr [eax + 0x2c]
// 004fbe23  d95a2c               fstp dword ptr [edx + 0x2c]
// 004fbe26  5f                   pop edi
// 004fbe27  5e                   pop esi
// 004fbe28  c20400               ret 4
// library rbxgs-g3d/G3Dcpp\GCamera.cpp (function ?getCoordinateFrame@GCamera@G3D@@QBEXAAVCoordinateFrame@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-g3d G3Dcpp/GCamera.cpp
