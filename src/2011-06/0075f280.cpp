// roc 2011-06 0075f280  unit: RBX::BoxSelectCommand  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0075f280
//
// 0075f280  56                   push esi
// 0075f281  8b742408             mov esi, dword ptr [esp + 8]
// 0075f285  57                   push edi
// 0075f286  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0075f28a  8bc7                 mov eax, edi
// 0075f28c  99                   cdq 
// 0075f28d  83e203               and edx, 3
// 0075f290  03c2                 add eax, edx
// 0075f292  c1f802               sar eax, 2
// 0075f295  8d0440               lea eax, [eax + eax*2]
// 0075f298  d90481               fld dword ptr [ecx + eax*4]
// 0075f29b  8bc7                 mov eax, edi
// 0075f29d  99                   cdq 
// 0075f29e  d91e                 fstp dword ptr [esi]
// 0075f2a0  2bc2                 sub eax, edx
// 0075f2a2  d1f8                 sar eax, 1
// 0075f2a4  2501000080           and eax, 0x80000001
// 0075f2a9  7905                 jns 0x75f2b0
// 0075f2ab  48                   dec eax
// 0075f2ac  83c8fe               or eax, 0xfffffffe
// 0075f2af  40                   inc eax
// 0075f2b0  8d1440               lea edx, [eax + eax*2]
// 0075f2b3  d9449104             fld dword ptr [ecx + edx*4 + 4]
// 0075f2b7  8bc7                 mov eax, edi
// 0075f2b9  2501000080           and eax, 0x80000001
// 0075f2be  d95e04               fstp dword ptr [esi + 4]
// 0075f2c1  7905                 jns 0x75f2c8
// 0075f2c3  48                   dec eax
// 0075f2c4  83c8fe               or eax, 0xfffffffe
// 0075f2c7  40                   inc eax
// 0075f2c8  8d0440               lea eax, [eax + eax*2]
// 0075f2cb  d9448108             fld dword ptr [ecx + eax*4 + 8]
// 0075f2cf  5f                   pop edi
// 0075f2d0  d95e08               fstp dword ptr [esi + 8]
// 0075f2d3  8bc6                 mov eax, esi
// 0075f2d5  5e                   pop esi
// 0075f2d6  c20800               ret 8
// library openrbx-client/App\util\Extents.cpp (function ?getCorner@Extents@RBX@@QBE?AVVector3@G3D@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/util/Extents.cpp
