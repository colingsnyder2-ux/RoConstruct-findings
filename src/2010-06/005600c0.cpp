// from server: 100% by auto
// roc 2010-06 005600c0  unit: G3D::Sphere  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005600c0
//
// 005600c0  56                   push esi
// 005600c1  8bf1                 mov esi, ecx
// 005600c3  8b560c               mov edx, dword ptr [esi + 0xc]
// 005600c6  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005600ca  8b4608               mov eax, dword ptr [esi + 8]
// 005600cd  03d1                 add edx, ecx
// 005600cf  3bd0                 cmp edx, eax
// 005600d1  7e2f                 jle 0x560102
// 005600d3  8d0448               lea eax, [eax + ecx*2]
// 005600d6  57                   push edi
// 005600d7  50                   push eax
// 005600d8  894608               mov dword ptr [esi + 8], eax
// 005600db  ff15c8a89e00         call dword ptr [0x9ea8c8]
// 005600e1  8b4e04               mov ecx, dword ptr [esi + 4]
// 005600e4  8bf8                 mov edi, eax
// 005600e6  8b460c               mov eax, dword ptr [esi + 0xc]
// 005600e9  50                   push eax
// 005600ea  51                   push ecx
// 005600eb  57                   push edi
// 005600ec  e8358d2400           call 0x7a8e26
// 005600f1  8b5604               mov edx, dword ptr [esi + 4]
// 005600f4  52                   push edx
// 005600f5  ff1508aa9e00         call dword ptr [0x9eaa08]
// 005600fb  83c414               add esp, 0x14
// 005600fe  897e04               mov dword ptr [esi + 4], edi
// 00560101  5f                   pop edi
// 00560102  5e                   pop esi
// 00560103  c20400               ret 4
// library g3d-6.09/G3Dcpp\prompt.cpp (function ?EnsureSpace@DialogTemplate@_internal@G3D@@IAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/prompt.cpp
