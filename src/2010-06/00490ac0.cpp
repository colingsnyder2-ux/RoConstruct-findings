// from server: 100% by auto
// roc 2010-06 00490ac0  unit: std::D::DU?$char_traits::V?$basic_string::?$Set  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00490ac0
//
// 00490ac0  8b442404             mov eax, dword ptr [esp + 4]
// 00490ac4  56                   push esi
// 00490ac5  50                   push eax
// 00490ac6  8bf1                 mov esi, ecx
// 00490ac8  e8a3550c00           call 0x556070
// 00490acd  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00490ad1  d900                 fld dword ptr [eax]
// 00490ad3  d95e24               fstp dword ptr [esi + 0x24]
// 00490ad6  d94004               fld dword ptr [eax + 4]
// 00490ad9  d95e28               fstp dword ptr [esi + 0x28]
// 00490adc  d94008               fld dword ptr [eax + 8]
// 00490adf  8bc6                 mov eax, esi
// 00490ae1  d95e2c               fstp dword ptr [esi + 0x2c]
// 00490ae4  5e                   pop esi
// 00490ae5  c20800               ret 8
// library g3d-6.09/G3Dcpp\CoordinateFrame.cpp (function ??0CoordinateFrame@G3D@@QAE@ABVMatrix3@1@ABVVector3@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/CoordinateFrame.cpp
