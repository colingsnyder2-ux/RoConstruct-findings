// roc 2010-06 00718ff0  unit: RBX::BlockBlockContact  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00718ff0
//
// 00718ff0  56                   push esi
// 00718ff1  8b742408             mov esi, dword ptr [esp + 8]
// 00718ff5  57                   push edi
// 00718ff6  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00718ffa  8bc7                 mov eax, edi
// 00718ffc  99                   cdq 
// 00718ffd  83e203               and edx, 3
// 00719000  03c2                 add eax, edx
// 00719002  c1f802               sar eax, 2
// 00719005  8d0440               lea eax, [eax + eax*2]
// 00719008  d90481               fld dword ptr [ecx + eax*4]
// 0071900b  8bc7                 mov eax, edi
// 0071900d  99                   cdq 
// 0071900e  d91e                 fstp dword ptr [esi]
// 00719010  2bc2                 sub eax, edx
// 00719012  d1f8                 sar eax, 1
// 00719014  2501000080           and eax, 0x80000001
// 00719019  7905                 jns 0x719020
// 0071901b  48                   dec eax
// 0071901c  83c8fe               or eax, 0xfffffffe
// 0071901f  40                   inc eax
// 00719020  8d1440               lea edx, [eax + eax*2]
// 00719023  d9449104             fld dword ptr [ecx + edx*4 + 4]
// 00719027  8bc7                 mov eax, edi
// 00719029  2501000080           and eax, 0x80000001
// 0071902e  d95e04               fstp dword ptr [esi + 4]
// 00719031  7905                 jns 0x719038
// 00719033  48                   dec eax
// 00719034  83c8fe               or eax, 0xfffffffe
// 00719037  40                   inc eax
// 00719038  8d0440               lea eax, [eax + eax*2]
// 0071903b  d9448108             fld dword ptr [ecx + eax*4 + 8]
// 0071903f  5f                   pop edi
// 00719040  d95e08               fstp dword ptr [esi + 8]
// 00719043  8bc6                 mov eax, esi
// 00719045  5e                   pop esi
// 00719046  c20800               ret 8
// library openrbx-client/App\util\Extents.cpp (function ?getCorner@Extents@RBX@@QBE?AVVector3@G3D@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/util/Extents.cpp
