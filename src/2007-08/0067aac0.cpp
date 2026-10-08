// from server: 100% by auto
// roc 2007-08 0067aac0  unit: CXTPControls  size: 404 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0067aac0
//
// 0067aac0  83ec18               sub esp, 0x18
// 0067aac3  53                   push ebx
// 0067aac4  55                   push ebp
// 0067aac5  8b6c2424             mov ebp, dword ptr [esp + 0x24]
// 0067aac9  56                   push esi
// 0067aaca  33f6                 xor esi, esi
// 0067aacc  33db                 xor ebx, ebx
// 0067aace  39712c               cmp dword ptr [ecx + 0x2c], esi
// 0067aad1  894c2418             mov dword ptr [esp + 0x18], ecx
// 0067aad5  897500               mov dword ptr [ebp], esi
// 0067aad8  897504               mov dword ptr [ebp + 4], esi
// 0067aadb  8974240c             mov dword ptr [esp + 0xc], esi
// 0067aadf  c744241001000000     mov dword ptr [esp + 0x10], 1
// 0067aae7  89742414             mov dword ptr [esp + 0x14], esi
// 0067aaeb  0f8e58010000         jle 0x67ac49
// 0067aaf1  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0067aaf5  83c02c               add eax, 0x2c
// 0067aaf8  8944242c             mov dword ptr [esp + 0x2c], eax
// 0067aafc  57                   push edi
// 0067aafd  8d4900               lea ecx, [ecx]
// 0067ab00  8378fc00             cmp dword ptr [eax - 4], 0
// 0067ab04  0f8423010000         je 0x67ac2d
// 0067ab0a  83780400             cmp dword ptr [eax + 4], 0
// 0067ab0e  0f8519010000         jne 0x67ac2d
// 0067ab14  837c243800           cmp dword ptr [esp + 0x38], 0
// 0067ab19  8b50f4               mov edx, dword ptr [eax - 0xc]
// 0067ab1c  8b78f8               mov edi, dword ptr [eax - 8]
// 0067ab1f  8b4808               mov ecx, dword ptr [eax + 8]
// 0067ab22  89542420             mov dword ptr [esp + 0x20], edx
// 0067ab26  0f847c000000         je 0x67aba8
// 0067ab2c  85c9                 test ecx, ecx
// 0067ab2e  7416                 je 0x67ab46
// 0067ab30  833800               cmp dword ptr [eax], 0
// 0067ab33  7516                 jne 0x67ab4b
// 0067ab35  837c241400           cmp dword ptr [esp + 0x14], 0
// 0067ab3a  7506                 jne 0x67ab42
// 0067ab3c  8b542434             mov edx, dword ptr [esp + 0x34]
// 0067ab40  031a                 add ebx, dword ptr [edx]
// 0067ab42  8b542420             mov edx, dword ptr [esp + 0x20]
// 0067ab46  833800               cmp dword ptr [eax], 0
// 0067ab49  741d                 je 0x67ab68
// 0067ab4b  85c9                 test ecx, ecx
// 0067ab4d  7409                 je 0x67ab58
// 0067ab4f  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0067ab53  8b4904               mov ecx, dword ptr [ecx + 4]
// 0067ab56  eb02                 jmp 0x67ab5a
// 0067ab58  33c9                 xor ecx, ecx
// 0067ab5a  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 0067ab5e  03cb                 add ecx, ebx
// 0067ab60  2bf1                 sub esi, ecx
// 0067ab62  33db                 xor ebx, ebx
// 0067ab64  895c2410             mov dword ptr [esp + 0x10], ebx
// 0067ab68  39542410             cmp dword ptr [esp + 0x10], edx
// 0067ab6c  7f04                 jg 0x67ab72
// 0067ab6e  89542410             mov dword ptr [esp + 0x10], edx
// 0067ab72  03fb                 add edi, ebx
// 0067ab74  57                   push edi
// 0067ab75  56                   push esi
// 0067ab76  53                   push ebx
// 0067ab77  8bce                 mov ecx, esi
// 0067ab79  2bca                 sub ecx, edx
// 0067ab7b  51                   push ecx
// 0067ab7c  83c0d4               add eax, -0x2c
// 0067ab7f  50                   push eax
// 0067ab80  ff1578ed7700         call dword ptr [0x77ed78]
// 0067ab86  8b442420             mov eax, dword ptr [esp + 0x20]
// 0067ab8a  8b4d00               mov ecx, dword ptr [ebp]
// 0067ab8d  2bc6                 sub eax, esi
// 0067ab8f  3bc1                 cmp eax, ecx
// 0067ab91  7f02                 jg 0x67ab95
// 0067ab93  8bc1                 mov eax, ecx
// 0067ab95  894500               mov dword ptr [ebp], eax
// 0067ab98  8b4504               mov eax, dword ptr [ebp + 4]
// 0067ab9b  3bf8                 cmp edi, eax
// 0067ab9d  7e02                 jle 0x67aba1
// 0067ab9f  8bc7                 mov eax, edi
// 0067aba1  894504               mov dword ptr [ebp + 4], eax
// 0067aba4  8bdf                 mov ebx, edi
// 0067aba6  eb75                 jmp 0x67ac1d
// 0067aba8  85c9                 test ecx, ecx
// 0067abaa  7413                 je 0x67abbf
// 0067abac  833800               cmp dword ptr [eax], 0
// 0067abaf  7513                 jne 0x67abc4
// 0067abb1  837c241400           cmp dword ptr [esp + 0x14], 0
// 0067abb6  7507                 jne 0x67abbf
// 0067abb8  8b6c2434             mov ebp, dword ptr [esp + 0x34]
// 0067abbc  037500               add esi, dword ptr [ebp]
// 0067abbf  833800               cmp dword ptr [eax], 0
// 0067abc2  741d                 je 0x67abe1
// 0067abc4  85c9                 test ecx, ecx
// 0067abc6  7409                 je 0x67abd1
// 0067abc8  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0067abcc  8b4904               mov ecx, dword ptr [ecx + 4]
// 0067abcf  eb02                 jmp 0x67abd3
// 0067abd1  33c9                 xor ecx, ecx
// 0067abd3  8b742410             mov esi, dword ptr [esp + 0x10]
// 0067abd7  03ce                 add ecx, esi
// 0067abd9  03d9                 add ebx, ecx
// 0067abdb  33f6                 xor esi, esi
// 0067abdd  89742410             mov dword ptr [esp + 0x10], esi
// 0067abe1  397c2410             cmp dword ptr [esp + 0x10], edi
// 0067abe5  7f04                 jg 0x67abeb
// 0067abe7  897c2410             mov dword ptr [esp + 0x10], edi
// 0067abeb  8d2c1f               lea ebp, [edi + ebx]
// 0067abee  55                   push ebp
// 0067abef  8d3c32               lea edi, [edx + esi]
// 0067abf2  57                   push edi
// 0067abf3  53                   push ebx
// 0067abf4  56                   push esi
// 0067abf5  83c0d4               add eax, -0x2c
// 0067abf8  50                   push eax
// 0067abf9  ff1578ed7700         call dword ptr [0x77ed78]
// 0067abff  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0067ac03  8b08                 mov ecx, dword ptr [eax]
// 0067ac05  3bf9                 cmp edi, ecx
// 0067ac07  7e02                 jle 0x67ac0b
// 0067ac09  8bcf                 mov ecx, edi
// 0067ac0b  8908                 mov dword ptr [eax], ecx
// 0067ac0d  8b4804               mov ecx, dword ptr [eax + 4]
// 0067ac10  3be9                 cmp ebp, ecx
// 0067ac12  7f02                 jg 0x67ac16
// 0067ac14  8be9                 mov ebp, ecx
// 0067ac16  896804               mov dword ptr [eax + 4], ebp
// 0067ac19  8bf7                 mov esi, edi
// 0067ac1b  8be8                 mov ebp, eax
// 0067ac1d  8b442430             mov eax, dword ptr [esp + 0x30]
// 0067ac21  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0067ac25  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0067ac2d  8b542418             mov edx, dword ptr [esp + 0x18]
// 0067ac31  83c201               add edx, 1
// 0067ac34  83c040               add eax, 0x40
// 0067ac37  3b512c               cmp edx, dword ptr [ecx + 0x2c]
// 0067ac3a  89542418             mov dword ptr [esp + 0x18], edx
// 0067ac3e  89442430             mov dword ptr [esp + 0x30], eax
// 0067ac42  0f8cb8feffff         jl 0x67ab00
// 0067ac48  5f                   pop edi
// 0067ac49  5e                   pop esi
// 0067ac4a  8bc5                 mov eax, ebp
// 0067ac4c  5d                   pop ebp
// 0067ac4d  5b                   pop ebx
// 0067ac4e  83c418               add esp, 0x18
// 0067ac51  c21000               ret 0x10
// library xtp-11.2.2-vc8/Source\CommandBars\XTPControls.cpp (function ?_CalcSize@CXTPControls@@IAE?AVCSize@@PAUXTPBUTTONINFO@1@ABV2@H@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPControls.cpp
