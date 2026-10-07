// roc 2012-06 009779b0  unit: RBX::VCEvent::?$sp_counted_impl_p  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009779b0
//
// 009779b0  51                   push ecx
// 009779b1  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 009779b5  56                   push esi
// 009779b6  8b74240c             mov esi, dword ptr [esp + 0xc]
// 009779ba  8d442414             lea eax, [esp + 0x14]
// 009779be  50                   push eax
// 009779bf  51                   push ecx
// 009779c0  56                   push esi
// 009779c1  c744241000000000     mov dword ptr [esp + 0x10], 0
// 009779c9  e862feffff           call 0x977830
// 009779ce  83c40c               add esp, 0xc
// 009779d1  8bc6                 mov eax, esi
// 009779d3  5e                   pop esi
// 009779d4  59                   pop ecx
// 009779d5  c3                   ret 
// library g3d-6.09/G3Dcpp\format.cpp (function ?format@G3D@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PBDZZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/format.cpp
