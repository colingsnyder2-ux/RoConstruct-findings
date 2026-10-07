// roc 2012-06 00972df0  unit: RBX::Log  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00972df0
//
// 00972df0  51                   push ecx
// 00972df1  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00972df5  56                   push esi
// 00972df6  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00972dfa  8d442414             lea eax, [esp + 0x14]
// 00972dfe  50                   push eax
// 00972dff  51                   push ecx
// 00972e00  56                   push esi
// 00972e01  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00972e09  e802feffff           call 0x972c10
// 00972e0e  83c40c               add esp, 0xc
// 00972e11  8bc6                 mov eax, esi
// 00972e13  5e                   pop esi
// 00972e14  59                   pop ecx
// 00972e15  c3                   ret 
// library g3d-6.09/G3Dcpp\format.cpp (function ?format@G3D@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PBDZZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/format.cpp
