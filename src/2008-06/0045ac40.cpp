// from server: 100% by auto
// roc 2008-06 0045ac40  unit: CRobloxView  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0045ac40
//
// 0045ac40  8b542408             mov edx, dword ptr [esp + 8]
// 0045ac44  d901                 fld dword ptr [ecx]
// 0045ac46  d822                 fsub dword ptr [edx]
// 0045ac48  8b442404             mov eax, dword ptr [esp + 4]
// 0045ac4c  d918                 fstp dword ptr [eax]
// 0045ac4e  d94104               fld dword ptr [ecx + 4]
// 0045ac51  d86204               fsub dword ptr [edx + 4]
// 0045ac54  d95804               fstp dword ptr [eax + 4]
// 0045ac57  d94108               fld dword ptr [ecx + 8]
// 0045ac5a  d86208               fsub dword ptr [edx + 8]
// 0045ac5d  d95808               fstp dword ptr [eax + 8]
// 0045ac60  c20800               ret 8
// library g3d-6.09/G3Dcpp\Vector3.cpp (function ??GVector3@G3D@@QBE?AV01@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Vector3.cpp
