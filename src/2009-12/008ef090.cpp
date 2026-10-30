// roc 2009-12 008ef090  unit: CXTPRibbonGroupPopupToolBar  size: 244 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008ef090
//
// 008ef090  83ec10               sub esp, 0x10
// 008ef093  53                   push ebx
// 008ef094  55                   push ebp
// 008ef095  56                   push esi
// 008ef096  8bf1                 mov esi, ecx
// 008ef098  837e1000             cmp dword ptr [esi + 0x10], 0
// 008ef09c  57                   push edi
// 008ef09d  0f84d7000000         je 0x8ef17a
// 008ef0a3  837e0c00             cmp dword ptr [esi + 0xc], 0
// 008ef0a7  0f84cd000000         je 0x8ef17a
// 008ef0ad  8b06                 mov eax, dword ptr [esi]
// 008ef0af  8b5004               mov edx, dword ptr [eax + 4]
// 008ef0b2  8d4c2410             lea ecx, [esp + 0x10]
// 008ef0b6  51                   push ecx
// 008ef0b7  8bce                 mov ecx, esi
// 008ef0b9  ffd2                 call edx
// 008ef0bb  837c242400           cmp dword ptr [esp + 0x24], 0
// 008ef0c0  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 008ef0c3  8b01                 mov eax, dword ptr [ecx]
// 008ef0c5  8b91d0000000         mov edx, dword ptr [ecx + 0xd0]
// 008ef0cb  8b8094000000         mov eax, dword ptr [eax + 0x94]
// 008ef0d1  7434                 je 0x8ef107
// 008ef0d3  83e2f7               and edx, 0xfffffff7
// 008ef0d6  52                   push edx
// 008ef0d7  ffd0                 call eax
// 008ef0d9  8b442410             mov eax, dword ptr [esp + 0x10]
// 008ef0dd  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 008ef0e1  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 008ef0e4  8b29                 mov ebp, dword ptr [ecx]
// 008ef0e6  8d50ff               lea edx, [eax - 1]
// 008ef0e9  8d580c               lea ebx, [eax + 0xc]
// 008ef0ec  83ec10               sub esp, 0x10
// 008ef0ef  8bc4                 mov eax, esp
// 008ef0f1  8910                 mov dword ptr [eax], edx
// 008ef0f3  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 008ef0f7  897804               mov dword ptr [eax + 4], edi
// 008ef0fa  895808               mov dword ptr [eax + 8], ebx
// 008ef0fd  89500c               mov dword ptr [eax + 0xc], edx
// 008ef100  8b557c               mov edx, dword ptr [ebp + 0x7c]
// 008ef103  ffd2                 call edx
// 008ef105  eb06                 jmp 0x8ef10d
// 008ef107  83ca08               or edx, 8
// 008ef10a  52                   push edx
// 008ef10b  ffd0                 call eax
// 008ef10d  837c242800           cmp dword ptr [esp + 0x28], 0
// 008ef112  744d                 je 0x8ef161
// 008ef114  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 008ef117  8b81d0000000         mov eax, dword ptr [ecx + 0xd0]
// 008ef11d  8b11                 mov edx, dword ptr [ecx]
// 008ef11f  8b9294000000         mov edx, dword ptr [edx + 0x94]
// 008ef125  83e0f7               and eax, 0xfffffff7
// 008ef128  50                   push eax
// 008ef129  ffd2                 call edx
// 008ef12b  8b442418             mov eax, dword ptr [esp + 0x18]
// 008ef12f  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 008ef133  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 008ef136  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 008ef13a  8b31                 mov esi, dword ptr [ecx]
// 008ef13c  8d50f4               lea edx, [eax - 0xc]
// 008ef13f  8d5801               lea ebx, [eax + 1]
// 008ef142  83ec10               sub esp, 0x10
// 008ef145  8bc4                 mov eax, esp
// 008ef147  8910                 mov dword ptr [eax], edx
// 008ef149  897804               mov dword ptr [eax + 4], edi
// 008ef14c  895808               mov dword ptr [eax + 8], ebx
// 008ef14f  89680c               mov dword ptr [eax + 0xc], ebp
// 008ef152  8b467c               mov eax, dword ptr [esi + 0x7c]
// 008ef155  ffd0                 call eax
// 008ef157  5f                   pop edi
// 008ef158  5e                   pop esi
// 008ef159  5d                   pop ebp
// 008ef15a  5b                   pop ebx
// 008ef15b  83c410               add esp, 0x10
// 008ef15e  c20800               ret 8
// 008ef161  8b7610               mov esi, dword ptr [esi + 0x10]
// 008ef164  8b86d0000000         mov eax, dword ptr [esi + 0xd0]
// 008ef16a  8b16                 mov edx, dword ptr [esi]
// 008ef16c  8b9294000000         mov edx, dword ptr [edx + 0x94]
// 008ef172  83c808               or eax, 8
// 008ef175  50                   push eax
// 008ef176  8bce                 mov ecx, esi
// 008ef178  ffd2                 call edx
// 008ef17a  5f                   pop edi
// 008ef17b  5e                   pop esi
// 008ef17c  5d                   pop ebp
// 008ef17d  5b                   pop ebx
// 008ef17e  83c410               add esp, 0x10
// 008ef181  c20800               ret 8
// copied from an identical function in another client (function ?EnableGroupsScroll@CXTPRibbonScrollableBar@@QAEXHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Ribbon/XTPRibbonPopups.cpp