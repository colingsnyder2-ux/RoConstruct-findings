// roc 2007-03 004fbb50  unit: seg_004f0000  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004fbb50
//
// 004fbb50  51                   push ecx
// 004fbb51  d9410c               fld dword ptr [ecx + 0xc]
// 004fbb54  d87108               fdiv dword ptr [ecx + 8]
// 004fbb57  d91c24               fstp dword ptr [esp]
// 004fbb5a  d90424               fld dword ptr [esp]
// 004fbb5d  59                   pop ecx
// 004fbb5e  c20400               ret 4
// library rbxgs-g3d/G3Dcpp\GCamera.cpp (function ?getViewportHeight@GCamera@G3D@@QBEMABVRect2D@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-g3d G3Dcpp/GCamera.cpp
