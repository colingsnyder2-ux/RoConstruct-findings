// from server: 100% by auto
// roc 2007-03 004b26d0  unit: seg_004b0000  size: 443 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004b26d0
//
// 004b26d0  81ec00010000         sub esp, 0x100
// 004b26d6  33c0                 xor eax, eax
// 004b26d8  53                   push ebx
// 004b26d9  55                   push ebp
// 004b26da  56                   push esi
// 004b26db  8bb42410010000       mov esi, dword ptr [esp + 0x110]
// 004b26e2  57                   push edi
// 004b26e3  b908000000           mov ecx, 8
// 004b26e8  8d7c2410             lea edi, [esp + 0x10]
// 004b26ec  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 004b26ee  8bb42418010000       mov esi, dword ptr [esp + 0x118]
// 004b26f5  b908000000           mov ecx, 8
// 004b26fa  8dbc2490000000       lea edi, [esp + 0x90]
// 004b2701  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 004b2703  8bb4241c010000       mov esi, dword ptr [esp + 0x11c]
// 004b270a  b908000000           mov ecx, 8
// 004b270f  8d7c2450             lea edi, [esp + 0x50]
// 004b2713  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 004b2715  6a3c                 push 0x3c
// 004b2717  50                   push eax
// 004b2718  89442438             mov dword ptr [esp + 0x38], eax
// 004b271c  8944243c             mov dword ptr [esp + 0x3c], eax
// 004b2720  89442440             mov dword ptr [esp + 0x40], eax
// 004b2724  89442444             mov dword ptr [esp + 0x44], eax
// 004b2728  89442448             mov dword ptr [esp + 0x48], eax
// 004b272c  8944244c             mov dword ptr [esp + 0x4c], eax
// 004b2730  89442450             mov dword ptr [esp + 0x50], eax
// 004b2734  89442454             mov dword ptr [esp + 0x54], eax
// 004b2738  898424b8000000       mov dword ptr [esp + 0xb8], eax
// 004b273f  898424bc000000       mov dword ptr [esp + 0xbc], eax
// 004b2746  898424c0000000       mov dword ptr [esp + 0xc0], eax
// 004b274d  898424c4000000       mov dword ptr [esp + 0xc4], eax
// 004b2754  898424c8000000       mov dword ptr [esp + 0xc8], eax
// 004b275b  898424cc000000       mov dword ptr [esp + 0xcc], eax
// 004b2762  898424d0000000       mov dword ptr [esp + 0xd0], eax
// 004b2769  898424d4000000       mov dword ptr [esp + 0xd4], eax
// 004b2770  89442478             mov dword ptr [esp + 0x78], eax
// 004b2774  8944247c             mov dword ptr [esp + 0x7c], eax
// 004b2778  89842480000000       mov dword ptr [esp + 0x80], eax
// 004b277f  89842484000000       mov dword ptr [esp + 0x84], eax
// 004b2786  89842488000000       mov dword ptr [esp + 0x88], eax
// 004b278d  8984248c000000       mov dword ptr [esp + 0x8c], eax
// 004b2794  89842490000000       mov dword ptr [esp + 0x90], eax
// 004b279b  89842494000000       mov dword ptr [esp + 0x94], eax
// 004b27a2  8d8424dc000000       lea eax, [esp + 0xdc]
// 004b27a9  50                   push eax
// 004b27aa  c78424dc00000001000000 mov dword ptr [esp + 0xdc], 1
// 004b27b5  e862c81600           call 0x61f01c
// 004b27ba  8d4c241c             lea ecx, [esp + 0x1c]
// 004b27be  51                   push ecx
// 004b27bf  8d542460             lea edx, [esp + 0x60]
// 004b27c3  52                   push edx
// 004b27c4  8bc1                 mov eax, ecx
// 004b27c6  50                   push eax
// 004b27c7  e8e4d9ffff           call 0x4b01b0
// 004b27cc  83c418               add esp, 0x18
// 004b27cf  33f6                 xor esi, esi
// 004b27d1  33ed                 xor ebp, ebp
// 004b27d3  eb0b                 jmp 0x4b27e0
// 004b27d5  8da42400000000       lea esp, [esp]
// 004b27dc  8d642400             lea esp, [esp]
// 004b27e0  8b9cac90000000       mov ebx, dword ptr [esp + ebp*4 + 0x90]
// 004b27e7  85db                 test ebx, ebx
// 004b27e9  bf20000000           mov edi, 0x20
// 004b27ee  746d                 je 0x4b285d
// 004b27f0  f6c301               test bl, 1
// 004b27f3  745c                 je 0x4b2851
// 004b27f5  85f6                 test esi, esi
// 004b27f7  742b                 je 0x4b2824
// 004b27f9  8da42400000000       lea esp, [esp]
// 004b2800  8d4c2410             lea ecx, [esp + 0x10]
// 004b2804  51                   push ecx
// 004b2805  e8f6dfffff           call 0x4b0800
// 004b280a  8d542414             lea edx, [esp + 0x14]
// 004b280e  52                   push edx
// 004b280f  8d442458             lea eax, [esp + 0x58]
// 004b2813  50                   push eax
// 004b2814  8bca                 mov ecx, edx
// 004b2816  51                   push ecx
// 004b2817  e894d9ffff           call 0x4b01b0
// 004b281c  83c410               add esp, 0x10
// 004b281f  83ee01               sub esi, 1
// 004b2822  75dc                 jne 0x4b2800
// 004b2824  8d9424d0000000       lea edx, [esp + 0xd0]
// 004b282b  52                   push edx
// 004b282c  8d442414             lea eax, [esp + 0x14]
// 004b2830  50                   push eax
// 004b2831  8bca                 mov ecx, edx
// 004b2833  51                   push ecx
// 004b2834  e8e7e0ffff           call 0x4b0920
// 004b2839  8d9424dc000000       lea edx, [esp + 0xdc]
// 004b2840  52                   push edx
// 004b2841  8d442460             lea eax, [esp + 0x60]
// 004b2845  50                   push eax
// 004b2846  8bca                 mov ecx, edx
// 004b2848  51                   push ecx
// 004b2849  e862d9ffff           call 0x4b01b0
// 004b284e  83c418               add esp, 0x18
// 004b2851  d1eb                 shr ebx, 1
// 004b2853  83c601               add esi, 1
// 004b2856  83ef01               sub edi, 1
// 004b2859  85db                 test ebx, ebx
// 004b285b  7593                 jne 0x4b27f0
// 004b285d  83c501               add ebp, 1
// 004b2860  03f7                 add esi, edi
// 004b2862  83fd08               cmp ebp, 8
// 004b2865  0f8275ffffff         jb 0x4b27e0
// 004b286b  8bbc2420010000       mov edi, dword ptr [esp + 0x120]
// 004b2872  b908000000           mov ecx, 8
// 004b2877  8db424d0000000       lea esi, [esp + 0xd0]
// 004b287e  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 004b2880  5f                   pop edi
// 004b2881  5e                   pop esi
// 004b2882  5d                   pop ebp
// 004b2883  5b                   pop ebx
// 004b2884  81c400010000         add esp, 0x100
// 004b288a  c3                   ret 

// from server: 31% by colin
// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oi /Ot /Oy /GF /GS- /EHsc /MT
// roc-lib: ogre-1.6.4 OgreResourceGroupManager.cpp