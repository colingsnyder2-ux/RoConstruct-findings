// roc 2009-12 008bd400  unit: CXTPDockingPaneContext  size: 315 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008bd400
//
// 008bd400  8b811c010000         mov eax, dword ptr [ecx + 0x11c]
// 008bd406  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008bd40a  83ec10               sub esp, 0x10
// 008bd40d  55                   push ebp
// 008bd40e  56                   push esi
// 008bd40f  8bb0c8000000         mov esi, dword ptr [eax + 0xc8]
// 008bd415  57                   push edi
// 008bd416  51                   push ecx
// 008bd417  8d4c2410             lea ecx, [esp + 0x10]
// 008bd41b  e850def8ff           call 0x84b270
// 008bd420  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 008bd424  8b542410             mov edx, dword ptr [esp + 0x10]
// 008bd428  8b6f0c               mov ebp, dword ptr [edi + 0xc]
// 008bd42b  2bd6                 sub edx, esi
// 008bd42d  3bea                 cmp ebp, edx
// 008bd42f  0f8cfd000000         jl 0x8bd532
// 008bd435  8b4704               mov eax, dword ptr [edi + 4]
// 008bd438  53                   push ebx
// 008bd439  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 008bd43d  8d0c33               lea ecx, [ebx + esi]
// 008bd440  3bc1                 cmp eax, ecx
// 008bd442  0f8fe9000000         jg 0x8bd531
// 008bd448  8b542410             mov edx, dword ptr [esp + 0x10]
// 008bd44c  8b4f08               mov ecx, dword ptr [edi + 8]
// 008bd44f  2bd6                 sub edx, esi
// 008bd451  3bca                 cmp ecx, edx
// 008bd453  0f8cd8000000         jl 0x8bd531
// 008bd459  8b542418             mov edx, dword ptr [esp + 0x18]
// 008bd45d  8b0f                 mov ecx, dword ptr [edi]
// 008bd45f  03d6                 add edx, esi
// 008bd461  3bca                 cmp ecx, edx
// 008bd463  0f8fc8000000         jg 0x8bd531
// 008bd469  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 008bd46d  2bc3                 sub eax, ebx
// 008bd46f  99                   cdq 
// 008bd470  33c2                 xor eax, edx
// 008bd472  2bc2                 sub eax, edx
// 008bd474  3bc6                 cmp eax, esi
// 008bd476  7d12                 jge 0x8bd48a
// 008bd478  83f903               cmp ecx, 3
// 008bd47b  740a                 je 0x8bd487
// 008bd47d  83f904               cmp ecx, 4
// 008bd480  7405                 je 0x8bd487
// 008bd482  83f905               cmp ecx, 5
// 008bd485  7503                 jne 0x8bd48a
// 008bd487  895f04               mov dword ptr [edi + 4], ebx
// 008bd48a  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 008bd48e  8bc5                 mov eax, ebp
// 008bd490  2bc3                 sub eax, ebx
// 008bd492  99                   cdq 
// 008bd493  33c2                 xor eax, edx
// 008bd495  2bc2                 sub eax, edx
// 008bd497  3bc6                 cmp eax, esi
// 008bd499  7d12                 jge 0x8bd4ad
// 008bd49b  83f906               cmp ecx, 6
// 008bd49e  740a                 je 0x8bd4aa
// 008bd4a0  83f907               cmp ecx, 7
// 008bd4a3  7405                 je 0x8bd4aa
// 008bd4a5  83f908               cmp ecx, 8
// 008bd4a8  7503                 jne 0x8bd4ad
// 008bd4aa  895f0c               mov dword ptr [edi + 0xc], ebx
// 008bd4ad  8b07                 mov eax, dword ptr [edi]
// 008bd4af  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 008bd4b3  2bc3                 sub eax, ebx
// 008bd4b5  99                   cdq 
// 008bd4b6  33c2                 xor eax, edx
// 008bd4b8  2bc2                 sub eax, edx
// 008bd4ba  3bc6                 cmp eax, esi
// 008bd4bc  7d11                 jge 0x8bd4cf
// 008bd4be  83f901               cmp ecx, 1
// 008bd4c1  740a                 je 0x8bd4cd
// 008bd4c3  83f904               cmp ecx, 4
// 008bd4c6  7405                 je 0x8bd4cd
// 008bd4c8  83f907               cmp ecx, 7
// 008bd4cb  7502                 jne 0x8bd4cf
// 008bd4cd  891f                 mov dword ptr [edi], ebx
// 008bd4cf  8b07                 mov eax, dword ptr [edi]
// 008bd4d1  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 008bd4d5  2bc5                 sub eax, ebp
// 008bd4d7  99                   cdq 
// 008bd4d8  33c2                 xor eax, edx
// 008bd4da  2bc2                 sub eax, edx
// 008bd4dc  3bc6                 cmp eax, esi
// 008bd4de  7d11                 jge 0x8bd4f1
// 008bd4e0  83f901               cmp ecx, 1
// 008bd4e3  740a                 je 0x8bd4ef
// 008bd4e5  83f904               cmp ecx, 4
// 008bd4e8  7405                 je 0x8bd4ef
// 008bd4ea  83f907               cmp ecx, 7
// 008bd4ed  7502                 jne 0x8bd4f1
// 008bd4ef  892f                 mov dword ptr [edi], ebp
// 008bd4f1  8b4708               mov eax, dword ptr [edi + 8]
// 008bd4f4  2bc3                 sub eax, ebx
// 008bd4f6  99                   cdq 
// 008bd4f7  33c2                 xor eax, edx
// 008bd4f9  2bc2                 sub eax, edx
// 008bd4fb  3bc6                 cmp eax, esi
// 008bd4fd  7d12                 jge 0x8bd511
// 008bd4ff  83f902               cmp ecx, 2
// 008bd502  740a                 je 0x8bd50e
// 008bd504  83f905               cmp ecx, 5
// 008bd507  7405                 je 0x8bd50e
// 008bd509  83f908               cmp ecx, 8
// 008bd50c  7503                 jne 0x8bd511
// 008bd50e  895f08               mov dword ptr [edi + 8], ebx
// 008bd511  8b4708               mov eax, dword ptr [edi + 8]
// 008bd514  2bc5                 sub eax, ebp
// 008bd516  99                   cdq 
// 008bd517  33c2                 xor eax, edx
// 008bd519  2bc2                 sub eax, edx
// 008bd51b  3bc6                 cmp eax, esi
// 008bd51d  7d12                 jge 0x8bd531
// 008bd51f  83f902               cmp ecx, 2
// 008bd522  740a                 je 0x8bd52e
// 008bd524  83f905               cmp ecx, 5
// 008bd527  7405                 je 0x8bd52e
// 008bd529  83f908               cmp ecx, 8
// 008bd52c  7503                 jne 0x8bd531
// 008bd52e  896f08               mov dword ptr [edi + 8], ebp
// 008bd531  5b                   pop ebx
// 008bd532  5f                   pop edi
// 008bd533  5e                   pop esi
// 008bd534  5d                   pop ebp
// 008bd535  83c410               add esp, 0x10
// 008bd538  c20c00               ret 0xc
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneContext.cpp (function ?UpdateSizingStickyFrame@CXTPDockingPaneContext@@IAEXIAAVCRect@@PAVCWnd@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneContext.cpp
