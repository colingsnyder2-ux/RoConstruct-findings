// roc 2009-12 008d31e0  unit: CXTPTabPaintManager  size: 259 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008d31e0
//
// 008d31e0  56                   push esi
// 008d31e1  57                   push edi
// 008d31e2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 008d31e6  8bcf                 mov ecx, edi
// 008d31e8  e823c2ffff           call 0x8cf410
// 008d31ed  8b775c               mov esi, dword ptr [edi + 0x5c]
// 008d31f0  85f6                 test esi, esi
// 008d31f2  0f84e6000000         je 0x8d32de
// 008d31f8  55                   push ebp
// 008d31f9  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 008d31fd  3be8                 cmp ebp, eax
// 008d31ff  0f8dd8000000         jge 0x8d32dd
// 008d3205  83fe01               cmp esi, 1
// 008d3208  751d                 jne 0x8d3227
// 008d320a  85f6                 test esi, esi
// 008d320c  7e0e                 jle 0x8d321c
// 008d320e  8b4758               mov eax, dword ptr [edi + 0x58]
// 008d3211  8b00                 mov eax, dword ptr [eax]
// 008d3213  896820               mov dword ptr [eax + 0x20], ebp
// 008d3216  5d                   pop ebp
// 008d3217  5f                   pop edi
// 008d3218  5e                   pop esi
// 008d3219  c20800               ret 8
// 008d321c  33c0                 xor eax, eax
// 008d321e  896820               mov dword ptr [eax + 0x20], ebp
// 008d3221  5d                   pop ebp
// 008d3222  5f                   pop edi
// 008d3223  5e                   pop esi
// 008d3224  c20800               ret 8
// 008d3227  33c9                 xor ecx, ecx
// 008d3229  8bc6                 mov eax, esi
// 008d322b  ba04000000           mov edx, 4
// 008d3230  f7e2                 mul edx
// 008d3232  0f90c1               seto cl
// 008d3235  53                   push ebx
// 008d3236  f7d9                 neg ecx
// 008d3238  0bc8                 or ecx, eax
// 008d323a  51                   push ecx
// 008d323b  e80209f2ff           call 0x7f3b42
// 008d3240  8bd8                 mov ebx, eax
// 008d3242  83c404               add esp, 4
// 008d3245  85db                 test ebx, ebx
// 008d3247  0f848f000000         je 0x8d32dc
// 008d324d  33c0                 xor eax, eax
// 008d324f  85f6                 test esi, esi
// 008d3251  7e1b                 jle 0x8d326e
// 008d3253  85c0                 test eax, eax
// 008d3255  7c0d                 jl 0x8d3264
// 008d3257  3b475c               cmp eax, dword ptr [edi + 0x5c]
// 008d325a  7d08                 jge 0x8d3264
// 008d325c  8b4f58               mov ecx, dword ptr [edi + 0x58]
// 008d325f  8b0c81               mov ecx, dword ptr [ecx + eax*4]
// 008d3262  eb02                 jmp 0x8d3266
// 008d3264  33c9                 xor ecx, ecx
// 008d3266  890c83               mov dword ptr [ebx + eax*4], ecx
// 008d3269  40                   inc eax
// 008d326a  3bc6                 cmp eax, esi
// 008d326c  7ce5                 jl 0x8d3253
// 008d326e  68d0088d00           push 0x8d08d0
// 008d3273  6a04                 push 4
// 008d3275  56                   push esi
// 008d3276  53                   push ebx
// 008d3277  ff1584b99800         call dword ptr [0x98b984]
// 008d327d  83c410               add esp, 0x10
// 008d3280  33c0                 xor eax, eax
// 008d3282  85f6                 test esi, esi
// 008d3284  7e4d                 jle 0x8d32d3
// 008d3286  8bd6                 mov edx, esi
// 008d3288  8b0c83               mov ecx, dword ptr [ebx + eax*4]
// 008d328b  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 008d328e  8bfa                 mov edi, edx
// 008d3290  0faff9               imul edi, ecx
// 008d3293  3bfd                 cmp edi, ebp
// 008d3295  7d18                 jge 0x8d32af
// 008d3297  40                   inc eax
// 008d3298  2be9                 sub ebp, ecx
// 008d329a  4a                   dec edx
// 008d329b  3bc6                 cmp eax, esi
// 008d329d  7ce9                 jl 0x8d3288
// 008d329f  53                   push ebx
// 008d32a0  e86108f2ff           call 0x7f3b06
// 008d32a5  83c404               add esp, 4
// 008d32a8  5b                   pop ebx
// 008d32a9  5d                   pop ebp
// 008d32aa  5f                   pop edi
// 008d32ab  5e                   pop esi
// 008d32ac  c20800               ret 8
// 008d32af  3bc6                 cmp eax, esi
// 008d32b1  8bc8                 mov ecx, eax
// 008d32b3  7d1e                 jge 0x8d32d3
// 008d32b5  8bfe                 mov edi, esi
// 008d32b7  2bf8                 sub edi, eax
// 008d32b9  8da42400000000       lea esp, [esp]
// 008d32c0  8bc5                 mov eax, ebp
// 008d32c2  99                   cdq 
// 008d32c3  f7ff                 idiv edi
// 008d32c5  8b148b               mov edx, dword ptr [ebx + ecx*4]
// 008d32c8  41                   inc ecx
// 008d32c9  4f                   dec edi
// 008d32ca  2be8                 sub ebp, eax
// 008d32cc  3bce                 cmp ecx, esi
// 008d32ce  894220               mov dword ptr [edx + 0x20], eax
// 008d32d1  7ced                 jl 0x8d32c0
// 008d32d3  53                   push ebx
// 008d32d4  e82d08f2ff           call 0x7f3b06
// 008d32d9  83c404               add esp, 4
// 008d32dc  5b                   pop ebx
// 008d32dd  5d                   pop ebp
// 008d32de  5f                   pop edi
// 008d32df  5e                   pop esi
// 008d32e0  c20800               ret 8
// copied from an identical function in another client (function ?SizeToFit@CXTPTabPaintManager@@IAEXPAVCXTPTabManager@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/TabManager/XTPTabPaintManager.cpp