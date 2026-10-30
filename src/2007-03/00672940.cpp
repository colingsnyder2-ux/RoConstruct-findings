// roc 2007-03 00672940  unit: seg_00670000  size: 324 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00672940
//
// 00672940  57                   push edi
// 00672941  8bf9                 mov edi, ecx
// 00672943  8b472c               mov eax, dword ptr [edi + 0x2c]
// 00672946  85c0                 test eax, eax
// 00672948  7507                 jne 0x672951
// 0067294a  83c8ff               or eax, 0xffffffff
// 0067294d  5f                   pop edi
// 0067294e  c21400               ret 0x14
// 00672951  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00672955  83faff               cmp edx, -1
// 00672958  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0067295c  56                   push esi
// 0067295d  8d3411               lea esi, [ecx + edx]
// 00672960  7507                 jne 0x672969
// 00672962  3bca                 cmp ecx, edx
// 00672964  7503                 jne 0x672969
// 00672966  8d70ff               lea esi, [eax - 1]
// 00672969  53                   push ebx
// 0067296a  55                   push ebp
// 0067296b  8b6c2424             mov ebp, dword ptr [esp + 0x24]
// 0067296f  f7dd                 neg ebp
// 00672971  1bed                 sbb ebp, ebp
// 00672973  83e5e0               and ebp, 0xffffffe0
// 00672976  83c520               add ebp, 0x20
// 00672979  83cd08               or ebp, 8
// 0067297c  33db                 xor ebx, ebx
// 0067297e  3bf1                 cmp esi, ecx
// 00672980  7516                 jne 0x672998
// 00672982  5d                   pop ebp
// 00672983  5b                   pop ebx
// 00672984  8bc6                 mov eax, esi
// 00672986  5e                   pop esi
// 00672987  5f                   pop edi
// 00672988  c21400               ret 0x14
// 0067298b  eb03                 jmp 0x672990
// 0067298d  8d4900               lea ecx, [ecx]
// 00672990  8b542418             mov edx, dword ptr [esp + 0x18]
// 00672994  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00672998  8b472c               mov eax, dword ptr [edi + 0x2c]
// 0067299b  3bf0                 cmp esi, eax
// 0067299d  7c1f                 jl 0x6729be
// 0067299f  83f9ff               cmp ecx, -1
// 006729a2  7509                 jne 0x6729ad
// 006729a4  83fa01               cmp edx, 1
// 006729a7  0f84c8000000         je 0x672a75
// 006729ad  85db                 test ebx, ebx
// 006729af  0f85c0000000         jne 0x672a75
// 006729b5  33f6                 xor esi, esi
// 006729b7  bb01000000           mov ebx, 1
// 006729bc  eb25                 jmp 0x6729e3
// 006729be  85f6                 test esi, esi
// 006729c0  7d21                 jge 0x6729e3
// 006729c2  83f9ff               cmp ecx, -1
// 006729c5  7508                 jne 0x6729cf
// 006729c7  3bd1                 cmp edx, ecx
// 006729c9  0f84a6000000         je 0x672a75
// 006729cf  85db                 test ebx, ebx
// 006729d1  0f859e000000         jne 0x672a75
// 006729d7  8d70ff               lea esi, [eax - 1]
// 006729da  85f6                 test esi, esi
// 006729dc  bb01000000           mov ebx, 1
// 006729e1  7c1c                 jl 0x6729ff
// 006729e3  3bf0                 cmp esi, eax
// 006729e5  7d18                 jge 0x6729ff
// 006729e7  85f6                 test esi, esi
// 006729e9  0f8c90000000         jl 0x672a7f
// 006729ef  3bf0                 cmp esi, eax
// 006729f1  0f8d88000000         jge 0x672a7f
// 006729f7  8b4728               mov eax, dword ptr [edi + 0x28]
// 006729fa  8b0cb0               mov ecx, dword ptr [eax + esi*4]
// 006729fd  eb02                 jmp 0x672a01
// 006729ff  33c9                 xor ecx, ecx
// 00672a01  8b11                 mov edx, dword ptr [ecx]
// 00672a03  8b8280000000         mov eax, dword ptr [edx + 0x80]
// 00672a09  55                   push ebp
// 00672a0a  ffd0                 call eax
// 00672a0c  85c0                 test eax, eax
// 00672a0e  744e                 je 0x672a5e
// 00672a10  837c241c00           cmp dword ptr [esp + 0x1c], 0
// 00672a15  741c                 je 0x672a33
// 00672a17  85f6                 test esi, esi
// 00672a19  7c0d                 jl 0x672a28
// 00672a1b  3b772c               cmp esi, dword ptr [edi + 0x2c]
// 00672a1e  7d08                 jge 0x672a28
// 00672a20  8b4f28               mov ecx, dword ptr [edi + 0x28]
// 00672a23  8b04b1               mov eax, dword ptr [ecx + esi*4]
// 00672a26  eb02                 jmp 0x672a2a
// 00672a28  33c0                 xor eax, eax
// 00672a2a  f680d400000002       test byte ptr [eax + 0xd4], 2
// 00672a31  752b                 jne 0x672a5e
// 00672a33  837c242000           cmp dword ptr [esp + 0x20], 0
// 00672a38  0f8444ffffff         je 0x672982
// 00672a3e  85f6                 test esi, esi
// 00672a40  7c0d                 jl 0x672a4f
// 00672a42  3b772c               cmp esi, dword ptr [edi + 0x2c]
// 00672a45  7d08                 jge 0x672a4f
// 00672a47  8b5728               mov edx, dword ptr [edi + 0x28]
// 00672a4a  8b04b2               mov eax, dword ptr [edx + esi*4]
// 00672a4d  eb02                 jmp 0x672a51
// 00672a4f  33c0                 xor eax, eax
// 00672a51  83b8ac00000000       cmp dword ptr [eax + 0xac], 0
// 00672a58  0f8424ffffff         je 0x672982
// 00672a5e  03742418             add esi, dword ptr [esp + 0x18]
// 00672a62  3b742414             cmp esi, dword ptr [esp + 0x14]
// 00672a66  0f8524ffffff         jne 0x672990
// 00672a6c  5d                   pop ebp
// 00672a6d  5b                   pop ebx
// 00672a6e  8bc6                 mov eax, esi
// 00672a70  5e                   pop esi
// 00672a71  5f                   pop edi
// 00672a72  c21400               ret 0x14
// 00672a75  5d                   pop ebp
// 00672a76  5b                   pop ebx
// 00672a77  5e                   pop esi
// 00672a78  83c8ff               or eax, 0xffffffff
// 00672a7b  5f                   pop edi
// 00672a7c  c21400               ret 0x14
// 00672a7f  e82ab9faff           call 0x61e3ae
// copied from an identical function in another client (function ?GetNext@CXTPControls@@QBEJJHHHH@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8-shared-mfc Source/CommandBars/XTPControls.cpp