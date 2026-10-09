// roc 2009-12 0071e480  unit: RBX::VInstance::?$NonFactoryProduct  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0071e480
//
// 0071e480  56                   push esi
// 0071e481  8b742408             mov esi, dword ptr [esp + 8]
// 0071e485  57                   push edi
// 0071e486  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0071e48a  8bc7                 mov eax, edi
// 0071e48c  99                   cdq 
// 0071e48d  83e203               and edx, 3
// 0071e490  03c2                 add eax, edx
// 0071e492  c1f802               sar eax, 2
// 0071e495  8d0440               lea eax, [eax + eax*2]
// 0071e498  d90481               fld dword ptr [ecx + eax*4]
// 0071e49b  8bc7                 mov eax, edi
// 0071e49d  99                   cdq 
// 0071e49e  d91e                 fstp dword ptr [esi]
// 0071e4a0  2bc2                 sub eax, edx
// 0071e4a2  d1f8                 sar eax, 1
// 0071e4a4  2501000080           and eax, 0x80000001
// 0071e4a9  7905                 jns 0x71e4b0
// 0071e4ab  48                   dec eax
// 0071e4ac  83c8fe               or eax, 0xfffffffe
// 0071e4af  40                   inc eax
// 0071e4b0  8d1440               lea edx, [eax + eax*2]
// 0071e4b3  d9449104             fld dword ptr [ecx + edx*4 + 4]
// 0071e4b7  8bc7                 mov eax, edi
// 0071e4b9  2501000080           and eax, 0x80000001
// 0071e4be  d95e04               fstp dword ptr [esi + 4]
// 0071e4c1  7905                 jns 0x71e4c8
// 0071e4c3  48                   dec eax
// 0071e4c4  83c8fe               or eax, 0xfffffffe
// 0071e4c7  40                   inc eax
// 0071e4c8  8d0440               lea eax, [eax + eax*2]
// 0071e4cb  d9448108             fld dword ptr [ecx + eax*4 + 8]
// 0071e4cf  5f                   pop edi
// 0071e4d0  d95e08               fstp dword ptr [esi + 8]
// 0071e4d3  8bc6                 mov eax, esi
// 0071e4d5  5e                   pop esi
// 0071e4d6  c20800               ret 8
// library openrbx-client/App\util\Extents.cpp (function ?getCorner@Extents@RBX@@QBE?AVVector3@G3D@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/util/Extents.cpp
