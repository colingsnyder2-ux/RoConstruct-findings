// roc 2009-12 0047d9d0  unit: RBX::MeshGen  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0047d9d0
//
// 0047d9d0  c70120219b00         mov dword ptr [ecx], 0x9b2120
// 0047d9d6  c3                   ret 
// library rbxgs-appdraw/AdornG3D.cpp (function ??1ReferenceCountedObject@G3D@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw AdornG3D.cpp
