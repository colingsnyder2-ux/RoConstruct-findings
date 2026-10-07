// roc 2008-06 00514860  unit: G3D::GCamera  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00514860
//
// 00514860  8bc1                 mov eax, ecx
// 00514862  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00514866  d901                 fld dword ptr [ecx]
// 00514868  d918                 fstp dword ptr [eax]
// 0051486a  d94104               fld dword ptr [ecx + 4]
// 0051486d  d95804               fstp dword ptr [eax + 4]
// 00514870  d9442408             fld dword ptr [esp + 8]
// 00514874  d95808               fstp dword ptr [eax + 8]
// 00514877  d944240c             fld dword ptr [esp + 0xc]
// 0051487b  d9580c               fstp dword ptr [eax + 0xc]
// 0051487e  c20c00               ret 0xc
// library g3d-6.09/G3Dcpp\Vector4.cpp (function ??0Vector4@G3D@@QAE@ABVVector2@1@MM@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Vector4.cpp
