// from server: 100% by auto
// roc 2009-06 0045a0b0  unit: G3D::Hashable  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0045a0b0
//
// 0045a0b0  8b542408             mov edx, dword ptr [esp + 8]
// 0045a0b4  d901                 fld dword ptr [ecx]
// 0045a0b6  d822                 fsub dword ptr [edx]
// 0045a0b8  8b442404             mov eax, dword ptr [esp + 4]
// 0045a0bc  d918                 fstp dword ptr [eax]
// 0045a0be  d94104               fld dword ptr [ecx + 4]
// 0045a0c1  d86204               fsub dword ptr [edx + 4]
// 0045a0c4  d95804               fstp dword ptr [eax + 4]
// 0045a0c7  d94108               fld dword ptr [ecx + 8]
// 0045a0ca  d86208               fsub dword ptr [edx + 8]
// 0045a0cd  d95808               fstp dword ptr [eax + 8]
// 0045a0d0  c20800               ret 8
// library g3d-6.09/G3Dcpp\Vector3.cpp (function ??GVector3@G3D@@QBE?AV01@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Vector3.cpp
