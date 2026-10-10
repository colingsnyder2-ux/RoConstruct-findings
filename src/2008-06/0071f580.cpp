// roc 2008-06 0071f580  unit: CXTPResourceManager  size: 353 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0071f580
//
// 0071f580  51                   push ecx
// 0071f581  8b542408             mov edx, dword ptr [esp + 8]
// 0071f585  890c24               mov dword ptr [esp], ecx
// 0071f588  85d2                 test edx, edx
// 0071f58a  0f844b010000         je 0x71f6db
// 0071f590  8b4204               mov eax, dword ptr [edx + 4]
// 0071f593  85c0                 test eax, eax
// 0071f595  0f8440010000         je 0x71f6db
// 0071f59b  83790c00             cmp dword ptr [ecx + 0xc], 0
// 0071f59f  751a                 jne 0x71f5bb
// 0071f5a1  8b442414             mov eax, dword ptr [esp + 0x14]
// 0071f5a5  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0071f5a9  50                   push eax
// 0071f5aa  8b442410             mov eax, dword ptr [esp + 0x10]
// 0071f5ae  51                   push ecx
// 0071f5af  50                   push eax
// 0071f5b0  8bca                 mov ecx, edx
// 0071f5b2  e8e9cd0900           call 0x7bc3a0
// 0071f5b7  59                   pop ecx
// 0071f5b8  c21000               ret 0x10
// 0071f5bb  53                   push ebx
// 0071f5bc  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 0071f5c0  55                   push ebp
// 0071f5c1  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 0071f5c5  56                   push esi
// 0071f5c6  57                   push edi
// 0071f5c7  53                   push ebx
// 0071f5c8  6a00                 push 0
// 0071f5ca  6a00                 push 0
// 0071f5cc  55                   push ebp
// 0071f5cd  50                   push eax
// 0071f5ce  ff15302c8000         call dword ptr [0x802c30]
// 0071f5d4  8bf0                 mov esi, eax
// 0071f5d6  85f6                 test esi, esi
// 0071f5d8  0f8ee9000000         jle 0x71f6c7
// 0071f5de  e84d8afcff           call 0x6e8030
// 0071f5e3  8bc8                 mov ecx, eax
// 0071f5e5  e8a68afcff           call 0x6e8090
// 0071f5ea  84c0                 test al, al
// 0071f5ec  0f84a0000000         je 0x71f692
// 0071f5f2  33c9                 xor ecx, ecx
// 0071f5f4  8d6e01               lea ebp, [esi + 1]
// 0071f5f7  8bc5                 mov eax, ebp
// 0071f5f9  ba02000000           mov edx, 2
// 0071f5fe  f7e2                 mul edx
// 0071f600  0f90c1               seto cl
// 0071f603  f7d9                 neg ecx
// 0071f605  0bc8                 or ecx, eax
// 0071f607  51                   push ecx
// 0071f608  e84913f8ff           call 0x6a0956
// 0071f60d  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0071f611  8b5104               mov edx, dword ptr [ecx + 4]
// 0071f614  83c404               add esp, 4
// 0071f617  53                   push ebx
// 0071f618  55                   push ebp
// 0071f619  8bf8                 mov edi, eax
// 0071f61b  8b442424             mov eax, dword ptr [esp + 0x24]
// 0071f61f  57                   push edi
// 0071f620  50                   push eax
// 0071f621  52                   push edx
// 0071f622  ff152c2c8000         call dword ptr [0x802c2c]
// 0071f628  8b442410             mov eax, dword ptr [esp + 0x10]
// 0071f62c  8b480c               mov ecx, dword ptr [eax + 0xc]
// 0071f62f  8b5104               mov edx, dword ptr [ecx + 4]
// 0071f632  6a00                 push 0
// 0071f634  6a00                 push 0
// 0071f636  6a00                 push 0
// 0071f638  6a00                 push 0
// 0071f63a  56                   push esi
// 0071f63b  57                   push edi
// 0071f63c  6a00                 push 0
// 0071f63e  52                   push edx
// 0071f63f  ff15ec228000         call dword ptr [0x8022ec]
// 0071f645  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0071f649  8bd8                 mov ebx, eax
// 0071f64b  53                   push ebx
// 0071f64c  ff15d03a8000         call dword ptr [0x803ad0]
// 0071f652  6a00                 push 0
// 0071f654  6a00                 push 0
// 0071f656  53                   push ebx
// 0071f657  8be8                 mov ebp, eax
// 0071f659  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0071f65d  8b480c               mov ecx, dword ptr [eax + 0xc]
// 0071f660  8b5104               mov edx, dword ptr [ecx + 4]
// 0071f663  55                   push ebp
// 0071f664  56                   push esi
// 0071f665  57                   push edi
// 0071f666  6a00                 push 0
// 0071f668  52                   push edx
// 0071f669  ff15ec228000         call dword ptr [0x8022ec]
// 0071f66f  57                   push edi
// 0071f670  c6042b00             mov byte ptr [ebx + ebp], 0
// 0071f674  e8d112f8ff           call 0x6a094a
// 0071f679  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0071f67d  83c404               add esp, 4
// 0071f680  6aff                 push -1
// 0071f682  ff1580338000         call dword ptr [0x803380]
// 0071f688  5f                   pop edi
// 0071f689  8bc6                 mov eax, esi
// 0071f68b  5e                   pop esi
// 0071f68c  5d                   pop ebp
// 0071f68d  5b                   pop ebx
// 0071f68e  59                   pop ecx
// 0071f68f  c21000               ret 0x10
// 0071f692  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 0071f696  56                   push esi
// 0071f697  8bcf                 mov ecx, edi
// 0071f699  ff15d03a8000         call dword ptr [0x803ad0]
// 0071f69f  8b542418             mov edx, dword ptr [esp + 0x18]
// 0071f6a3  53                   push ebx
// 0071f6a4  8d4e01               lea ecx, [esi + 1]
// 0071f6a7  51                   push ecx
// 0071f6a8  50                   push eax
// 0071f6a9  8b4204               mov eax, dword ptr [edx + 4]
// 0071f6ac  55                   push ebp
// 0071f6ad  50                   push eax
// 0071f6ae  ff15302c8000         call dword ptr [0x802c30]
// 0071f6b4  56                   push esi
// 0071f6b5  8bcf                 mov ecx, edi
// 0071f6b7  ff1580338000         call dword ptr [0x803380]
// 0071f6bd  5f                   pop edi
// 0071f6be  8bc6                 mov eax, esi
// 0071f6c0  5e                   pop esi
// 0071f6c1  5d                   pop ebp
// 0071f6c2  5b                   pop ebx
// 0071f6c3  59                   pop ecx
// 0071f6c4  c21000               ret 0x10
// 0071f6c7  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0071f6cb  ff15843e8000         call dword ptr [0x803e84]
// 0071f6d1  5f                   pop edi
// 0071f6d2  8bc6                 mov eax, esi
// 0071f6d4  5e                   pop esi
// 0071f6d5  5d                   pop ebp
// 0071f6d6  5b                   pop ebx
// 0071f6d7  59                   pop ecx
// 0071f6d8  c21000               ret 0x10
// 0071f6db  33c0                 xor eax, eax
// 0071f6dd  59                   pop ecx
// 0071f6de  c21000               ret 0x10
// library xtp-11.2.2-shared-mfc/Source\Common\XTPResourceManager.cpp (function ?GetMenuLocaleString@CXTPResourceManager@@QBEHPAVCMenu@@IAAV?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@I@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Common/XTPResourceManager.cpp
