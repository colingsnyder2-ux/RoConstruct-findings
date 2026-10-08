// roc 2009-12 005fe990  unit: G3D::_internal::DialogTemplate  size: 96 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005fe990
//
// 005fe990  53                   push ebx
// 005fe991  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 005fe995  56                   push esi
// 005fe996  8bf1                 mov esi, ecx
// 005fe998  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 005fe99b  8b4608               mov eax, dword ptr [esi + 8]
// 005fe99e  03cb                 add ecx, ebx
// 005fe9a0  3bc8                 cmp ecx, eax
// 005fe9a2  7e2f                 jle 0x5fe9d3
// 005fe9a4  8d0458               lea eax, [eax + ebx*2]
// 005fe9a7  57                   push edi
// 005fe9a8  50                   push eax
// 005fe9a9  894608               mov dword ptr [esi + 8], eax
// 005fe9ac  ff1578b79800         call dword ptr [0x98b778]
// 005fe9b2  8b560c               mov edx, dword ptr [esi + 0xc]
// 005fe9b5  8bf8                 mov edi, eax
// 005fe9b7  8b4604               mov eax, dword ptr [esi + 4]
// 005fe9ba  52                   push edx
// 005fe9bb  50                   push eax
// 005fe9bc  57                   push edi
// 005fe9bd  e824631f00           call 0x7f4ce6
// 005fe9c2  8b4e04               mov ecx, dword ptr [esi + 4]
// 005fe9c5  51                   push ecx
// 005fe9c6  ff1540b79800         call dword ptr [0x98b740]
// 005fe9cc  83c414               add esp, 0x14
// 005fe9cf  897e04               mov dword ptr [esi + 4], edi
// 005fe9d2  5f                   pop edi
// 005fe9d3  8b4604               mov eax, dword ptr [esi + 4]
// 005fe9d6  8b54240c             mov edx, dword ptr [esp + 0xc]
// 005fe9da  03460c               add eax, dword ptr [esi + 0xc]
// 005fe9dd  53                   push ebx
// 005fe9de  52                   push edx
// 005fe9df  50                   push eax
// 005fe9e0  e801631f00           call 0x7f4ce6
// 005fe9e5  015e0c               add dword ptr [esi + 0xc], ebx
// 005fe9e8  83c40c               add esp, 0xc
// 005fe9eb  5e                   pop esi
// 005fe9ec  5b                   pop ebx
// 005fe9ed  c20800               ret 8
// library g3d-6.09/G3Dcpp\prompt.cpp (function ?AppendData@DialogTemplate@_internal@G3D@@IAEXPBXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/prompt.cpp
