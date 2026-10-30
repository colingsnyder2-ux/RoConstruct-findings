// roc 2009-12 00809f20  unit: CXTPImageManagerResource::CBitmapDC  size: 220 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00809f20
//
// 00809f20  51                   push ecx
// 00809f21  53                   push ebx
// 00809f22  55                   push ebp
// 00809f23  56                   push esi
// 00809f24  57                   push edi
// 00809f25  894c2410             mov dword ptr [esp + 0x10], ecx
// 00809f29  e8e2e9ffff           call 0x808910
// 00809f2e  85c0                 test eax, eax
// 00809f30  746c                 je 0x809f9e
// 00809f32  e869330400           call 0x84d2a0
// 00809f37  83780800             cmp dword ptr [eax + 8], 0
// 00809f3b  7461                 je 0x809f9e
// 00809f3d  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 00809f41  8b470c               mov eax, dword ptr [edi + 0xc]
// 00809f44  2b4704               sub eax, dword ptr [edi + 4]
// 00809f47  8b742424             mov esi, dword ptr [esp + 0x24]
// 00809f4b  8b5e0c               mov ebx, dword ptr [esi + 0xc]
// 00809f4e  8b6e08               mov ebp, dword ptr [esi + 8]
// 00809f51  2b5e04               sub ebx, dword ptr [esi + 4]
// 00809f54  2b2e                 sub ebp, dword ptr [esi]
// 00809f56  89442424             mov dword ptr [esp + 0x24], eax
// 00809f5a  8b4708               mov eax, dword ptr [edi + 8]
// 00809f5d  2b07                 sub eax, dword ptr [edi]
// 00809f5f  8944241c             mov dword ptr [esp + 0x1c], eax
// 00809f63  e838330400           call 0x84d2a0
// 00809f68  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00809f6c  8b5604               mov edx, dword ptr [esi + 4]
// 00809f6f  51                   push ecx
// 00809f70  8b0e                 mov ecx, dword ptr [esi]
// 00809f72  53                   push ebx
// 00809f73  55                   push ebp
// 00809f74  52                   push edx
// 00809f75  8b542430             mov edx, dword ptr [esp + 0x30]
// 00809f79  51                   push ecx
// 00809f7a  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 00809f7e  52                   push edx
// 00809f7f  8b542434             mov edx, dword ptr [esp + 0x34]
// 00809f83  51                   push ecx
// 00809f84  8b4f04               mov ecx, dword ptr [edi + 4]
// 00809f87  52                   push edx
// 00809f88  8b17                 mov edx, dword ptr [edi]
// 00809f8a  51                   push ecx
// 00809f8b  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 00809f8f  52                   push edx
// 00809f90  8b5008               mov edx, dword ptr [eax + 8]
// 00809f93  51                   push ecx
// 00809f94  ffd2                 call edx
// 00809f96  5f                   pop edi
// 00809f97  5e                   pop esi
// 00809f98  5d                   pop ebp
// 00809f99  5b                   pop ebx
// 00809f9a  59                   pop ecx
// 00809f9b  c21400               ret 0x14
// 00809f9e  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00809fa2  8b6a04               mov ebp, dword ptr [edx + 4]
// 00809fa5  8b720c               mov esi, dword ptr [edx + 0xc]
// 00809fa8  8b442424             mov eax, dword ptr [esp + 0x24]
// 00809fac  8b7804               mov edi, dword ptr [eax + 4]
// 00809faf  8b480c               mov ecx, dword ptr [eax + 0xc]
// 00809fb2  8b18                 mov ebx, dword ptr [eax]
// 00809fb4  8b4008               mov eax, dword ptr [eax + 8]
// 00809fb7  2bf5                 sub esi, ebp
// 00809fb9  896c2424             mov dword ptr [esp + 0x24], ebp
// 00809fbd  8b2a                 mov ebp, dword ptr [edx]
// 00809fbf  8b5208               mov edx, dword ptr [edx + 8]
// 00809fc2  2bd5                 sub edx, ebp
// 00809fc4  896c241c             mov dword ptr [esp + 0x1c], ebp
// 00809fc8  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 00809fcc  55                   push ebp
// 00809fcd  2bcf                 sub ecx, edi
// 00809fcf  51                   push ecx
// 00809fd0  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00809fd4  2bc3                 sub eax, ebx
// 00809fd6  50                   push eax
// 00809fd7  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00809fdb  57                   push edi
// 00809fdc  53                   push ebx
// 00809fdd  50                   push eax
// 00809fde  8b442430             mov eax, dword ptr [esp + 0x30]
// 00809fe2  56                   push esi
// 00809fe3  52                   push edx
// 00809fe4  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 00809fe8  51                   push ecx
// 00809fe9  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00809fed  52                   push edx
// 00809fee  50                   push eax
// 00809fef  e87ce6ffff           call 0x808670
// 00809ff4  5f                   pop edi
// 00809ff5  5e                   pop esi
// 00809ff6  5d                   pop ebp
// 00809ff7  5b                   pop ebx
// 00809ff8  59                   pop ecx
// 00809ff9  c21400               ret 0x14
// copied from an identical function in another client (function ?TransparentBlt@CXTPImageManager@@QBEHPAUHDC__@@ABVCRect@@01I@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\Common\XTPImageManager.cpp