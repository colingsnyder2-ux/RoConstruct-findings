// from server: 100% by auto
// roc 2009-06 00575320  unit: G3D::BinaryInput  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00575320
//
// 00575320  d901                 fld dword ptr [ecx]
// 00575322  d9e1                 fabs 
// 00575324  d94104               fld dword ptr [ecx + 4]
// 00575327  d9e1                 fabs 
// 00575329  d94108               fld dword ptr [ecx + 8]
// 0057532c  d9e1                 fabs 
// 0057532e  d9ca                 fxch st(2)
// 00575330  d8d1                 fcom st(1)
// 00575332  dfe0                 fnstsw ax
// 00575334  f6c441               test ah, 0x41
// 00575337  750e                 jne 0x575347
// 00575339  ddd9                 fstp st(1)
// 0057533b  ded9                 fcompp 
// 0057533d  dfe0                 fnstsw ax
// 0057533f  f6c441               test ah, 0x41
// 00575342  7513                 jne 0x575357
// 00575344  33c0                 xor eax, eax
// 00575346  c3                   ret 
// 00575347  ddd8                 fstp st(0)
// 00575349  ded9                 fcompp 
// 0057534b  dfe0                 fnstsw ax
// 0057534d  f6c441               test ah, 0x41
// 00575350  b801000000           mov eax, 1
// 00575355  7405                 je 0x57535c
// 00575357  b802000000           mov eax, 2
// 0057535c  c3                   ret 
// library g3d-6.09/G3Dcpp\Vector3.cpp (function ?primaryAxis@Vector3@G3D@@QBE?AW4Axis@12@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Vector3.cpp
