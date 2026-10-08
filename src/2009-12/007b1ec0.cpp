// roc 2009-12 007b1ec0  unit: RBX::Body  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007b1ec0
//
// 007b1ec0  8b442404             mov eax, dword ptr [esp + 4]
// 007b1ec4  8d0440               lea eax, [eax + eax*2]
// 007b1ec7  8d0481               lea eax, [ecx + eax*4]
// 007b1eca  c20400               ret 4
// library rbxgs-appdraw/Draw.cpp (function ??AMatrix3@G3D@@QBEPBMH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw Draw.cpp
