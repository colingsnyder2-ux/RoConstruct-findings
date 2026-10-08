// roc 2009-12 005f69a0  unit: G3D::BinaryInput  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005f69a0
//
// 005f69a0  8b542408             mov edx, dword ptr [esp + 8]
// 005f69a4  8b442404             mov eax, dword ptr [esp + 4]
// 005f69a8  03d2                 add edx, edx
// 005f69aa  03d2                 add edx, edx
// 005f69ac  d90491               fld dword ptr [ecx + edx*4]
// 005f69af  d918                 fstp dword ptr [eax]
// 005f69b1  d9449104             fld dword ptr [ecx + edx*4 + 4]
// 005f69b5  d95804               fstp dword ptr [eax + 4]
// 005f69b8  d9449108             fld dword ptr [ecx + edx*4 + 8]
// 005f69bc  d95808               fstp dword ptr [eax + 8]
// 005f69bf  d944910c             fld dword ptr [ecx + edx*4 + 0xc]
// 005f69c3  d9580c               fstp dword ptr [eax + 0xc]
// 005f69c6  c20800               ret 8
// library g3d-6.09/G3Dcpp\Matrix4.cpp (function ?getRow@Matrix4@G3D@@QBE?AVVector4@2@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 G3Dcpp/Matrix4.cpp
