// from server: 100% by auto
// roc 2008-06 00536450  unit: seg_00530000  size: 357 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00536450
//
// 00536450  83ec28               sub esp, 0x28
// 00536453  53                   push ebx
// 00536454  8b5c2430             mov ebx, dword ptr [esp + 0x30]
// 00536458  55                   push ebp
// 00536459  56                   push esi
// 0053645a  57                   push edi
// 0053645b  8bbba8010000         mov edi, dword ptr [ebx + 0x1a8]
// 00536461  8d7720               lea esi, [edi + 0x20]
// 00536464  56                   push esi
// 00536465  53                   push ebx
// 00536466  897c243c             mov dword ptr [esp + 0x3c], edi
// 0053646a  e8f1feffff           call 0x536360
// 0053646f  83c408               add esp, 8
// 00536472  837b6403             cmp dword ptr [ebx + 0x64], 3
// 00536476  8be8                 mov ebp, eax
// 00536478  6a01                 push 1
// 0053647a  896c2430             mov dword ptr [esp + 0x30], ebp
// 0053647e  53                   push ebx
// 0053647f  752a                 jne 0x5364ab
// 00536481  8b03                 mov eax, dword ptr [ebx]
// 00536483  83c018               add eax, 0x18
// 00536486  8928                 mov dword ptr [eax], ebp
// 00536488  8b0e                 mov ecx, dword ptr [esi]
// 0053648a  894804               mov dword ptr [eax + 4], ecx
// 0053648d  8b5724               mov edx, dword ptr [edi + 0x24]
// 00536490  895008               mov dword ptr [eax + 8], edx
// 00536493  8b4f28               mov ecx, dword ptr [edi + 0x28]
// 00536496  89480c               mov dword ptr [eax + 0xc], ecx
// 00536499  8b13                 mov edx, dword ptr [ebx]
// 0053649b  c742145e000000       mov dword ptr [edx + 0x14], 0x5e
// 005364a2  8b03                 mov eax, dword ptr [ebx]
// 005364a4  8b4804               mov ecx, dword ptr [eax + 4]
// 005364a7  ffd1                 call ecx
// 005364a9  eb15                 jmp 0x5364c0
// 005364ab  8b13                 mov edx, dword ptr [ebx]
// 005364ad  c742145f000000       mov dword ptr [edx + 0x14], 0x5f
// 005364b4  8b03                 mov eax, dword ptr [ebx]
// 005364b6  896818               mov dword ptr [eax + 0x18], ebp
// 005364b9  8b0b                 mov ecx, dword ptr [ebx]
// 005364bb  8b5104               mov edx, dword ptr [ecx + 4]
// 005364be  ffd2                 call edx
// 005364c0  8b4b64               mov ecx, dword ptr [ebx + 0x64]
// 005364c3  8b4304               mov eax, dword ptr [ebx + 4]
// 005364c6  8b5008               mov edx, dword ptr [eax + 8]
// 005364c9  83c408               add esp, 8
// 005364cc  51                   push ecx
// 005364cd  55                   push ebp
// 005364ce  6a01                 push 1
// 005364d0  53                   push ebx
// 005364d1  ffd2                 call edx
// 005364d3  83c410               add esp, 0x10
// 005364d6  837b6400             cmp dword ptr [ebx + 0x64], 0
// 005364da  89442430             mov dword ptr [esp + 0x30], eax
// 005364de  896c2414             mov dword ptr [esp + 0x14], ebp
// 005364e2  c744242000000000     mov dword ptr [esp + 0x20], 0
// 005364ea  0f8eb7000000         jle 0x5365a7
// 005364f0  8bf8                 mov edi, eax
// 005364f2  89742418             mov dword ptr [esp + 0x18], esi
// 005364f6  8b442418             mov eax, dword ptr [esp + 0x18]
// 005364fa  8b08                 mov ecx, dword ptr [eax]
// 005364fc  8b442414             mov eax, dword ptr [esp + 0x14]
// 00536500  99                   cdq 
// 00536501  f7f9                 idiv ecx
// 00536503  8bf0                 mov esi, eax
// 00536505  85c9                 test ecx, ecx
// 00536507  7e6a                 jle 0x536573
// 00536509  8d41ff               lea eax, [ecx - 1]
// 0053650c  89442428             mov dword ptr [esp + 0x28], eax
// 00536510  99                   cdq 
// 00536511  2bc2                 sub eax, edx
// 00536513  d1f8                 sar eax, 1
// 00536515  33db                 xor ebx, ebx
// 00536517  89442424             mov dword ptr [esp + 0x24], eax
// 0053651b  895c2410             mov dword ptr [esp + 0x10], ebx
// 0053651f  894c241c             mov dword ptr [esp + 0x1c], ecx
// 00536523  eb04                 jmp 0x536529
// 00536525  8b442424             mov eax, dword ptr [esp + 0x24]
// 00536529  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0053652d  03c1                 add eax, ecx
// 0053652f  99                   cdq 
// 00536530  f77c2428             idiv dword ptr [esp + 0x28]
// 00536534  3bdd                 cmp ebx, ebp
// 00536536  8bd3                 mov edx, ebx
// 00536538  7d24                 jge 0x53655e
// 0053653a  8d9b00000000         lea ebx, [ebx]
// 00536540  33c9                 xor ecx, ecx
// 00536542  85f6                 test esi, esi
// 00536544  7e10                 jle 0x536556
// 00536546  8b2f                 mov ebp, dword ptr [edi]
// 00536548  03e9                 add ebp, ecx
// 0053654a  41                   inc ecx
// 0053654b  3bce                 cmp ecx, esi
// 0053654d  88042a               mov byte ptr [edx + ebp], al
// 00536550  7cf4                 jl 0x536546
// 00536552  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 00536556  03542414             add edx, dword ptr [esp + 0x14]
// 0053655a  3bd5                 cmp edx, ebp
// 0053655c  7ce2                 jl 0x536540
// 0053655e  81442410ff000000     add dword ptr [esp + 0x10], 0xff
// 00536566  03de                 add ebx, esi
// 00536568  836c241c01           sub dword ptr [esp + 0x1c], 1
// 0053656d  75b6                 jne 0x536525
// 0053656f  8b5c243c             mov ebx, dword ptr [esp + 0x3c]
// 00536573  8b442420             mov eax, dword ptr [esp + 0x20]
// 00536577  8344241804           add dword ptr [esp + 0x18], 4
// 0053657c  40                   inc eax
// 0053657d  83c704               add edi, 4
// 00536580  3b4364               cmp eax, dword ptr [ebx + 0x64]
// 00536583  89742414             mov dword ptr [esp + 0x14], esi
// 00536587  89442420             mov dword ptr [esp + 0x20], eax
// 0053658b  0f8c65ffffff         jl 0x5364f6
// 00536591  8b442434             mov eax, dword ptr [esp + 0x34]
// 00536595  8b542430             mov edx, dword ptr [esp + 0x30]
// 00536599  5f                   pop edi
// 0053659a  5e                   pop esi
// 0053659b  896814               mov dword ptr [eax + 0x14], ebp
// 0053659e  5d                   pop ebp
// 0053659f  895010               mov dword ptr [eax + 0x10], edx
// 005365a2  5b                   pop ebx
// 005365a3  83c428               add esp, 0x28
// 005365a6  c3                   ret 
// 005365a7  896f14               mov dword ptr [edi + 0x14], ebp
// 005365aa  894710               mov dword ptr [edi + 0x10], eax
// 005365ad  5f                   pop edi
// 005365ae  5e                   pop esi
// 005365af  5d                   pop ebp
// 005365b0  5b                   pop ebx
// 005365b1  83c428               add esp, 0x28
// 005365b4  c3                   ret 
// library jpeg-6b/jquant1.c (function _create_colormap)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jquant1.c
