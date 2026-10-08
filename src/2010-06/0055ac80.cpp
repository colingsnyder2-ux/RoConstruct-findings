// from server: 100% by auto
// roc 2010-06 0055ac80  unit: G3D::Plane  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0055ac80
//
// 0055ac80  8b542404             mov edx, dword ptr [esp + 4]
// 0055ac84  56                   push esi
// 0055ac85  8d4114               lea eax, [ecx + 0x14]
// 0055ac88  57                   push edi
// 0055ac89  b909000000           mov ecx, 9
// 0055ac8e  8bf2                 mov esi, edx
// 0055ac90  8bf8                 mov edi, eax
// 0055ac92  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 0055ac94  d94224               fld dword ptr [edx + 0x24]
// 0055ac97  d95824               fstp dword ptr [eax + 0x24]
// 0055ac9a  d94228               fld dword ptr [edx + 0x28]
// 0055ac9d  d95828               fstp dword ptr [eax + 0x28]
// 0055aca0  d9422c               fld dword ptr [edx + 0x2c]
// 0055aca3  d9582c               fstp dword ptr [eax + 0x2c]
// 0055aca6  5f                   pop edi
// 0055aca7  5e                   pop esi
// 0055aca8  c20400               ret 4
// library g3d-6.09/G3Dcpp\GCamera.cpp (function ?setCoordinateFrame@GCamera@G3D@@QAEXABVCoordinateFrame@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/GCamera.cpp
