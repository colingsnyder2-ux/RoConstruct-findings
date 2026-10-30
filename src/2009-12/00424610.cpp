// roc 2009-12 00424610  unit: ThreadLogManager  size: 518 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00424610
//
// 00424610  55                   push ebp
// 00424611  8bec                 mov ebp, esp
// 00424613  81ec04040000         sub esp, 0x404
// 00424619  53                   push ebx
// 0042461a  56                   push esi
// 0042461b  8b750c               mov esi, dword ptr [ebp + 0xc]
// 0042461e  57                   push edi
// 0042461f  33ff                 xor edi, edi
// 00424621  897dfc               mov dword ptr [ebp - 4], edi
// 00424624  c685fcfbffff00       mov byte ptr [ebp - 0x404], 0
// 0042462b  f7c60000ffff         test esi, 0xffff0000
// 00424631  0f85db000000         jne 0x424712
// 00424637  8b4d20               mov ecx, dword ptr [ebp + 0x20]
// 0042463a  6800040000           push 0x400
// 0042463f  8d85fcfbffff         lea eax, [ebp - 0x404]
// 00424645  0fb7de               movzx ebx, si
// 00424648  50                   push eax
// 00424649  53                   push ebx
// 0042464a  51                   push ecx
// 0042464b  ff1560cc9800         call dword ptr [0x98cc60]
// 00424651  85c0                 test eax, eax
// 00424653  7520                 jne 0x424675
// 00424655  68a8389a00           push 0x9a38a8
// 0042465a  8d95fcfbffff         lea edx, [ebp - 0x404]
// 00424660  6800040000           push 0x400
// 00424665  52                   push edx
// 00424666  ff15c8b79800         call dword ptr [0x98b7c8]
// 0042466c  50                   push eax
// 0042466d  e87ee3fdff           call 0x4029f0
// 00424672  83c410               add esp, 0x10
// 00424675  8d85fcfbffff         lea eax, [ebp - 0x404]
// 0042467b  50                   push eax
// 0042467c  ff1518b29800         call dword ptr [0x98b218]
// 00424682  6a00                 push 0
// 00424684  40                   inc eax
// 00424685  99                   cdq 
// 00424686  6a02                 push 2
// 00424688  52                   push edx
// 00424689  50                   push eax
// 0042468a  e8e1033d00           call 0x7f4a70
// 0042468f  8bf0                 mov esi, eax
// 00424691  0500000080           add eax, 0x80000000
// 00424696  13d7                 adc edx, edi
// 00424698  85d2                 test edx, edx
// 0042469a  774b                 ja 0x4246e7
// 0042469c  7205                 jb 0x4246a3
// 0042469e  83f8ff               cmp eax, -1
// 004246a1  7744                 ja 0x4246e7
// 004246a3  81fe00040000         cmp esi, 0x400
// 004246a9  7f18                 jg 0x4246c3
// 004246ab  56                   push esi
// 004246ac  e83ff4fdff           call 0x403af0
// 004246b1  83c404               add esp, 4
// 004246b4  84c0                 test al, al
// 004246b6  740b                 je 0x4246c3
// 004246b8  8bc6                 mov eax, esi
// 004246ba  e881033d00           call 0x7f4a40
// 004246bf  8bc4                 mov eax, esp
// 004246c1  eb0c                 jmp 0x4246cf
// 004246c3  56                   push esi
// 004246c4  8d4dfc               lea ecx, [ebp - 4]
// 004246c7  e8c4f9fdff           call 0x404090
// 004246cc  8b7dfc               mov edi, dword ptr [ebp - 4]
// 004246cf  6a03                 push 3
// 004246d1  d1ee                 shr esi, 1
// 004246d3  56                   push esi
// 004246d4  8d8dfcfbffff         lea ecx, [ebp - 0x404]
// 004246da  51                   push ecx
// 004246db  50                   push eax
// 004246dc  e8efe3fdff           call 0x402ad0
// 004246e1  8bf0                 mov esi, eax
// 004246e3  85f6                 test esi, esi
// 004246e5  751c                 jne 0x424703
// 004246e7  8d4dfc               lea ecx, [ebp - 4]
// 004246ea  e891f1fdff           call 0x403880
// 004246ef  b80e000780           mov eax, 0x8007000e
// 004246f4  8da5f0fbffff         lea esp, [ebp - 0x410]
// 004246fa  5f                   pop edi
// 004246fb  5e                   pop esi
// 004246fc  5b                   pop ebx
// 004246fd  8be5                 mov esp, ebp
// 004246ff  5d                   pop ebp
// 00424700  c21c00               ret 0x1c
// 00424703  837d1c00             cmp dword ptr [ebp + 0x1c], 0
// 00424707  7509                 jne 0x424712
// 00424709  81cb00000480         or ebx, 0x80040000
// 0042470f  895d1c               mov dword ptr [ebp + 0x1c], ebx
// 00424712  8d550c               lea edx, [ebp + 0xc]
// 00424715  52                   push edx
// 00424716  c7450c00000000       mov dword ptr [ebp + 0xc], 0
// 0042471d  ff1558ba9800         call dword ptr [0x98ba58]
// 00424723  85c0                 test eax, eax
// 00424725  0f8ca5000000         jl 0x4247d0
// 0042472b  8b450c               mov eax, dword ptr [ebp + 0xc]
// 0042472e  8b5518               mov edx, dword ptr [ebp + 0x18]
// 00424731  c7452000000000       mov dword ptr [ebp + 0x20], 0
// 00424738  8b08                 mov ecx, dword ptr [eax]
// 0042473a  52                   push edx
// 0042473b  50                   push eax
// 0042473c  8b410c               mov eax, dword ptr [ecx + 0xc]
// 0042473f  ffd0                 call eax
// 00424741  8b5508               mov edx, dword ptr [ebp + 8]
// 00424744  8d4d18               lea ecx, [ebp + 0x18]
// 00424747  51                   push ecx
// 00424748  52                   push edx
// 00424749  ff15a8e09800         call dword ptr [0x98e0a8]
// 0042474f  8b4d18               mov ecx, dword ptr [ebp + 0x18]
// 00424752  85c9                 test ecx, ecx
// 00424754  740c                 je 0x424762
// 00424756  8b450c               mov eax, dword ptr [ebp + 0xc]
// 00424759  8b10                 mov edx, dword ptr [eax]
// 0042475b  51                   push ecx
// 0042475c  50                   push eax
// 0042475d  8b4210               mov eax, dword ptr [edx + 0x10]
// 00424760  ffd0                 call eax
// 00424762  8b4d10               mov ecx, dword ptr [ebp + 0x10]
// 00424765  85c9                 test ecx, ecx
// 00424767  741f                 je 0x424788
// 00424769  8b5d14               mov ebx, dword ptr [ebp + 0x14]
// 0042476c  85db                 test ebx, ebx
// 0042476e  7418                 je 0x424788
// 00424770  8b450c               mov eax, dword ptr [ebp + 0xc]
// 00424773  8b10                 mov edx, dword ptr [eax]
// 00424775  51                   push ecx
// 00424776  50                   push eax
// 00424777  8b421c               mov eax, dword ptr [edx + 0x1c]
// 0042477a  ffd0                 call eax
// 0042477c  8b450c               mov eax, dword ptr [ebp + 0xc]
// 0042477f  8b08                 mov ecx, dword ptr [eax]
// 00424781  8b5118               mov edx, dword ptr [ecx + 0x18]
// 00424784  53                   push ebx
// 00424785  50                   push eax
// 00424786  ffd2                 call edx
// 00424788  8b4518               mov eax, dword ptr [ebp + 0x18]
// 0042478b  50                   push eax
// 0042478c  ff15a0e09800         call dword ptr [0x98e0a0]
// 00424792  8b450c               mov eax, dword ptr [ebp + 0xc]
// 00424795  8b08                 mov ecx, dword ptr [eax]
// 00424797  8b5114               mov edx, dword ptr [ecx + 0x14]
// 0042479a  56                   push esi
// 0042479b  50                   push eax
// 0042479c  ffd2                 call edx
// 0042479e  8b450c               mov eax, dword ptr [ebp + 0xc]
// 004247a1  8b08                 mov ecx, dword ptr [eax]
// 004247a3  8d5520               lea edx, [ebp + 0x20]
// 004247a6  52                   push edx
// 004247a7  6898389a00           push 0x9a3898
// 004247ac  50                   push eax
// 004247ad  8b01                 mov eax, dword ptr [ecx]
// 004247af  ffd0                 call eax
// 004247b1  85c0                 test eax, eax
// 004247b3  7c0c                 jl 0x4247c1
// 004247b5  8b4d20               mov ecx, dword ptr [ebp + 0x20]
// 004247b8  51                   push ecx
// 004247b9  6a00                 push 0
// 004247bb  ff1554ba9800         call dword ptr [0x98ba54]
// 004247c1  8b4520               mov eax, dword ptr [ebp + 0x20]
// 004247c4  85c0                 test eax, eax
// 004247c6  7408                 je 0x4247d0
// 004247c8  8b10                 mov edx, dword ptr [eax]
// 004247ca  50                   push eax
// 004247cb  8b4208               mov eax, dword ptr [edx + 8]
// 004247ce  ffd0                 call eax
// 004247d0  8b451c               mov eax, dword ptr [ebp + 0x1c]
// 004247d3  bb09000280           mov ebx, 0x80020009
// 004247d8  85c0                 test eax, eax
// 004247da  7402                 je 0x4247de
// 004247dc  8bd8                 mov ebx, eax
// 004247de  8b450c               mov eax, dword ptr [ebp + 0xc]
// 004247e1  85c0                 test eax, eax
// 004247e3  7408                 je 0x4247ed
// 004247e5  8b08                 mov ecx, dword ptr [eax]
// 004247e7  8b5108               mov edx, dword ptr [ecx + 8]
// 004247ea  50                   push eax
// 004247eb  ffd2                 call edx
// 004247ed  85ff                 test edi, edi
// 004247ef  7414                 je 0x424805
// 004247f1  8b3540b79800         mov esi, dword ptr [0x98b740]
// 004247f7  8bc7                 mov eax, edi
// 004247f9  8b3f                 mov edi, dword ptr [edi]
// 004247fb  50                   push eax
// 004247fc  ffd6                 call esi
// 004247fe  83c404               add esp, 4
// 00424801  85ff                 test edi, edi
// 00424803  75f2                 jne 0x4247f7
// 00424805  8bc3                 mov eax, ebx
// 00424807  8da5f0fbffff         lea esp, [ebp - 0x410]
// 0042480d  5f                   pop edi
// 0042480e  5e                   pop esi
// 0042480f  5b                   pop ebx
// 00424810  8be5                 mov esp, ebp
// 00424812  5d                   pop ebp
// 00424813  c21c00               ret 0x1c
// copied from an identical function in another client (function _AtlSetErrorInfo@28)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GF /Gy /GS- /MD
// roc-lib: atl-9.0-dll regobj.cpp