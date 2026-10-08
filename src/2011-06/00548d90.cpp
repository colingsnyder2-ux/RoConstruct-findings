// from server: 100% by auto
// roc 2011-06 00548d90  unit: G3D::TextInput::TokenException  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00548d90
//
// 00548d90  51                   push ecx
// 00548d91  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00548d95  56                   push esi
// 00548d96  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00548d9a  8d442414             lea eax, [esp + 0x14]
// 00548d9e  50                   push eax
// 00548d9f  51                   push ecx
// 00548da0  56                   push esi
// 00548da1  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00548da9  e8c2feffff           call 0x548c70
// 00548dae  83c40c               add esp, 0xc
// 00548db1  8bc6                 mov eax, esi
// 00548db3  5e                   pop esi
// 00548db4  59                   pop ecx
// 00548db5  c3                   ret 
// library g3d-6.09/G3Dcpp\format.cpp (function ?format@G3D@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PBDZZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/format.cpp
