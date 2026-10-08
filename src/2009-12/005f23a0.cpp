// roc 2009-12 005f23a0  unit: seg_005f0000  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005f23a0
//
// 005f23a0  8b542404             mov edx, dword ptr [esp + 4]
// 005f23a4  56                   push esi
// 005f23a5  8d4114               lea eax, [ecx + 0x14]
// 005f23a8  57                   push edi
// 005f23a9  b909000000           mov ecx, 9
// 005f23ae  8bf0                 mov esi, eax
// 005f23b0  8bfa                 mov edi, edx
// 005f23b2  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 005f23b4  d94024               fld dword ptr [eax + 0x24]
// 005f23b7  d95a24               fstp dword ptr [edx + 0x24]
// 005f23ba  d94028               fld dword ptr [eax + 0x28]
// 005f23bd  d95a28               fstp dword ptr [edx + 0x28]
// 005f23c0  d9402c               fld dword ptr [eax + 0x2c]
// 005f23c3  d95a2c               fstp dword ptr [edx + 0x2c]
// 005f23c6  5f                   pop edi
// 005f23c7  5e                   pop esi
// 005f23c8  c20400               ret 4
// library g3d-6.09/G3Dcpp\GCamera.cpp (function ?getCoordinateFrame@GCamera@G3D@@QBEXAAVCoordinateFrame@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/GCamera.cpp
