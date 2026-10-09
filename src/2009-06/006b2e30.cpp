// roc 2009-06 006b2e30  unit: RBX::BlockBlockContact  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006b2e30
//
// 006b2e30  56                   push esi
// 006b2e31  8b742408             mov esi, dword ptr [esp + 8]
// 006b2e35  57                   push edi
// 006b2e36  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 006b2e3a  8bc7                 mov eax, edi
// 006b2e3c  99                   cdq 
// 006b2e3d  83e203               and edx, 3
// 006b2e40  03c2                 add eax, edx
// 006b2e42  c1f802               sar eax, 2
// 006b2e45  8d0440               lea eax, [eax + eax*2]
// 006b2e48  d90481               fld dword ptr [ecx + eax*4]
// 006b2e4b  8bc7                 mov eax, edi
// 006b2e4d  99                   cdq 
// 006b2e4e  d91e                 fstp dword ptr [esi]
// 006b2e50  2bc2                 sub eax, edx
// 006b2e52  d1f8                 sar eax, 1
// 006b2e54  2501000080           and eax, 0x80000001
// 006b2e59  7905                 jns 0x6b2e60
// 006b2e5b  48                   dec eax
// 006b2e5c  83c8fe               or eax, 0xfffffffe
// 006b2e5f  40                   inc eax
// 006b2e60  8d1440               lea edx, [eax + eax*2]
// 006b2e63  d9449104             fld dword ptr [ecx + edx*4 + 4]
// 006b2e67  8bc7                 mov eax, edi
// 006b2e69  2501000080           and eax, 0x80000001
// 006b2e6e  d95e04               fstp dword ptr [esi + 4]
// 006b2e71  7905                 jns 0x6b2e78
// 006b2e73  48                   dec eax
// 006b2e74  83c8fe               or eax, 0xfffffffe
// 006b2e77  40                   inc eax
// 006b2e78  8d0440               lea eax, [eax + eax*2]
// 006b2e7b  d9448108             fld dword ptr [ecx + eax*4 + 8]
// 006b2e7f  5f                   pop edi
// 006b2e80  d95e08               fstp dword ptr [esi + 8]
// 006b2e83  8bc6                 mov eax, esi
// 006b2e85  5e                   pop esi
// 006b2e86  c20800               ret 8
// library openrbx-client/App\util\Extents.cpp (function ?getCorner@Extents@RBX@@QBE?AVVector3@G3D@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/util/Extents.cpp
