// roc 2008-06 00530730  unit: seg_00530000  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00530730
//
// 00530730  8bc1                 mov eax, ecx
// 00530732  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00530736  d901                 fld dword ptr [ecx]
// 00530738  d800                 fadd dword ptr [eax]
// 0053073a  d918                 fstp dword ptr [eax]
// 0053073c  d94104               fld dword ptr [ecx + 4]
// 0053073f  d84004               fadd dword ptr [eax + 4]
// 00530742  d95804               fstp dword ptr [eax + 4]
// 00530745  d94108               fld dword ptr [ecx + 8]
// 00530748  d84008               fadd dword ptr [eax + 8]
// 0053074b  d95808               fstp dword ptr [eax + 8]
// 0053074e  c20400               ret 4
// library g3d-6.09/G3Dcpp\Box.cpp (function ??YVector3@G3D@@QAEAAV01@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Box.cpp
