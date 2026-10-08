// roc 2007-03 00500720  unit: seg_00500000  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00500720
//
// 00500720  8bc1                 mov eax, ecx
// 00500722  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00500726  d901                 fld dword ptr [ecx]
// 00500728  d918                 fstp dword ptr [eax]
// 0050072a  d94104               fld dword ptr [ecx + 4]
// 0050072d  d95804               fstp dword ptr [eax + 4]
// 00500730  d9442408             fld dword ptr [esp + 8]
// 00500734  d95808               fstp dword ptr [eax + 8]
// 00500737  d944240c             fld dword ptr [esp + 0xc]
// 0050073b  d9580c               fstp dword ptr [eax + 0xc]
// 0050073e  c20c00               ret 0xc
// library rbxgs-g3d/G3Dcpp\Vector4.cpp (function ??0Vector4@G3D@@QAE@ABVVector2@1@MM@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-g3d G3Dcpp/Vector4.cpp
