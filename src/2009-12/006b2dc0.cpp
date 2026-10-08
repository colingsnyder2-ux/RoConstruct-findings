// roc 2009-12 006b2dc0  unit: RBX::DropperTool  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006b2dc0
//
// 006b2dc0  8bc1                 mov eax, ecx
// 006b2dc2  8b4c2404             mov ecx, dword ptr [esp + 4]
// 006b2dc6  8908                 mov dword ptr [eax], ecx
// 006b2dc8  c20400               ret 4
// library rbxgs-appdraw/AdornG3D.cpp (function ??0AtomicInt32@G3D@@QAE@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw AdornG3D.cpp
