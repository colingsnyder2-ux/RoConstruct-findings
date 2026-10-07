// roc 2010-06 00558500  unit: seg_00550000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00558500
//
// 00558500  8b542408             mov edx, dword ptr [esp + 8]
// 00558504  8b442404             mov eax, dword ptr [esp + 4]
// 00558508  03d2                 add edx, edx
// 0055850a  03d2                 add edx, edx
// 0055850c  d90491               fld dword ptr [ecx + edx*4]
// 0055850f  d918                 fstp dword ptr [eax]
// 00558511  d9449104             fld dword ptr [ecx + edx*4 + 4]
// 00558515  d95804               fstp dword ptr [eax + 4]
// 00558518  d9449108             fld dword ptr [ecx + edx*4 + 8]
// 0055851c  d95808               fstp dword ptr [eax + 8]
// 0055851f  d944910c             fld dword ptr [ecx + edx*4 + 0xc]
// 00558523  d9580c               fstp dword ptr [eax + 0xc]
// 00558526  c20800               ret 8
// library g3d-6.09/G3Dcpp\Matrix4.cpp (function ?getRow@Matrix4@G3D@@QBE?AVVector4@2@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 G3Dcpp/Matrix4.cpp
