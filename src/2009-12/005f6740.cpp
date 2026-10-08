// roc 2009-12 005f6740  unit: G3D::BinaryInput  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005f6740
//
// 005f6740  8bc1                 mov eax, ecx
// 005f6742  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005f6746  d901                 fld dword ptr [ecx]
// 005f6748  d918                 fstp dword ptr [eax]
// 005f674a  d94104               fld dword ptr [ecx + 4]
// 005f674d  d95804               fstp dword ptr [eax + 4]
// 005f6750  d94108               fld dword ptr [ecx + 8]
// 005f6753  d95808               fstp dword ptr [eax + 8]
// 005f6756  d9410c               fld dword ptr [ecx + 0xc]
// 005f6759  d9580c               fstp dword ptr [eax + 0xc]
// 005f675c  c20400               ret 4
// library rbxgs-appdraw/AdornG3D.cpp (function ??0Rect2D@G3D@@QAE@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw AdornG3D.cpp
