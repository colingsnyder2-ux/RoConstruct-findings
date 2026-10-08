// roc 2012-06 009cf5f0  unit: CXTPControls  size: 402 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009cf5f0
//
// 009cf5f0  83ec18               sub esp, 0x18
// 009cf5f3  53                   push ebx
// 009cf5f4  55                   push ebp
// 009cf5f5  8b6c2424             mov ebp, dword ptr [esp + 0x24]
// 009cf5f9  56                   push esi
// 009cf5fa  33f6                 xor esi, esi
// 009cf5fc  33db                 xor ebx, ebx
// 009cf5fe  39712c               cmp dword ptr [ecx + 0x2c], esi
// 009cf601  894c2418             mov dword ptr [esp + 0x18], ecx
// 009cf605  897500               mov dword ptr [ebp], esi
// 009cf608  897504               mov dword ptr [ebp + 4], esi
// 009cf60b  8974240c             mov dword ptr [esp + 0xc], esi
// 009cf60f  c744241001000000     mov dword ptr [esp + 0x10], 1
// 009cf617  89742414             mov dword ptr [esp + 0x14], esi
// 009cf61b  0f8e56010000         jle 0x9cf777
// 009cf621  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 009cf625  83c02c               add eax, 0x2c
// 009cf628  8944242c             mov dword ptr [esp + 0x2c], eax
// 009cf62c  57                   push edi
// 009cf62d  8d4900               lea ecx, [ecx]
// 009cf630  8378fc00             cmp dword ptr [eax - 4], 0
// 009cf634  0f8423010000         je 0x9cf75d
// 009cf63a  83780400             cmp dword ptr [eax + 4], 0
// 009cf63e  0f8519010000         jne 0x9cf75d
// 009cf644  837c243800           cmp dword ptr [esp + 0x38], 0
// 009cf649  8b50f4               mov edx, dword ptr [eax - 0xc]
// 009cf64c  8b78f8               mov edi, dword ptr [eax - 8]
// 009cf64f  8b4808               mov ecx, dword ptr [eax + 8]
// 009cf652  89542420             mov dword ptr [esp + 0x20], edx
// 009cf656  0f847c000000         je 0x9cf6d8
// 009cf65c  85c9                 test ecx, ecx
// 009cf65e  7416                 je 0x9cf676
// 009cf660  833800               cmp dword ptr [eax], 0
// 009cf663  7516                 jne 0x9cf67b
// 009cf665  837c241400           cmp dword ptr [esp + 0x14], 0
// 009cf66a  7506                 jne 0x9cf672
// 009cf66c  8b542434             mov edx, dword ptr [esp + 0x34]
// 009cf670  031a                 add ebx, dword ptr [edx]
// 009cf672  8b542420             mov edx, dword ptr [esp + 0x20]
// 009cf676  833800               cmp dword ptr [eax], 0
// 009cf679  741d                 je 0x9cf698
// 009cf67b  85c9                 test ecx, ecx
// 009cf67d  7409                 je 0x9cf688
// 009cf67f  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 009cf683  8b4904               mov ecx, dword ptr [ecx + 4]
// 009cf686  eb02                 jmp 0x9cf68a
// 009cf688  33c9                 xor ecx, ecx
// 009cf68a  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 009cf68e  03cb                 add ecx, ebx
// 009cf690  2bf1                 sub esi, ecx
// 009cf692  33db                 xor ebx, ebx
// 009cf694  895c2410             mov dword ptr [esp + 0x10], ebx
// 009cf698  39542410             cmp dword ptr [esp + 0x10], edx
// 009cf69c  7f04                 jg 0x9cf6a2
// 009cf69e  89542410             mov dword ptr [esp + 0x10], edx
// 009cf6a2  03fb                 add edi, ebx
// 009cf6a4  57                   push edi
// 009cf6a5  56                   push esi
// 009cf6a6  53                   push ebx
// 009cf6a7  8bce                 mov ecx, esi
// 009cf6a9  2bca                 sub ecx, edx
// 009cf6ab  51                   push ecx
// 009cf6ac  83c0d4               add eax, -0x2c
// 009cf6af  50                   push eax
// 009cf6b0  ff156c3bb200         call dword ptr [0xb23b6c]
// 009cf6b6  8b442420             mov eax, dword ptr [esp + 0x20]
// 009cf6ba  8b4d00               mov ecx, dword ptr [ebp]
// 009cf6bd  2bc6                 sub eax, esi
// 009cf6bf  3bc1                 cmp eax, ecx
// 009cf6c1  7f02                 jg 0x9cf6c5
// 009cf6c3  8bc1                 mov eax, ecx
// 009cf6c5  894500               mov dword ptr [ebp], eax
// 009cf6c8  8b4504               mov eax, dword ptr [ebp + 4]
// 009cf6cb  3bf8                 cmp edi, eax
// 009cf6cd  7e02                 jle 0x9cf6d1
// 009cf6cf  8bc7                 mov eax, edi
// 009cf6d1  894504               mov dword ptr [ebp + 4], eax
// 009cf6d4  8bdf                 mov ebx, edi
// 009cf6d6  eb75                 jmp 0x9cf74d
// 009cf6d8  85c9                 test ecx, ecx
// 009cf6da  7413                 je 0x9cf6ef
// 009cf6dc  833800               cmp dword ptr [eax], 0
// 009cf6df  7513                 jne 0x9cf6f4
// 009cf6e1  837c241400           cmp dword ptr [esp + 0x14], 0
// 009cf6e6  7507                 jne 0x9cf6ef
// 009cf6e8  8b6c2434             mov ebp, dword ptr [esp + 0x34]
// 009cf6ec  037500               add esi, dword ptr [ebp]
// 009cf6ef  833800               cmp dword ptr [eax], 0
// 009cf6f2  741d                 je 0x9cf711
// 009cf6f4  85c9                 test ecx, ecx
// 009cf6f6  7409                 je 0x9cf701
// 009cf6f8  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 009cf6fc  8b4904               mov ecx, dword ptr [ecx + 4]
// 009cf6ff  eb02                 jmp 0x9cf703
// 009cf701  33c9                 xor ecx, ecx
// 009cf703  8b742410             mov esi, dword ptr [esp + 0x10]
// 009cf707  03ce                 add ecx, esi
// 009cf709  03d9                 add ebx, ecx
// 009cf70b  33f6                 xor esi, esi
// 009cf70d  89742410             mov dword ptr [esp + 0x10], esi
// 009cf711  397c2410             cmp dword ptr [esp + 0x10], edi
// 009cf715  7f04                 jg 0x9cf71b
// 009cf717  897c2410             mov dword ptr [esp + 0x10], edi
// 009cf71b  8d2c1f               lea ebp, [edi + ebx]
// 009cf71e  55                   push ebp
// 009cf71f  8d3c32               lea edi, [edx + esi]
// 009cf722  57                   push edi
// 009cf723  53                   push ebx
// 009cf724  56                   push esi
// 009cf725  83c0d4               add eax, -0x2c
// 009cf728  50                   push eax
// 009cf729  ff156c3bb200         call dword ptr [0xb23b6c]
// 009cf72f  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 009cf733  8b08                 mov ecx, dword ptr [eax]
// 009cf735  3bf9                 cmp edi, ecx
// 009cf737  7e02                 jle 0x9cf73b
// 009cf739  8bcf                 mov ecx, edi
// 009cf73b  8908                 mov dword ptr [eax], ecx
// 009cf73d  8b4804               mov ecx, dword ptr [eax + 4]
// 009cf740  3be9                 cmp ebp, ecx
// 009cf742  7f02                 jg 0x9cf746
// 009cf744  8be9                 mov ebp, ecx
// 009cf746  896804               mov dword ptr [eax + 4], ebp
// 009cf749  8bf7                 mov esi, edi
// 009cf74b  8be8                 mov ebp, eax
// 009cf74d  8b442430             mov eax, dword ptr [esp + 0x30]
// 009cf751  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 009cf755  c744241400000000     mov dword ptr [esp + 0x14], 0
// 009cf75d  8b542418             mov edx, dword ptr [esp + 0x18]
// 009cf761  42                   inc edx
// 009cf762  83c040               add eax, 0x40
// 009cf765  3b512c               cmp edx, dword ptr [ecx + 0x2c]
// 009cf768  89542418             mov dword ptr [esp + 0x18], edx
// 009cf76c  89442430             mov dword ptr [esp + 0x30], eax
// 009cf770  0f8cbafeffff         jl 0x9cf630
// 009cf776  5f                   pop edi
// 009cf777  5e                   pop esi
// 009cf778  8bc5                 mov eax, ebp
// 009cf77a  5d                   pop ebp
// 009cf77b  5b                   pop ebx
// 009cf77c  83c418               add esp, 0x18
// 009cf77f  c21000               ret 0x10
// library xtp-11.2.2/Source\CommandBars\XTPControls.cpp (function ?_CalcSize@CXTPControls@@IAE?AVCSize@@PAUXTPBUTTONINFO@1@ABV2@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControls.cpp
