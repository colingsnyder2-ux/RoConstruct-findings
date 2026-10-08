// from server: 100% by auto
// roc 2009-06 00579380  unit: G3D::LineSegment  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00579380
//
// 00579380  51                   push ecx
// 00579381  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00579385  56                   push esi
// 00579386  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0057938a  8d442414             lea eax, [esp + 0x14]
// 0057938e  50                   push eax
// 0057938f  51                   push ecx
// 00579390  56                   push esi
// 00579391  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00579399  e8c2feffff           call 0x579260
// 0057939e  83c40c               add esp, 0xc
// 005793a1  8bc6                 mov eax, esi
// 005793a3  5e                   pop esi
// 005793a4  59                   pop ecx
// 005793a5  c3                   ret 
// library g3d-6.09/G3Dcpp\format.cpp (function ?format@G3D@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PBDZZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/format.cpp
