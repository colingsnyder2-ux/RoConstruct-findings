// roc 2010-06 005f2810  unit: TextXmlParser  size: 323 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005f2810
//
// 005f2810  6aff                 push -1
// 005f2812  6811239800           push 0x982311
// 005f2817  64a100000000         mov eax, dword ptr fs:[0]
// 005f281d  50                   push eax
// 005f281e  64892500000000       mov dword ptr fs:[0], esp
// 005f2825  83ec24               sub esp, 0x24
// 005f2828  55                   push ebp
// 005f2829  56                   push esi
// 005f282a  8bf1                 mov esi, ecx
// 005f282c  57                   push edi
// 005f282d  8d4c2414             lea ecx, [esp + 0x14]
// 005f2831  ff1504a49e00         call dword ptr [0x9ea404]
// 005f2837  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 005f283b  8d442414             lea eax, [esp + 0x14]
// 005f283f  50                   push eax
// 005f2840  c744243c00000000     mov dword ptr [esp + 0x3c], 0
// 005f2848  e823d4feff           call 0x5dfc70
// 005f284d  8d4c2414             lea ecx, [esp + 0x14]
// 005f2851  51                   push ecx
// 005f2852  8d542410             lea edx, [esp + 0x10]
// 005f2856  83c61c               add esi, 0x1c
// 005f2859  52                   push edx
// 005f285a  8bce                 mov ecx, esi
// 005f285c  e81fd50f00           call 0x6efd80
// 005f2861  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 005f2865  8b6e18               mov ebp, dword ptr [esi + 0x18]
// 005f2868  8b36                 mov esi, dword ptr [esi]
// 005f286a  85ff                 test edi, edi
// 005f286c  7404                 je 0x5f2872
// 005f286e  3bfe                 cmp edi, esi
// 005f2870  7406                 je 0x5f2878
// 005f2872  ff150ca99e00         call dword ptr [0x9ea90c]
// 005f2878  8b742410             mov esi, dword ptr [esp + 0x10]
// 005f287c  3bf5                 cmp esi, ebp
// 005f287e  7454                 je 0x5f28d4
// 005f2880  85ff                 test edi, edi
// 005f2882  754c                 jne 0x5f28d0
// 005f2884  ff150ca99e00         call dword ptr [0x9ea90c]
// 005f288a  3b7718               cmp esi, dword ptr [edi + 0x18]
// 005f288d  7506                 jne 0x5f2895
// 005f288f  ff150ca99e00         call dword ptr [0x9ea90c]
// 005f2895  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 005f2899  8b11                 mov edx, dword ptr [ecx]
// 005f289b  8b12                 mov edx, dword ptr [edx]
// 005f289d  8d4628               lea eax, [esi + 0x28]
// 005f28a0  50                   push eax
// 005f28a1  8b442448             mov eax, dword ptr [esp + 0x48]
// 005f28a5  50                   push eax
// 005f28a6  ffd2                 call edx
// 005f28a8  8d4c2414             lea ecx, [esp + 0x14]
// 005f28ac  c7442438ffffffff     mov dword ptr [esp + 0x38], 0xffffffff
// 005f28b4  ff1500a49e00         call dword ptr [0x9ea400]
// 005f28ba  5f                   pop edi
// 005f28bb  5e                   pop esi
// 005f28bc  b001                 mov al, 1
// 005f28be  5d                   pop ebp
// 005f28bf  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 005f28c3  64890d00000000       mov dword ptr fs:[0], ecx
// 005f28ca  83c430               add esp, 0x30
// 005f28cd  c20c00               ret 0xc
// 005f28d0  8b3f                 mov edi, dword ptr [edi]
// 005f28d2  ebb6                 jmp 0x5f288a
// 005f28d4  6a00                 push 0
// 005f28d6  8d4c2410             lea ecx, [esp + 0x10]
// 005f28da  e8e1f00300           call 0x6319c0
// 005f28df  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 005f28e3  8b11                 mov edx, dword ptr [ecx]
// 005f28e5  8b12                 mov edx, dword ptr [edx]
// 005f28e7  50                   push eax
// 005f28e8  8b442448             mov eax, dword ptr [esp + 0x48]
// 005f28ec  50                   push eax
// 005f28ed  c644244001           mov byte ptr [esp + 0x40], 1
// 005f28f2  ffd2                 call edx
// 005f28f4  8b742410             mov esi, dword ptr [esp + 0x10]
// 005f28f8  c644243800           mov byte ptr [esp + 0x38], 0
// 005f28fd  85f6                 test esi, esi
// 005f28ff  742a                 je 0x5f292b
// 005f2901  8d4604               lea eax, [esi + 4]
// 005f2904  83c9ff               or ecx, 0xffffffff
// 005f2907  f00fc108             lock xadd dword ptr [eax], ecx
// 005f290b  751e                 jne 0x5f292b
// 005f290d  8b16                 mov edx, dword ptr [esi]
// 005f290f  8b4204               mov eax, dword ptr [edx + 4]
// 005f2912  8bce                 mov ecx, esi
// 005f2914  ffd0                 call eax
// 005f2916  8d4e08               lea ecx, [esi + 8]
// 005f2919  83caff               or edx, 0xffffffff
// 005f291c  f00fc111             lock xadd dword ptr [ecx], edx
// 005f2920  7509                 jne 0x5f292b
// 005f2922  8b06                 mov eax, dword ptr [esi]
// 005f2924  8b5008               mov edx, dword ptr [eax + 8]
// 005f2927  8bce                 mov ecx, esi
// 005f2929  ffd2                 call edx
// 005f292b  8d4c2414             lea ecx, [esp + 0x14]
// 005f292f  c7442438ffffffff     mov dword ptr [esp + 0x38], 0xffffffff
// 005f2937  ff1500a49e00         call dword ptr [0x9ea400]
// 005f293d  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 005f2941  5f                   pop edi
// 005f2942  5e                   pop esi
// 005f2943  32c0                 xor al, al
// 005f2945  5d                   pop ebp
// 005f2946  64890d00000000       mov dword ptr fs:[0], ecx
// 005f294d  83c430               add esp, 0x30
// 005f2950  c20c00               ret 0xc
// library openrbx-client/App\v8xml\SerializerV2.cpp (function ?resolveIDREF@ArchiveBinder@@QAE_NUIDREFBinding@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/v8xml/SerializerV2.cpp
