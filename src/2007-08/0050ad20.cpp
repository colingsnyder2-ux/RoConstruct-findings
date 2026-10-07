// roc 2007-08 0050ad20  unit: G3D::GCamera  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0050ad20
//
// 0050ad20  8b442404             mov eax, dword ptr [esp + 4]
// 0050ad24  d9ee                 fldz 
// 0050ad26  8b542408             mov edx, dword ptr [esp + 8]
// 0050ad2a  d9500c               fst dword ptr [eax + 0xc]
// 0050ad2d  d95008               fst dword ptr [eax + 8]
// 0050ad30  03d2                 add edx, edx
// 0050ad32  d95004               fst dword ptr [eax + 4]
// 0050ad35  03d2                 add edx, edx
// 0050ad37  d918                 fstp dword ptr [eax]
// 0050ad39  d90491               fld dword ptr [ecx + edx*4]
// 0050ad3c  d918                 fstp dword ptr [eax]
// 0050ad3e  d9449104             fld dword ptr [ecx + edx*4 + 4]
// 0050ad42  d95804               fstp dword ptr [eax + 4]
// 0050ad45  d9449108             fld dword ptr [ecx + edx*4 + 8]
// 0050ad49  d95808               fstp dword ptr [eax + 8]
// 0050ad4c  d944910c             fld dword ptr [ecx + edx*4 + 0xc]
// 0050ad50  d9580c               fstp dword ptr [eax + 0xc]
// 0050ad53  c20800               ret 8
// library g3d-6.09/G3Dcpp\Matrix4.cpp (function ?getRow@Matrix4@G3D@@QBE?AVVector4@2@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Matrix4.cpp
