// roc 2009-12 0049a4d0  unit: RBX::MeshAdapter  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0049a4d0
//
// 0049a4d0  c701b4379b00         mov dword ptr [ecx], 0x9b37b4
// 0049a4d6  c3                   ret 
// library rbxgs-appdraw/AdornG3D.cpp (function ??1ReferenceCountedObject@G3D@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw AdornG3D.cpp
