// roc 2009-12 005e0300  unit: RBX::RbxG3D::Material  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005e0300
//
// 005e0300  c701b4169c00         mov dword ptr [ecx], 0x9c16b4
// 005e0306  c3                   ret 
// library rbxgs-appdraw/AdornG3D.cpp (function ??1ReferenceCountedObject@G3D@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw AdornG3D.cpp
