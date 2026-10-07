// roc 2007-08 00457c90  unit: CRobloxView  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00457c90
//
// 00457c90  8b542408             mov edx, dword ptr [esp + 8]
// 00457c94  d901                 fld dword ptr [ecx]
// 00457c96  d822                 fsub dword ptr [edx]
// 00457c98  8b442404             mov eax, dword ptr [esp + 4]
// 00457c9c  d918                 fstp dword ptr [eax]
// 00457c9e  d94104               fld dword ptr [ecx + 4]
// 00457ca1  d86204               fsub dword ptr [edx + 4]
// 00457ca4  d95804               fstp dword ptr [eax + 4]
// 00457ca7  d94108               fld dword ptr [ecx + 8]
// 00457caa  d86208               fsub dword ptr [edx + 8]
// 00457cad  d95808               fstp dword ptr [eax + 8]
// 00457cb0  c20800               ret 8
// library g3d-6.09/G3Dcpp\Vector3.cpp (function ??GVector3@G3D@@QBE?AV01@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Vector3.cpp
