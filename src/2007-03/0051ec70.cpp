// roc 2007-03 0051ec70  unit: seg_00510000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0051ec70
//
// 0051ec70  51                   push ecx
// 0051ec71  dd4118               fld qword ptr [ecx + 0x18]
// 0051ec74  d91c24               fstp dword ptr [esp]
// 0051ec77  d90424               fld dword ptr [esp]
// 0051ec7a  59                   pop ecx
// 0051ec7b  c3                   ret 
// library rbxgs-g3d/G3Dcpp\Capsule.cpp (function ?getRadius@Capsule@G3D@@QBEMXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-g3d G3Dcpp/Capsule.cpp
