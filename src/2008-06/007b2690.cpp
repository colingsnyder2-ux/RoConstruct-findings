// roc 2008-06 007b2690  unit: RBX::RenderNew::TextureProxy  size: 803 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007b2690
//
// 007b2690  6aff                 push -1
// 007b2692  689fdf7e00           push 0x7edf9f
// 007b2697  64a100000000         mov eax, dword ptr fs:[0]
// 007b269d  50                   push eax
// 007b269e  64892500000000       mov dword ptr fs:[0], esp
// 007b26a5  81ec94000000         sub esp, 0x94
// 007b26ab  53                   push ebx
// 007b26ac  55                   push ebp
// 007b26ad  56                   push esi
// 007b26ae  57                   push edi
// 007b26af  6816b78000           push 0x80b716
// 007b26b4  8d4c241c             lea ecx, [esp + 0x1c]
// 007b26b8  ff1558248000         call dword ptr [0x802458]
// 007b26be  33ed                 xor ebp, ebp
// 007b26c0  6820578700           push 0x875720
// 007b26c5  8d4c2438             lea ecx, [esp + 0x38]
// 007b26c9  89ac24b0000000       mov dword ptr [esp + 0xb0], ebp
// 007b26d0  ff1558248000         call dword ptr [0x802458]
// 007b26d6  8b3de4238000         mov edi, dword ptr [0x8023e4]
// 007b26dc  6870548700           push 0x875470
// 007b26e1  50                   push eax
// 007b26e2  8d442458             lea eax, [esp + 0x58]
// 007b26e6  50                   push eax
// 007b26e7  c68424b800000001     mov byte ptr [esp + 0xb8], 1
// 007b26ef  ffd7                 call edi
// 007b26f1  55                   push ebp
// 007b26f2  50                   push eax
// 007b26f3  8d4c242c             lea ecx, [esp + 0x2c]
// 007b26f7  51                   push ecx
// 007b26f8  8d542428             lea edx, [esp + 0x28]
// 007b26fc  b302                 mov bl, 2
// 007b26fe  52                   push edx
// 007b26ff  889c24c8000000       mov byte ptr [esp + 0xc8], bl
// 007b2706  e8754fd5ff           call 0x507680
// 007b270b  83c41c               add esp, 0x1c
// 007b270e  8b30                 mov esi, dword ptr [eax]
// 007b2710  a1dcf39700           mov eax, dword ptr [0x97f3dc]
// 007b2715  c68424ac00000003     mov byte ptr [esp + 0xac], 3
// 007b271d  3bf0                 cmp esi, eax
// 007b271f  7449                 je 0x7b276a
// 007b2721  3bc5                 cmp eax, ebp
// 007b2723  7431                 je 0x7b2756
// 007b2725  83c004               add eax, 4
// 007b2728  50                   push eax
// 007b2729  ff15ac218000         call dword ptr [0x8021ac]
// 007b272f  85c0                 test eax, eax
// 007b2731  751d                 jne 0x7b2750
// 007b2733  8b0ddcf39700         mov ecx, dword ptr [0x97f3dc]
// 007b2739  e85286caff           call 0x45ad90
// 007b273e  8b0ddcf39700         mov ecx, dword ptr [0x97f3dc]
// 007b2744  3bcd                 cmp ecx, ebp
// 007b2746  7408                 je 0x7b2750
// 007b2748  8b01                 mov eax, dword ptr [ecx]
// 007b274a  8b10                 mov edx, dword ptr [eax]
// 007b274c  6a01                 push 1
// 007b274e  ffd2                 call edx
// 007b2750  892ddcf39700         mov dword ptr [0x97f3dc], ebp
// 007b2756  3bf5                 cmp esi, ebp
// 007b2758  7410                 je 0x7b276a
// 007b275a  8935dcf39700         mov dword ptr [0x97f3dc], esi
// 007b2760  83c604               add esi, 4
// 007b2763  56                   push esi
// 007b2764  ff15b0218000         call dword ptr [0x8021b0]
// 007b276a  8b442410             mov eax, dword ptr [esp + 0x10]
// 007b276e  889c24ac000000       mov byte ptr [esp + 0xac], bl
// 007b2775  3bc5                 cmp eax, ebp
// 007b2777  742b                 je 0x7b27a4
// 007b2779  83c004               add eax, 4
// 007b277c  50                   push eax
// 007b277d  ff15ac218000         call dword ptr [0x8021ac]
// 007b2783  85c0                 test eax, eax
// 007b2785  7519                 jne 0x7b27a0
// 007b2787  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 007b278b  e80086caff           call 0x45ad90
// 007b2790  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 007b2794  3bcd                 cmp ecx, ebp
// 007b2796  7408                 je 0x7b27a0
// 007b2798  8b01                 mov eax, dword ptr [ecx]
// 007b279a  8b10                 mov edx, dword ptr [eax]
// 007b279c  6a01                 push 1
// 007b279e  ffd2                 call edx
// 007b27a0  896c2410             mov dword ptr [esp + 0x10], ebp
// 007b27a4  8d4c2450             lea ecx, [esp + 0x50]
// 007b27a8  c68424ac00000001     mov byte ptr [esp + 0xac], 1
// 007b27b0  ff1568248000         call dword ptr [0x802468]
// 007b27b6  8d4c2434             lea ecx, [esp + 0x34]
// 007b27ba  c68424ac00000000     mov byte ptr [esp + 0xac], 0
// 007b27c2  ff1568248000         call dword ptr [0x802468]
// 007b27c8  83ceff               or esi, 0xffffffff
// 007b27cb  8d4c2418             lea ecx, [esp + 0x18]
// 007b27cf  89b424ac000000       mov dword ptr [esp + 0xac], esi
// 007b27d6  ff1568248000         call dword ptr [0x802468]
// 007b27dc  6816b78000           push 0x80b716
// 007b27e1  8d4c241c             lea ecx, [esp + 0x1c]
// 007b27e5  ff1558248000         call dword ptr [0x802458]
// 007b27eb  6818538700           push 0x875318
// 007b27f0  8d4c2454             lea ecx, [esp + 0x54]
// 007b27f4  c78424b000000004000000 mov dword ptr [esp + 0xb0], 4
// 007b27ff  ff1558248000         call dword ptr [0x802458]
// 007b2805  68a0508700           push 0x8750a0
// 007b280a  50                   push eax
// 007b280b  8d44243c             lea eax, [esp + 0x3c]
// 007b280f  50                   push eax
// 007b2810  c68424b800000005     mov byte ptr [esp + 0xb8], 5
// 007b2818  ffd7                 call edi
// 007b281a  55                   push ebp
// 007b281b  50                   push eax
// 007b281c  8d4c242c             lea ecx, [esp + 0x2c]
// 007b2820  51                   push ecx
// 007b2821  8d542428             lea edx, [esp + 0x28]
// 007b2825  b306                 mov bl, 6
// 007b2827  52                   push edx
// 007b2828  889c24c8000000       mov byte ptr [esp + 0xc8], bl
// 007b282f  e84c4ed5ff           call 0x507680
// 007b2834  83c41c               add esp, 0x1c
// 007b2837  8b00                 mov eax, dword ptr [eax]
// 007b2839  50                   push eax
// 007b283a  b9e0f39700           mov ecx, 0x97f3e0
// 007b283f  c68424b000000007     mov byte ptr [esp + 0xb0], 7
// 007b2847  e85467deff           call 0x598fa0
// 007b284c  8b442410             mov eax, dword ptr [esp + 0x10]
// 007b2850  889c24ac000000       mov byte ptr [esp + 0xac], bl
// 007b2857  3bc5                 cmp eax, ebp
// 007b2859  742b                 je 0x7b2886
// 007b285b  83c004               add eax, 4
// 007b285e  50                   push eax
// 007b285f  ff15ac218000         call dword ptr [0x8021ac]
// 007b2865  85c0                 test eax, eax
// 007b2867  7519                 jne 0x7b2882
// 007b2869  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 007b286d  e81e85caff           call 0x45ad90
// 007b2872  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 007b2876  3bcd                 cmp ecx, ebp
// 007b2878  7408                 je 0x7b2882
// 007b287a  8b11                 mov edx, dword ptr [ecx]
// 007b287c  8b02                 mov eax, dword ptr [edx]
// 007b287e  6a01                 push 1
// 007b2880  ffd0                 call eax
// 007b2882  896c2410             mov dword ptr [esp + 0x10], ebp
// 007b2886  8d4c2434             lea ecx, [esp + 0x34]
// 007b288a  c68424ac00000005     mov byte ptr [esp + 0xac], 5
// 007b2892  ff1568248000         call dword ptr [0x802468]
// 007b2898  8d4c2450             lea ecx, [esp + 0x50]
// 007b289c  c68424ac00000004     mov byte ptr [esp + 0xac], 4
// 007b28a4  ff1568248000         call dword ptr [0x802468]
// 007b28aa  8d4c2418             lea ecx, [esp + 0x18]
// 007b28ae  89b424ac000000       mov dword ptr [esp + 0xac], esi
// 007b28b5  ff1568248000         call dword ptr [0x802468]
// 007b28bb  68604e8700           push 0x874e60
// 007b28c0  8d8c248c000000       lea ecx, [esp + 0x8c]
// 007b28c7  ff1558248000         call dword ptr [0x802458]
// 007b28cd  6816b78000           push 0x80b716
// 007b28d2  8d4c2470             lea ecx, [esp + 0x70]
// 007b28d6  c78424b000000008000000 mov dword ptr [esp + 0xb0], 8
// 007b28e1  ff1558248000         call dword ptr [0x802458]
// 007b28e7  55                   push ebp
// 007b28e8  8d8c248c000000       lea ecx, [esp + 0x8c]
// 007b28ef  51                   push ecx
// 007b28f0  8d542474             lea edx, [esp + 0x74]
// 007b28f4  52                   push edx
// 007b28f5  8d442420             lea eax, [esp + 0x20]
// 007b28f9  b309                 mov bl, 9
// 007b28fb  50                   push eax
// 007b28fc  889c24bc000000       mov byte ptr [esp + 0xbc], bl
// 007b2903  e8784dd5ff           call 0x507680
// 007b2908  83c410               add esp, 0x10
// 007b290b  8b08                 mov ecx, dword ptr [eax]
// 007b290d  51                   push ecx
// 007b290e  b9e4f39700           mov ecx, 0x97f3e4
// 007b2913  c68424b00000000a     mov byte ptr [esp + 0xb0], 0xa
// 007b291b  e88066deff           call 0x598fa0
// 007b2920  8b442414             mov eax, dword ptr [esp + 0x14]
// 007b2924  889c24ac000000       mov byte ptr [esp + 0xac], bl
// 007b292b  3bc5                 cmp eax, ebp
// 007b292d  742b                 je 0x7b295a
// 007b292f  83c004               add eax, 4
// 007b2932  50                   push eax
// 007b2933  ff15ac218000         call dword ptr [0x8021ac]
// 007b2939  85c0                 test eax, eax
// 007b293b  7519                 jne 0x7b2956
// 007b293d  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 007b2941  e84a84caff           call 0x45ad90
// 007b2946  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 007b294a  3bcd                 cmp ecx, ebp
// 007b294c  7408                 je 0x7b2956
// 007b294e  8b11                 mov edx, dword ptr [ecx]
// 007b2950  8b02                 mov eax, dword ptr [edx]
// 007b2952  6a01                 push 1
// 007b2954  ffd0                 call eax
// 007b2956  896c2414             mov dword ptr [esp + 0x14], ebp
// 007b295a  8d4c246c             lea ecx, [esp + 0x6c]
// 007b295e  c68424ac00000008     mov byte ptr [esp + 0xac], 8
// 007b2966  ff1568248000         call dword ptr [0x802468]
// 007b296c  8d8c2488000000       lea ecx, [esp + 0x88]
// 007b2973  89b424ac000000       mov dword ptr [esp + 0xac], esi
// 007b297a  ff1568248000         call dword ptr [0x802468]
// 007b2980  bedcf39700           mov esi, 0x97f3dc
// 007b2985  8b0e                 mov ecx, dword ptr [esi]
// 007b2987  8b11                 mov edx, dword ptr [ecx]
// 007b2989  8b4204               mov eax, dword ptr [edx + 4]
// 007b298c  55                   push ebp
// 007b298d  ffd0                 call eax
// 007b298f  83c604               add esi, 4
// 007b2992  81fee8f39700         cmp esi, 0x97f3e8
// 007b2998  7ceb                 jl 0x7b2985
// 007b299a  8b8c24a4000000       mov ecx, dword ptr [esp + 0xa4]
// 007b29a1  5f                   pop edi
// 007b29a2  5e                   pop esi
// 007b29a3  5d                   pop ebp
// 007b29a4  5b                   pop ebx
// 007b29a5  64890d00000000       mov dword ptr fs:[0], ecx
// 007b29ac  81c4a0000000         add esp, 0xa0
// 007b29b2  c3                   ret 
// library rbxgs-g3d/GLG3Dcpp\ToneMap.cpp (function ?makeShadersPS20@ToneMap@G3D@@CAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/ToneMap.cpp
