// from server: 100% by auto
// roc 2007-08 0050b380  unit: seg_00500000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0050b380
//
// 0050b380  8bc1                 mov eax, ecx
// 0050b382  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0050b386  d901                 fld dword ptr [ecx]
// 0050b388  d918                 fstp dword ptr [eax]
// 0050b38a  d94104               fld dword ptr [ecx + 4]
// 0050b38d  d95804               fstp dword ptr [eax + 4]
// 0050b390  d94108               fld dword ptr [ecx + 8]
// 0050b393  d95808               fstp dword ptr [eax + 8]
// 0050b396  c20400               ret 4
// library g3d-6.09/G3Dcpp\Vector3.cpp (function ??0Vector3@G3D@@QAE@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Vector3.cpp
