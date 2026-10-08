// roc 2009-06 007030b0  unit: RBX::AdornG3D  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007030b0
//
// 007030b0  8b4904               mov ecx, dword ptr [ecx + 4]
// 007030b3  56                   push esi
// 007030b4  8b742408             mov esi, dword ptr [esp + 8]
// 007030b8  56                   push esi
// 007030b9  e812b3d9ff           call 0x49e3d0
// 007030be  8bc6                 mov eax, esi
// 007030c0  5e                   pop esi
// 007030c1  c20400               ret 4
// library rbxgs-appdraw/AdornG3D.cpp (function ?getViewport@AdornG3D@RBX@@UBE?AVRect2D@G3D@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw AdornG3D.cpp
