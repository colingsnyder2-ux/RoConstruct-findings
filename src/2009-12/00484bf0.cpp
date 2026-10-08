// roc 2009-12 00484bf0  unit: RBX::AdornRbxGfx  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00484bf0
//
// 00484bf0  c701e4269b00         mov dword ptr [ecx], 0x9b26e4
// 00484bf6  c3                   ret 
// library rbxgs-appdraw/AdornG3D.cpp (function ??1ReferenceCountedObject@G3D@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw AdornG3D.cpp
