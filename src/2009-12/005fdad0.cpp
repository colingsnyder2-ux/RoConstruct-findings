// roc 2009-12 005fdad0  unit: G3D::VMeshDirectedEdgeKey::?$Table  size: 126 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005fdad0
//
// 005fdad0  51                   push ecx
// 005fdad1  53                   push ebx
// 005fdad2  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 005fdad6  55                   push ebp
// 005fdad7  56                   push esi
// 005fdad8  57                   push edi
// 005fdad9  8bf1                 mov esi, ecx
// 005fdadb  8b4608               mov eax, dword ptr [esi + 8]
// 005fdade  8d3c9d00000000       lea edi, [ebx*4]
// 005fdae5  6a10                 push 0x10
// 005fdae7  57                   push edi
// 005fdae8  89442418             mov dword ptr [esp + 0x18], eax
// 005fdaec  e8cfc7feff           call 0x5ea2c0
// 005fdaf1  57                   push edi
// 005fdaf2  6a00                 push 0
// 005fdaf4  50                   push eax
// 005fdaf5  894608               mov dword ptr [esi + 8], eax
// 005fdaf8  e8c3d4feff           call 0x5eafc0
// 005fdafd  33ed                 xor ebp, ebp
// 005fdaff  83c414               add esp, 0x14
// 005fdb02  396e0c               cmp dword ptr [esi + 0xc], ebp
// 005fdb05  7e2f                 jle 0x5fdb36
// 005fdb07  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005fdb0b  8b0ca9               mov ecx, dword ptr [ecx + ebp*4]
// 005fdb0e  85c9                 test ecx, ecx
// 005fdb10  741e                 je 0x5fdb30
// 005fdb12  8b01                 mov eax, dword ptr [ecx]
// 005fdb14  33d2                 xor edx, edx
// 005fdb16  f7f3                 div ebx
// 005fdb18  8b4608               mov eax, dword ptr [esi + 8]
// 005fdb1b  8b790c               mov edi, dword ptr [ecx + 0xc]
// 005fdb1e  8b0490               mov eax, dword ptr [eax + edx*4]
// 005fdb21  89410c               mov dword ptr [ecx + 0xc], eax
// 005fdb24  8b4608               mov eax, dword ptr [esi + 8]
// 005fdb27  890c90               mov dword ptr [eax + edx*4], ecx
// 005fdb2a  8bcf                 mov ecx, edi
// 005fdb2c  85ff                 test edi, edi
// 005fdb2e  75e2                 jne 0x5fdb12
// 005fdb30  45                   inc ebp
// 005fdb31  3b6e0c               cmp ebp, dword ptr [esi + 0xc]
// 005fdb34  7cd1                 jl 0x5fdb07
// 005fdb36  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005fdb3a  51                   push ecx
// 005fdb3b  e8a0c8feff           call 0x5ea3e0
// 005fdb40  83c404               add esp, 4
// 005fdb43  5f                   pop edi
// 005fdb44  895e0c               mov dword ptr [esi + 0xc], ebx
// 005fdb47  5e                   pop esi
// 005fdb48  5d                   pop ebp
// 005fdb49  5b                   pop ebx
// 005fdb4a  59                   pop ecx
// 005fdb4b  c20400               ret 4
// library g3d-6.09/G3Dcpp\MeshAlgWeld.cpp (function ?resize@?$Table@PAV?$Array@H@G3D@@_N@G3D@@AAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/MeshAlgWeld.cpp
