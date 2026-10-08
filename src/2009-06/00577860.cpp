// from server: 100% by auto
// roc 2009-06 00577860  unit: G3D::LineSegment  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00577860
//
// 00577860  8b442404             mov eax, dword ptr [esp + 4]
// 00577864  d9ee                 fldz 
// 00577866  8b542408             mov edx, dword ptr [esp + 8]
// 0057786a  d9500c               fst dword ptr [eax + 0xc]
// 0057786d  d95008               fst dword ptr [eax + 8]
// 00577870  03d2                 add edx, edx
// 00577872  d95004               fst dword ptr [eax + 4]
// 00577875  03d2                 add edx, edx
// 00577877  d918                 fstp dword ptr [eax]
// 00577879  d90491               fld dword ptr [ecx + edx*4]
// 0057787c  d918                 fstp dword ptr [eax]
// 0057787e  d9449104             fld dword ptr [ecx + edx*4 + 4]
// 00577882  d95804               fstp dword ptr [eax + 4]
// 00577885  d9449108             fld dword ptr [ecx + edx*4 + 8]
// 00577889  d95808               fstp dword ptr [eax + 8]
// 0057788c  d944910c             fld dword ptr [ecx + edx*4 + 0xc]
// 00577890  d9580c               fstp dword ptr [eax + 0xc]
// 00577893  c20800               ret 8
// library g3d-6.09/G3Dcpp\Matrix4.cpp (function ?getRow@Matrix4@G3D@@QBE?AVVector4@2@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Matrix4.cpp
