// from server: 100% by auto
// roc 2012-06 00638fb0  unit: G3D::_internal::DialogTemplate  size: 96 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00638fb0
//
// 00638fb0  53                   push ebx
// 00638fb1  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 00638fb5  56                   push esi
// 00638fb6  8bf1                 mov esi, ecx
// 00638fb8  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 00638fbb  8b4608               mov eax, dword ptr [esi + 8]
// 00638fbe  03cb                 add ecx, ebx
// 00638fc0  3bc8                 cmp ecx, eax
// 00638fc2  7e2f                 jle 0x638ff3
// 00638fc4  8d0458               lea eax, [eax + ebx*2]
// 00638fc7  57                   push edi
// 00638fc8  50                   push eax
// 00638fc9  894608               mov dword ptr [esi + 8], eax
// 00638fcc  ff15f829b200         call dword ptr [0xb229f8]
// 00638fd2  8b560c               mov edx, dword ptr [esi + 0xc]
// 00638fd5  8bf8                 mov edi, eax
// 00638fd7  8b4604               mov eax, dword ptr [esi + 4]
// 00638fda  52                   push edx
// 00638fdb  50                   push eax
// 00638fdc  57                   push edi
// 00638fdd  e87aa63400           call 0x98365c
// 00638fe2  8b4e04               mov ecx, dword ptr [esi + 4]
// 00638fe5  51                   push ecx
// 00638fe6  ff15c829b200         call dword ptr [0xb229c8]
// 00638fec  83c414               add esp, 0x14
// 00638fef  897e04               mov dword ptr [esi + 4], edi
// 00638ff2  5f                   pop edi
// 00638ff3  8b4604               mov eax, dword ptr [esi + 4]
// 00638ff6  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00638ffa  03460c               add eax, dword ptr [esi + 0xc]
// 00638ffd  53                   push ebx
// 00638ffe  52                   push edx
// 00638fff  50                   push eax
// 00639000  e857a63400           call 0x98365c
// 00639005  015e0c               add dword ptr [esi + 0xc], ebx
// 00639008  83c40c               add esp, 0xc
// 0063900b  5e                   pop esi
// 0063900c  5b                   pop ebx
// 0063900d  c20800               ret 8
// library g3d-6.09/G3Dcpp\prompt.cpp (function ?AppendData@DialogTemplate@_internal@G3D@@IAEXPBXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/prompt.cpp
