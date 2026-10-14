// roc 2007-03 00571f70  unit: seg_00570000  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00571f70
//
// 00571f70  8b542404             mov edx, dword ptr [esp + 4]
// 00571f74  d902                 fld dword ptr [edx]
// 00571f76  d819                 fcomp dword ptr [ecx]
// 00571f78  dfe0                 fnstsw ax
// 00571f7a  f6c444               test ah, 0x44
// 00571f7d  7a1f                 jp 0x571f9e
// 00571f7f  d94204               fld dword ptr [edx + 4]
// 00571f82  d85904               fcomp dword ptr [ecx + 4]
// 00571f85  dfe0                 fnstsw ax
// 00571f87  f6c444               test ah, 0x44
// 00571f8a  7a12                 jp 0x571f9e
// 00571f8c  d94208               fld dword ptr [edx + 8]
// 00571f8f  d85908               fcomp dword ptr [ecx + 8]
// 00571f92  dfe0                 fnstsw ax
// 00571f94  f6c444               test ah, 0x44
// 00571f97  7a05                 jp 0x571f9e
// 00571f99  33c0                 xor eax, eax
// 00571f9b  c20400               ret 4
// 00571f9e  b801000000           mov eax, 1
// 00571fa3  c20400               ret 4
// library g3d-6.09-rbx2008/G3Dcpp\roc_export_0b17ffbc375b74f4.cpp (function ??9Vector3@G3D@@QBE_NABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
// roc-lib: g3d-6.09-rbx2008 G3Dcpp/roc_export_0b17ffbc375b74f4.cpp
