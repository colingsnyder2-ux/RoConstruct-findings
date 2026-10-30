// roc 2009-12 0081d230  unit: CXTPReportControl  size: 458 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0081d230
//
// 0081d230  55                   push ebp
// 0081d231  8b6c2408             mov ebp, dword ptr [esp + 8]
// 0081d235  57                   push edi
// 0081d236  8bf9                 mov edi, ecx
// 0081d238  85ed                 test ebp, ebp
// 0081d23a  0f84b3010000         je 0x81d3f3
// 0081d240  83bfe800000000       cmp dword ptr [edi + 0xe8], 0
// 0081d247  0f84a6010000         je 0x81d3f3
// 0081d24d  53                   push ebx
// 0081d24e  56                   push esi
// 0081d24f  8bcd                 mov ecx, ebp
// 0081d251  e8cada0000           call 0x82ad20
// 0081d256  85c0                 test eax, eax
// 0081d258  7440                 je 0x81d29a
// 0081d25a  8bcd                 mov ecx, ebp
// 0081d25c  e81fdd0000           call 0x82af80
// 0081d261  8bc8                 mov ecx, eax
// 0081d263  e8b8f90000           call 0x82cc20
// 0081d268  8bd8                 mov ebx, eax
// 0081d26a  83eb01               sub ebx, 1
// 0081d26d  782b                 js 0x81d29a
// 0081d26f  90                   nop 
// 0081d270  8b442418             mov eax, dword ptr [esp + 0x18]
// 0081d274  8b37                 mov esi, dword ptr [edi]
// 0081d276  6a00                 push 0
// 0081d278  50                   push eax
// 0081d279  53                   push ebx
// 0081d27a  8bcd                 mov ecx, ebp
// 0081d27c  81c654010000         add esi, 0x154
// 0081d282  e8f9dc0000           call 0x82af80
// 0081d287  8bc8                 mov ecx, eax
// 0081d289  e8a2f90000           call 0x82cc30
// 0081d28e  8b16                 mov edx, dword ptr [esi]
// 0081d290  50                   push eax
// 0081d291  8bcf                 mov ecx, edi
// 0081d293  ffd2                 call edx
// 0081d295  83eb01               sub ebx, 1
// 0081d298  79d6                 jns 0x81d270
// 0081d29a  8b8fe4000000         mov ecx, dword ptr [edi + 0xe4]
// 0081d2a0  8b01                 mov eax, dword ptr [ecx]
// 0081d2a2  8b9080000000         mov edx, dword ptr [eax + 0x80]
// 0081d2a8  55                   push ebp
// 0081d2a9  33f6                 xor esi, esi
// 0081d2ab  ffd2                 call edx
// 0081d2ad  85c0                 test eax, eax
// 0081d2af  0f84d3000000         je 0x81d388
// 0081d2b5  8bf0                 mov esi, eax
// 0081d2b7  eb07                 jmp 0x81d2c0
// 0081d2b9  8da42400000000       lea esp, [esp]
// 0081d2c0  8b06                 mov eax, dword ptr [esi]
// 0081d2c2  8b90a8000000         mov edx, dword ptr [eax + 0xa8]
// 0081d2c8  8bce                 mov ecx, esi
// 0081d2ca  ffd2                 call edx
// 0081d2cc  8b8f28010000         mov ecx, dword ptr [edi + 0x128]
// 0081d2d2  56                   push esi
// 0081d2d3  8bd8                 mov ebx, eax
// 0081d2d5  e886170100           call 0x82ea60
// 0081d2da  85c0                 test eax, eax
// 0081d2dc  740c                 je 0x81d2ea
// 0081d2de  8b8f28010000         mov ecx, dword ptr [edi + 0x128]
// 0081d2e4  56                   push esi
// 0081d2e5  e8f6140100           call 0x82e7e0
// 0081d2ea  8b06                 mov eax, dword ptr [esi]
// 0081d2ec  8b90ac000000         mov edx, dword ptr [eax + 0xac]
// 0081d2f2  8bce                 mov ecx, esi
// 0081d2f4  ffd2                 call edx
// 0081d2f6  85c0                 test eax, eax
// 0081d2f8  7416                 je 0x81d310
// 0081d2fa  8b06                 mov eax, dword ptr [esi]
// 0081d2fc  8b90ac000000         mov edx, dword ptr [eax + 0xac]
// 0081d302  8bce                 mov ecx, esi
// 0081d304  ffd2                 call edx
// 0081d306  8b10                 mov edx, dword ptr [eax]
// 0081d308  8bc8                 mov ecx, eax
// 0081d30a  8b4268               mov eax, dword ptr [edx + 0x68]
// 0081d30d  56                   push esi
// 0081d30e  ffd0                 call eax
// 0081d310  8b8fe0000000         mov ecx, dword ptr [edi + 0xe0]
// 0081d316  8b11                 mov edx, dword ptr [ecx]
// 0081d318  8b4268               mov eax, dword ptr [edx + 0x68]
// 0081d31b  56                   push esi
// 0081d31c  ffd0                 call eax
// 0081d31e  8bf3                 mov esi, ebx
// 0081d320  85db                 test ebx, ebx
// 0081d322  744d                 je 0x81d371
// 0081d324  8b13                 mov edx, dword ptr [ebx]
// 0081d326  8b8288000000         mov eax, dword ptr [edx + 0x88]
// 0081d32c  8bcb                 mov ecx, ebx
// 0081d32e  ffd0                 call eax
// 0081d330  85c0                 test eax, eax
// 0081d332  741b                 je 0x81d34f
// 0081d334  8b13                 mov edx, dword ptr [ebx]
// 0081d336  8b82b8000000         mov eax, dword ptr [edx + 0xb8]
// 0081d33c  8bcb                 mov ecx, ebx
// 0081d33e  ffd0                 call eax
// 0081d340  8bc8                 mov ecx, eax
// 0081d342  e8d9f80000           call 0x82cc20
// 0081d347  85c0                 test eax, eax
// 0081d349  0f8471ffffff         je 0x81d2c0
// 0081d34f  8b13                 mov edx, dword ptr [ebx]
// 0081d351  8b82c0000000         mov eax, dword ptr [edx + 0xc0]
// 0081d357  8bcb                 mov ecx, ebx
// 0081d359  ffd0                 call eax
// 0081d35b  85c0                 test eax, eax
// 0081d35d  7412                 je 0x81d371
// 0081d35f  8b13                 mov edx, dword ptr [ebx]
// 0081d361  8b82b8000000         mov eax, dword ptr [edx + 0xb8]
// 0081d367  8bcb                 mov ecx, ebx
// 0081d369  ffd0                 call eax
// 0081d36b  8b10                 mov edx, dword ptr [eax]
// 0081d36d  8bc8                 mov ecx, eax
// 0081d36f  eb08                 jmp 0x81d379
// 0081d371  8b8fe4000000         mov ecx, dword ptr [edi + 0xe4]
// 0081d377  8b11                 mov edx, dword ptr [ecx]
// 0081d379  8b8288000000         mov eax, dword ptr [edx + 0x88]
// 0081d37f  6a01                 push 1
// 0081d381  ffd0                 call eax
// 0081d383  be01000000           mov esi, 1
// 0081d388  837c241c00           cmp dword ptr [esp + 0x1c], 0
// 0081d38d  7416                 je 0x81d3a5
// 0081d38f  8b4d50               mov ecx, dword ptr [ebp + 0x50]
// 0081d392  85c9                 test ecx, ecx
// 0081d394  740f                 je 0x81d3a5
// 0081d396  55                   push ebp
// 0081d397  e8f4f70000           call 0x82cb90
// 0081d39c  33c9                 xor ecx, ecx
// 0081d39e  85c0                 test eax, eax
// 0081d3a0  0f9dc1               setge cl
// 0081d3a3  0bf1                 or esi, ecx
// 0081d3a5  83bf1c01000000       cmp dword ptr [edi + 0x11c], 0
// 0081d3ac  7c25                 jl 0x81d3d3
// 0081d3ae  8b8fe0000000         mov ecx, dword ptr [edi + 0xe0]
// 0081d3b4  e867f80000           call 0x82cc20
// 0081d3b9  39871c010000         cmp dword ptr [edi + 0x11c], eax
// 0081d3bf  7c12                 jl 0x81d3d3
// 0081d3c1  8b8fe0000000         mov ecx, dword ptr [edi + 0xe0]
// 0081d3c7  e854f80000           call 0x82cc20
// 0081d3cc  48                   dec eax
// 0081d3cd  89871c010000         mov dword ptr [edi + 0x11c], eax
// 0081d3d3  85f6                 test esi, esi
// 0081d3d5  7413                 je 0x81d3ea
// 0081d3d7  8b17                 mov edx, dword ptr [edi]
// 0081d3d9  8b442418             mov eax, dword ptr [esp + 0x18]
// 0081d3dd  8b92d4010000         mov edx, dword ptr [edx + 0x1d4]
// 0081d3e3  6a00                 push 0
// 0081d3e5  50                   push eax
// 0081d3e6  8bcf                 mov ecx, edi
// 0081d3e8  ffd2                 call edx
// 0081d3ea  8bc6                 mov eax, esi
// 0081d3ec  5e                   pop esi
// 0081d3ed  5b                   pop ebx
// 0081d3ee  5f                   pop edi
// 0081d3ef  5d                   pop ebp
// 0081d3f0  c20c00               ret 0xc
// 0081d3f3  5f                   pop edi
// 0081d3f4  33c0                 xor eax, eax
// 0081d3f6  5d                   pop ebp
// 0081d3f7  c20c00               ret 0xc
// copied from an identical function in another client (function ?RemoveRecordEx@CXTPReportControl@@UAEHPAVCXTPReportRecord@@HH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportControl.cpp