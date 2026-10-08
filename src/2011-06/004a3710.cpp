// from server: 100% by auto
// roc 2011-06 004a3710  unit: RBX::DS::CVideoStreamFilter  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004a3710
//
// 004a3710  8b542404             mov edx, dword ptr [esp + 4]
// 004a3714  56                   push esi
// 004a3715  8bc1                 mov eax, ecx
// 004a3717  57                   push edi
// 004a3718  b909000000           mov ecx, 9
// 004a371d  8bf2                 mov esi, edx
// 004a371f  8bf8                 mov edi, eax
// 004a3721  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 004a3723  d94224               fld dword ptr [edx + 0x24]
// 004a3726  d95824               fstp dword ptr [eax + 0x24]
// 004a3729  d94228               fld dword ptr [edx + 0x28]
// 004a372c  d95828               fstp dword ptr [eax + 0x28]
// 004a372f  d9422c               fld dword ptr [edx + 0x2c]
// 004a3732  d9582c               fstp dword ptr [eax + 0x2c]
// 004a3735  5f                   pop edi
// 004a3736  5e                   pop esi
// 004a3737  c20400               ret 4
// library g3d-6.09/G3Dcpp\GCamera.cpp (function ??4CoordinateFrame@G3D@@QAEAAV01@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/GCamera.cpp
