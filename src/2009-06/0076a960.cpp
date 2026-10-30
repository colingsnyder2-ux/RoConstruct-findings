// roc 2009-06 0076a960  unit: CXTPControls  size: 402 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0076a960
//
// 0076a960  83ec18               sub esp, 0x18
// 0076a963  53                   push ebx
// 0076a964  55                   push ebp
// 0076a965  8b6c2424             mov ebp, dword ptr [esp + 0x24]
// 0076a969  56                   push esi
// 0076a96a  33f6                 xor esi, esi
// 0076a96c  33db                 xor ebx, ebx
// 0076a96e  39712c               cmp dword ptr [ecx + 0x2c], esi
// 0076a971  894c2418             mov dword ptr [esp + 0x18], ecx
// 0076a975  897500               mov dword ptr [ebp], esi
// 0076a978  897504               mov dword ptr [ebp + 4], esi
// 0076a97b  8974240c             mov dword ptr [esp + 0xc], esi
// 0076a97f  c744241001000000     mov dword ptr [esp + 0x10], 1
// 0076a987  89742414             mov dword ptr [esp + 0x14], esi
// 0076a98b  0f8e56010000         jle 0x76aae7
// 0076a991  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0076a995  83c02c               add eax, 0x2c
// 0076a998  8944242c             mov dword ptr [esp + 0x2c], eax
// 0076a99c  57                   push edi
// 0076a99d  8d4900               lea ecx, [ecx]
// 0076a9a0  8378fc00             cmp dword ptr [eax - 4], 0
// 0076a9a4  0f8423010000         je 0x76aacd
// 0076a9aa  83780400             cmp dword ptr [eax + 4], 0
// 0076a9ae  0f8519010000         jne 0x76aacd
// 0076a9b4  837c243800           cmp dword ptr [esp + 0x38], 0
// 0076a9b9  8b50f4               mov edx, dword ptr [eax - 0xc]
// 0076a9bc  8b78f8               mov edi, dword ptr [eax - 8]
// 0076a9bf  8b4808               mov ecx, dword ptr [eax + 8]
// 0076a9c2  89542420             mov dword ptr [esp + 0x20], edx
// 0076a9c6  0f847c000000         je 0x76aa48
// 0076a9cc  85c9                 test ecx, ecx
// 0076a9ce  7416                 je 0x76a9e6
// 0076a9d0  833800               cmp dword ptr [eax], 0
// 0076a9d3  7516                 jne 0x76a9eb
// 0076a9d5  837c241400           cmp dword ptr [esp + 0x14], 0
// 0076a9da  7506                 jne 0x76a9e2
// 0076a9dc  8b542434             mov edx, dword ptr [esp + 0x34]
// 0076a9e0  031a                 add ebx, dword ptr [edx]
// 0076a9e2  8b542420             mov edx, dword ptr [esp + 0x20]
// 0076a9e6  833800               cmp dword ptr [eax], 0
// 0076a9e9  741d                 je 0x76aa08
// 0076a9eb  85c9                 test ecx, ecx
// 0076a9ed  7409                 je 0x76a9f8
// 0076a9ef  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0076a9f3  8b4904               mov ecx, dword ptr [ecx + 4]
// 0076a9f6  eb02                 jmp 0x76a9fa
// 0076a9f8  33c9                 xor ecx, ecx
// 0076a9fa  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 0076a9fe  03cb                 add ecx, ebx
// 0076aa00  2bf1                 sub esi, ecx
// 0076aa02  33db                 xor ebx, ebx
// 0076aa04  895c2410             mov dword ptr [esp + 0x10], ebx
// 0076aa08  39542410             cmp dword ptr [esp + 0x10], edx
// 0076aa0c  7f04                 jg 0x76aa12
// 0076aa0e  89542410             mov dword ptr [esp + 0x10], edx
// 0076aa12  03fb                 add edi, ebx
// 0076aa14  57                   push edi
// 0076aa15  56                   push esi
// 0076aa16  53                   push ebx
// 0076aa17  8bce                 mov ecx, esi
// 0076aa19  2bca                 sub ecx, edx
// 0076aa1b  51                   push ecx
// 0076aa1c  83c0d4               add eax, -0x2c
// 0076aa1f  50                   push eax
// 0076aa20  ff15a4ed8900         call dword ptr [0x89eda4]
// 0076aa26  8b442420             mov eax, dword ptr [esp + 0x20]
// 0076aa2a  8b4d00               mov ecx, dword ptr [ebp]
// 0076aa2d  2bc6                 sub eax, esi
// 0076aa2f  3bc1                 cmp eax, ecx
// 0076aa31  7f02                 jg 0x76aa35
// 0076aa33  8bc1                 mov eax, ecx
// 0076aa35  894500               mov dword ptr [ebp], eax
// 0076aa38  8b4504               mov eax, dword ptr [ebp + 4]
// 0076aa3b  3bf8                 cmp edi, eax
// 0076aa3d  7e02                 jle 0x76aa41
// 0076aa3f  8bc7                 mov eax, edi
// 0076aa41  894504               mov dword ptr [ebp + 4], eax
// 0076aa44  8bdf                 mov ebx, edi
// 0076aa46  eb75                 jmp 0x76aabd
// 0076aa48  85c9                 test ecx, ecx
// 0076aa4a  7413                 je 0x76aa5f
// 0076aa4c  833800               cmp dword ptr [eax], 0
// 0076aa4f  7513                 jne 0x76aa64
// 0076aa51  837c241400           cmp dword ptr [esp + 0x14], 0
// 0076aa56  7507                 jne 0x76aa5f
// 0076aa58  8b6c2434             mov ebp, dword ptr [esp + 0x34]
// 0076aa5c  037500               add esi, dword ptr [ebp]
// 0076aa5f  833800               cmp dword ptr [eax], 0
// 0076aa62  741d                 je 0x76aa81
// 0076aa64  85c9                 test ecx, ecx
// 0076aa66  7409                 je 0x76aa71
// 0076aa68  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0076aa6c  8b4904               mov ecx, dword ptr [ecx + 4]
// 0076aa6f  eb02                 jmp 0x76aa73
// 0076aa71  33c9                 xor ecx, ecx
// 0076aa73  8b742410             mov esi, dword ptr [esp + 0x10]
// 0076aa77  03ce                 add ecx, esi
// 0076aa79  03d9                 add ebx, ecx
// 0076aa7b  33f6                 xor esi, esi
// 0076aa7d  89742410             mov dword ptr [esp + 0x10], esi
// 0076aa81  397c2410             cmp dword ptr [esp + 0x10], edi
// 0076aa85  7f04                 jg 0x76aa8b
// 0076aa87  897c2410             mov dword ptr [esp + 0x10], edi
// 0076aa8b  8d2c1f               lea ebp, [edi + ebx]
// 0076aa8e  55                   push ebp
// 0076aa8f  8d3c32               lea edi, [edx + esi]
// 0076aa92  57                   push edi
// 0076aa93  53                   push ebx
// 0076aa94  56                   push esi
// 0076aa95  83c0d4               add eax, -0x2c
// 0076aa98  50                   push eax
// 0076aa99  ff15a4ed8900         call dword ptr [0x89eda4]
// 0076aa9f  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0076aaa3  8b08                 mov ecx, dword ptr [eax]
// 0076aaa5  3bf9                 cmp edi, ecx
// 0076aaa7  7e02                 jle 0x76aaab
// 0076aaa9  8bcf                 mov ecx, edi
// 0076aaab  8908                 mov dword ptr [eax], ecx
// 0076aaad  8b4804               mov ecx, dword ptr [eax + 4]
// 0076aab0  3be9                 cmp ebp, ecx
// 0076aab2  7f02                 jg 0x76aab6
// 0076aab4  8be9                 mov ebp, ecx
// 0076aab6  896804               mov dword ptr [eax + 4], ebp
// 0076aab9  8bf7                 mov esi, edi
// 0076aabb  8be8                 mov ebp, eax
// 0076aabd  8b442430             mov eax, dword ptr [esp + 0x30]
// 0076aac1  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0076aac5  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0076aacd  8b542418             mov edx, dword ptr [esp + 0x18]
// 0076aad1  42                   inc edx
// 0076aad2  83c040               add eax, 0x40
// 0076aad5  3b512c               cmp edx, dword ptr [ecx + 0x2c]
// 0076aad8  89542418             mov dword ptr [esp + 0x18], edx
// 0076aadc  89442430             mov dword ptr [esp + 0x30], eax
// 0076aae0  0f8cbafeffff         jl 0x76a9a0
// 0076aae6  5f                   pop edi
// 0076aae7  5e                   pop esi
// 0076aae8  8bc5                 mov eax, ebp
// 0076aaea  5d                   pop ebp
// 0076aaeb  5b                   pop ebx
// 0076aaec  83c418               add esp, 0x18
// 0076aaef  c21000               ret 0x10
// library xtp-11.2.2/Source\CommandBars\XTPControls.cpp (function ?_CalcSize@CXTPControls@@IAE?AVCSize@@PAUXTPBUTTONINFO@1@ABV2@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControls.cpp
