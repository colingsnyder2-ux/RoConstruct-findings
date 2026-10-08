// from server: 100% by auto
// roc 2008-06 005107e0  unit: G3D::Ray  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005107e0
//
// 005107e0  8b542404             mov edx, dword ptr [esp + 4]
// 005107e4  56                   push esi
// 005107e5  8d4114               lea eax, [ecx + 0x14]
// 005107e8  57                   push edi
// 005107e9  b909000000           mov ecx, 9
// 005107ee  8bf2                 mov esi, edx
// 005107f0  8bf8                 mov edi, eax
// 005107f2  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 005107f4  d94224               fld dword ptr [edx + 0x24]
// 005107f7  d95824               fstp dword ptr [eax + 0x24]
// 005107fa  d94228               fld dword ptr [edx + 0x28]
// 005107fd  d95828               fstp dword ptr [eax + 0x28]
// 00510800  d9422c               fld dword ptr [edx + 0x2c]
// 00510803  d9582c               fstp dword ptr [eax + 0x2c]
// 00510806  5f                   pop edi
// 00510807  5e                   pop esi
// 00510808  c20400               ret 4
// library g3d-6.09/G3Dcpp\GCamera.cpp (function ?setCoordinateFrame@GCamera@G3D@@QAEXABVCoordinateFrame@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/GCamera.cpp
