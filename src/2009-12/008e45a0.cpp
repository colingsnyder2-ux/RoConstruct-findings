// roc 2009-12 008e45a0  unit: CXTPDockingPane  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008e45a0
//
// 008e45a0  8b442404             mov eax, dword ptr [esp + 4]
// 008e45a4  894114               mov dword ptr [ecx + 0x14], eax
// 008e45a7  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\TextureManager.cpp (function ?setMemorySizeHint@TextureManager@G3D@@QAEXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/TextureManager.cpp
