// roc 2009-12 008ae7f0  unit: CXTPDockingPaneMiniWnd  size: 252 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008ae7f0
//
// 008ae7f0  8b442408             mov eax, dword ptr [esp + 8]
// 008ae7f4  8b542410             mov edx, dword ptr [esp + 0x10]
// 008ae7f8  55                   push ebp
// 008ae7f9  56                   push esi
// 008ae7fa  8bf1                 mov esi, ecx
// 008ae7fc  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008ae800  898614010000         mov dword ptr [esi + 0x114], eax
// 008ae806  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 008ae80a  898e18010000         mov dword ptr [esi + 0x118], ecx
// 008ae810  57                   push edi
// 008ae811  89961c010000         mov dword ptr [esi + 0x11c], edx
// 008ae817  8b96f8000000         mov edx, dword ptr [esi + 0xf8]
// 008ae81d  8dbef8000000         lea edi, [esi + 0xf8]
// 008ae823  898620010000         mov dword ptr [esi + 0x120], eax
// 008ae829  8b4258               mov eax, dword ptr [edx + 0x58]
// 008ae82c  8bcf                 mov ecx, edi
// 008ae82e  ffd0                 call eax
// 008ae830  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 008ae834  837d1800             cmp dword ptr [ebp + 0x18], 0
// 008ae838  7540                 jne 0x8ae87a
// 008ae83a  53                   push ebx
// 008ae83b  8bcf                 mov ecx, edi
// 008ae83d  e8fe1f0000           call 0x8b0840
// 008ae842  8b8e04010000         mov ecx, dword ptr [esi + 0x104]
// 008ae848  8b10                 mov edx, dword ptr [eax]
// 008ae84a  8b924c010000         mov edx, dword ptr [edx + 0x14c]
// 008ae850  51                   push ecx
// 008ae851  6a01                 push 1
// 008ae853  8bc8                 mov ecx, eax
// 008ae855  ffd2                 call edx
// 008ae857  85c0                 test eax, eax
// 008ae859  7405                 je 0x8ae860
// 008ae85b  8d58ac               lea ebx, [eax - 0x54]
// 008ae85e  eb02                 jmp 0x8ae862
// 008ae860  33db                 xor ebx, ebx
// 008ae862  56                   push esi
// 008ae863  83c5e0               add ebp, -0x20
// 008ae866  55                   push ebp
// 008ae867  8bcb                 mov ecx, ebx
// 008ae869  e8c24f0000           call 0x8b3830
// 008ae86e  85db                 test ebx, ebx
// 008ae870  7405                 je 0x8ae877
// 008ae872  8d6b54               lea ebp, [ebx + 0x54]
// 008ae875  eb02                 jmp 0x8ae879
// 008ae877  33ed                 xor ebp, ebp
// 008ae879  5b                   pop ebx
// 008ae87a  8bcf                 mov ecx, edi
// 008ae87c  e8bf1f0000           call 0x8b0840
// 008ae881  8b8e04010000         mov ecx, dword ptr [esi + 0x104]
// 008ae887  8b10                 mov edx, dword ptr [eax]
// 008ae889  8b924c010000         mov edx, dword ptr [edx + 0x14c]
// 008ae88f  51                   push ecx
// 008ae890  6a02                 push 2
// 008ae892  8bc8                 mov ecx, eax
// 008ae894  ffd2                 call edx
// 008ae896  85c0                 test eax, eax
// 008ae898  7405                 je 0x8ae89f
// 008ae89a  8d48e0               lea ecx, [eax - 0x20]
// 008ae89d  eb02                 jmp 0x8ae8a1
// 008ae89f  33c9                 xor ecx, ecx
// 008ae8a1  56                   push esi
// 008ae8a2  6a01                 push 1
// 008ae8a4  55                   push ebp
// 008ae8a5  898e30010000         mov dword ptr [esi + 0x130], ecx
// 008ae8ab  e8406d0000           call 0x8b55f0
// 008ae8b0  8b8630010000         mov eax, dword ptr [esi + 0x130]
// 008ae8b6  6a00                 push 0
// 008ae8b8  6a00                 push 0
// 008ae8ba  897830               mov dword ptr [eax + 0x30], edi
// 008ae8bd  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 008ae8c0  6863030000           push 0x363
// 008ae8c5  51                   push ecx
// 008ae8c6  c7865401000001000000 mov dword ptr [esi + 0x154], 1
// 008ae8d0  ff15b8cb9800         call dword ptr [0x98cbb8]
// 008ae8d6  8b17                 mov edx, dword ptr [edi]
// 008ae8d8  8b4228               mov eax, dword ptr [edx + 0x28]
// 008ae8db  838ee40000000c       or dword ptr [esi + 0xe4], 0xc
// 008ae8e2  8bcf                 mov ecx, edi
// 008ae8e4  ffd0                 call eax
// 008ae8e6  5f                   pop edi
// 008ae8e7  5e                   pop esi
// 008ae8e8  5d                   pop ebp
// 008ae8e9  c21400               ret 0x14
// copied from an identical function in another client (function ?Init@CXTPDockingPaneMiniWnd@@IAEXPAVCXTPDockingPaneBase@@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/DockingPane/XTPDockingPaneMiniWnd.cpp