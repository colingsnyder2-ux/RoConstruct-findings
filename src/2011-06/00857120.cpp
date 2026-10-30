// roc 2011-06 00857120  unit: CXTPControls  size: 402 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00857120
//
// 00857120  83ec18               sub esp, 0x18
// 00857123  53                   push ebx
// 00857124  55                   push ebp
// 00857125  8b6c2424             mov ebp, dword ptr [esp + 0x24]
// 00857129  56                   push esi
// 0085712a  33f6                 xor esi, esi
// 0085712c  33db                 xor ebx, ebx
// 0085712e  39712c               cmp dword ptr [ecx + 0x2c], esi
// 00857131  894c2418             mov dword ptr [esp + 0x18], ecx
// 00857135  897500               mov dword ptr [ebp], esi
// 00857138  897504               mov dword ptr [ebp + 4], esi
// 0085713b  8974240c             mov dword ptr [esp + 0xc], esi
// 0085713f  c744241001000000     mov dword ptr [esp + 0x10], 1
// 00857147  89742414             mov dword ptr [esp + 0x14], esi
// 0085714b  0f8e56010000         jle 0x8572a7
// 00857151  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00857155  83c02c               add eax, 0x2c
// 00857158  8944242c             mov dword ptr [esp + 0x2c], eax
// 0085715c  57                   push edi
// 0085715d  8d4900               lea ecx, [ecx]
// 00857160  8378fc00             cmp dword ptr [eax - 4], 0
// 00857164  0f8423010000         je 0x85728d
// 0085716a  83780400             cmp dword ptr [eax + 4], 0
// 0085716e  0f8519010000         jne 0x85728d
// 00857174  837c243800           cmp dword ptr [esp + 0x38], 0
// 00857179  8b50f4               mov edx, dword ptr [eax - 0xc]
// 0085717c  8b78f8               mov edi, dword ptr [eax - 8]
// 0085717f  8b4808               mov ecx, dword ptr [eax + 8]
// 00857182  89542420             mov dword ptr [esp + 0x20], edx
// 00857186  0f847c000000         je 0x857208
// 0085718c  85c9                 test ecx, ecx
// 0085718e  7416                 je 0x8571a6
// 00857190  833800               cmp dword ptr [eax], 0
// 00857193  7516                 jne 0x8571ab
// 00857195  837c241400           cmp dword ptr [esp + 0x14], 0
// 0085719a  7506                 jne 0x8571a2
// 0085719c  8b542434             mov edx, dword ptr [esp + 0x34]
// 008571a0  031a                 add ebx, dword ptr [edx]
// 008571a2  8b542420             mov edx, dword ptr [esp + 0x20]
// 008571a6  833800               cmp dword ptr [eax], 0
// 008571a9  741d                 je 0x8571c8
// 008571ab  85c9                 test ecx, ecx
// 008571ad  7409                 je 0x8571b8
// 008571af  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 008571b3  8b4904               mov ecx, dword ptr [ecx + 4]
// 008571b6  eb02                 jmp 0x8571ba
// 008571b8  33c9                 xor ecx, ecx
// 008571ba  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 008571be  03cb                 add ecx, ebx
// 008571c0  2bf1                 sub esi, ecx
// 008571c2  33db                 xor ebx, ebx
// 008571c4  895c2410             mov dword ptr [esp + 0x10], ebx
// 008571c8  39542410             cmp dword ptr [esp + 0x10], edx
// 008571cc  7f04                 jg 0x8571d2
// 008571ce  89542410             mov dword ptr [esp + 0x10], edx
// 008571d2  03fb                 add edi, ebx
// 008571d4  57                   push edi
// 008571d5  56                   push esi
// 008571d6  53                   push ebx
// 008571d7  8bce                 mov ecx, esi
// 008571d9  2bca                 sub ecx, edx
// 008571db  51                   push ecx
// 008571dc  83c0d4               add eax, -0x2c
// 008571df  50                   push eax
// 008571e0  ff15c81ba400         call dword ptr [0xa41bc8]
// 008571e6  8b442420             mov eax, dword ptr [esp + 0x20]
// 008571ea  8b4d00               mov ecx, dword ptr [ebp]
// 008571ed  2bc6                 sub eax, esi
// 008571ef  3bc1                 cmp eax, ecx
// 008571f1  7f02                 jg 0x8571f5
// 008571f3  8bc1                 mov eax, ecx
// 008571f5  894500               mov dword ptr [ebp], eax
// 008571f8  8b4504               mov eax, dword ptr [ebp + 4]
// 008571fb  3bf8                 cmp edi, eax
// 008571fd  7e02                 jle 0x857201
// 008571ff  8bc7                 mov eax, edi
// 00857201  894504               mov dword ptr [ebp + 4], eax
// 00857204  8bdf                 mov ebx, edi
// 00857206  eb75                 jmp 0x85727d
// 00857208  85c9                 test ecx, ecx
// 0085720a  7413                 je 0x85721f
// 0085720c  833800               cmp dword ptr [eax], 0
// 0085720f  7513                 jne 0x857224
// 00857211  837c241400           cmp dword ptr [esp + 0x14], 0
// 00857216  7507                 jne 0x85721f
// 00857218  8b6c2434             mov ebp, dword ptr [esp + 0x34]
// 0085721c  037500               add esi, dword ptr [ebp]
// 0085721f  833800               cmp dword ptr [eax], 0
// 00857222  741d                 je 0x857241
// 00857224  85c9                 test ecx, ecx
// 00857226  7409                 je 0x857231
// 00857228  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0085722c  8b4904               mov ecx, dword ptr [ecx + 4]
// 0085722f  eb02                 jmp 0x857233
// 00857231  33c9                 xor ecx, ecx
// 00857233  8b742410             mov esi, dword ptr [esp + 0x10]
// 00857237  03ce                 add ecx, esi
// 00857239  03d9                 add ebx, ecx
// 0085723b  33f6                 xor esi, esi
// 0085723d  89742410             mov dword ptr [esp + 0x10], esi
// 00857241  397c2410             cmp dword ptr [esp + 0x10], edi
// 00857245  7f04                 jg 0x85724b
// 00857247  897c2410             mov dword ptr [esp + 0x10], edi
// 0085724b  8d2c1f               lea ebp, [edi + ebx]
// 0085724e  55                   push ebp
// 0085724f  8d3c32               lea edi, [edx + esi]
// 00857252  57                   push edi
// 00857253  53                   push ebx
// 00857254  56                   push esi
// 00857255  83c0d4               add eax, -0x2c
// 00857258  50                   push eax
// 00857259  ff15c81ba400         call dword ptr [0xa41bc8]
// 0085725f  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00857263  8b08                 mov ecx, dword ptr [eax]
// 00857265  3bf9                 cmp edi, ecx
// 00857267  7e02                 jle 0x85726b
// 00857269  8bcf                 mov ecx, edi
// 0085726b  8908                 mov dword ptr [eax], ecx
// 0085726d  8b4804               mov ecx, dword ptr [eax + 4]
// 00857270  3be9                 cmp ebp, ecx
// 00857272  7f02                 jg 0x857276
// 00857274  8be9                 mov ebp, ecx
// 00857276  896804               mov dword ptr [eax + 4], ebp
// 00857279  8bf7                 mov esi, edi
// 0085727b  8be8                 mov ebp, eax
// 0085727d  8b442430             mov eax, dword ptr [esp + 0x30]
// 00857281  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00857285  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0085728d  8b542418             mov edx, dword ptr [esp + 0x18]
// 00857291  42                   inc edx
// 00857292  83c040               add eax, 0x40
// 00857295  3b512c               cmp edx, dword ptr [ecx + 0x2c]
// 00857298  89542418             mov dword ptr [esp + 0x18], edx
// 0085729c  89442430             mov dword ptr [esp + 0x30], eax
// 008572a0  0f8cbafeffff         jl 0x857160
// 008572a6  5f                   pop edi
// 008572a7  5e                   pop esi
// 008572a8  8bc5                 mov eax, ebp
// 008572aa  5d                   pop ebp
// 008572ab  5b                   pop ebx
// 008572ac  83c418               add esp, 0x18
// 008572af  c21000               ret 0x10
// library xtp-11.2.2/Source\CommandBars\XTPControls.cpp (function ?_CalcSize@CXTPControls@@IAE?AVCSize@@PAUXTPBUTTONINFO@1@ABV2@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControls.cpp
