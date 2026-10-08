// roc 2007-03 0052b250  unit: seg_00520000  size: 71 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0052b250
//
// 0052b250  8b442408             mov eax, dword ptr [esp + 8]
// 0052b254  83e800               sub eax, 0
// 0052b257  7426                 je 0x52b27f
// 0052b259  83e801               sub eax, 1
// 0052b25c  8b442404             mov eax, dword ptr [esp + 4]
// 0052b260  7521                 jne 0x52b283
// 0052b262  d94110               fld dword ptr [ecx + 0x10]
// 0052b265  d84104               fadd dword ptr [ecx + 4]
// 0052b268  d918                 fstp dword ptr [eax]
// 0052b26a  d94114               fld dword ptr [ecx + 0x14]
// 0052b26d  d84108               fadd dword ptr [ecx + 8]
// 0052b270  d95804               fstp dword ptr [eax + 4]
// 0052b273  d94118               fld dword ptr [ecx + 0x18]
// 0052b276  d8410c               fadd dword ptr [ecx + 0xc]
// 0052b279  d95808               fstp dword ptr [eax + 8]
// 0052b27c  c20800               ret 8
// 0052b27f  8b442404             mov eax, dword ptr [esp + 4]
// 0052b283  d94104               fld dword ptr [ecx + 4]
// 0052b286  d918                 fstp dword ptr [eax]
// 0052b288  d94108               fld dword ptr [ecx + 8]
// 0052b28b  d95804               fstp dword ptr [eax + 4]
// 0052b28e  d9410c               fld dword ptr [ecx + 0xc]
// 0052b291  d95808               fstp dword ptr [eax + 8]
// 0052b294  c20800               ret 8
// library rbxgs-g3d/G3Dcpp\LineSegment.cpp (function ?point@LineSegment@G3D@@QBE?AVVector3@2@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-g3d G3Dcpp/LineSegment.cpp
