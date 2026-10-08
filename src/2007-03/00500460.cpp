// roc 2007-03 00500460  unit: seg_00500000  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00500460
//
// 00500460  8b442404             mov eax, dword ptr [esp + 4]
// 00500464  d9ee                 fldz 
// 00500466  8b542408             mov edx, dword ptr [esp + 8]
// 0050046a  d9500c               fst dword ptr [eax + 0xc]
// 0050046d  d95008               fst dword ptr [eax + 8]
// 00500470  03d2                 add edx, edx
// 00500472  d95004               fst dword ptr [eax + 4]
// 00500475  03d2                 add edx, edx
// 00500477  d918                 fstp dword ptr [eax]
// 00500479  d90491               fld dword ptr [ecx + edx*4]
// 0050047c  d918                 fstp dword ptr [eax]
// 0050047e  d9449104             fld dword ptr [ecx + edx*4 + 4]
// 00500482  d95804               fstp dword ptr [eax + 4]
// 00500485  d9449108             fld dword ptr [ecx + edx*4 + 8]
// 00500489  d95808               fstp dword ptr [eax + 8]
// 0050048c  d944910c             fld dword ptr [ecx + edx*4 + 0xc]
// 00500490  d9580c               fstp dword ptr [eax + 0xc]
// 00500493  c20800               ret 8
// library rbxgs-g3d/G3Dcpp\Matrix4.cpp (function ?getRow@Matrix4@G3D@@QBE?AVVector4@2@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-g3d G3Dcpp/Matrix4.cpp
