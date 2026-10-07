// roc 2007-08 0052b040  unit: seg_00520000  size: 71 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0052b040
//
// 0052b040  8b442408             mov eax, dword ptr [esp + 8]
// 0052b044  83e800               sub eax, 0
// 0052b047  7426                 je 0x52b06f
// 0052b049  83e801               sub eax, 1
// 0052b04c  8b442404             mov eax, dword ptr [esp + 4]
// 0052b050  7521                 jne 0x52b073
// 0052b052  d94110               fld dword ptr [ecx + 0x10]
// 0052b055  d84104               fadd dword ptr [ecx + 4]
// 0052b058  d918                 fstp dword ptr [eax]
// 0052b05a  d94114               fld dword ptr [ecx + 0x14]
// 0052b05d  d84108               fadd dword ptr [ecx + 8]
// 0052b060  d95804               fstp dword ptr [eax + 4]
// 0052b063  d94118               fld dword ptr [ecx + 0x18]
// 0052b066  d8410c               fadd dword ptr [ecx + 0xc]
// 0052b069  d95808               fstp dword ptr [eax + 8]
// 0052b06c  c20800               ret 8
// 0052b06f  8b442404             mov eax, dword ptr [esp + 4]
// 0052b073  d94104               fld dword ptr [ecx + 4]
// 0052b076  d918                 fstp dword ptr [eax]
// 0052b078  d94108               fld dword ptr [ecx + 8]
// 0052b07b  d95804               fstp dword ptr [eax + 4]
// 0052b07e  d9410c               fld dword ptr [ecx + 0xc]
// 0052b081  d95808               fstp dword ptr [eax + 8]
// 0052b084  c20800               ret 8
// library g3d-6.09/G3Dcpp\LineSegment.cpp (function ?point@LineSegment@G3D@@QBE?AVVector3@2@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/LineSegment.cpp
