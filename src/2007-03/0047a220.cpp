// roc 2007-03 0047a220  unit: seg_00470000  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0047a220
//
// 0047a220  51                   push ecx
// 0047a221  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0047a225  8b01                 mov eax, dword ptr [ecx]
// 0047a227  8b4058               mov eax, dword ptr [eax + 0x58]
// 0047a22a  52                   push edx
// 0047a22b  8d542404             lea edx, [esp + 4]
// 0047a22f  52                   push edx
// 0047a230  8d542414             lea edx, [esp + 0x14]
// 0047a234  52                   push edx
// 0047a235  ffd0                 call eax
// 0047a237  db44240c             fild dword ptr [esp + 0xc]
// 0047a23b  8b442408             mov eax, dword ptr [esp + 8]
// 0047a23f  d918                 fstp dword ptr [eax]
// 0047a241  db0424               fild dword ptr [esp]
// 0047a244  d95804               fstp dword ptr [eax + 4]
// 0047a247  59                   pop ecx
// 0047a248  c20800               ret 8
// library rbxgs-g3d/GLG3Dcpp\SDLWindow.cpp (function ?getRelativeMouseState@SDLWindow@G3D@@UBEXAAVVector2@2@AAE@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-g3d GLG3Dcpp/SDLWindow.cpp
