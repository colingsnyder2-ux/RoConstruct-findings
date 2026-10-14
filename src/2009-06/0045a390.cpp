// roc 2009-06 0045a390  unit: CRobloxWnd::PartDropTarget  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0045a390
//
// 0045a390  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0045a394  d901                 fld dword ptr [ecx]
// 0045a396  8b542404             mov edx, dword ptr [esp + 4]
// 0045a39a  d81a                 fcomp dword ptr [edx]
// 0045a39c  dfe0                 fnstsw ax
// 0045a39e  f6c441               test ah, 0x41
// 0045a3a1  8bc1                 mov eax, ecx
// 0045a3a3  7402                 je 0x45a3a7
// 0045a3a5  8bc2                 mov eax, edx
// 0045a3a7  c3                   ret 
// library g3d-6.09-rbx2008/G3Dcpp\AABox.cpp (function ??$max@M@std@@YAABMABM0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
// roc-lib: g3d-6.09-rbx2008 G3Dcpp/AABox.cpp
