// roc 2007-03 005b73f0  unit: seg_005b0000  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005b73f0
//
// 005b73f0  56                   push esi
// 005b73f1  8b742408             mov esi, dword ptr [esp + 8]
// 005b73f5  57                   push edi
// 005b73f6  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 005b73fa  8bc7                 mov eax, edi
// 005b73fc  99                   cdq 
// 005b73fd  83e203               and edx, 3
// 005b7400  03c2                 add eax, edx
// 005b7402  c1f802               sar eax, 2
// 005b7405  8d0440               lea eax, [eax + eax*2]
// 005b7408  d90481               fld dword ptr [ecx + eax*4]
// 005b740b  8bc7                 mov eax, edi
// 005b740d  99                   cdq 
// 005b740e  d91e                 fstp dword ptr [esi]
// 005b7410  2bc2                 sub eax, edx
// 005b7412  d1f8                 sar eax, 1
// 005b7414  2501000080           and eax, 0x80000001
// 005b7419  7905                 jns 0x5b7420
// 005b741b  48                   dec eax
// 005b741c  83c8fe               or eax, 0xfffffffe
// 005b741f  40                   inc eax
// 005b7420  8d1440               lea edx, [eax + eax*2]
// 005b7423  d9449104             fld dword ptr [ecx + edx*4 + 4]
// 005b7427  8bc7                 mov eax, edi
// 005b7429  2501000080           and eax, 0x80000001
// 005b742e  d95e04               fstp dword ptr [esi + 4]
// 005b7431  7905                 jns 0x5b7438
// 005b7433  48                   dec eax
// 005b7434  83c8fe               or eax, 0xfffffffe
// 005b7437  40                   inc eax
// 005b7438  8d0440               lea eax, [eax + eax*2]
// 005b743b  d9448108             fld dword ptr [ecx + eax*4 + 8]
// 005b743f  5f                   pop edi
// 005b7440  d95e08               fstp dword ptr [esi + 8]
// 005b7443  8bc6                 mov eax, esi
// 005b7445  5e                   pop esi
// 005b7446  c20800               ret 8
// library openrbx-client/App\util\Extents.cpp (function ?getCorner@Extents@RBX@@QBE?AVVector3@G3D@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/util/Extents.cpp
