// roc 2008-06 00796bc0  unit: CXTPRibbonGroupPopupToolBar  size: 244 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00796bc0
//
// 00796bc0  83ec10               sub esp, 0x10
// 00796bc3  53                   push ebx
// 00796bc4  55                   push ebp
// 00796bc5  56                   push esi
// 00796bc6  8bf1                 mov esi, ecx
// 00796bc8  837e1000             cmp dword ptr [esi + 0x10], 0
// 00796bcc  57                   push edi
// 00796bcd  0f84d7000000         je 0x796caa
// 00796bd3  837e0c00             cmp dword ptr [esi + 0xc], 0
// 00796bd7  0f84cd000000         je 0x796caa
// 00796bdd  8b06                 mov eax, dword ptr [esi]
// 00796bdf  8b5004               mov edx, dword ptr [eax + 4]
// 00796be2  8d4c2410             lea ecx, [esp + 0x10]
// 00796be6  51                   push ecx
// 00796be7  8bce                 mov ecx, esi
// 00796be9  ffd2                 call edx
// 00796beb  837c242400           cmp dword ptr [esp + 0x24], 0
// 00796bf0  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 00796bf3  8b01                 mov eax, dword ptr [ecx]
// 00796bf5  8b91d0000000         mov edx, dword ptr [ecx + 0xd0]
// 00796bfb  8b8094000000         mov eax, dword ptr [eax + 0x94]
// 00796c01  7434                 je 0x796c37
// 00796c03  83e2f7               and edx, 0xfffffff7
// 00796c06  52                   push edx
// 00796c07  ffd0                 call eax
// 00796c09  8b442410             mov eax, dword ptr [esp + 0x10]
// 00796c0d  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 00796c11  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 00796c14  8b29                 mov ebp, dword ptr [ecx]
// 00796c16  8d50ff               lea edx, [eax - 1]
// 00796c19  8d580c               lea ebx, [eax + 0xc]
// 00796c1c  83ec10               sub esp, 0x10
// 00796c1f  8bc4                 mov eax, esp
// 00796c21  8910                 mov dword ptr [eax], edx
// 00796c23  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 00796c27  897804               mov dword ptr [eax + 4], edi
// 00796c2a  895808               mov dword ptr [eax + 8], ebx
// 00796c2d  89500c               mov dword ptr [eax + 0xc], edx
// 00796c30  8b557c               mov edx, dword ptr [ebp + 0x7c]
// 00796c33  ffd2                 call edx
// 00796c35  eb06                 jmp 0x796c3d
// 00796c37  83ca08               or edx, 8
// 00796c3a  52                   push edx
// 00796c3b  ffd0                 call eax
// 00796c3d  837c242800           cmp dword ptr [esp + 0x28], 0
// 00796c42  744d                 je 0x796c91
// 00796c44  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 00796c47  8b81d0000000         mov eax, dword ptr [ecx + 0xd0]
// 00796c4d  8b11                 mov edx, dword ptr [ecx]
// 00796c4f  8b9294000000         mov edx, dword ptr [edx + 0x94]
// 00796c55  83e0f7               and eax, 0xfffffff7
// 00796c58  50                   push eax
// 00796c59  ffd2                 call edx
// 00796c5b  8b442418             mov eax, dword ptr [esp + 0x18]
// 00796c5f  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 00796c63  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 00796c66  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 00796c6a  8b31                 mov esi, dword ptr [ecx]
// 00796c6c  8d50f4               lea edx, [eax - 0xc]
// 00796c6f  8d5801               lea ebx, [eax + 1]
// 00796c72  83ec10               sub esp, 0x10
// 00796c75  8bc4                 mov eax, esp
// 00796c77  8910                 mov dword ptr [eax], edx
// 00796c79  897804               mov dword ptr [eax + 4], edi
// 00796c7c  895808               mov dword ptr [eax + 8], ebx
// 00796c7f  89680c               mov dword ptr [eax + 0xc], ebp
// 00796c82  8b467c               mov eax, dword ptr [esi + 0x7c]
// 00796c85  ffd0                 call eax
// 00796c87  5f                   pop edi
// 00796c88  5e                   pop esi
// 00796c89  5d                   pop ebp
// 00796c8a  5b                   pop ebx
// 00796c8b  83c410               add esp, 0x10
// 00796c8e  c20800               ret 8
// 00796c91  8b7610               mov esi, dword ptr [esi + 0x10]
// 00796c94  8b86d0000000         mov eax, dword ptr [esi + 0xd0]
// 00796c9a  8b16                 mov edx, dword ptr [esi]
// 00796c9c  8b9294000000         mov edx, dword ptr [edx + 0x94]
// 00796ca2  83c808               or eax, 8
// 00796ca5  50                   push eax
// 00796ca6  8bce                 mov ecx, esi
// 00796ca8  ffd2                 call edx
// 00796caa  5f                   pop edi
// 00796cab  5e                   pop esi
// 00796cac  5d                   pop ebp
// 00796cad  5b                   pop ebx
// 00796cae  83c410               add esp, 0x10
// 00796cb1  c20800               ret 8
// library xtp-11.2.2-shared-mfc/Source\Ribbon\XTPRibbonPopups.cpp (function ?EnableGroupsScroll@CXTPRibbonScrollableBar@@QAEXHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Ribbon/XTPRibbonPopups.cpp
