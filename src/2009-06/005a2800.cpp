// from server: 100% by auto
// roc 2009-06 005a2800  unit: seg_005a0000  size: 387 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005a2800
//
// 005a2800  83ec08               sub esp, 8
// 005a2803  807c241000           cmp byte ptr [esp + 0x10], 0
// 005a2808  56                   push esi
// 005a2809  8b742410             mov esi, dword ptr [esp + 0x10]
// 005a280d  57                   push edi
// 005a280e  8bbe5c010000         mov edi, dword ptr [esi + 0x15c]
// 005a2814  7410                 je 0x5a2826
// 005a2816  c7470420245a00       mov dword ptr [edi + 4], 0x5a2420
// 005a281d  c7470820275a00       mov dword ptr [edi + 8], 0x5a2720
// 005a2824  eb0e                 jmp 0x5a2834
// 005a2826  c7470410215a00       mov dword ptr [edi + 4], 0x5a2110
// 005a282d  c7470870225a00       mov dword ptr [edi + 8], 0x5a2270
// 005a2834  83bee400000000       cmp dword ptr [esi + 0xe4], 0
// 005a283b  c744240800000000     mov dword ptr [esp + 8], 0
// 005a2843  0f8e20010000         jle 0x5a2969
// 005a2849  8d4714               lea eax, [edi + 0x14]
// 005a284c  8d8ee8000000         lea ecx, [esi + 0xe8]
// 005a2852  53                   push ebx
// 005a2853  89442410             mov dword ptr [esp + 0x10], eax
// 005a2857  894c2418             mov dword ptr [esp + 0x18], ecx
// 005a285b  55                   push ebp
// 005a285c  8d642400             lea esp, [esp]
// 005a2860  807c242000           cmp byte ptr [esp + 0x20], 0
// 005a2865  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 005a2869  8b02                 mov eax, dword ptr [edx]
// 005a286b  8b6814               mov ebp, dword ptr [eax + 0x14]
// 005a286e  8b5818               mov ebx, dword ptr [eax + 0x18]
// 005a2871  0f84a6000000         je 0x5a291d
// 005a2877  85ed                 test ebp, ebp
// 005a2879  7c05                 jl 0x5a2880
// 005a287b  83fd04               cmp ebp, 4
// 005a287e  7c18                 jl 0x5a2898
// 005a2880  8b06                 mov eax, dword ptr [esi]
// 005a2882  c7401432000000       mov dword ptr [eax + 0x14], 0x32
// 005a2889  8b0e                 mov ecx, dword ptr [esi]
// 005a288b  896918               mov dword ptr [ecx + 0x18], ebp
// 005a288e  8b16                 mov edx, dword ptr [esi]
// 005a2890  8b02                 mov eax, dword ptr [edx]
// 005a2892  56                   push esi
// 005a2893  ffd0                 call eax
// 005a2895  83c404               add esp, 4
// 005a2898  85db                 test ebx, ebx
// 005a289a  7c05                 jl 0x5a28a1
// 005a289c  83fb04               cmp ebx, 4
// 005a289f  7c18                 jl 0x5a28b9
// 005a28a1  8b0e                 mov ecx, dword ptr [esi]
// 005a28a3  c7411432000000       mov dword ptr [ecx + 0x14], 0x32
// 005a28aa  8b16                 mov edx, dword ptr [esi]
// 005a28ac  895a18               mov dword ptr [edx + 0x18], ebx
// 005a28af  8b06                 mov eax, dword ptr [esi]
// 005a28b1  8b08                 mov ecx, dword ptr [eax]
// 005a28b3  56                   push esi
// 005a28b4  ffd1                 call ecx
// 005a28b6  83c404               add esp, 4
// 005a28b9  837caf4c00           cmp dword ptr [edi + ebp*4 + 0x4c], 0
// 005a28be  7516                 jne 0x5a28d6
// 005a28c0  8b5604               mov edx, dword ptr [esi + 4]
// 005a28c3  8b02                 mov eax, dword ptr [edx]
// 005a28c5  6804040000           push 0x404
// 005a28ca  6a01                 push 1
// 005a28cc  56                   push esi
// 005a28cd  ffd0                 call eax
// 005a28cf  83c40c               add esp, 0xc
// 005a28d2  8944af4c             mov dword ptr [edi + ebp*4 + 0x4c], eax
// 005a28d6  8b4caf4c             mov ecx, dword ptr [edi + ebp*4 + 0x4c]
// 005a28da  6804040000           push 0x404
// 005a28df  6a00                 push 0
// 005a28e1  51                   push ecx
// 005a28e2  e88d731700           call 0x719c74
// 005a28e7  83c40c               add esp, 0xc
// 005a28ea  837c9f5c00           cmp dword ptr [edi + ebx*4 + 0x5c], 0
// 005a28ef  7516                 jne 0x5a2907
// 005a28f1  8b5604               mov edx, dword ptr [esi + 4]
// 005a28f4  8b02                 mov eax, dword ptr [edx]
// 005a28f6  6804040000           push 0x404
// 005a28fb  6a01                 push 1
// 005a28fd  56                   push esi
// 005a28fe  ffd0                 call eax
// 005a2900  83c40c               add esp, 0xc
// 005a2903  89449f5c             mov dword ptr [edi + ebx*4 + 0x5c], eax
// 005a2907  8b4c9f5c             mov ecx, dword ptr [edi + ebx*4 + 0x5c]
// 005a290b  6804040000           push 0x404
// 005a2910  6a00                 push 0
// 005a2912  51                   push ecx
// 005a2913  e85c731700           call 0x719c74
// 005a2918  83c40c               add esp, 0xc
// 005a291b  eb1f                 jmp 0x5a293c
// 005a291d  8d54af2c             lea edx, [edi + ebp*4 + 0x2c]
// 005a2921  52                   push edx
// 005a2922  55                   push ebp
// 005a2923  6a01                 push 1
// 005a2925  56                   push esi
// 005a2926  e8c5f2ffff           call 0x5a1bf0
// 005a292b  8d449f3c             lea eax, [edi + ebx*4 + 0x3c]
// 005a292f  50                   push eax
// 005a2930  53                   push ebx
// 005a2931  6a00                 push 0
// 005a2933  56                   push esi
// 005a2934  e8b7f2ffff           call 0x5a1bf0
// 005a2939  83c420               add esp, 0x20
// 005a293c  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005a2940  8b442410             mov eax, dword ptr [esp + 0x10]
// 005a2944  8344241c04           add dword ptr [esp + 0x1c], 4
// 005a2949  c70100000000         mov dword ptr [ecx], 0
// 005a294f  40                   inc eax
// 005a2950  83c104               add ecx, 4
// 005a2953  3b86e4000000         cmp eax, dword ptr [esi + 0xe4]
// 005a2959  89442410             mov dword ptr [esp + 0x10], eax
// 005a295d  894c2414             mov dword ptr [esp + 0x14], ecx
// 005a2961  0f8cf9feffff         jl 0x5a2860
// 005a2967  5d                   pop ebp
// 005a2968  5b                   pop ebx
// 005a2969  33c0                 xor eax, eax
// 005a296b  89470c               mov dword ptr [edi + 0xc], eax
// 005a296e  894710               mov dword ptr [edi + 0x10], eax
// 005a2971  8b8ebc000000         mov ecx, dword ptr [esi + 0xbc]
// 005a2977  894f24               mov dword ptr [edi + 0x24], ecx
// 005a297a  894728               mov dword ptr [edi + 0x28], eax
// 005a297d  5f                   pop edi
// 005a297e  5e                   pop esi
// 005a297f  83c408               add esp, 8
// 005a2982  c3                   ret 
// library jpeg-6b/jchuff.c (function _start_pass_huff)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jchuff.c
