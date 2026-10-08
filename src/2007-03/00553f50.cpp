// roc 2007-03 00553f50  unit: seg_00550000  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00553f50
//
// 00553f50  8b8180000000         mov eax, dword ptr [ecx + 0x80]
// 00553f56  c3                   ret 
// library g3d-6.09/GLG3Dcpp\RenderDevice.cpp (function ?debugNumMinorStateChanges@RenderDevice@G3D@@QBEIXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/RenderDevice.cpp
