// roc 2009-06 004696a0  unit: CTaskSchedulerPaneView  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004696a0
//
// 004696a0  8bc1                 mov eax, ecx
// 004696a2  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004696a6  d901                 fld dword ptr [ecx]
// 004696a8  d918                 fstp dword ptr [eax]
// 004696aa  d94104               fld dword ptr [ecx + 4]
// 004696ad  d95804               fstp dword ptr [eax + 4]
// 004696b0  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\Texture.cpp (function ??0Vector2@G3D@@QAE@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Texture.cpp
