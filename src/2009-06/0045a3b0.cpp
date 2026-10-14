// roc 2009-06 0045a3b0  unit: CRobloxWnd::PartDropTarget  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0045a3b0
//
// 0045a3b0  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0045a3b4  8b542408             mov edx, dword ptr [esp + 8]
// 0045a3b8  d901                 fld dword ptr [ecx]
// 0045a3ba  d81a                 fcomp dword ptr [edx]
// 0045a3bc  dfe0                 fnstsw ax
// 0045a3be  f6c441               test ah, 0x41
// 0045a3c1  8bc2                 mov eax, edx
// 0045a3c3  7402                 je 0x45a3c7
// 0045a3c5  8bc1                 mov eax, ecx
// 0045a3c7  c3                   ret 
// library g3d-6.09-rbx2008/G3Dcpp\AABox.cpp (function ??$min@M@std@@YAABMABM0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
// roc-lib: g3d-6.09-rbx2008 G3Dcpp/AABox.cpp
