// roc 2009-06 0058a430  unit: seg_00580000  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0058a430
//
// 0058a430  8b442408             mov eax, dword ptr [esp + 8]
// 0058a434  d94104               fld dword ptr [ecx + 4]
// 0058a437  83e800               sub eax, 0
// 0058a43a  7423                 je 0x58a45f
// 0058a43c  83e801               sub eax, 1
// 0058a43f  8b442404             mov eax, dword ptr [esp + 4]
// 0058a443  751e                 jne 0x58a463
// 0058a445  d84110               fadd dword ptr [ecx + 0x10]
// 0058a448  d918                 fstp dword ptr [eax]
// 0058a44a  d94114               fld dword ptr [ecx + 0x14]
// 0058a44d  d84108               fadd dword ptr [ecx + 8]
// 0058a450  d95804               fstp dword ptr [eax + 4]
// 0058a453  d94118               fld dword ptr [ecx + 0x18]
// 0058a456  d8410c               fadd dword ptr [ecx + 0xc]
// 0058a459  d95808               fstp dword ptr [eax + 8]
// 0058a45c  c20800               ret 8
// 0058a45f  8b442404             mov eax, dword ptr [esp + 4]
// 0058a463  d918                 fstp dword ptr [eax]
// 0058a465  d94108               fld dword ptr [ecx + 8]
// 0058a468  d95804               fstp dword ptr [eax + 4]
// 0058a46b  d9410c               fld dword ptr [ecx + 0xc]
// 0058a46e  d95808               fstp dword ptr [eax + 8]
// 0058a471  c20800               ret 8
// library g3d-6.09-rbx2008/G3Dcpp\LineSegment.cpp (function ?endPoint@LineSegment@G3D@@QBE?AVVector3@2@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
// roc-lib: g3d-6.09-rbx2008 G3Dcpp/LineSegment.cpp
