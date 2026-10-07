// roc 2009-06 005a0730  unit: seg_005a0000  size: 357 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005a0730
//
// 005a0730  83ec28               sub esp, 0x28
// 005a0733  53                   push ebx
// 005a0734  8b5c2430             mov ebx, dword ptr [esp + 0x30]
// 005a0738  55                   push ebp
// 005a0739  56                   push esi
// 005a073a  57                   push edi
// 005a073b  8bbba8010000         mov edi, dword ptr [ebx + 0x1a8]
// 005a0741  8d7720               lea esi, [edi + 0x20]
// 005a0744  56                   push esi
// 005a0745  53                   push ebx
// 005a0746  897c243c             mov dword ptr [esp + 0x3c], edi
// 005a074a  e8f1feffff           call 0x5a0640
// 005a074f  83c408               add esp, 8
// 005a0752  837b6403             cmp dword ptr [ebx + 0x64], 3
// 005a0756  8be8                 mov ebp, eax
// 005a0758  6a01                 push 1
// 005a075a  896c2430             mov dword ptr [esp + 0x30], ebp
// 005a075e  53                   push ebx
// 005a075f  752a                 jne 0x5a078b
// 005a0761  8b03                 mov eax, dword ptr [ebx]
// 005a0763  83c018               add eax, 0x18
// 005a0766  8928                 mov dword ptr [eax], ebp
// 005a0768  8b0e                 mov ecx, dword ptr [esi]
// 005a076a  894804               mov dword ptr [eax + 4], ecx
// 005a076d  8b5724               mov edx, dword ptr [edi + 0x24]
// 005a0770  895008               mov dword ptr [eax + 8], edx
// 005a0773  8b4f28               mov ecx, dword ptr [edi + 0x28]
// 005a0776  89480c               mov dword ptr [eax + 0xc], ecx
// 005a0779  8b13                 mov edx, dword ptr [ebx]
// 005a077b  c742145e000000       mov dword ptr [edx + 0x14], 0x5e
// 005a0782  8b03                 mov eax, dword ptr [ebx]
// 005a0784  8b4804               mov ecx, dword ptr [eax + 4]
// 005a0787  ffd1                 call ecx
// 005a0789  eb15                 jmp 0x5a07a0
// 005a078b  8b13                 mov edx, dword ptr [ebx]
// 005a078d  c742145f000000       mov dword ptr [edx + 0x14], 0x5f
// 005a0794  8b03                 mov eax, dword ptr [ebx]
// 005a0796  896818               mov dword ptr [eax + 0x18], ebp
// 005a0799  8b0b                 mov ecx, dword ptr [ebx]
// 005a079b  8b5104               mov edx, dword ptr [ecx + 4]
// 005a079e  ffd2                 call edx
// 005a07a0  8b4b64               mov ecx, dword ptr [ebx + 0x64]
// 005a07a3  8b4304               mov eax, dword ptr [ebx + 4]
// 005a07a6  8b5008               mov edx, dword ptr [eax + 8]
// 005a07a9  83c408               add esp, 8
// 005a07ac  51                   push ecx
// 005a07ad  55                   push ebp
// 005a07ae  6a01                 push 1
// 005a07b0  53                   push ebx
// 005a07b1  ffd2                 call edx
// 005a07b3  83c410               add esp, 0x10
// 005a07b6  837b6400             cmp dword ptr [ebx + 0x64], 0
// 005a07ba  89442430             mov dword ptr [esp + 0x30], eax
// 005a07be  896c2414             mov dword ptr [esp + 0x14], ebp
// 005a07c2  c744242000000000     mov dword ptr [esp + 0x20], 0
// 005a07ca  0f8eb7000000         jle 0x5a0887
// 005a07d0  8bf8                 mov edi, eax
// 005a07d2  89742418             mov dword ptr [esp + 0x18], esi
// 005a07d6  8b442418             mov eax, dword ptr [esp + 0x18]
// 005a07da  8b08                 mov ecx, dword ptr [eax]
// 005a07dc  8b442414             mov eax, dword ptr [esp + 0x14]
// 005a07e0  99                   cdq 
// 005a07e1  f7f9                 idiv ecx
// 005a07e3  8bf0                 mov esi, eax
// 005a07e5  85c9                 test ecx, ecx
// 005a07e7  7e6a                 jle 0x5a0853
// 005a07e9  8d41ff               lea eax, [ecx - 1]
// 005a07ec  89442428             mov dword ptr [esp + 0x28], eax
// 005a07f0  99                   cdq 
// 005a07f1  2bc2                 sub eax, edx
// 005a07f3  d1f8                 sar eax, 1
// 005a07f5  33db                 xor ebx, ebx
// 005a07f7  89442424             mov dword ptr [esp + 0x24], eax
// 005a07fb  895c2410             mov dword ptr [esp + 0x10], ebx
// 005a07ff  894c241c             mov dword ptr [esp + 0x1c], ecx
// 005a0803  eb04                 jmp 0x5a0809
// 005a0805  8b442424             mov eax, dword ptr [esp + 0x24]
// 005a0809  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005a080d  03c1                 add eax, ecx
// 005a080f  99                   cdq 
// 005a0810  f77c2428             idiv dword ptr [esp + 0x28]
// 005a0814  3bdd                 cmp ebx, ebp
// 005a0816  8bd3                 mov edx, ebx
// 005a0818  7d24                 jge 0x5a083e
// 005a081a  8d9b00000000         lea ebx, [ebx]
// 005a0820  33c9                 xor ecx, ecx
// 005a0822  85f6                 test esi, esi
// 005a0824  7e10                 jle 0x5a0836
// 005a0826  8b2f                 mov ebp, dword ptr [edi]
// 005a0828  03e9                 add ebp, ecx
// 005a082a  41                   inc ecx
// 005a082b  3bce                 cmp ecx, esi
// 005a082d  88042a               mov byte ptr [edx + ebp], al
// 005a0830  7cf4                 jl 0x5a0826
// 005a0832  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 005a0836  03542414             add edx, dword ptr [esp + 0x14]
// 005a083a  3bd5                 cmp edx, ebp
// 005a083c  7ce2                 jl 0x5a0820
// 005a083e  81442410ff000000     add dword ptr [esp + 0x10], 0xff
// 005a0846  03de                 add ebx, esi
// 005a0848  836c241c01           sub dword ptr [esp + 0x1c], 1
// 005a084d  75b6                 jne 0x5a0805
// 005a084f  8b5c243c             mov ebx, dword ptr [esp + 0x3c]
// 005a0853  8b442420             mov eax, dword ptr [esp + 0x20]
// 005a0857  8344241804           add dword ptr [esp + 0x18], 4
// 005a085c  40                   inc eax
// 005a085d  83c704               add edi, 4
// 005a0860  3b4364               cmp eax, dword ptr [ebx + 0x64]
// 005a0863  89742414             mov dword ptr [esp + 0x14], esi
// 005a0867  89442420             mov dword ptr [esp + 0x20], eax
// 005a086b  0f8c65ffffff         jl 0x5a07d6
// 005a0871  8b442434             mov eax, dword ptr [esp + 0x34]
// 005a0875  8b542430             mov edx, dword ptr [esp + 0x30]
// 005a0879  5f                   pop edi
// 005a087a  5e                   pop esi
// 005a087b  896814               mov dword ptr [eax + 0x14], ebp
// 005a087e  5d                   pop ebp
// 005a087f  895010               mov dword ptr [eax + 0x10], edx
// 005a0882  5b                   pop ebx
// 005a0883  83c428               add esp, 0x28
// 005a0886  c3                   ret 
// 005a0887  896f14               mov dword ptr [edi + 0x14], ebp
// 005a088a  894710               mov dword ptr [edi + 0x10], eax
// 005a088d  5f                   pop edi
// 005a088e  5e                   pop esi
// 005a088f  5d                   pop ebp
// 005a0890  5b                   pop ebx
// 005a0891  83c428               add esp, 0x28
// 005a0894  c3                   ret 
// library jpeg-6b/jquant1.c (function _create_colormap)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jquant1.c
