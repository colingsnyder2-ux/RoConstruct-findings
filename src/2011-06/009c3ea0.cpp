// from server: 100% by auto
// roc 2011-06 009c3ea0  unit: seg_009c0000  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 009c3ea0
//
// 009c3ea0  8b542404             mov edx, dword ptr [esp + 4]
// 009c3ea4  56                   push esi
// 009c3ea5  8d4114               lea eax, [ecx + 0x14]
// 009c3ea8  57                   push edi
// 009c3ea9  b909000000           mov ecx, 9
// 009c3eae  8bf2                 mov esi, edx
// 009c3eb0  8bf8                 mov edi, eax
// 009c3eb2  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 009c3eb4  d94224               fld dword ptr [edx + 0x24]
// 009c3eb7  d95824               fstp dword ptr [eax + 0x24]
// 009c3eba  d94228               fld dword ptr [edx + 0x28]
// 009c3ebd  d95828               fstp dword ptr [eax + 0x28]
// 009c3ec0  d9422c               fld dword ptr [edx + 0x2c]
// 009c3ec3  d9582c               fstp dword ptr [eax + 0x2c]
// 009c3ec6  5f                   pop edi
// 009c3ec7  5e                   pop esi
// 009c3ec8  c20400               ret 4
// library g3d-6.09/G3Dcpp\GCamera.cpp (function ?setCoordinateFrame@GCamera@G3D@@QAEXABVCoordinateFrame@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/GCamera.cpp
