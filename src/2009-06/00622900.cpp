// roc 2009-06 00622900  unit: RBX::RootInstance  size: 323 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00622900
//
// 00622900  6aff                 push -1
// 00622902  68e1c58500           push 0x85c5e1
// 00622907  64a100000000         mov eax, dword ptr fs:[0]
// 0062290d  50                   push eax
// 0062290e  64892500000000       mov dword ptr fs:[0], esp
// 00622915  83ec24               sub esp, 0x24
// 00622918  55                   push ebp
// 00622919  56                   push esi
// 0062291a  8bf1                 mov esi, ecx
// 0062291c  57                   push edi
// 0062291d  8d4c2414             lea ecx, [esp + 0x14]
// 00622921  ff15c0e48900         call dword ptr [0x89e4c0]
// 00622927  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 0062292b  8d442414             lea eax, [esp + 0x14]
// 0062292f  50                   push eax
// 00622930  c744243c00000000     mov dword ptr [esp + 0x3c], 0
// 00622938  e8d370feff           call 0x609a10
// 0062293d  8d4c2414             lea ecx, [esp + 0x14]
// 00622941  51                   push ecx
// 00622942  8d542410             lea edx, [esp + 0x10]
// 00622946  83c61c               add esi, 0x1c
// 00622949  52                   push edx
// 0062294a  8bce                 mov ecx, esi
// 0062294c  e8affbffff           call 0x622500
// 00622951  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00622955  8b6e18               mov ebp, dword ptr [esi + 0x18]
// 00622958  8b36                 mov esi, dword ptr [esi]
// 0062295a  85ff                 test edi, edi
// 0062295c  7404                 je 0x622962
// 0062295e  3bfe                 cmp edi, esi
// 00622960  7406                 je 0x622968
// 00622962  ff15ace98900         call dword ptr [0x89e9ac]
// 00622968  8b742410             mov esi, dword ptr [esp + 0x10]
// 0062296c  3bf5                 cmp esi, ebp
// 0062296e  7454                 je 0x6229c4
// 00622970  85ff                 test edi, edi
// 00622972  754c                 jne 0x6229c0
// 00622974  ff15ace98900         call dword ptr [0x89e9ac]
// 0062297a  3b7718               cmp esi, dword ptr [edi + 0x18]
// 0062297d  7506                 jne 0x622985
// 0062297f  ff15ace98900         call dword ptr [0x89e9ac]
// 00622985  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 00622989  8b11                 mov edx, dword ptr [ecx]
// 0062298b  8b12                 mov edx, dword ptr [edx]
// 0062298d  8d4628               lea eax, [esi + 0x28]
// 00622990  50                   push eax
// 00622991  8b442448             mov eax, dword ptr [esp + 0x48]
// 00622995  50                   push eax
// 00622996  ffd2                 call edx
// 00622998  8d4c2414             lea ecx, [esp + 0x14]
// 0062299c  c7442438ffffffff     mov dword ptr [esp + 0x38], 0xffffffff
// 006229a4  ff15c4e48900         call dword ptr [0x89e4c4]
// 006229aa  5f                   pop edi
// 006229ab  5e                   pop esi
// 006229ac  b001                 mov al, 1
// 006229ae  5d                   pop ebp
// 006229af  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 006229b3  64890d00000000       mov dword ptr fs:[0], ecx
// 006229ba  83c430               add esp, 0x30
// 006229bd  c20c00               ret 0xc
// 006229c0  8b3f                 mov edi, dword ptr [edi]
// 006229c2  ebb6                 jmp 0x62297a
// 006229c4  6a00                 push 0
// 006229c6  8d4c2410             lea ecx, [esp + 0x10]
// 006229ca  e8d19b0200           call 0x64c5a0
// 006229cf  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 006229d3  8b11                 mov edx, dword ptr [ecx]
// 006229d5  8b12                 mov edx, dword ptr [edx]
// 006229d7  50                   push eax
// 006229d8  8b442448             mov eax, dword ptr [esp + 0x48]
// 006229dc  50                   push eax
// 006229dd  c644244001           mov byte ptr [esp + 0x40], 1
// 006229e2  ffd2                 call edx
// 006229e4  8b742410             mov esi, dword ptr [esp + 0x10]
// 006229e8  c644243800           mov byte ptr [esp + 0x38], 0
// 006229ed  85f6                 test esi, esi
// 006229ef  742a                 je 0x622a1b
// 006229f1  8d4604               lea eax, [esi + 4]
// 006229f4  83c9ff               or ecx, 0xffffffff
// 006229f7  f00fc108             lock xadd dword ptr [eax], ecx
// 006229fb  751e                 jne 0x622a1b
// 006229fd  8b16                 mov edx, dword ptr [esi]
// 006229ff  8b4204               mov eax, dword ptr [edx + 4]
// 00622a02  8bce                 mov ecx, esi
// 00622a04  ffd0                 call eax
// 00622a06  8d4e08               lea ecx, [esi + 8]
// 00622a09  83caff               or edx, 0xffffffff
// 00622a0c  f00fc111             lock xadd dword ptr [ecx], edx
// 00622a10  7509                 jne 0x622a1b
// 00622a12  8b06                 mov eax, dword ptr [esi]
// 00622a14  8b5008               mov edx, dword ptr [eax + 8]
// 00622a17  8bce                 mov ecx, esi
// 00622a19  ffd2                 call edx
// 00622a1b  8d4c2414             lea ecx, [esp + 0x14]
// 00622a1f  c7442438ffffffff     mov dword ptr [esp + 0x38], 0xffffffff
// 00622a27  ff15c4e48900         call dword ptr [0x89e4c4]
// 00622a2d  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00622a31  5f                   pop edi
// 00622a32  5e                   pop esi
// 00622a33  32c0                 xor al, al
// 00622a35  5d                   pop ebp
// 00622a36  64890d00000000       mov dword ptr fs:[0], ecx
// 00622a3d  83c430               add esp, 0x30
// 00622a40  c20c00               ret 0xc
// library openrbx-client/App\v8xml\SerializerV2.cpp (function ?resolveIDREF@ArchiveBinder@@QAE_NUIDREFBinding@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8xml/SerializerV2.cpp
