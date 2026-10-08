// roc 2007-03 004fbb30  unit: seg_004f0000  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004fbb30
//
// 004fbb30  8b442404             mov eax, dword ptr [esp + 4]
// 004fbb34  d9400c               fld dword ptr [eax + 0xc]
// 004fbb37  d86004               fsub dword ptr [eax + 4]
// 004fbb3a  d95c2404             fstp dword ptr [esp + 4]
// 004fbb3e  d9442404             fld dword ptr [esp + 4]
// 004fbb42  d84908               fmul dword ptr [ecx + 8]
// 004fbb45  d95c2404             fstp dword ptr [esp + 4]
// 004fbb49  d9442404             fld dword ptr [esp + 4]
// 004fbb4d  c20400               ret 4
// library rbxgs-g3d/G3Dcpp\GCamera.cpp (function ?getImagePlaneDepth@GCamera@G3D@@QBEMABVRect2D@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-g3d G3Dcpp/GCamera.cpp
