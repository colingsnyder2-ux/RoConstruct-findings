// roc 2011-06 008b26d0  unit: VCXTPReportRow::?$CXTPHeapObjectT  size: 816 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008b26d0
//
// 008b26d0  6aff                 push -1
// 008b26d2  68a2b2a000           push 0xa0b2a2
// 008b26d7  64a100000000         mov eax, dword ptr fs:[0]
// 008b26dd  50                   push eax
// 008b26de  83ec4c               sub esp, 0x4c
// 008b26e1  53                   push ebx
// 008b26e2  55                   push ebp
// 008b26e3  56                   push esi
// 008b26e4  57                   push edi
// 008b26e5  a12058c900           mov eax, dword ptr [0xc95820]
// 008b26ea  33c4                 xor eax, esp
// 008b26ec  50                   push eax
// 008b26ed  8d442460             lea eax, [esp + 0x60]
// 008b26f1  64a300000000         mov dword ptr fs:[0], eax
// 008b26f7  8bf1                 mov esi, ecx
// 008b26f9  33ed                 xor ebp, ebp
// 008b26fb  396e54               cmp dword ptr [esi + 0x54], ebp
// 008b26fe  7516                 jne 0x8b2716
// 008b2700  33c0                 xor eax, eax
// 008b2702  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 008b2706  64890d00000000       mov dword ptr fs:[0], ecx
// 008b270d  59                   pop ecx
// 008b270e  5f                   pop edi
// 008b270f  5e                   pop esi
// 008b2710  5d                   pop ebp
// 008b2711  5b                   pop ebx
// 008b2712  83c458               add esp, 0x58
// 008b2715  c3                   ret 
// 008b2716  396e20               cmp dword ptr [esi + 0x20], ebp
// 008b2719  74e5                 je 0x8b2700
// 008b271b  56                   push esi
// 008b271c  8d4c2450             lea ecx, [esp + 0x50]
// 008b2720  e80388f5ff           call 0x80af28
// 008b2725  8b4654               mov eax, dword ptr [esi + 0x54]
// 008b2728  8b8000010000         mov eax, dword ptr [eax + 0x100]
// 008b272e  83c030               add eax, 0x30
// 008b2731  50                   push eax
// 008b2732  8d4c2450             lea ecx, [esp + 0x50]
// 008b2736  51                   push ecx
// 008b2737  8d4c2444             lea ecx, [esp + 0x44]
// 008b273b  896c2470             mov dword ptr [esp + 0x70], ebp
// 008b273f  e8dca9faff           call 0x85d120
// 008b2744  8b442454             mov eax, dword ptr [esp + 0x54]
// 008b2748  8d542434             lea edx, [esp + 0x34]
// 008b274c  52                   push edx
// 008b274d  6a01                 push 1
// 008b274f  686056a600           push 0xa65660
// 008b2754  50                   push eax
// 008b2755  c644247801           mov byte ptr [esp + 0x78], 1
// 008b275a  ff153801a400         call dword ptr [0xa40138]
// 008b2760  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 008b2763  8b7c2438             mov edi, dword ptr [esp + 0x38]
// 008b2767  8b1dc019a400         mov ebx, dword ptr [0xa419c0]
// 008b276d  55                   push ebp
// 008b276e  55                   push ebp
// 008b276f  68a1010000           push 0x1a1
// 008b2774  51                   push ecx
// 008b2775  83c705               add edi, 5
// 008b2778  ffd3                 call ebx
// 008b277a  3bc7                 cmp eax, edi
// 008b277c  7410                 je 0x8b278e
// 008b277e  8b4620               mov eax, dword ptr [esi + 0x20]
// 008b2781  0fb7d7               movzx edx, di
// 008b2784  52                   push edx
// 008b2785  55                   push ebp
// 008b2786  68a0010000           push 0x1a0
// 008b278b  50                   push eax
// 008b278c  ffd3                 call ebx
// 008b278e  8b4e54               mov ecx, dword ptr [esi + 0x54]
// 008b2791  8bb9ec000000         mov edi, dword ptr [ecx + 0xec]
// 008b2797  8b4620               mov eax, dword ptr [esi + 0x20]
// 008b279a  8b5730               mov edx, dword ptr [edi + 0x30]
// 008b279d  55                   push ebp
// 008b279e  55                   push ebp
// 008b279f  688b010000           push 0x18b
// 008b27a4  50                   push eax
// 008b27a5  897c242c             mov dword ptr [esp + 0x2c], edi
// 008b27a9  89542438             mov dword ptr [esp + 0x38], edx
// 008b27ad  896c2434             mov dword ptr [esp + 0x34], ebp
// 008b27b1  ffd3                 call ebx
// 008b27b3  8be8                 mov ebp, eax
// 008b27b5  83ed01               sub ebp, 1
// 008b27b8  7857                 js 0x8b2811
// 008b27ba  8d9b00000000         lea ebx, [ebx]
// 008b27c0  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 008b27c3  6a00                 push 0
// 008b27c5  55                   push ebp
// 008b27c6  6899010000           push 0x199
// 008b27cb  51                   push ecx
// 008b27cc  ffd3                 call ebx
// 008b27ce  50                   push eax
// 008b27cf  8bcf                 mov ecx, edi
// 008b27d1  e80ab1fcff           call 0x87d8e0
// 008b27d6  8bf8                 mov edi, eax
// 008b27d8  85ff                 test edi, edi
// 008b27da  7416                 je 0x8b27f2
// 008b27dc  8bcf                 mov ecx, edi
// 008b27de  e88dd4f7ff           call 0x82fc70
// 008b27e3  85c0                 test eax, eax
// 008b27e5  750b                 jne 0x8b27f2
// 008b27e7  8bcf                 mov ecx, edi
// 008b27e9  e8226be4ff           call 0x6f9310
// 008b27ee  85c0                 test eax, eax
// 008b27f0  7516                 jne 0x8b2808
// 008b27f2  8b5620               mov edx, dword ptr [esi + 0x20]
// 008b27f5  6a00                 push 0
// 008b27f7  55                   push ebp
// 008b27f8  6882010000           push 0x182
// 008b27fd  52                   push edx
// 008b27fe  ffd3                 call ebx
// 008b2800  c744242401000000     mov dword ptr [esp + 0x24], 1
// 008b2808  83ed01               sub ebp, 1
// 008b280b  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 008b280f  79af                 jns 0x8b27c0
// 008b2811  33c0                 xor eax, eax
// 008b2813  39442428             cmp dword ptr [esp + 0x28], eax
// 008b2817  89442418             mov dword ptr [esp + 0x18], eax
// 008b281b  0f8e74010000         jle 0x8b2995
// 008b2821  85c0                 test eax, eax
// 008b2823  0f8c5d010000         jl 0x8b2986
// 008b2829  3b4730               cmp eax, dword ptr [edi + 0x30]
// 008b282c  0f8d54010000         jge 0x8b2986
// 008b2832  8b4f2c               mov ecx, dword ptr [edi + 0x2c]
// 008b2835  8b2c81               mov ebp, dword ptr [ecx + eax*4]
// 008b2838  8d0c81               lea ecx, [ecx + eax*4]
// 008b283b  85ed                 test ebp, ebp
// 008b283d  0f8443010000         je 0x8b2986
// 008b2843  8bcd                 mov ecx, ebp
// 008b2845  e826d4f7ff           call 0x82fc70
// 008b284a  85c0                 test eax, eax
// 008b284c  0f8530010000         jne 0x8b2982
// 008b2852  8bcd                 mov ecx, ebp
// 008b2854  e8b76ae4ff           call 0x6f9310
// 008b2859  85c0                 test eax, eax
// 008b285b  0f8421010000         je 0x8b2982
// 008b2861  8bcd                 mov ecx, ebp
// 008b2863  e86819ffff           call 0x8a41d0
// 008b2868  50                   push eax
// 008b2869  8bce                 mov ecx, esi
// 008b286b  e810feffff           call 0x8b2680
// 008b2870  85c0                 test eax, eax
// 008b2872  0f8d0a010000         jge 0x8b2982
// 008b2878  83be9000000000       cmp dword ptr [esi + 0x90], 0
// 008b287f  0f84ab000000         je 0x8b2930
// 008b2885  8b5620               mov edx, dword ptr [esi + 0x20]
// 008b2888  33ff                 xor edi, edi
// 008b288a  57                   push edi
// 008b288b  57                   push edi
// 008b288c  688b010000           push 0x18b
// 008b2891  52                   push edx
// 008b2892  ffd3                 call ebx
// 008b2894  85c0                 test eax, eax
// 008b2896  7e71                 jle 0x8b2909
// 008b2898  57                   push edi
// 008b2899  8d442424             lea eax, [esp + 0x24]
// 008b289d  50                   push eax
// 008b289e  8bce                 mov ecx, esi
// 008b28a0  e8bbfcffff           call 0x8b2560
// 008b28a5  8d4c242c             lea ecx, [esp + 0x2c]
// 008b28a9  51                   push ecx
// 008b28aa  8bcd                 mov ecx, ebp
// 008b28ac  c644246c02           mov byte ptr [esp + 0x6c], 2
// 008b28b1  e83a93f8ff           call 0x83bbf0
// 008b28b6  8bc8                 mov ecx, eax
// 008b28b8  c644246803           mov byte ptr [esp + 0x68], 3
// 008b28bd  ff15c82da400         call dword ptr [0xa42dc8]
// 008b28c3  50                   push eax
// 008b28c4  8d4c2424             lea ecx, [esp + 0x24]
// 008b28c8  ff15cc2da400         call dword ptr [0xa42dcc]
// 008b28ce  85c0                 test eax, eax
// 008b28d0  8d4c242c             lea ecx, [esp + 0x2c]
// 008b28d4  0f9f442417           setg byte ptr [esp + 0x17]
// 008b28d9  ff15082ea400         call dword ptr [0xa42e08]
// 008b28df  8d4c2420             lea ecx, [esp + 0x20]
// 008b28e3  c644246801           mov byte ptr [esp + 0x68], 1
// 008b28e8  ff15082ea400         call dword ptr [0xa42e08]
// 008b28ee  807c241700           cmp byte ptr [esp + 0x17], 0
// 008b28f3  7514                 jne 0x8b2909
// 008b28f5  8b5620               mov edx, dword ptr [esi + 0x20]
// 008b28f8  6a00                 push 0
// 008b28fa  6a00                 push 0
// 008b28fc  688b010000           push 0x18b
// 008b2901  52                   push edx
// 008b2902  47                   inc edi
// 008b2903  ffd3                 call ebx
// 008b2905  3bf8                 cmp edi, eax
// 008b2907  7c8f                 jl 0x8b2898
// 008b2909  8d442430             lea eax, [esp + 0x30]
// 008b290d  50                   push eax
// 008b290e  8bcd                 mov ecx, ebp
// 008b2910  e8db92f8ff           call 0x83bbf0
// 008b2915  8bc8                 mov ecx, eax
// 008b2917  ff15c82da400         call dword ptr [0xa42dc8]
// 008b291d  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 008b2920  50                   push eax
// 008b2921  57                   push edi
// 008b2922  6881010000           push 0x181
// 008b2927  51                   push ecx
// 008b2928  ffd3                 call ebx
// 008b292a  8d4c2430             lea ecx, [esp + 0x30]
// 008b292e  eb26                 jmp 0x8b2956
// 008b2930  8d542434             lea edx, [esp + 0x34]
// 008b2934  52                   push edx
// 008b2935  8bcd                 mov ecx, ebp
// 008b2937  e8b492f8ff           call 0x83bbf0
// 008b293c  8bc8                 mov ecx, eax
// 008b293e  ff15c82da400         call dword ptr [0xa42dc8]
// 008b2944  50                   push eax
// 008b2945  8b4620               mov eax, dword ptr [esi + 0x20]
// 008b2948  6a00                 push 0
// 008b294a  6880010000           push 0x180
// 008b294f  50                   push eax
// 008b2950  ffd3                 call ebx
// 008b2952  8d4c2434             lea ecx, [esp + 0x34]
// 008b2956  8bf8                 mov edi, eax
// 008b2958  ff15082ea400         call dword ptr [0xa42e08]
// 008b295e  85ff                 test edi, edi
// 008b2960  7c1c                 jl 0x8b297e
// 008b2962  8bcd                 mov ecx, ebp
// 008b2964  e86718ffff           call 0x8a41d0
// 008b2969  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 008b296c  50                   push eax
// 008b296d  57                   push edi
// 008b296e  689a010000           push 0x19a
// 008b2973  51                   push ecx
// 008b2974  ffd3                 call ebx
// 008b2976  c744242401000000     mov dword ptr [esp + 0x24], 1
// 008b297e  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 008b2982  8b442418             mov eax, dword ptr [esp + 0x18]
// 008b2986  40                   inc eax
// 008b2987  3b442428             cmp eax, dword ptr [esp + 0x28]
// 008b298b  89442418             mov dword ptr [esp + 0x18], eax
// 008b298f  0f8c8cfeffff         jl 0x8b2821
// 008b2995  8b5620               mov edx, dword ptr [esi + 0x20]
// 008b2998  6a00                 push 0
// 008b299a  6a00                 push 0
// 008b299c  688b010000           push 0x18b
// 008b29a1  52                   push edx
// 008b29a2  ffd3                 call ebx
// 008b29a4  33c9                 xor ecx, ecx
// 008b29a6  85c0                 test eax, eax
// 008b29a8  0f9fc1               setg cl
// 008b29ab  51                   push ecx
// 008b29ac  8bce                 mov ecx, esi
// 008b29ae  e8297df5ff           call 0x80a6dc
// 008b29b3  837c242400           cmp dword ptr [esp + 0x24], 0
// 008b29b8  740e                 je 0x8b29c8
// 008b29ba  8b5620               mov edx, dword ptr [esi + 0x20]
// 008b29bd  6a01                 push 1
// 008b29bf  6a00                 push 0
// 008b29c1  52                   push edx
// 008b29c2  ff15ec19a400         call dword ptr [0xa419ec]
// 008b29c8  8d4c243c             lea ecx, [esp + 0x3c]
// 008b29cc  c644246800           mov byte ptr [esp + 0x68], 0
// 008b29d1  e8caa7faff           call 0x85d1a0
// 008b29d6  8d4c244c             lea ecx, [esp + 0x4c]
// 008b29da  c7442468ffffffff     mov dword ptr [esp + 0x68], 0xffffffff
// 008b29e2  e83b85f5ff           call 0x80af22
// 008b29e7  b801000000           mov eax, 1
// 008b29ec  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 008b29f0  64890d00000000       mov dword ptr fs:[0], ecx
// 008b29f7  59                   pop ecx
// 008b29f8  5f                   pop edi
// 008b29f9  5e                   pop esi
// 008b29fa  5d                   pop ebp
// 008b29fb  5b                   pop ebx
// 008b29fc  83c458               add esp, 0x58
// 008b29ff  c3                   ret 
// copied from an identical function in another client (function ?UpdateList@CXTPReportSubListControl@@QAEHXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\ReportControl\XTPReportSubListControl.cpp