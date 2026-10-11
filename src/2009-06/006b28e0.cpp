// roc 2009-06 006b28e0  unit: RBX::BlockBlockContact  size: 189 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006b28e0
//
// 006b28e0  83ec08               sub esp, 8
// 006b28e3  53                   push ebx
// 006b28e4  55                   push ebp
// 006b28e5  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 006b28e9  56                   push esi
// 006b28ea  8bf1                 mov esi, ecx
// 006b28ec  57                   push edi
// 006b28ed  8b3dace98900         mov edi, dword ptr [0x89e9ac]
// 006b28f3  c7450000000000       mov dword ptr [ebp], 0
// 006b28fa  85f6                 test esi, esi
// 006b28fc  740e                 je 0x6b290c
// 006b28fe  8b442424             mov eax, dword ptr [esp + 0x24]
// 006b2902  39460c               cmp dword ptr [esi + 0xc], eax
// 006b2905  7705                 ja 0x6b290c
// 006b2907  3b4610               cmp eax, dword ptr [esi + 0x10]
// 006b290a  7606                 jbe 0x6b2912
// 006b290c  ffd7                 call edi
// 006b290e  8b442424             mov eax, dword ptr [esp + 0x24]
// 006b2912  8b5c242c             mov ebx, dword ptr [esp + 0x2c]
// 006b2916  8b0e                 mov ecx, dword ptr [esi]
// 006b2918  894d00               mov dword ptr [ebp], ecx
// 006b291b  894504               mov dword ptr [ebp + 4], eax
// 006b291e  395e0c               cmp dword ptr [esi + 0xc], ebx
// 006b2921  7705                 ja 0x6b2928
// 006b2923  3b5e10               cmp ebx, dword ptr [esi + 0x10]
// 006b2926  7606                 jbe 0x6b292e
// 006b2928  ffd7                 call edi
// 006b292a  8b5c242c             mov ebx, dword ptr [esp + 0x2c]
// 006b292e  8b4500               mov eax, dword ptr [ebp]
// 006b2931  8b0e                 mov ecx, dword ptr [esi]
// 006b2933  85c0                 test eax, eax
// 006b2935  7404                 je 0x6b293b
// 006b2937  3bc1                 cmp eax, ecx
// 006b2939  7402                 je 0x6b293d
// 006b293b  ffd7                 call edi
// 006b293d  8b4504               mov eax, dword ptr [ebp + 4]
// 006b2940  89442414             mov dword ptr [esp + 0x14], eax
// 006b2944  3bc3                 cmp eax, ebx
// 006b2946  7449                 je 0x6b2991
// 006b2948  8b7e10               mov edi, dword ptr [esi + 0x10]
// 006b294b  c644241c00           mov byte ptr [esp + 0x1c], 0
// 006b2950  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 006b2954  52                   push edx
// 006b2955  8b542420             mov edx, dword ptr [esp + 0x20]
// 006b2959  c644241400           mov byte ptr [esp + 0x14], 0
// 006b295e  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006b2962  51                   push ecx
// 006b2963  52                   push edx
// 006b2964  50                   push eax
// 006b2965  57                   push edi
// 006b2966  53                   push ebx
// 006b2967  e824f7ffff           call 0x6b2090
// 006b296c  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 006b2970  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 006b2974  2bfb                 sub edi, ebx
// 006b2976  51                   push ecx
// 006b2977  c1ff03               sar edi, 3
// 006b297a  8d3cf8               lea edi, [eax + edi*8]
// 006b297d  8b4610               mov eax, dword ptr [esi + 0x10]
// 006b2980  8d5608               lea edx, [esi + 8]
// 006b2983  52                   push edx
// 006b2984  50                   push eax
// 006b2985  57                   push edi
// 006b2986  e8e5e1f6ff           call 0x620b70
// 006b298b  83c428               add esp, 0x28
// 006b298e  897e10               mov dword ptr [esi + 0x10], edi
// 006b2991  5f                   pop edi
// 006b2992  5e                   pop esi
// 006b2993  8bc5                 mov eax, ebp
// 006b2995  5d                   pop ebp
// 006b2996  5b                   pop ebx
// 006b2997  83c408               add esp, 8
// 006b299a  c21400               ret 0x14
// library openrbx-client/App\v8tree\Service.cpp (function ?erase@?$vector@V?$shared_ptr@VInstance@RBX@@@boost@@V?$allocator@V?$shared_ptr@VInstance@RBX@@@boost@@@std@@@std@@QAE?AV?$_Vector_iterator@V?$shared_ptr@VInstance@RBX@@@boost@@V?$allocator@V?$shared_ptr@VInstance@RBX@@@boost@@@std@@@2@V?$_Vector_const_iterator@V?$shared_ptr@VInstance@RBX@@@boost@@V?$allocator@V?$shared_ptr@VInstance@RBX@@@boost@@@std@@@2@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/v8tree/Service.cpp
