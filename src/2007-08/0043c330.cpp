// roc 2007-08 0043c330  unit: HVCXTPPropertyGridItem::?$XItem  size: 60 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0043c330
//
// 0043c330  d901                 fld dword ptr [ecx]
// 0043c332  8b542404             mov edx, dword ptr [esp + 4]
// 0043c336  d902                 fld dword ptr [edx]
// 0043c338  dae9                 fucompp 
// 0043c33a  dfe0                 fnstsw ax
// 0043c33c  f6c444               test ah, 0x44
// 0043c33f  7a26                 jp 0x43c367
// 0043c341  d94104               fld dword ptr [ecx + 4]
// 0043c344  d94204               fld dword ptr [edx + 4]
// 0043c347  dae9                 fucompp 
// 0043c349  dfe0                 fnstsw ax
// 0043c34b  f6c444               test ah, 0x44
// 0043c34e  7a17                 jp 0x43c367
// 0043c350  d94108               fld dword ptr [ecx + 8]
// 0043c353  d94208               fld dword ptr [edx + 8]
// 0043c356  dae9                 fucompp 
// 0043c358  dfe0                 fnstsw ax
// 0043c35a  f6c444               test ah, 0x44
// 0043c35d  7a08                 jp 0x43c367
// 0043c35f  b801000000           mov eax, 1
// 0043c364  c20400               ret 4
// 0043c367  33c0                 xor eax, eax
// 0043c369  c20400               ret 4
// library g3d-6.09/G3Dcpp\CollisionDetection.cpp (function ??8Vector3@G3D@@QBE_NABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/CollisionDetection.cpp
