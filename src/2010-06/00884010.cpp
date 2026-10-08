// roc 2010-06 00884010  unit: CXTPTabManagerNavigateButton  size: 372 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00884010
//
// 00884010  83ec20               sub esp, 0x20
// 00884013  56                   push esi
// 00884014  8bf1                 mov esi, ecx
// 00884016  ff1584bc9e00         call dword ptr [0x9ebc84]
// 0088401c  85c0                 test eax, eax
// 0088401e  0f8559010000         jne 0x88417d
// 00884024  394620               cmp dword ptr [esi + 0x20], eax
// 00884027  0f8450010000         je 0x88417d
// 0088402d  8b442428             mov eax, dword ptr [esp + 0x28]
// 00884031  53                   push ebx
// 00884032  55                   push ebp
// 00884033  57                   push edi
// 00884034  50                   push eax
// 00884035  ff1580bc9e00         call dword ptr [0x9ebc80]
// 0088403b  8b2d24a39e00         mov ebp, dword ptr [0x9ea324]
// 00884041  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00884049  ffd5                 call ebp
// 0088404b  8bd8                 mov ebx, eax
// 0088404d  8d7e10               lea edi, [esi + 0x10]
// 00884050  837e2000             cmp dword ptr [esi + 0x20], 0
// 00884054  7418                 je 0x88406e
// 00884056  ffd5                 call ebp
// 00884058  2bc3                 sub eax, ebx
// 0088405a  83f814               cmp eax, 0x14
// 0088405d  760f                 jbe 0x88406e
// 0088405f  ffd5                 call ebp
// 00884061  8b16                 mov edx, dword ptr [esi]
// 00884063  8bd8                 mov ebx, eax
// 00884065  8b4218               mov eax, dword ptr [edx + 0x18]
// 00884068  6a01                 push 1
// 0088406a  8bce                 mov ecx, esi
// 0088406c  ffd0                 call eax
// 0088406e  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 00884072  8b542438             mov edx, dword ptr [esp + 0x38]
// 00884076  51                   push ecx
// 00884077  52                   push edx
// 00884078  57                   push edi
// 00884079  ff15e0bb9e00         call dword ptr [0x9ebbe0]
// 0088407f  3b4624               cmp eax, dword ptr [esi + 0x24]
// 00884082  7410                 je 0x884094
// 00884084  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 00884087  894624               mov dword ptr [esi + 0x24], eax
// 0088408a  8b01                 mov eax, dword ptr [ecx]
// 0088408c  8b5034               mov edx, dword ptr [eax + 0x34]
// 0088408f  6a01                 push 1
// 00884091  57                   push edi
// 00884092  ffd2                 call edx
// 00884094  6a00                 push 0
// 00884096  6a00                 push 0
// 00884098  6a00                 push 0
// 0088409a  6a00                 push 0
// 0088409c  8d442424             lea eax, [esp + 0x24]
// 008840a0  50                   push eax
// 008840a1  ff1588bc9e00         call dword ptr [0x9ebc88]
// 008840a7  85c0                 test eax, eax
// 008840a9  74a5                 je 0x884050
// 008840ab  6a00                 push 0
// 008840ad  6a00                 push 0
// 008840af  6a00                 push 0
// 008840b1  8d4c2420             lea ecx, [esp + 0x20]
// 008840b5  51                   push ecx
// 008840b6  ff15f0bb9e00         call dword ptr [0x9ebbf0]
// 008840bc  ff1584bc9e00         call dword ptr [0x9ebc84]
// 008840c2  3b442434             cmp eax, dword ptr [esp + 0x34]
// 008840c6  755a                 jne 0x884122
// 008840c8  8b442418             mov eax, dword ptr [esp + 0x18]
// 008840cc  3d00020000           cmp eax, 0x200
// 008840d1  7733                 ja 0x884106
// 008840d3  7419                 je 0x8840ee
// 008840d5  83f81f               cmp eax, 0x1f
// 008840d8  745c                 je 0x884136
// 008840da  3d00010000           cmp eax, 0x100
// 008840df  7531                 jne 0x884112
// 008840e1  837c241c1b           cmp dword ptr [esp + 0x1c], 0x1b
// 008840e6  0f8564ffffff         jne 0x884050
// 008840ec  eb48                 jmp 0x884136
// 008840ee  8b442420             mov eax, dword ptr [esp + 0x20]
// 008840f2  0fbfc8               movsx ecx, ax
// 008840f5  c1e810               shr eax, 0x10
// 008840f8  98                   cwde 
// 008840f9  894c2438             mov dword ptr [esp + 0x38], ecx
// 008840fd  8944243c             mov dword ptr [esp + 0x3c], eax
// 00884101  e94affffff           jmp 0x884050
// 00884106  2d02020000           sub eax, 0x202
// 0088410b  7422                 je 0x88412f
// 0088410d  83e802               sub eax, 2
// 00884110  7424                 je 0x884136
// 00884112  8d542414             lea edx, [esp + 0x14]
// 00884116  52                   push edx
// 00884117  ff1508bc9e00         call dword ptr [0x9ebc08]
// 0088411d  e92effffff           jmp 0x884050
// 00884122  8d442414             lea eax, [esp + 0x14]
// 00884126  50                   push eax
// 00884127  ff1508bc9e00         call dword ptr [0x9ebc08]
// 0088412d  eb07                 jmp 0x884136
// 0088412f  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 00884132  894c2410             mov dword ptr [esp + 0x10], ecx
// 00884136  ff158cbc9e00         call dword ptr [0x9ebc8c]
// 0088413c  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 00884140  8b442438             mov eax, dword ptr [esp + 0x38]
// 00884144  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00884148  52                   push edx
// 00884149  50                   push eax
// 0088414a  51                   push ecx
// 0088414b  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 0088414e  c7462400000000       mov dword ptr [esi + 0x24], 0
// 00884155  e8c6faffff           call 0x883c20
// 0088415a  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 0088415d  8b11                 mov edx, dword ptr [ecx]
// 0088415f  8b4234               mov eax, dword ptr [edx + 0x34]
// 00884162  6a00                 push 0
// 00884164  6a00                 push 0
// 00884166  ffd0                 call eax
// 00884168  837c241000           cmp dword ptr [esp + 0x10], 0
// 0088416d  5f                   pop edi
// 0088416e  5d                   pop ebp
// 0088416f  5b                   pop ebx
// 00884170  740b                 je 0x88417d
// 00884172  8b16                 mov edx, dword ptr [esi]
// 00884174  8b4218               mov eax, dword ptr [edx + 0x18]
// 00884177  6a00                 push 0
// 00884179  8bce                 mov ecx, esi
// 0088417b  ffd0                 call eax
// 0088417d  5e                   pop esi
// 0088417e  83c420               add esp, 0x20
// 00884181  c20c00               ret 0xc
// library xtp-11.2.2/Source\TabManager\XTPTabManager.cpp (function ?PerformClick@CXTPTabManagerNavigateButton@@UAEXPAUHWND__@@VCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabManager.cpp
