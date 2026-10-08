// roc 2009-12 005f1f80  unit: seg_005f0000  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005f1f80
//
// 005f1f80  8b542404             mov edx, dword ptr [esp + 4]
// 005f1f84  56                   push esi
// 005f1f85  8d4114               lea eax, [ecx + 0x14]
// 005f1f88  57                   push edi
// 005f1f89  b909000000           mov ecx, 9
// 005f1f8e  8bf2                 mov esi, edx
// 005f1f90  8bf8                 mov edi, eax
// 005f1f92  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 005f1f94  d94224               fld dword ptr [edx + 0x24]
// 005f1f97  d95824               fstp dword ptr [eax + 0x24]
// 005f1f9a  d94228               fld dword ptr [edx + 0x28]
// 005f1f9d  d95828               fstp dword ptr [eax + 0x28]
// 005f1fa0  d9422c               fld dword ptr [edx + 0x2c]
// 005f1fa3  d9582c               fstp dword ptr [eax + 0x2c]
// 005f1fa6  5f                   pop edi
// 005f1fa7  5e                   pop esi
// 005f1fa8  c20400               ret 4
// library g3d-6.09/G3Dcpp\GCamera.cpp (function ?setCoordinateFrame@GCamera@G3D@@QAEXABVCoordinateFrame@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/GCamera.cpp
