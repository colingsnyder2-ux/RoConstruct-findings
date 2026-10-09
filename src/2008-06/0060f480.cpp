// roc 2008-06 0060f480  unit: RBX::BlockBlockContact  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0060f480
//
// 0060f480  56                   push esi
// 0060f481  8b742408             mov esi, dword ptr [esp + 8]
// 0060f485  57                   push edi
// 0060f486  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0060f48a  8bc7                 mov eax, edi
// 0060f48c  99                   cdq 
// 0060f48d  83e203               and edx, 3
// 0060f490  03c2                 add eax, edx
// 0060f492  c1f802               sar eax, 2
// 0060f495  8d0440               lea eax, [eax + eax*2]
// 0060f498  d90481               fld dword ptr [ecx + eax*4]
// 0060f49b  8bc7                 mov eax, edi
// 0060f49d  99                   cdq 
// 0060f49e  d91e                 fstp dword ptr [esi]
// 0060f4a0  2bc2                 sub eax, edx
// 0060f4a2  d1f8                 sar eax, 1
// 0060f4a4  2501000080           and eax, 0x80000001
// 0060f4a9  7905                 jns 0x60f4b0
// 0060f4ab  48                   dec eax
// 0060f4ac  83c8fe               or eax, 0xfffffffe
// 0060f4af  40                   inc eax
// 0060f4b0  8d1440               lea edx, [eax + eax*2]
// 0060f4b3  d9449104             fld dword ptr [ecx + edx*4 + 4]
// 0060f4b7  8bc7                 mov eax, edi
// 0060f4b9  2501000080           and eax, 0x80000001
// 0060f4be  d95e04               fstp dword ptr [esi + 4]
// 0060f4c1  7905                 jns 0x60f4c8
// 0060f4c3  48                   dec eax
// 0060f4c4  83c8fe               or eax, 0xfffffffe
// 0060f4c7  40                   inc eax
// 0060f4c8  8d0440               lea eax, [eax + eax*2]
// 0060f4cb  d9448108             fld dword ptr [ecx + eax*4 + 8]
// 0060f4cf  5f                   pop edi
// 0060f4d0  d95e08               fstp dword ptr [esi + 8]
// 0060f4d3  8bc6                 mov eax, esi
// 0060f4d5  5e                   pop esi
// 0060f4d6  c20800               ret 8
// library openrbx-client/App\util\Extents.cpp (function ?getCorner@Extents@RBX@@QBE?AVVector3@G3D@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/util/Extents.cpp
