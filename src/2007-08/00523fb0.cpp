// from server: 100% by auto
// roc 2007-08 00523fb0  unit: G3D::Line  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00523fb0
//
// 00523fb0  51                   push ecx
// 00523fb1  dd4118               fld qword ptr [ecx + 0x18]
// 00523fb4  d91c24               fstp dword ptr [esp]
// 00523fb7  d90424               fld dword ptr [esp]
// 00523fba  59                   pop ecx
// 00523fbb  c3                   ret 
// library g3d-6.09/G3Dcpp\Capsule.cpp (function ?getRadius@Capsule@G3D@@QBEMXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Capsule.cpp
