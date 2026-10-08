// roc 2007-08 005bc4e0  unit: RBX::VPVInstance::?$EnumPropDescriptor  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005bc4e0
//
// 005bc4e0  56                   push esi
// 005bc4e1  8b742408             mov esi, dword ptr [esp + 8]
// 005bc4e5  57                   push edi
// 005bc4e6  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 005bc4ea  8bc7                 mov eax, edi
// 005bc4ec  99                   cdq 
// 005bc4ed  83e203               and edx, 3
// 005bc4f0  03c2                 add eax, edx
// 005bc4f2  c1f802               sar eax, 2
// 005bc4f5  8d0440               lea eax, [eax + eax*2]
// 005bc4f8  d90481               fld dword ptr [ecx + eax*4]
// 005bc4fb  8bc7                 mov eax, edi
// 005bc4fd  99                   cdq 
// 005bc4fe  d91e                 fstp dword ptr [esi]
// 005bc500  2bc2                 sub eax, edx
// 005bc502  d1f8                 sar eax, 1
// 005bc504  2501000080           and eax, 0x80000001
// 005bc509  7905                 jns 0x5bc510
// 005bc50b  48                   dec eax
// 005bc50c  83c8fe               or eax, 0xfffffffe
// 005bc50f  40                   inc eax
// 005bc510  8d1440               lea edx, [eax + eax*2]
// 005bc513  d9449104             fld dword ptr [ecx + edx*4 + 4]
// 005bc517  8bc7                 mov eax, edi
// 005bc519  2501000080           and eax, 0x80000001
// 005bc51e  d95e04               fstp dword ptr [esi + 4]
// 005bc521  7905                 jns 0x5bc528
// 005bc523  48                   dec eax
// 005bc524  83c8fe               or eax, 0xfffffffe
// 005bc527  40                   inc eax
// 005bc528  8d0440               lea eax, [eax + eax*2]
// 005bc52b  d9448108             fld dword ptr [ecx + eax*4 + 8]
// 005bc52f  5f                   pop edi
// 005bc530  d95e08               fstp dword ptr [esi + 8]
// 005bc533  8bc6                 mov eax, esi
// 005bc535  5e                   pop esi
// 005bc536  c20800               ret 8
// library openrbx-client/App\util\Extents.cpp (function ?getCorner@Extents@RBX@@QBE?AVVector3@G3D@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/util/Extents.cpp
