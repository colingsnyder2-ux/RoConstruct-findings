// roc 2009-12 00921420  unit: seg_00920000  size: 242 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00921420
//
// 00921420  55                   push ebp
// 00921421  8bec                 mov ebp, esp
// 00921423  6aff                 push -1
// 00921425  68807b9600           push 0x967b80
// 0092142a  64a100000000         mov eax, dword ptr fs:[0]
// 00921430  50                   push eax
// 00921431  64892500000000       mov dword ptr fs:[0], esp
// 00921438  51                   push ecx
// 00921439  83ec44               sub esp, 0x44
// 0092143c  53                   push ebx
// 0092143d  56                   push esi
// 0092143e  57                   push edi
// 0092143f  8965f0               mov dword ptr [ebp - 0x10], esp
// 00921442  894db4               mov dword ptr [ebp - 0x4c], ecx
// 00921445  6a01                 push 1
// 00921447  8b4db4               mov ecx, dword ptr [ebp - 0x4c]
// 0092144a  83c108               add ecx, 8
// 0092144d  e87e010000           call 0x9215d0
// 00921452  8945e8               mov dword ptr [ebp - 0x18], eax
// 00921455  c745ec00000000       mov dword ptr [ebp - 0x14], 0
// 0092145c  c745fc00000000       mov dword ptr [ebp - 4], 0
// 00921463  8b45e8               mov eax, dword ptr [ebp - 0x18]
// 00921466  8945c8               mov dword ptr [ebp - 0x38], eax
// 00921469  8b4dc8               mov ecx, dword ptr [ebp - 0x38]
// 0092146c  894dd0               mov dword ptr [ebp - 0x30], ecx
// 0092146f  8b55d0               mov edx, dword ptr [ebp - 0x30]
// 00921472  8955cc               mov dword ptr [ebp - 0x34], edx
// 00921475  837dcc00             cmp dword ptr [ebp - 0x34], 0
// 00921479  7410                 je 0x92148b
// 0092147b  8b45cc               mov eax, dword ptr [ebp - 0x34]
// 0092147e  8b4de8               mov ecx, dword ptr [ebp - 0x18]
// 00921481  8908                 mov dword ptr [eax], ecx
// 00921483  8b55cc               mov edx, dword ptr [ebp - 0x34]
// 00921486  8955b0               mov dword ptr [ebp - 0x50], edx
// 00921489  eb07                 jmp 0x921492
// 0092148b  c745b000000000       mov dword ptr [ebp - 0x50], 0
// 00921492  8b45ec               mov eax, dword ptr [ebp - 0x14]
// 00921495  83c001               add eax, 1
// 00921498  8945ec               mov dword ptr [ebp - 0x14], eax
// 0092149b  8b4de8               mov ecx, dword ptr [ebp - 0x18]
// 0092149e  83c104               add ecx, 4
// 009214a1  894dbc               mov dword ptr [ebp - 0x44], ecx
// 009214a4  8b55bc               mov edx, dword ptr [ebp - 0x44]
// 009214a7  8955c4               mov dword ptr [ebp - 0x3c], edx
// 009214aa  8b45c4               mov eax, dword ptr [ebp - 0x3c]
// 009214ad  8945c0               mov dword ptr [ebp - 0x40], eax
// 009214b0  837dc000             cmp dword ptr [ebp - 0x40], 0
// 009214b4  7410                 je 0x9214c6
// 009214b6  8b4dc0               mov ecx, dword ptr [ebp - 0x40]
// 009214b9  8b55e8               mov edx, dword ptr [ebp - 0x18]
// 009214bc  8911                 mov dword ptr [ecx], edx
// 009214be  8b45c0               mov eax, dword ptr [ebp - 0x40]
// 009214c1  8945ac               mov dword ptr [ebp - 0x54], eax
// 009214c4  eb07                 jmp 0x9214cd
// 009214c6  c745ac00000000       mov dword ptr [ebp - 0x54], 0
// 009214cd  eb28                 jmp 0x9214f7
// 009214cf  8b4de8               mov ecx, dword ptr [ebp - 0x18]
// 009214d2  894db8               mov dword ptr [ebp - 0x48], ecx
// 009214d5  8b55b8               mov edx, dword ptr [ebp - 0x48]
// 009214d8  52                   push edx
// 009214d9  e87c23edff           call 0x7f385a
// 009214de  83c404               add esp, 4
// 009214e1  6a00                 push 0
// 009214e3  6a00                 push 0
// 009214e5  e88e33edff           call 0x7f4878
// 009214ea  c745fcffffffff       mov dword ptr [ebp - 4], 0xffffffff
// 009214f1  b8fe149200           mov eax, 0x9214fe
// 009214f6  c3                   ret 
// 009214f7  c745fcffffffff       mov dword ptr [ebp - 4], 0xffffffff
// 009214fe  8b45e8               mov eax, dword ptr [ebp - 0x18]
// 00921501  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 00921504  64890d00000000       mov dword ptr fs:[0], ecx
// 0092150b  5f                   pop edi
// 0092150c  5e                   pop esi
// 0092150d  5b                   pop ebx
// 0092150e  8be5                 mov esp, ebp
// 00921510  5d                   pop ebp
// 00921511  c3                   ret 
// copied from an identical function in another client (function ?_Buynode@?$list@VVertexElement@Ogre@@V?$allocator@VVertexElement@Ogre@@@std@@@std@@IAEPAU_Node@?$_List_nod@VVertexElement@Ogre@@V?$allocator@VVertexElement@Ogre@@@std@@@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /Ob2 /Oi /Ot /Oy /GF /GS- /EHsc /MD
// roc-lib: ogre-1.4.5-dll OgreAnimationState.cpp