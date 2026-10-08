// roc 2009-12 005f9940  unit: G3D::LineSegment  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005f9940
//
// 005f9940  51                   push ecx
// 005f9941  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005f9945  56                   push esi
// 005f9946  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005f994a  8d442414             lea eax, [esp + 0x14]
// 005f994e  50                   push eax
// 005f994f  51                   push ecx
// 005f9950  56                   push esi
// 005f9951  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005f9959  e8c2feffff           call 0x5f9820
// 005f995e  83c40c               add esp, 0xc
// 005f9961  8bc6                 mov eax, esi
// 005f9963  5e                   pop esi
// 005f9964  59                   pop ecx
// 005f9965  c3                   ret 
// library g3d-6.09/G3Dcpp\format.cpp (function ?format@G3D@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PBDZZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/format.cpp
