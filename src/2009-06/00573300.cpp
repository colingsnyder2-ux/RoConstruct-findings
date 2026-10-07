// roc 2009-06 00573300  unit: G3D::GCamera  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00573300
//
// 00573300  8b542404             mov edx, dword ptr [esp + 4]
// 00573304  56                   push esi
// 00573305  8d4114               lea eax, [ecx + 0x14]
// 00573308  57                   push edi
// 00573309  b909000000           mov ecx, 9
// 0057330e  8bf0                 mov esi, eax
// 00573310  8bfa                 mov edi, edx
// 00573312  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 00573314  d94024               fld dword ptr [eax + 0x24]
// 00573317  d95a24               fstp dword ptr [edx + 0x24]
// 0057331a  d94028               fld dword ptr [eax + 0x28]
// 0057331d  d95a28               fstp dword ptr [edx + 0x28]
// 00573320  d9402c               fld dword ptr [eax + 0x2c]
// 00573323  d95a2c               fstp dword ptr [edx + 0x2c]
// 00573326  5f                   pop edi
// 00573327  5e                   pop esi
// 00573328  c20400               ret 4
// library g3d-6.09/G3Dcpp\GCamera.cpp (function ?getCoordinateFrame@GCamera@G3D@@QBEXAAVCoordinateFrame@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/GCamera.cpp
