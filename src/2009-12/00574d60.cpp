// roc 2009-12 00574d60  unit: RBX::RbxParticleEmitter  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00574d60
//
// 00574d60  c7017c079c00         mov dword ptr [ecx], 0x9c077c
// 00574d66  c3                   ret 
// library rbxgs-appdraw/AdornG3D.cpp (function ??1ReferenceCountedObject@G3D@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw AdornG3D.cpp
