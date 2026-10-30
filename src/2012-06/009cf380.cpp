// roc 2012-06 009cf380  unit: CXTPControls  size: 322 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009cf380
//
// 009cf380  57                   push edi
// 009cf381  8bf9                 mov edi, ecx
// 009cf383  8b472c               mov eax, dword ptr [edi + 0x2c]
// 009cf386  85c0                 test eax, eax
// 009cf388  7507                 jne 0x9cf391
// 009cf38a  83c8ff               or eax, 0xffffffff
// 009cf38d  5f                   pop edi
// 009cf38e  c21400               ret 0x14
// 009cf391  8b54240c             mov edx, dword ptr [esp + 0xc]
// 009cf395  8b4c2408             mov ecx, dword ptr [esp + 8]
// 009cf399  56                   push esi
// 009cf39a  8d3411               lea esi, [ecx + edx]
// 009cf39d  83faff               cmp edx, -1
// 009cf3a0  7507                 jne 0x9cf3a9
// 009cf3a2  3bca                 cmp ecx, edx
// 009cf3a4  7503                 jne 0x9cf3a9
// 009cf3a6  8d70ff               lea esi, [eax - 1]
// 009cf3a9  53                   push ebx
// 009cf3aa  55                   push ebp
// 009cf3ab  8b6c2424             mov ebp, dword ptr [esp + 0x24]
// 009cf3af  f7dd                 neg ebp
// 009cf3b1  1bed                 sbb ebp, ebp
// 009cf3b3  83e5e0               and ebp, 0xffffffe0
// 009cf3b6  83c520               add ebp, 0x20
// 009cf3b9  83cd08               or ebp, 8
// 009cf3bc  33db                 xor ebx, ebx
// 009cf3be  3bf1                 cmp esi, ecx
// 009cf3c0  7516                 jne 0x9cf3d8
// 009cf3c2  5d                   pop ebp
// 009cf3c3  5b                   pop ebx
// 009cf3c4  8bc6                 mov eax, esi
// 009cf3c6  5e                   pop esi
// 009cf3c7  5f                   pop edi
// 009cf3c8  c21400               ret 0x14
// 009cf3cb  eb03                 jmp 0x9cf3d0
// 009cf3cd  8d4900               lea ecx, [ecx]
// 009cf3d0  8b542418             mov edx, dword ptr [esp + 0x18]
// 009cf3d4  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 009cf3d8  8b472c               mov eax, dword ptr [edi + 0x2c]
// 009cf3db  3bf0                 cmp esi, eax
// 009cf3dd  7c1d                 jl 0x9cf3fc
// 009cf3df  83f9ff               cmp ecx, -1
// 009cf3e2  7509                 jne 0x9cf3ed
// 009cf3e4  83fa01               cmp edx, 1
// 009cf3e7  0f84c6000000         je 0x9cf4b3
// 009cf3ed  85db                 test ebx, ebx
// 009cf3ef  0f85be000000         jne 0x9cf4b3
// 009cf3f5  33f6                 xor esi, esi
// 009cf3f7  8d5e01               lea ebx, [esi + 1]
// 009cf3fa  eb25                 jmp 0x9cf421
// 009cf3fc  85f6                 test esi, esi
// 009cf3fe  7d21                 jge 0x9cf421
// 009cf400  83f9ff               cmp ecx, -1
// 009cf403  7508                 jne 0x9cf40d
// 009cf405  3bd1                 cmp edx, ecx
// 009cf407  0f84a6000000         je 0x9cf4b3
// 009cf40d  85db                 test ebx, ebx
// 009cf40f  0f859e000000         jne 0x9cf4b3
// 009cf415  8d70ff               lea esi, [eax - 1]
// 009cf418  bb01000000           mov ebx, 1
// 009cf41d  85f6                 test esi, esi
// 009cf41f  7c1c                 jl 0x9cf43d
// 009cf421  3bf0                 cmp esi, eax
// 009cf423  7d18                 jge 0x9cf43d
// 009cf425  85f6                 test esi, esi
// 009cf427  0f8c90000000         jl 0x9cf4bd
// 009cf42d  3bf0                 cmp esi, eax
// 009cf42f  0f8d88000000         jge 0x9cf4bd
// 009cf435  8b4728               mov eax, dword ptr [edi + 0x28]
// 009cf438  8b0cb0               mov ecx, dword ptr [eax + esi*4]
// 009cf43b  eb02                 jmp 0x9cf43f
// 009cf43d  33c9                 xor ecx, ecx
// 009cf43f  8b11                 mov edx, dword ptr [ecx]
// 009cf441  8b8280000000         mov eax, dword ptr [edx + 0x80]
// 009cf447  55                   push ebp
// 009cf448  ffd0                 call eax
// 009cf44a  85c0                 test eax, eax
// 009cf44c  744e                 je 0x9cf49c
// 009cf44e  837c241c00           cmp dword ptr [esp + 0x1c], 0
// 009cf453  741c                 je 0x9cf471
// 009cf455  85f6                 test esi, esi
// 009cf457  7c0d                 jl 0x9cf466
// 009cf459  3b772c               cmp esi, dword ptr [edi + 0x2c]
// 009cf45c  7d08                 jge 0x9cf466
// 009cf45e  8b4f28               mov ecx, dword ptr [edi + 0x28]
// 009cf461  8b04b1               mov eax, dword ptr [ecx + esi*4]
// 009cf464  eb02                 jmp 0x9cf468
// 009cf466  33c0                 xor eax, eax
// 009cf468  f680d400000002       test byte ptr [eax + 0xd4], 2
// 009cf46f  752b                 jne 0x9cf49c
// 009cf471  837c242000           cmp dword ptr [esp + 0x20], 0
// 009cf476  0f8446ffffff         je 0x9cf3c2
// 009cf47c  85f6                 test esi, esi
// 009cf47e  7c0d                 jl 0x9cf48d
// 009cf480  3b772c               cmp esi, dword ptr [edi + 0x2c]
// 009cf483  7d08                 jge 0x9cf48d
// 009cf485  8b5728               mov edx, dword ptr [edi + 0x28]
// 009cf488  8b04b2               mov eax, dword ptr [edx + esi*4]
// 009cf48b  eb02                 jmp 0x9cf48f
// 009cf48d  33c0                 xor eax, eax
// 009cf48f  83b8ac00000000       cmp dword ptr [eax + 0xac], 0
// 009cf496  0f8426ffffff         je 0x9cf3c2
// 009cf49c  03742418             add esi, dword ptr [esp + 0x18]
// 009cf4a0  3b742414             cmp esi, dword ptr [esp + 0x14]
// 009cf4a4  0f8526ffffff         jne 0x9cf3d0
// 009cf4aa  5d                   pop ebp
// 009cf4ab  5b                   pop ebx
// 009cf4ac  8bc6                 mov eax, esi
// 009cf4ae  5e                   pop esi
// 009cf4af  5f                   pop edi
// 009cf4b0  c21400               ret 0x14
// 009cf4b3  5d                   pop ebp
// 009cf4b4  5b                   pop ebx
// 009cf4b5  5e                   pop esi
// 009cf4b6  83c8ff               or eax, 0xffffffff
// 009cf4b9  5f                   pop edi
// 009cf4ba  c21400               ret 0x14
// 009cf4bd  e8fe2efbff           call 0x9823c0
// copied from an identical function in another client (function ?GetNext@CXTPControls@@QBEJJHHHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPControls.cpp