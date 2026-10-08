// roc 2007-08 0062da60  unit: RBX::AdornG3D  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0062da60
//
// 0062da60  8b4904               mov ecx, dword ptr [ecx + 4]
// 0062da63  56                   push esi
// 0062da64  8b742408             mov esi, dword ptr [esp + 8]
// 0062da68  56                   push esi
// 0062da69  e8325fe4ff           call 0x4739a0
// 0062da6e  8bc6                 mov eax, esi
// 0062da70  5e                   pop esi
// 0062da71  c20400               ret 4
// library rbxgs-appdraw/AdornG3D.cpp (function ?getViewport@AdornG3D@RBX@@UBE?AVRect2D@G3D@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw AdornG3D.cpp
