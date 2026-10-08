// from server: 100% by auto
// roc 2008-06 00514630  unit: G3D::GCamera  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00514630
//
// 00514630  8b442404             mov eax, dword ptr [esp + 4]
// 00514634  d9ee                 fldz 
// 00514636  8b542408             mov edx, dword ptr [esp + 8]
// 0051463a  d9500c               fst dword ptr [eax + 0xc]
// 0051463d  d95008               fst dword ptr [eax + 8]
// 00514640  03d2                 add edx, edx
// 00514642  d95004               fst dword ptr [eax + 4]
// 00514645  03d2                 add edx, edx
// 00514647  d918                 fstp dword ptr [eax]
// 00514649  d90491               fld dword ptr [ecx + edx*4]
// 0051464c  d918                 fstp dword ptr [eax]
// 0051464e  d9449104             fld dword ptr [ecx + edx*4 + 4]
// 00514652  d95804               fstp dword ptr [eax + 4]
// 00514655  d9449108             fld dword ptr [ecx + edx*4 + 8]
// 00514659  d95808               fstp dword ptr [eax + 8]
// 0051465c  d944910c             fld dword ptr [ecx + edx*4 + 0xc]
// 00514660  d9580c               fstp dword ptr [eax + 0xc]
// 00514663  c20800               ret 8
// library g3d-6.09/G3Dcpp\Matrix4.cpp (function ?getRow@Matrix4@G3D@@QBE?AVVector4@2@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Matrix4.cpp
