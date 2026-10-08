// roc 2008-06 00676480  unit: RBX::AdornG3D  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00676480
//
// 00676480  8b4904               mov ecx, dword ptr [ecx + 4]
// 00676483  56                   push esi
// 00676484  8b742408             mov esi, dword ptr [esp + 8]
// 00676488  56                   push esi
// 00676489  e8d208e0ff           call 0x476d60
// 0067648e  8bc6                 mov eax, esi
// 00676490  5e                   pop esi
// 00676491  c20400               ret 4
// library rbxgs-appdraw/AdornG3D.cpp (function ?getViewport@AdornG3D@RBX@@UBE?AVRect2D@G3D@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw AdornG3D.cpp
