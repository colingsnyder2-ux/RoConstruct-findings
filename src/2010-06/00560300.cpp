// roc 2010-06 00560300  unit: G3D::_internal::DialogTemplate  size: 96 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00560300
//
// 00560300  53                   push ebx
// 00560301  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 00560305  56                   push esi
// 00560306  8bf1                 mov esi, ecx
// 00560308  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 0056030b  8b4608               mov eax, dword ptr [esi + 8]
// 0056030e  03cb                 add ecx, ebx
// 00560310  3bc8                 cmp ecx, eax
// 00560312  7e2f                 jle 0x560343
// 00560314  8d0458               lea eax, [eax + ebx*2]
// 00560317  57                   push edi
// 00560318  50                   push eax
// 00560319  894608               mov dword ptr [esi + 8], eax
// 0056031c  ff15c8a89e00         call dword ptr [0x9ea8c8]
// 00560322  8b560c               mov edx, dword ptr [esi + 0xc]
// 00560325  8bf8                 mov edi, eax
// 00560327  8b4604               mov eax, dword ptr [esi + 4]
// 0056032a  52                   push edx
// 0056032b  50                   push eax
// 0056032c  57                   push edi
// 0056032d  e8f48a2400           call 0x7a8e26
// 00560332  8b4e04               mov ecx, dword ptr [esi + 4]
// 00560335  51                   push ecx
// 00560336  ff1508aa9e00         call dword ptr [0x9eaa08]
// 0056033c  83c414               add esp, 0x14
// 0056033f  897e04               mov dword ptr [esi + 4], edi
// 00560342  5f                   pop edi
// 00560343  8b4604               mov eax, dword ptr [esi + 4]
// 00560346  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0056034a  03460c               add eax, dword ptr [esi + 0xc]
// 0056034d  53                   push ebx
// 0056034e  52                   push edx
// 0056034f  50                   push eax
// 00560350  e8d18a2400           call 0x7a8e26
// 00560355  015e0c               add dword ptr [esi + 0xc], ebx
// 00560358  83c40c               add esp, 0xc
// 0056035b  5e                   pop esi
// 0056035c  5b                   pop ebx
// 0056035d  c20800               ret 8
// library g3d-6.09/G3Dcpp\prompt.cpp (function ?AppendData@DialogTemplate@_internal@G3D@@IAEXPBXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/prompt.cpp
