// roc 2009-06 00435200  unit: HVCXTPPropertyGridItem::?$XItem  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00435200
//
// 00435200  8b542404             mov edx, dword ptr [esp + 4]
// 00435204  d902                 fld dword ptr [edx]
// 00435206  d819                 fcomp dword ptr [ecx]
// 00435208  dfe0                 fnstsw ax
// 0043520a  f6c444               test ah, 0x44
// 0043520d  7a22                 jp 0x435231
// 0043520f  d94204               fld dword ptr [edx + 4]
// 00435212  d85904               fcomp dword ptr [ecx + 4]
// 00435215  dfe0                 fnstsw ax
// 00435217  f6c444               test ah, 0x44
// 0043521a  7a15                 jp 0x435231
// 0043521c  d94208               fld dword ptr [edx + 8]
// 0043521f  d85908               fcomp dword ptr [ecx + 8]
// 00435222  dfe0                 fnstsw ax
// 00435224  f6c444               test ah, 0x44
// 00435227  7a08                 jp 0x435231
// 00435229  b801000000           mov eax, 1
// 0043522e  c20400               ret 4
// 00435231  33c0                 xor eax, eax
// 00435233  c20400               ret 4
// library g3d-6.09-rbx2008/G3Dcpp\CollisionDetection.cpp (function ??8Vector3@G3D@@QBE_NABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
// roc-lib: g3d-6.09-rbx2008 G3Dcpp/CollisionDetection.cpp
