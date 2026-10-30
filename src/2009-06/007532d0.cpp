// roc 2009-06 007532d0  unit: VCXTPReportRows::?$CXTPHeapObjectT  size: 722 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007532d0
//
// 007532d0  6aff                 push -1
// 007532d2  68637a8700           push 0x877a63
// 007532d7  64a100000000         mov eax, dword ptr fs:[0]
// 007532dd  50                   push eax
// 007532de  83ec3c               sub esp, 0x3c
// 007532e1  53                   push ebx
// 007532e2  55                   push ebp
// 007532e3  56                   push esi
// 007532e4  57                   push edi
// 007532e5  a1304fa200           mov eax, dword ptr [0xa24f30]
// 007532ea  33c4                 xor eax, esp
// 007532ec  50                   push eax
// 007532ed  8d442450             lea eax, [esp + 0x50]
// 007532f1  64a300000000         mov dword ptr fs:[0], eax
// 007532f7  8be9                 mov ebp, ecx
// 007532f9  896c2420             mov dword ptr [esp + 0x20], ebp
// 007532fd  8b442464             mov eax, dword ptr [esp + 0x64]
// 00753301  33db                 xor ebx, ebx
// 00753303  895c2414             mov dword ptr [esp + 0x14], ebx
// 00753307  33ff                 xor edi, edi
// 00753309  8918                 mov dword ptr [eax], ebx
// 0075330b  395d28               cmp dword ptr [ebp + 0x28], ebx
// 0075330e  895c2418             mov dword ptr [esp + 0x18], ebx
// 00753312  897c241c             mov dword ptr [esp + 0x1c], edi
// 00753316  0f8e91010000         jle 0x7534ad
// 0075331c  8d642400             lea esp, [esp]
// 00753320  3bfb                 cmp edi, ebx
// 00753322  0f8c75020000         jl 0x75359d
// 00753328  3b7d28               cmp edi, dword ptr [ebp + 0x28]
// 0075332b  0f8d6c020000         jge 0x75359d
// 00753331  8b4d24               mov ecx, dword ptr [ebp + 0x24]
// 00753334  8b34b9               mov esi, dword ptr [ecx + edi*4]
// 00753337  8b16                 mov edx, dword ptr [esi]
// 00753339  8d04b9               lea eax, [ecx + edi*4]
// 0075333c  8b8288000000         mov eax, dword ptr [edx + 0x88]
// 00753342  8bce                 mov ecx, esi
// 00753344  8974242c             mov dword ptr [esp + 0x2c], esi
// 00753348  ffd0                 call eax
// 0075334a  85c0                 test eax, eax
// 0075334c  0f84a1010000         je 0x7534f3
// 00753352  8b6c2460             mov ebp, dword ptr [esp + 0x60]
// 00753356  8b5500               mov edx, dword ptr [ebp]
// 00753359  8b4260               mov eax, dword ptr [edx + 0x60]
// 0075335c  8bcd                 mov ecx, ebp
// 0075335e  ffd0                 call eax
// 00753360  8bf8                 mov edi, eax
// 00753362  8b4524               mov eax, dword ptr [ebp + 0x24]
// 00753365  8b80ec000000         mov eax, dword ptr [eax + 0xec]
// 0075336b  3bfb                 cmp edi, ebx
// 0075336d  0f8424010000         je 0x753497
// 00753373  3bc3                 cmp eax, ebx
// 00753375  0f841c010000         je 0x753497
// 0075337b  8b16                 mov edx, dword ptr [esi]
// 0075337d  8b6820               mov ebp, dword ptr [eax + 0x20]
// 00753380  8b82dc000000         mov eax, dword ptr [edx + 0xdc]
// 00753386  8bce                 mov ecx, esi
// 00753388  ffd0                 call eax
// 0075338a  50                   push eax
// 0075338b  8bcd                 mov ecx, ebp
// 0075338d  e8fef10300           call 0x792590
// 00753392  8be8                 mov ebp, eax
// 00753394  55                   push ebp
// 00753395  8bcf                 mov ecx, edi
// 00753397  e8d4cbffff           call 0x74ff70
// 0075339c  3bc3                 cmp eax, ebx
// 0075339e  7422                 je 0x7533c2
// 007533a0  8b10                 mov edx, dword ptr [eax]
// 007533a2  8b5274               mov edx, dword ptr [edx + 0x74]
// 007533a5  55                   push ebp
// 007533a6  8d4c2428             lea ecx, [esp + 0x28]
// 007533aa  51                   push ecx
// 007533ab  8bc8                 mov ecx, eax
// 007533ad  ffd2                 call edx
// 007533af  834c241401           or dword ptr [esp + 0x14], 1
// 007533b4  8bc8                 mov ecx, eax
// 007533b6  895c2458             mov dword ptr [esp + 0x58], ebx
// 007533ba  ff15d0fc8900         call dword ptr [0x89fcd0]
// 007533c0  eb05                 jmp 0x7533c7
// 007533c2  b816d28a00           mov eax, 0x8ad216
// 007533c7  33c9                 xor ecx, ecx
// 007533c9  66894c2440           mov word ptr [esp + 0x40], cx
// 007533ce  50                   push eax
// 007533cf  8d4c2444             lea ecx, [esp + 0x44]
// 007533d3  e8508d0f00           call 0x84c128
// 007533d8  f644241401           test byte ptr [esp + 0x14], 1
// 007533dd  c744245802000000     mov dword ptr [esp + 0x58], 2
// 007533e5  740f                 je 0x7533f6
// 007533e7  83642414fe           and dword ptr [esp + 0x14], 0xfffffffe
// 007533ec  8d4c2424             lea ecx, [esp + 0x24]
// 007533f0  ff1510fd8900         call dword ptr [0x89fd10]
// 007533f6  8b16                 mov edx, dword ptr [esi]
// 007533f8  8b92fc000000         mov edx, dword ptr [edx + 0xfc]
// 007533fe  8d442428             lea eax, [esp + 0x28]
// 00753402  50                   push eax
// 00753403  8bce                 mov ecx, esi
// 00753405  ffd2                 call edx
// 00753407  8bc8                 mov ecx, eax
// 00753409  c644245803           mov byte ptr [esp + 0x58], 3
// 0075340e  ff15d0fc8900         call dword ptr [0x89fcd0]
// 00753414  33c9                 xor ecx, ecx
// 00753416  66894c2430           mov word ptr [esp + 0x30], cx
// 0075341b  50                   push eax
// 0075341c  8d4c2434             lea ecx, [esp + 0x34]
// 00753420  e8038d0f00           call 0x84c128
// 00753425  8d4c2428             lea ecx, [esp + 0x28]
// 00753429  c644245805           mov byte ptr [esp + 0x58], 5
// 0075342e  ff1510fd8900         call dword ptr [0x89fd10]
// 00753434  8b4750               mov eax, dword ptr [edi + 0x50]
// 00753437  8b4040               mov eax, dword ptr [eax + 0x40]
// 0075343a  33d2                 xor edx, edx
// 0075343c  3bc3                 cmp eax, ebx
// 0075343e  a10462a200           mov eax, dword ptr [0xa26204]
// 00753443  0f94c2               sete dl
// 00753446  8bfa                 mov edi, edx
// 00753448  3d00040000           cmp eax, 0x400
// 0075344d  7505                 jne 0x753454
// 0075344f  e8ccdffeff           call 0x741420
// 00753454  57                   push edi
// 00753455  50                   push eax
// 00753456  8d442438             lea eax, [esp + 0x38]
// 0075345a  50                   push eax
// 0075345b  8d4c244c             lea ecx, [esp + 0x4c]
// 0075345f  51                   push ecx
// 00753460  e8ff940f00           call 0x84c964
// 00753465  8b6d40               mov ebp, dword ptr [ebp + 0x40]
// 00753468  8bf8                 mov edi, eax
// 0075346a  4f                   dec edi
// 0075346b  3beb                 cmp ebp, ebx
// 0075346d  7408                 je 0x753477
// 0075346f  3bfb                 cmp edi, ebx
// 00753471  7f08                 jg 0x75347b
// 00753473  3beb                 cmp ebp, ebx
// 00753475  7550                 jne 0x7534c7
// 00753477  3bfb                 cmp edi, ebx
// 00753479  7d4c                 jge 0x7534c7
// 0075347b  8b3528ea8900         mov esi, dword ptr [0x89ea28]
// 00753481  8d542430             lea edx, [esp + 0x30]
// 00753485  52                   push edx
// 00753486  ffd6                 call esi
// 00753488  8d442440             lea eax, [esp + 0x40]
// 0075348c  c7442458ffffffff     mov dword ptr [esp + 0x58], 0xffffffff
// 00753494  50                   push eax
// 00753495  ffd6                 call esi
// 00753497  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 0075349b  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 0075349f  47                   inc edi
// 007534a0  3b7d28               cmp edi, dword ptr [ebp + 0x28]
// 007534a3  897c241c             mov dword ptr [esp + 0x1c], edi
// 007534a7  0f8c73feffff         jl 0x753320
// 007534ad  8b442418             mov eax, dword ptr [esp + 0x18]
// 007534b1  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 007534b5  64890d00000000       mov dword ptr fs:[0], ecx
// 007534bc  59                   pop ecx
// 007534bd  5f                   pop edi
// 007534be  5e                   pop esi
// 007534bf  5d                   pop ebp
// 007534c0  5b                   pop ebx
// 007534c1  83c448               add esp, 0x48
// 007534c4  c20800               ret 8
// 007534c7  8b16                 mov edx, dword ptr [esi]
// 007534c9  8b82b8000000         mov eax, dword ptr [edx + 0xb8]
// 007534cf  8bce                 mov ecx, esi
// 007534d1  ffd0                 call eax
// 007534d3  85c0                 test eax, eax
// 007534d5  7538                 jne 0x75350f
// 007534d7  8b3528ea8900         mov esi, dword ptr [0x89ea28]
// 007534dd  8d4c2430             lea ecx, [esp + 0x30]
// 007534e1  51                   push ecx
// 007534e2  ffd6                 call esi
// 007534e4  8d542440             lea edx, [esp + 0x40]
// 007534e8  c7442458ffffffff     mov dword ptr [esp + 0x58], 0xffffffff
// 007534f0  52                   push edx
// 007534f1  eba2                 jmp 0x753495
// 007534f3  8d44242c             lea eax, [esp + 0x2c]
// 007534f7  50                   push eax
// 007534f8  8d4c2464             lea ecx, [esp + 0x64]
// 007534fc  51                   push ecx
// 007534fd  e87efbffff           call 0x753080
// 00753502  83c408               add esp, 8
// 00753505  85c0                 test eax, eax
// 00753507  7f96                 jg 0x75349f
// 00753509  89742418             mov dword ptr [esp + 0x18], esi
// 0075350d  eb9e                 jmp 0x7534ad
// 0075350f  3bfb                 cmp edi, ebx
// 00753511  0f8580000000         jne 0x753597
// 00753517  8b16                 mov edx, dword ptr [esi]
// 00753519  8b82b8000000         mov eax, dword ptr [edx + 0xb8]
// 0075351f  8bce                 mov ecx, esi
// 00753521  ffd0                 call eax
// 00753523  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 00753527  8b10                 mov edx, dword ptr [eax]
// 00753529  8b9284000000         mov edx, dword ptr [edx + 0x84]
// 0075352f  51                   push ecx
// 00753530  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 00753534  51                   push ecx
// 00753535  8bc8                 mov ecx, eax
// 00753537  ffd2                 call edx
// 00753539  89442418             mov dword ptr [esp + 0x18], eax
// 0075353d  3bc3                 cmp eax, ebx
// 0075353f  753d                 jne 0x75357e
// 00753541  8b06                 mov eax, dword ptr [esi]
// 00753543  8b90b8000000         mov edx, dword ptr [eax + 0xb8]
// 00753549  8bce                 mov ecx, esi
// 0075354b  ffd2                 call edx
// 0075354d  8be8                 mov ebp, eax
// 0075354f  8b06                 mov eax, dword ptr [esi]
// 00753551  8b7d00               mov edi, dword ptr [ebp]
// 00753554  8b90b8000000         mov edx, dword ptr [eax + 0xb8]
// 0075355a  8bce                 mov ecx, esi
// 0075355c  83c75c               add edi, 0x5c
// 0075355f  ffd2                 call edx
// 00753561  8bc8                 mov ecx, eax
// 00753563  e848e9ffff           call 0x751eb0
// 00753568  48                   dec eax
// 00753569  50                   push eax
// 0075356a  8b07                 mov eax, dword ptr [edi]
// 0075356c  8bcd                 mov ecx, ebp
// 0075356e  ffd0                 call eax
// 00753570  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 00753574  89442418             mov dword ptr [esp + 0x18], eax
// 00753578  c70101000000         mov dword ptr [ecx], 1
// 0075357e  8b3528ea8900         mov esi, dword ptr [0x89ea28]
// 00753584  8d542430             lea edx, [esp + 0x30]
// 00753588  52                   push edx
// 00753589  ffd6                 call esi
// 0075358b  8d442440             lea eax, [esp + 0x40]
// 0075358f  50                   push eax
// 00753590  ffd6                 call esi
// 00753592  e916ffffff           jmp 0x7534ad
// 00753597  89742418             mov dword ptr [esp + 0x18], esi
// 0075359b  ebe1                 jmp 0x75357e
// 0075359d  e84257fcff           call 0x718ce4
// copied from an identical function in another client (function ?FindInsertionPos@CXTPReportRows@@UAEPAVCXTPReportRow@@PAV2@AAH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\ReportControl\XTPReportRows.cpp