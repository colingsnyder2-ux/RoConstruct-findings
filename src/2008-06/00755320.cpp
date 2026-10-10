// roc 2008-06 00755320  unit: PAVCXTPDockingPaneBase::?$CMap  size: 221 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00755320
//
// 00755320  55                   push ebp
// 00755321  56                   push esi
// 00755322  57                   push edi
// 00755323  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00755327  57                   push edi
// 00755328  8bf1                 mov esi, ecx
// 0075532a  e871f7ffff           call 0x754aa0
// 0075532f  8be8                 mov ebp, eax
// 00755331  85ed                 test ebp, ebp
// 00755333  7c05                 jl 0x75533a
// 00755335  83fd04               cmp ebp, 4
// 00755338  7c02                 jl 0x75533c
// 0075533a  33ed                 xor ebp, ebp
// 0075533c  837cae6000           cmp dword ptr [esi + ebp*4 + 0x60], 0
// 00755341  7528                 jne 0x75536b
// 00755343  8b8e84000000         mov ecx, dword ptr [esi + 0x84]
// 00755349  8b01                 mov eax, dword ptr [ecx]
// 0075534b  8b904c010000         mov edx, dword ptr [eax + 0x14c]
// 00755351  56                   push esi
// 00755352  6a05                 push 5
// 00755354  ffd2                 call edx
// 00755356  85c0                 test eax, eax
// 00755358  7405                 je 0x75535f
// 0075535a  83c0ac               add eax, -0x54
// 0075535d  eb02                 jmp 0x755361
// 0075535f  33c0                 xor eax, eax
// 00755361  8944ae60             mov dword ptr [esi + ebp*4 + 0x60], eax
// 00755365  89a8ac000000         mov dword ptr [eax + 0xac], ebp
// 0075536b  8b44ae60             mov eax, dword ptr [esi + ebp*4 + 0x60]
// 0075536f  57                   push edi
// 00755370  50                   push eax
// 00755371  8bce                 mov ecx, esi
// 00755373  e878feffff           call 0x7551f0
// 00755378  85c0                 test eax, eax
// 0075537a  757b                 jne 0x7553f7
// 0075537c  8b4718               mov eax, dword ptr [edi + 0x18]
// 0075537f  53                   push ebx
// 00755380  85c0                 test eax, eax
// 00755382  754e                 jne 0x7553d2
// 00755384  8b4f10               mov ecx, dword ptr [edi + 0x10]
// 00755387  8b11                 mov edx, dword ptr [ecx]
// 00755389  8b4248               mov eax, dword ptr [edx + 0x48]
// 0075538c  57                   push edi
// 0075538d  ffd0                 call eax
// 0075538f  8b8e84000000         mov ecx, dword ptr [esi + 0x84]
// 00755395  8b11                 mov edx, dword ptr [ecx]
// 00755397  8b824c010000         mov eax, dword ptr [edx + 0x14c]
// 0075539d  56                   push esi
// 0075539e  6a01                 push 1
// 007553a0  ffd0                 call eax
// 007553a2  85c0                 test eax, eax
// 007553a4  7405                 je 0x7553ab
// 007553a6  8d58ac               lea ebx, [eax - 0x54]
// 007553a9  eb02                 jmp 0x7553ad
// 007553ab  33db                 xor ebx, ebx
// 007553ad  8b8e84000000         mov ecx, dword ptr [esi + 0x84]
// 007553b3  8b91cc000000         mov edx, dword ptr [ecx + 0xcc]
// 007553b9  8d47e0               lea eax, [edi - 0x20]
// 007553bc  52                   push edx
// 007553bd  50                   push eax
// 007553be  8bcb                 mov ecx, ebx
// 007553c0  e81bb10000           call 0x7604e0
// 007553c5  85db                 test ebx, ebx
// 007553c7  7405                 je 0x7553ce
// 007553c9  8d7b54               lea edi, [ebx + 0x54]
// 007553cc  eb19                 jmp 0x7553e7
// 007553ce  33ff                 xor edi, edi
// 007553d0  eb15                 jmp 0x7553e7
// 007553d2  83f801               cmp eax, 1
// 007553d5  7510                 jne 0x7553e7
// 007553d7  8b07                 mov eax, dword ptr [edi]
// 007553d9  8b5044               mov edx, dword ptr [eax + 0x44]
// 007553dc  6a02                 push 2
// 007553de  6a00                 push 0
// 007553e0  56                   push esi
// 007553e1  8bcf                 mov ecx, edi
// 007553e3  ffd2                 call edx
// 007553e5  8bf8                 mov edi, eax
// 007553e7  8b4cae60             mov ecx, dword ptr [esi + ebp*4 + 0x60]
// 007553eb  8b01                 mov eax, dword ptr [ecx]
// 007553ed  8b9048010000         mov edx, dword ptr [eax + 0x148]
// 007553f3  57                   push edi
// 007553f4  ffd2                 call edx
// 007553f6  5b                   pop ebx
// 007553f7  5f                   pop edi
// 007553f8  5e                   pop esi
// 007553f9  5d                   pop ebp
// 007553fa  c20400               ret 4
// library xtp-11.2.2-shared-mfc/Source\DockingPane\XTPDockingPaneLayout.cpp (function ?HidePane@CXTPDockingPaneLayout@@AAEXPAVCXTPDockingPaneBase@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/DockingPane/XTPDockingPaneLayout.cpp
