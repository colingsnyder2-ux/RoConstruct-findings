// roc 2009-12 008a32d0  unit: CXTPReportHyperlinks  size: 458 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008a32d0
//
// 008a32d0  6aff                 push -1
// 008a32d2  68f2239600           push 0x9623f2
// 008a32d7  64a100000000         mov eax, dword ptr fs:[0]
// 008a32dd  50                   push eax
// 008a32de  83ec10               sub esp, 0x10
// 008a32e1  53                   push ebx
// 008a32e2  55                   push ebp
// 008a32e3  56                   push esi
// 008a32e4  57                   push edi
// 008a32e5  a10052b600           mov eax, dword ptr [0xb65200]
// 008a32ea  33c4                 xor eax, esp
// 008a32ec  50                   push eax
// 008a32ed  8d442424             lea eax, [esp + 0x24]
// 008a32f1  64a300000000         mov dword ptr fs:[0], eax
// 008a32f7  8bf9                 mov edi, ecx
// 008a32f9  897c2414             mov dword ptr [esp + 0x14], edi
// 008a32fd  8b07                 mov eax, dword ptr [edi]
// 008a32ff  8b5058               mov edx, dword ptr [eax + 0x58]
// 008a3302  ffd2                 call edx
// 008a3304  8b5c2434             mov ebx, dword ptr [esp + 0x34]
// 008a3308  8bf0                 mov esi, eax
// 008a330a  8b03                 mov eax, dword ptr [ebx]
// 008a330c  8b9094000000         mov edx, dword ptr [eax + 0x94]
// 008a3312  68005ba000           push 0xa05b00
// 008a3317  8bcb                 mov ecx, ebx
// 008a3319  8974241c             mov dword ptr [esp + 0x1c], esi
// 008a331d  ffd2                 call edx
// 008a331f  8be8                 mov ebp, eax
// 008a3321  896c241c             mov dword ptr [esp + 0x1c], ebp
// 008a3325  837b2800             cmp dword ptr [ebx + 0x28], 0
// 008a3329  8b4500               mov eax, dword ptr [ebp]
// 008a332c  8b5004               mov edx, dword ptr [eax + 4]
// 008a332f  c744242c00000000     mov dword ptr [esp + 0x2c], 0
// 008a3337  6a01                 push 1
// 008a3339  8bcd                 mov ecx, ebp
// 008a333b  7567                 jne 0x8a33a4
// 008a333d  56                   push esi
// 008a333e  ffd2                 call edx
// 008a3340  33db                 xor ebx, ebx
// 008a3342  89442434             mov dword ptr [esp + 0x34], eax
// 008a3346  85f6                 test esi, esi
// 008a3348  0f8e23010000         jle 0x8a3471
// 008a334e  8bff                 mov edi, edi
// 008a3350  8b07                 mov eax, dword ptr [edi]
// 008a3352  8b5060               mov edx, dword ptr [eax + 0x60]
// 008a3355  53                   push ebx
// 008a3356  8bcf                 mov ecx, edi
// 008a3358  ffd2                 call edx
// 008a335a  8bf0                 mov esi, eax
// 008a335c  85f6                 test esi, esi
// 008a335e  7438                 je 0x8a3398
// 008a3360  8b4500               mov eax, dword ptr [ebp]
// 008a3363  8b5008               mov edx, dword ptr [eax + 8]
// 008a3366  8d4c2434             lea ecx, [esp + 0x34]
// 008a336a  51                   push ecx
// 008a336b  8bcd                 mov ecx, ebp
// 008a336d  ffd2                 call edx
// 008a336f  8bf8                 mov edi, eax
// 008a3371  897c2420             mov dword ptr [esp + 0x20], edi
// 008a3375  8b06                 mov eax, dword ptr [esi]
// 008a3377  8b5058               mov edx, dword ptr [eax + 0x58]
// 008a337a  57                   push edi
// 008a337b  8bce                 mov ecx, esi
// 008a337d  c644243001           mov byte ptr [esp + 0x30], 1
// 008a3382  ffd2                 call edx
// 008a3384  c644242c00           mov byte ptr [esp + 0x2c], 0
// 008a3389  85ff                 test edi, edi
// 008a338b  7407                 je 0x8a3394
// 008a338d  8bcf                 mov ecx, edi
// 008a338f  e8480af5ff           call 0x7f3ddc
// 008a3394  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 008a3398  43                   inc ebx
// 008a3399  3b5c2418             cmp ebx, dword ptr [esp + 0x18]
// 008a339d  7cb1                 jl 0x8a3350
// 008a339f  e9cd000000           jmp 0x8a3471
// 008a33a4  6a00                 push 0
// 008a33a6  ffd2                 call edx
// 008a33a8  89442434             mov dword ptr [esp + 0x34], eax
// 008a33ac  85c0                 test eax, eax
// 008a33ae  0f84bd000000         je 0x8a3471
// 008a33b4  8b1d0cb29800         mov ebx, dword ptr [0x98b20c]
// 008a33ba  833d68aeb90000       cmp dword ptr [0xb9ae68], 0
// 008a33c1  6860aeb900           push 0xb9ae60
// 008a33c6  742b                 je 0x8a33f3
// 008a33c8  ffd3                 call ebx
// 008a33ca  833d68aeb90000       cmp dword ptr [0xb9ae68], 0
// 008a33d1  7417                 je 0x8a33ea
// 008a33d3  e8b879b7ff           call 0x41ad90
// 008a33d8  a15caeb900           mov eax, dword ptr [0xb9ae5c]
// 008a33dd  6a38                 push 0x38
// 008a33df  6a00                 push 0
// 008a33e1  50                   push eax
// 008a33e2  ff1508b39800         call dword ptr [0x98b308]
// 008a33e8  eb15                 jmp 0x8a33ff
// 008a33ea  6a38                 push 0x38
// 008a33ec  e85107f5ff           call 0x7f3b42
// 008a33f1  eb09                 jmp 0x8a33fc
// 008a33f3  ffd3                 call ebx
// 008a33f5  6a38                 push 0x38
// 008a33f7  e86404f5ff           call 0x7f3860
// 008a33fc  83c404               add esp, 4
// 008a33ff  89442418             mov dword ptr [esp + 0x18], eax
// 008a3403  c644242c02           mov byte ptr [esp + 0x2c], 2
// 008a3408  85c0                 test eax, eax
// 008a340a  740f                 je 0x8a341b
// 008a340c  6a00                 push 0
// 008a340e  6a00                 push 0
// 008a3410  8bc8                 mov ecx, eax
// 008a3412  e839f8ffff           call 0x8a2c50
// 008a3417  8bf0                 mov esi, eax
// 008a3419  eb02                 jmp 0x8a341d
// 008a341b  33f6                 xor esi, esi
// 008a341d  c644242c00           mov byte ptr [esp + 0x2c], 0
// 008a3422  8bcd                 mov ecx, ebp
// 008a3424  85f6                 test esi, esi
// 008a3426  744b                 je 0x8a3473
// 008a3428  8b5500               mov edx, dword ptr [ebp]
// 008a342b  8b5208               mov edx, dword ptr [edx + 8]
// 008a342e  8d442434             lea eax, [esp + 0x34]
// 008a3432  50                   push eax
// 008a3433  ffd2                 call edx
// 008a3435  8bf8                 mov edi, eax
// 008a3437  897c2420             mov dword ptr [esp + 0x20], edi
// 008a343b  8b06                 mov eax, dword ptr [esi]
// 008a343d  8b5058               mov edx, dword ptr [eax + 0x58]
// 008a3440  57                   push edi
// 008a3441  8bce                 mov ecx, esi
// 008a3443  c644243003           mov byte ptr [esp + 0x30], 3
// 008a3448  ffd2                 call edx
// 008a344a  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008a344e  8b01                 mov eax, dword ptr [ecx]
// 008a3450  8b5078               mov edx, dword ptr [eax + 0x78]
// 008a3453  56                   push esi
// 008a3454  ffd2                 call edx
// 008a3456  c644242c00           mov byte ptr [esp + 0x2c], 0
// 008a345b  85ff                 test edi, edi
// 008a345d  7407                 je 0x8a3466
// 008a345f  8bcf                 mov ecx, edi
// 008a3461  e87609f5ff           call 0x7f3ddc
// 008a3466  837c243400           cmp dword ptr [esp + 0x34], 0
// 008a346b  0f8549ffffff         jne 0x8a33ba
// 008a3471  8bcd                 mov ecx, ebp
// 008a3473  8b4500               mov eax, dword ptr [ebp]
// 008a3476  8b10                 mov edx, dword ptr [eax]
// 008a3478  6a01                 push 1
// 008a347a  c7442430ffffffff     mov dword ptr [esp + 0x30], 0xffffffff
// 008a3482  ffd2                 call edx
// 008a3484  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 008a3488  64890d00000000       mov dword ptr fs:[0], ecx
// 008a348f  59                   pop ecx
// 008a3490  5f                   pop edi
// 008a3491  5e                   pop esi
// 008a3492  5d                   pop ebp
// 008a3493  5b                   pop ebx
// 008a3494  83c41c               add esp, 0x1c
// 008a3497  c20400               ret 4
// copied from an identical function in another client (function ?DoPropExchange@CXTPReportHyperlinks@@UAEXPAVCXTPPropExchange@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\ReportControl\XTPReportHyperlink.cpp