// roc 2012-06 00638d40  unit: G3D::TextInput::TokenException  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00638d40
//
// 00638d40  51                   push ecx
// 00638d41  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00638d45  56                   push esi
// 00638d46  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00638d4a  8d442414             lea eax, [esp + 0x14]
// 00638d4e  50                   push eax
// 00638d4f  51                   push ecx
// 00638d50  56                   push esi
// 00638d51  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00638d59  e8c2feffff           call 0x638c20
// 00638d5e  83c40c               add esp, 0xc
// 00638d61  8bc6                 mov eax, esi
// 00638d63  5e                   pop esi
// 00638d64  59                   pop ecx
// 00638d65  c3                   ret 
// library g3d-6.09/G3Dcpp\format.cpp (function ?format@G3D@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PBDZZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/format.cpp
