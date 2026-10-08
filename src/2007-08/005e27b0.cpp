// roc 2007-08 005e27b0  unit: seg_005e0000  size: 508 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005e27b0
//
// 005e27b0  64a100000000         mov eax, dword ptr fs:[0]
// 005e27b6  6aff                 push -1
// 005e27b8  68b2417500           push 0x7541b2
// 005e27bd  50                   push eax
// 005e27be  64892500000000       mov dword ptr fs:[0], esp
// 005e27c5  83ec44               sub esp, 0x44
// 005e27c8  57                   push edi
// 005e27c9  8bf9                 mov edi, ecx
// 005e27cb  817f08feffff3f       cmp dword ptr [edi + 8], 0x3ffffffe
// 005e27d2  7259                 jb 0x5e282d
// 005e27d4  68904f7800           push 0x784f90
// 005e27d9  8d4c2408             lea ecx, [esp + 8]
// 005e27dd  ff1598e67700         call dword ptr [0x77e698]
// 005e27e3  8d4c2420             lea ecx, [esp + 0x20]
// 005e27e7  c744245000000000     mov dword ptr [esp + 0x50], 0
// 005e27ef  ff15f8e67700         call dword ptr [0x77e6f8]
// 005e27f5  8d442404             lea eax, [esp + 4]
// 005e27f9  50                   push eax
// 005e27fa  8d4c2430             lea ecx, [esp + 0x30]
// 005e27fe  c644245401           mov byte ptr [esp + 0x54], 1
// 005e2803  c7442424604e7800     mov dword ptr [esp + 0x24], 0x784e60
// 005e280b  ff159ce67700         call dword ptr [0x77e69c]
// 005e2811  6878f78300           push 0x83f778
// 005e2816  8d4c2424             lea ecx, [esp + 0x24]
// 005e281a  51                   push ecx
// 005e281b  c644245800           mov byte ptr [esp + 0x58], 0
// 005e2820  c74424286c4e7800     mov dword ptr [esp + 0x28], 0x784e6c
// 005e2828  e871e30400           call 0x630b9e
// 005e282d  8b542464             mov edx, dword ptr [esp + 0x64]
// 005e2831  8b4704               mov eax, dword ptr [edi + 4]
// 005e2834  53                   push ebx
// 005e2835  55                   push ebp
// 005e2836  56                   push esi
// 005e2837  8b74246c             mov esi, dword ptr [esp + 0x6c]
// 005e283b  6a00                 push 0
// 005e283d  52                   push edx
// 005e283e  50                   push eax
// 005e283f  56                   push esi
// 005e2840  50                   push eax
// 005e2841  e89a250200           call 0x604de0
// 005e2846  8be8                 mov ebp, eax
// 005e2848  8b4704               mov eax, dword ptr [edi + 4]
// 005e284b  bb01000000           mov ebx, 1
// 005e2850  015f08               add dword ptr [edi + 8], ebx
// 005e2853  3bf0                 cmp esi, eax
// 005e2855  7510                 jne 0x5e2867
// 005e2857  896804               mov dword ptr [eax + 4], ebp
// 005e285a  8b4704               mov eax, dword ptr [edi + 4]
// 005e285d  8928                 mov dword ptr [eax], ebp
// 005e285f  8b4f04               mov ecx, dword ptr [edi + 4]
// 005e2862  896908               mov dword ptr [ecx + 8], ebp
// 005e2865  eb22                 jmp 0x5e2889
// 005e2867  807c246800           cmp byte ptr [esp + 0x68], 0
// 005e286c  740d                 je 0x5e287b
// 005e286e  892e                 mov dword ptr [esi], ebp
// 005e2870  8b4704               mov eax, dword ptr [edi + 4]
// 005e2873  3b30                 cmp esi, dword ptr [eax]
// 005e2875  7512                 jne 0x5e2889
// 005e2877  8928                 mov dword ptr [eax], ebp
// 005e2879  eb0e                 jmp 0x5e2889
// 005e287b  896e08               mov dword ptr [esi + 8], ebp
// 005e287e  8b4704               mov eax, dword ptr [edi + 4]
// 005e2881  3b7008               cmp esi, dword ptr [eax + 8]
// 005e2884  7503                 jne 0x5e2889
// 005e2886  896808               mov dword ptr [eax + 8], ebp
// 005e2889  8b5504               mov edx, dword ptr [ebp + 4]
// 005e288c  807a1000             cmp byte ptr [edx + 0x10], 0
// 005e2890  8d4504               lea eax, [ebp + 4]
// 005e2893  8bf5                 mov esi, ebp
// 005e2895  0f85ea000000         jne 0x5e2985
// 005e289b  eb03                 jmp 0x5e28a0
// 005e289d  8d4900               lea ecx, [ecx]
// 005e28a0  8b08                 mov ecx, dword ptr [eax]
// 005e28a2  8b5104               mov edx, dword ptr [ecx + 4]
// 005e28a5  3b0a                 cmp ecx, dword ptr [edx]
// 005e28a7  7551                 jne 0x5e28fa
// 005e28a9  8b5208               mov edx, dword ptr [edx + 8]
// 005e28ac  807a1000             cmp byte ptr [edx + 0x10], 0
// 005e28b0  7519                 jne 0x5e28cb
// 005e28b2  885910               mov byte ptr [ecx + 0x10], bl
// 005e28b5  885a10               mov byte ptr [edx + 0x10], bl
// 005e28b8  8b10                 mov edx, dword ptr [eax]
// 005e28ba  8b4a04               mov ecx, dword ptr [edx + 4]
// 005e28bd  c6411000             mov byte ptr [ecx + 0x10], 0
// 005e28c1  8b10                 mov edx, dword ptr [eax]
// 005e28c3  8b7204               mov esi, dword ptr [edx + 4]
// 005e28c6  e9aa000000           jmp 0x5e2975
// 005e28cb  3b7108               cmp esi, dword ptr [ecx + 8]
// 005e28ce  750a                 jne 0x5e28da
// 005e28d0  8bf1                 mov esi, ecx
// 005e28d2  56                   push esi
// 005e28d3  8bcf                 mov ecx, edi
// 005e28d5  e8069dfcff           call 0x5ac5e0
// 005e28da  8b4604               mov eax, dword ptr [esi + 4]
// 005e28dd  885810               mov byte ptr [eax + 0x10], bl
// 005e28e0  8b4e04               mov ecx, dword ptr [esi + 4]
// 005e28e3  8b5104               mov edx, dword ptr [ecx + 4]
// 005e28e6  c6421000             mov byte ptr [edx + 0x10], 0
// 005e28ea  8b4604               mov eax, dword ptr [esi + 4]
// 005e28ed  8b4804               mov ecx, dword ptr [eax + 4]
// 005e28f0  51                   push ecx
// 005e28f1  8bcf                 mov ecx, edi
// 005e28f3  e858180000           call 0x5e4150
// 005e28f8  eb7b                 jmp 0x5e2975
// 005e28fa  8b12                 mov edx, dword ptr [edx]
// 005e28fc  807a1000             cmp byte ptr [edx + 0x10], 0
// 005e2900  7516                 jne 0x5e2918
// 005e2902  885910               mov byte ptr [ecx + 0x10], bl
// 005e2905  885a10               mov byte ptr [edx + 0x10], bl
// 005e2908  8b10                 mov edx, dword ptr [eax]
// 005e290a  8b4a04               mov ecx, dword ptr [edx + 4]
// 005e290d  c6411000             mov byte ptr [ecx + 0x10], 0
// 005e2911  8b10                 mov edx, dword ptr [eax]
// 005e2913  8b7204               mov esi, dword ptr [edx + 4]
// 005e2916  eb5d                 jmp 0x5e2975
// 005e2918  3b31                 cmp esi, dword ptr [ecx]
// 005e291a  750a                 jne 0x5e2926
// 005e291c  8bf1                 mov esi, ecx
// 005e291e  56                   push esi
// 005e291f  8bcf                 mov ecx, edi
// 005e2921  e82a180000           call 0x5e4150
// 005e2926  8b4604               mov eax, dword ptr [esi + 4]
// 005e2929  885810               mov byte ptr [eax + 0x10], bl
// 005e292c  8b4e04               mov ecx, dword ptr [esi + 4]
// 005e292f  8b5104               mov edx, dword ptr [ecx + 4]
// 005e2932  c6421000             mov byte ptr [edx + 0x10], 0
// 005e2936  8b4604               mov eax, dword ptr [esi + 4]
// 005e2939  8b4004               mov eax, dword ptr [eax + 4]
// 005e293c  8b4808               mov ecx, dword ptr [eax + 8]
// 005e293f  8b11                 mov edx, dword ptr [ecx]
// 005e2941  895008               mov dword ptr [eax + 8], edx
// 005e2944  8b11                 mov edx, dword ptr [ecx]
// 005e2946  807a1100             cmp byte ptr [edx + 0x11], 0
// 005e294a  7503                 jne 0x5e294f
// 005e294c  894204               mov dword ptr [edx + 4], eax
// 005e294f  8b5004               mov edx, dword ptr [eax + 4]
// 005e2952  895104               mov dword ptr [ecx + 4], edx
// 005e2955  8b5704               mov edx, dword ptr [edi + 4]
// 005e2958  3b4204               cmp eax, dword ptr [edx + 4]
// 005e295b  7505                 jne 0x5e2962
// 005e295d  894a04               mov dword ptr [edx + 4], ecx
// 005e2960  eb0e                 jmp 0x5e2970
// 005e2962  8b5004               mov edx, dword ptr [eax + 4]
// 005e2965  3b02                 cmp eax, dword ptr [edx]
// 005e2967  7504                 jne 0x5e296d
// 005e2969  890a                 mov dword ptr [edx], ecx
// 005e296b  eb03                 jmp 0x5e2970
// 005e296d  894a08               mov dword ptr [edx + 8], ecx
// 005e2970  8901                 mov dword ptr [ecx], eax
// 005e2972  894804               mov dword ptr [eax + 4], ecx
// 005e2975  8b4e04               mov ecx, dword ptr [esi + 4]
// 005e2978  80791000             cmp byte ptr [ecx + 0x10], 0
// 005e297c  8d4604               lea eax, [esi + 4]
// 005e297f  0f841bffffff         je 0x5e28a0
// 005e2985  8b5704               mov edx, dword ptr [edi + 4]
// 005e2988  8b4204               mov eax, dword ptr [edx + 4]
// 005e298b  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 005e298f  885810               mov byte ptr [eax + 0x10], bl
// 005e2992  8b442464             mov eax, dword ptr [esp + 0x64]
// 005e2996  5e                   pop esi
// 005e2997  896804               mov dword ptr [eax + 4], ebp
// 005e299a  5d                   pop ebp
// 005e299b  8938                 mov dword ptr [eax], edi
// 005e299d  5b                   pop ebx
// 005e299e  5f                   pop edi
// 005e299f  64890d00000000       mov dword ptr fs:[0], ecx
// 005e29a6  83c450               add esp, 0x50
// 005e29a9  c21000               ret 0x10
// library rbxgs/tool\ToolsArrow.cpp (function ?_Insert@?$_Tree@V?$_Tset_traits@PAVInstance@RBX@@U?$less@PAVInstance@RBX@@@std@@V?$allocator@PAVInstance@RBX@@@4@$0A@@std@@@std@@IAE?AViterator@12@_NPAU_Node@?$_Tree_nod@V?$_Tset_traits@PAVInstance@RBX@@U?$less@PAVInstance@RBX@@@std@@V?$allocator@PAVInstance@RBX@@@4@$0A@@std@@@2@ABQAVInstance@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs tool/ToolsArrow.cpp
