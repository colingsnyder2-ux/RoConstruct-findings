// from server: 100% by auto
// roc 2007-08 00511940  unit: G3D::_internal::DialogTemplate  size: 96 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00511940
//
// 00511940  53                   push ebx
// 00511941  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 00511945  56                   push esi
// 00511946  8bf1                 mov esi, ecx
// 00511948  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 0051194b  8b4608               mov eax, dword ptr [esi + 8]
// 0051194e  03cb                 add ecx, ebx
// 00511950  3bc8                 cmp ecx, eax
// 00511952  7e2f                 jle 0x511983
// 00511954  8d0458               lea eax, [eax + ebx*2]
// 00511957  57                   push edi
// 00511958  50                   push eax
// 00511959  894608               mov dword ptr [esi + 8], eax
// 0051195c  ff15d0e67700         call dword ptr [0x77e6d0]
// 00511962  8b560c               mov edx, dword ptr [esi + 0xc]
// 00511965  8bf8                 mov edi, eax
// 00511967  8b4604               mov eax, dword ptr [esi + 4]
// 0051196a  52                   push edx
// 0051196b  50                   push eax
// 0051196c  57                   push edi
// 0051196d  e8daf31100           call 0x630d4c
// 00511972  8b4e04               mov ecx, dword ptr [esi + 4]
// 00511975  51                   push ecx
// 00511976  ff15c4e67700         call dword ptr [0x77e6c4]
// 0051197c  83c414               add esp, 0x14
// 0051197f  897e04               mov dword ptr [esi + 4], edi
// 00511982  5f                   pop edi
// 00511983  8b4604               mov eax, dword ptr [esi + 4]
// 00511986  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0051198a  03460c               add eax, dword ptr [esi + 0xc]
// 0051198d  53                   push ebx
// 0051198e  52                   push edx
// 0051198f  50                   push eax
// 00511990  e8b7f31100           call 0x630d4c
// 00511995  015e0c               add dword ptr [esi + 0xc], ebx
// 00511998  83c40c               add esp, 0xc
// 0051199b  5e                   pop esi
// 0051199c  5b                   pop ebx
// 0051199d  c20800               ret 8
// library g3d-6.09/G3Dcpp\prompt.cpp (function ?AppendData@DialogTemplate@_internal@G3D@@IAEXPBXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/prompt.cpp
