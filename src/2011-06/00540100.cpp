// roc 2011-06 00540100  unit: G3D::MemoryManager  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00540100
//
// 00540100  8b442408             mov eax, dword ptr [esp + 8]
// 00540104  d900                 fld dword ptr [eax]
// 00540106  8b542404             mov edx, dword ptr [esp + 4]
// 0054010a  d91c91               fstp dword ptr [ecx + edx*4]
// 0054010d  d94004               fld dword ptr [eax + 4]
// 00540110  d95c910c             fstp dword ptr [ecx + edx*4 + 0xc]
// 00540114  d94008               fld dword ptr [eax + 8]
// 00540117  d95c9118             fstp dword ptr [ecx + edx*4 + 0x18]
// 0054011b  c20800               ret 8
// library g3d-6.09/G3Dcpp\Matrix3.cpp (function ?setColumn@Matrix3@G3D@@QAEXHABVVector3@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Matrix3.cpp
