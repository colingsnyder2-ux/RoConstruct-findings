// roc 2009-06 00579510  unit: G3D::LineSegment  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00579510
//
// 00579510  8b442404             mov eax, dword ptr [esp + 4]
// 00579514  50                   push eax
// 00579515  e806ffffff           call 0x579420
// 0057951a  33c9                 xor ecx, ecx
// 0057951c  84c0                 test al, al
// 0057951e  0f94c1               sete cl
// 00579521  8ac1                 mov al, cl
// 00579523  c20400               ret 4
// library g3d-6.09/G3Dcpp\GLight.cpp (function ??9GLight@G3D@@QBE_NABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/GLight.cpp
