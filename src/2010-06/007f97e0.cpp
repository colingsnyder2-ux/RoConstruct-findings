// roc 2010-06 007f97e0  unit: CXTPControls  size: 402 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007f97e0
//
// 007f97e0  83ec18               sub esp, 0x18
// 007f97e3  53                   push ebx
// 007f97e4  55                   push ebp
// 007f97e5  8b6c2424             mov ebp, dword ptr [esp + 0x24]
// 007f97e9  56                   push esi
// 007f97ea  33f6                 xor esi, esi
// 007f97ec  33db                 xor ebx, ebx
// 007f97ee  39712c               cmp dword ptr [ecx + 0x2c], esi
// 007f97f1  894c2418             mov dword ptr [esp + 0x18], ecx
// 007f97f5  897500               mov dword ptr [ebp], esi
// 007f97f8  897504               mov dword ptr [ebp + 4], esi
// 007f97fb  8974240c             mov dword ptr [esp + 0xc], esi
// 007f97ff  c744241001000000     mov dword ptr [esp + 0x10], 1
// 007f9807  89742414             mov dword ptr [esp + 0x14], esi
// 007f980b  0f8e56010000         jle 0x7f9967
// 007f9811  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 007f9815  83c02c               add eax, 0x2c
// 007f9818  8944242c             mov dword ptr [esp + 0x2c], eax
// 007f981c  57                   push edi
// 007f981d  8d4900               lea ecx, [ecx]
// 007f9820  8378fc00             cmp dword ptr [eax - 4], 0
// 007f9824  0f8423010000         je 0x7f994d
// 007f982a  83780400             cmp dword ptr [eax + 4], 0
// 007f982e  0f8519010000         jne 0x7f994d
// 007f9834  837c243800           cmp dword ptr [esp + 0x38], 0
// 007f9839  8b50f4               mov edx, dword ptr [eax - 0xc]
// 007f983c  8b78f8               mov edi, dword ptr [eax - 8]
// 007f983f  8b4808               mov ecx, dword ptr [eax + 8]
// 007f9842  89542420             mov dword ptr [esp + 0x20], edx
// 007f9846  0f847c000000         je 0x7f98c8
// 007f984c  85c9                 test ecx, ecx
// 007f984e  7416                 je 0x7f9866
// 007f9850  833800               cmp dword ptr [eax], 0
// 007f9853  7516                 jne 0x7f986b
// 007f9855  837c241400           cmp dword ptr [esp + 0x14], 0
// 007f985a  7506                 jne 0x7f9862
// 007f985c  8b542434             mov edx, dword ptr [esp + 0x34]
// 007f9860  031a                 add ebx, dword ptr [edx]
// 007f9862  8b542420             mov edx, dword ptr [esp + 0x20]
// 007f9866  833800               cmp dword ptr [eax], 0
// 007f9869  741d                 je 0x7f9888
// 007f986b  85c9                 test ecx, ecx
// 007f986d  7409                 je 0x7f9878
// 007f986f  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 007f9873  8b4904               mov ecx, dword ptr [ecx + 4]
// 007f9876  eb02                 jmp 0x7f987a
// 007f9878  33c9                 xor ecx, ecx
// 007f987a  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 007f987e  03cb                 add ecx, ebx
// 007f9880  2bf1                 sub esi, ecx
// 007f9882  33db                 xor ebx, ebx
// 007f9884  895c2410             mov dword ptr [esp + 0x10], ebx
// 007f9888  39542410             cmp dword ptr [esp + 0x10], edx
// 007f988c  7f04                 jg 0x7f9892
// 007f988e  89542410             mov dword ptr [esp + 0x10], edx
// 007f9892  03fb                 add edi, ebx
// 007f9894  57                   push edi
// 007f9895  56                   push esi
// 007f9896  53                   push ebx
// 007f9897  8bce                 mov ecx, esi
// 007f9899  2bca                 sub ecx, edx
// 007f989b  51                   push ecx
// 007f989c  83c0d4               add eax, -0x2c
// 007f989f  50                   push eax
// 007f98a0  ff15c0bb9e00         call dword ptr [0x9ebbc0]
// 007f98a6  8b442420             mov eax, dword ptr [esp + 0x20]
// 007f98aa  8b4d00               mov ecx, dword ptr [ebp]
// 007f98ad  2bc6                 sub eax, esi
// 007f98af  3bc1                 cmp eax, ecx
// 007f98b1  7f02                 jg 0x7f98b5
// 007f98b3  8bc1                 mov eax, ecx
// 007f98b5  894500               mov dword ptr [ebp], eax
// 007f98b8  8b4504               mov eax, dword ptr [ebp + 4]
// 007f98bb  3bf8                 cmp edi, eax
// 007f98bd  7e02                 jle 0x7f98c1
// 007f98bf  8bc7                 mov eax, edi
// 007f98c1  894504               mov dword ptr [ebp + 4], eax
// 007f98c4  8bdf                 mov ebx, edi
// 007f98c6  eb75                 jmp 0x7f993d
// 007f98c8  85c9                 test ecx, ecx
// 007f98ca  7413                 je 0x7f98df
// 007f98cc  833800               cmp dword ptr [eax], 0
// 007f98cf  7513                 jne 0x7f98e4
// 007f98d1  837c241400           cmp dword ptr [esp + 0x14], 0
// 007f98d6  7507                 jne 0x7f98df
// 007f98d8  8b6c2434             mov ebp, dword ptr [esp + 0x34]
// 007f98dc  037500               add esi, dword ptr [ebp]
// 007f98df  833800               cmp dword ptr [eax], 0
// 007f98e2  741d                 je 0x7f9901
// 007f98e4  85c9                 test ecx, ecx
// 007f98e6  7409                 je 0x7f98f1
// 007f98e8  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 007f98ec  8b4904               mov ecx, dword ptr [ecx + 4]
// 007f98ef  eb02                 jmp 0x7f98f3
// 007f98f1  33c9                 xor ecx, ecx
// 007f98f3  8b742410             mov esi, dword ptr [esp + 0x10]
// 007f98f7  03ce                 add ecx, esi
// 007f98f9  03d9                 add ebx, ecx
// 007f98fb  33f6                 xor esi, esi
// 007f98fd  89742410             mov dword ptr [esp + 0x10], esi
// 007f9901  397c2410             cmp dword ptr [esp + 0x10], edi
// 007f9905  7f04                 jg 0x7f990b
// 007f9907  897c2410             mov dword ptr [esp + 0x10], edi
// 007f990b  8d2c1f               lea ebp, [edi + ebx]
// 007f990e  55                   push ebp
// 007f990f  8d3c32               lea edi, [edx + esi]
// 007f9912  57                   push edi
// 007f9913  53                   push ebx
// 007f9914  56                   push esi
// 007f9915  83c0d4               add eax, -0x2c
// 007f9918  50                   push eax
// 007f9919  ff15c0bb9e00         call dword ptr [0x9ebbc0]
// 007f991f  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 007f9923  8b08                 mov ecx, dword ptr [eax]
// 007f9925  3bf9                 cmp edi, ecx
// 007f9927  7e02                 jle 0x7f992b
// 007f9929  8bcf                 mov ecx, edi
// 007f992b  8908                 mov dword ptr [eax], ecx
// 007f992d  8b4804               mov ecx, dword ptr [eax + 4]
// 007f9930  3be9                 cmp ebp, ecx
// 007f9932  7f02                 jg 0x7f9936
// 007f9934  8be9                 mov ebp, ecx
// 007f9936  896804               mov dword ptr [eax + 4], ebp
// 007f9939  8bf7                 mov esi, edi
// 007f993b  8be8                 mov ebp, eax
// 007f993d  8b442430             mov eax, dword ptr [esp + 0x30]
// 007f9941  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 007f9945  c744241400000000     mov dword ptr [esp + 0x14], 0
// 007f994d  8b542418             mov edx, dword ptr [esp + 0x18]
// 007f9951  42                   inc edx
// 007f9952  83c040               add eax, 0x40
// 007f9955  3b512c               cmp edx, dword ptr [ecx + 0x2c]
// 007f9958  89542418             mov dword ptr [esp + 0x18], edx
// 007f995c  89442430             mov dword ptr [esp + 0x30], eax
// 007f9960  0f8cbafeffff         jl 0x7f9820
// 007f9966  5f                   pop edi
// 007f9967  5e                   pop esi
// 007f9968  8bc5                 mov eax, ebp
// 007f996a  5d                   pop ebp
// 007f996b  5b                   pop ebx
// 007f996c  83c418               add esp, 0x18
// 007f996f  c21000               ret 0x10
// library xtp-11.2.2/Source\CommandBars\XTPControls.cpp (function ?_CalcSize@CXTPControls@@IAE?AVCSize@@PAUXTPBUTTONINFO@1@ABV2@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControls.cpp
