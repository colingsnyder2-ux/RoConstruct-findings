// from server: 100% by auto
// roc 2009-06 00572ee0  unit: G3D::Ray  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00572ee0
//
// 00572ee0  8b542404             mov edx, dword ptr [esp + 4]
// 00572ee4  56                   push esi
// 00572ee5  8d4114               lea eax, [ecx + 0x14]
// 00572ee8  57                   push edi
// 00572ee9  b909000000           mov ecx, 9
// 00572eee  8bf2                 mov esi, edx
// 00572ef0  8bf8                 mov edi, eax
// 00572ef2  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 00572ef4  d94224               fld dword ptr [edx + 0x24]
// 00572ef7  d95824               fstp dword ptr [eax + 0x24]
// 00572efa  d94228               fld dword ptr [edx + 0x28]
// 00572efd  d95828               fstp dword ptr [eax + 0x28]
// 00572f00  d9422c               fld dword ptr [edx + 0x2c]
// 00572f03  d9582c               fstp dword ptr [eax + 0x2c]
// 00572f06  5f                   pop edi
// 00572f07  5e                   pop esi
// 00572f08  c20400               ret 4
// library g3d-6.09/G3Dcpp\GCamera.cpp (function ?setCoordinateFrame@GCamera@G3D@@QAEXABVCoordinateFrame@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/GCamera.cpp
