// roc 2008-06 006ee410  unit: CXTPPopupBar  size: 369 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006ee410
//
// 006ee410  83ec08               sub esp, 8
// 006ee413  55                   push ebp
// 006ee414  56                   push esi
// 006ee415  8bf1                 mov esi, ecx
// 006ee417  e8f469fcff           call 0x6b4e10
// 006ee41c  33ed                 xor ebp, ebp
// 006ee41e  8944240c             mov dword ptr [esp + 0xc], eax
// 006ee422  3bc5                 cmp eax, ebp
// 006ee424  0f8451010000         je 0x6ee57b
// 006ee42a  8b4074               mov eax, dword ptr [eax + 0x74]
// 006ee42d  57                   push edi
// 006ee42e  8bce                 mov ecx, esi
// 006ee430  396820               cmp dword ptr [eax + 0x20], ebp
// 006ee433  7444                 je 0x6ee479
// 006ee435  33ff                 xor edi, edi
// 006ee437  e86477fcff           call 0x6b5ba0
// 006ee43c  85c0                 test eax, eax
// 006ee43e  7e28                 jle 0x6ee468
// 006ee440  57                   push edi
// 006ee441  8bce                 mov ecx, esi
// 006ee443  e86877fcff           call 0x6b5bb0
// 006ee448  3bc5                 cmp eax, ebp
// 006ee44a  7410                 je 0x6ee45c
// 006ee44c  39b000010000         cmp dword ptr [eax + 0x100], esi
// 006ee452  7508                 jne 0x6ee45c
// 006ee454  55                   push ebp
// 006ee455  8bc8                 mov ecx, eax
// 006ee457  e8b4cefbff           call 0x6ab310
// 006ee45c  8bce                 mov ecx, esi
// 006ee45e  47                   inc edi
// 006ee45f  e83c77fcff           call 0x6b5ba0
// 006ee464  3bf8                 cmp edi, eax
// 006ee466  7cd8                 jl 0x6ee440
// 006ee468  5f                   pop edi
// 006ee469  c786a801000001000000 mov dword ptr [esi + 0x1a8], 1
// 006ee473  5e                   pop esi
// 006ee474  5d                   pop ebp
// 006ee475  83c408               add esp, 8
// 006ee478  c3                   ret 
// 006ee479  53                   push ebx
// 006ee47a  89aea4010000         mov dword ptr [esi + 0x1a4], ebp
// 006ee480  896c2410             mov dword ptr [esp + 0x10], ebp
// 006ee484  e81777fcff           call 0x6b5ba0
// 006ee489  85c0                 test eax, eax
// 006ee48b  7e6e                 jle 0x6ee4fb
// 006ee48d  8d4900               lea ecx, [ecx]
// 006ee490  55                   push ebp
// 006ee491  8bce                 mov ecx, esi
// 006ee493  e81877fcff           call 0x6b5bb0
// 006ee498  8bf8                 mov edi, eax
// 006ee49a  85ff                 test edi, edi
// 006ee49c  7451                 je 0x6ee4ef
// 006ee49e  39b700010000         cmp dword ptr [edi + 0x100], esi
// 006ee4a4  7549                 jne 0x6ee4ef
// 006ee4a6  8b17                 mov edx, dword ptr [edi]
// 006ee4a8  8b8280000000         mov eax, dword ptr [edx + 0x80]
// 006ee4ae  6a28                 push 0x28
// 006ee4b0  8bcf                 mov ecx, edi
// 006ee4b2  ffd0                 call eax
// 006ee4b4  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006ee4b8  8b11                 mov edx, dword ptr [ecx]
// 006ee4ba  8bd8                 mov ebx, eax
// 006ee4bc  8b4260               mov eax, dword ptr [edx + 0x60]
// 006ee4bf  57                   push edi
// 006ee4c0  ffd0                 call eax
// 006ee4c2  8bcf                 mov ecx, edi
// 006ee4c4  85c0                 test eax, eax
// 006ee4c6  7408                 je 0x6ee4d0
// 006ee4c8  53                   push ebx
// 006ee4c9  e842cefbff           call 0x6ab310
// 006ee4ce  eb1f                 jmp 0x6ee4ef
// 006ee4d0  6a00                 push 0
// 006ee4d2  e839cefbff           call 0x6ab310
// 006ee4d7  81bf84000000be230000 cmp dword ptr [edi + 0x84], 0x23be
// 006ee4e1  740c                 je 0x6ee4ef
// 006ee4e3  85db                 test ebx, ebx
// 006ee4e5  7408                 je 0x6ee4ef
// 006ee4e7  c744241001000000     mov dword ptr [esp + 0x10], 1
// 006ee4ef  8bce                 mov ecx, esi
// 006ee4f1  45                   inc ebp
// 006ee4f2  e8a976fcff           call 0x6b5ba0
// 006ee4f7  3be8                 cmp ebp, eax
// 006ee4f9  7c95                 jl 0x6ee490
// 006ee4fb  8bce                 mov ecx, esi
// 006ee4fd  33db                 xor ebx, ebx
// 006ee4ff  e89c76fcff           call 0x6b5ba0
// 006ee504  85c0                 test eax, eax
// 006ee506  7e71                 jle 0x6ee579
// 006ee508  53                   push ebx
// 006ee509  8bce                 mov ecx, esi
// 006ee50b  e8a076fcff           call 0x6b5bb0
// 006ee510  8bf8                 mov edi, eax
// 006ee512  85ff                 test edi, edi
// 006ee514  7457                 je 0x6ee56d
// 006ee516  39b700010000         cmp dword ptr [edi + 0x100], esi
// 006ee51c  754f                 jne 0x6ee56d
// 006ee51e  8b87d0000000         mov eax, dword ptr [edi + 0xd0]
// 006ee524  8b17                 mov edx, dword ptr [edi]
// 006ee526  8b9294000000         mov edx, dword ptr [edx + 0x94]
// 006ee52c  83e0df               and eax, 0xffffffdf
// 006ee52f  50                   push eax
// 006ee530  8bcf                 mov ecx, edi
// 006ee532  ffd2                 call edx
// 006ee534  83bf0401000000       cmp dword ptr [edi + 0x104], 0
// 006ee53b  7430                 je 0x6ee56d
// 006ee53d  83bea801000000       cmp dword ptr [esi + 0x1a8], 0
// 006ee544  7527                 jne 0x6ee56d
// 006ee546  837c241000           cmp dword ptr [esp + 0x10], 0
// 006ee54b  7420                 je 0x6ee56d
// 006ee54d  8b8fd0000000         mov ecx, dword ptr [edi + 0xd0]
// 006ee553  8b07                 mov eax, dword ptr [edi]
// 006ee555  8b9094000000         mov edx, dword ptr [eax + 0x94]
// 006ee55b  83c920               or ecx, 0x20
// 006ee55e  51                   push ecx
// 006ee55f  8bcf                 mov ecx, edi
// 006ee561  ffd2                 call edx
// 006ee563  c786a401000001000000 mov dword ptr [esi + 0x1a4], 1
// 006ee56d  8bce                 mov ecx, esi
// 006ee56f  43                   inc ebx
// 006ee570  e82b76fcff           call 0x6b5ba0
// 006ee575  3bd8                 cmp ebx, eax
// 006ee577  7c8f                 jl 0x6ee508
// 006ee579  5b                   pop ebx
// 006ee57a  5f                   pop edi
// 006ee57b  5e                   pop esi
// 006ee57c  5d                   pop ebp
// 006ee57d  83c408               add esp, 8
// 006ee580  c3                   ret 
// library xtp-11.2.2-shared-mfc/Source\CommandBars\XTPPopupBar.cpp (function ?UpdateExpandingState@CXTPPopupBar@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPPopupBar.cpp
