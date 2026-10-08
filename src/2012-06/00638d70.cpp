// from server: 100% by auto
// roc 2012-06 00638d70  unit: G3D::TextInput::TokenException  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00638d70
//
// 00638d70  56                   push esi
// 00638d71  8bf1                 mov esi, ecx
// 00638d73  8b560c               mov edx, dword ptr [esi + 0xc]
// 00638d76  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00638d7a  8b4608               mov eax, dword ptr [esi + 8]
// 00638d7d  03d1                 add edx, ecx
// 00638d7f  3bd0                 cmp edx, eax
// 00638d81  7e2f                 jle 0x638db2
// 00638d83  8d0448               lea eax, [eax + ecx*2]
// 00638d86  57                   push edi
// 00638d87  50                   push eax
// 00638d88  894608               mov dword ptr [esi + 8], eax
// 00638d8b  ff15f829b200         call dword ptr [0xb229f8]
// 00638d91  8b4e04               mov ecx, dword ptr [esi + 4]
// 00638d94  8bf8                 mov edi, eax
// 00638d96  8b460c               mov eax, dword ptr [esi + 0xc]
// 00638d99  50                   push eax
// 00638d9a  51                   push ecx
// 00638d9b  57                   push edi
// 00638d9c  e8bba83400           call 0x98365c
// 00638da1  8b5604               mov edx, dword ptr [esi + 4]
// 00638da4  52                   push edx
// 00638da5  ff15c829b200         call dword ptr [0xb229c8]
// 00638dab  83c414               add esp, 0x14
// 00638dae  897e04               mov dword ptr [esi + 4], edi
// 00638db1  5f                   pop edi
// 00638db2  5e                   pop esi
// 00638db3  c20400               ret 4
// library g3d-6.09/G3Dcpp\prompt.cpp (function ?EnsureSpace@DialogTemplate@_internal@G3D@@IAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/prompt.cpp
