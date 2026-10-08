// from server: 100% by auto
// roc 2008-06 00518fd0  unit: G3D::Sphere  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00518fd0
//
// 00518fd0  56                   push esi
// 00518fd1  8bf1                 mov esi, ecx
// 00518fd3  8b560c               mov edx, dword ptr [esi + 0xc]
// 00518fd6  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00518fda  8b4608               mov eax, dword ptr [esi + 8]
// 00518fdd  03d1                 add edx, ecx
// 00518fdf  3bd0                 cmp edx, eax
// 00518fe1  7e2f                 jle 0x519012
// 00518fe3  8d0448               lea eax, [eax + ecx*2]
// 00518fe6  57                   push edi
// 00518fe7  50                   push eax
// 00518fe8  894608               mov dword ptr [esi + 8], eax
// 00518feb  ff15b0288000         call dword ptr [0x8028b0]
// 00518ff1  8b4e04               mov ecx, dword ptr [esi + 4]
// 00518ff4  8bf8                 mov edi, eax
// 00518ff6  8b460c               mov eax, dword ptr [esi + 0xc]
// 00518ff9  50                   push eax
// 00518ffa  51                   push ecx
// 00518ffb  57                   push edi
// 00518ffc  e8df871800           call 0x6a17e0
// 00519001  8b5604               mov edx, dword ptr [esi + 4]
// 00519004  52                   push edx
// 00519005  ff15c0288000         call dword ptr [0x8028c0]
// 0051900b  83c414               add esp, 0x14
// 0051900e  897e04               mov dword ptr [esi + 4], edi
// 00519011  5f                   pop edi
// 00519012  5e                   pop esi
// 00519013  c20400               ret 4
// library g3d-6.09/G3Dcpp\prompt.cpp (function ?EnsureSpace@DialogTemplate@_internal@G3D@@IAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/prompt.cpp
