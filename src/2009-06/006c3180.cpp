// from server: 100% by auto
// roc 2009-06 006c3180  unit: lua_exception  size: 214 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006c3180
//
// 006c3180  53                   push ebx
// 006c3181  56                   push esi
// 006c3182  57                   push edi
// 006c3183  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 006c3187  8b07                 mov eax, dword ptr [edi]
// 006c3189  50                   push eax
// 006c318a  e8319f0200           call 0x6ed0c0
// 006c318f  8b742414             mov esi, dword ptr [esp + 0x14]
// 006c3193  8bd8                 mov ebx, eax
// 006c3195  8b4610               mov eax, dword ptr [esi + 0x10]
// 006c3198  8b4844               mov ecx, dword ptr [eax + 0x44]
// 006c319b  83c404               add esp, 4
// 006c319e  3b4840               cmp ecx, dword ptr [eax + 0x40]
// 006c31a1  7209                 jb 0x6c31ac
// 006c31a3  56                   push esi
// 006c31a4  e8176a0200           call 0x6e9bc0
// 006c31a9  83c404               add esp, 4
// 006c31ac  b8c0106f00           mov eax, 0x6f10c0
// 006c31b1  83fb1b               cmp ebx, 0x1b
// 006c31b4  7405                 je 0x6c31bb
// 006c31b6  b800066f00           mov eax, 0x6f0600
// 006c31bb  8b5710               mov edx, dword ptr [edi + 0x10]
// 006c31be  52                   push edx
// 006c31bf  8b17                 mov edx, dword ptr [edi]
// 006c31c1  8d4f04               lea ecx, [edi + 4]
// 006c31c4  51                   push ecx
// 006c31c5  52                   push edx
// 006c31c6  56                   push esi
// 006c31c7  ffd0                 call eax
// 006c31c9  8bf8                 mov edi, eax
// 006c31cb  8b4648               mov eax, dword ptr [esi + 0x48]
// 006c31ce  0fb64f48             movzx ecx, byte ptr [edi + 0x48]
// 006c31d2  50                   push eax
// 006c31d3  51                   push ecx
// 006c31d4  56                   push esi
// 006c31d5  e8f69a0200           call 0x6eccd0
// 006c31da  33db                 xor ebx, ebx
// 006c31dc  83c41c               add esp, 0x1c
// 006c31df  897810               mov dword ptr [eax + 0x10], edi
// 006c31e2  89442414             mov dword ptr [esp + 0x14], eax
// 006c31e6  385f48               cmp byte ptr [edi + 0x48], bl
// 006c31e9  7622                 jbe 0x6c320d
// 006c31eb  55                   push ebp
// 006c31ec  8d6814               lea ebp, [eax + 0x14]
// 006c31ef  90                   nop 
// 006c31f0  56                   push esi
// 006c31f1  e83a9b0200           call 0x6ecd30
// 006c31f6  894500               mov dword ptr [ebp], eax
// 006c31f9  0fb65748             movzx edx, byte ptr [edi + 0x48]
// 006c31fd  43                   inc ebx
// 006c31fe  83c404               add esp, 4
// 006c3201  83c504               add ebp, 4
// 006c3204  3bda                 cmp ebx, edx
// 006c3206  7ce8                 jl 0x6c31f0
// 006c3208  8b442418             mov eax, dword ptr [esp + 0x18]
// 006c320c  5d                   pop ebp
// 006c320d  8b4e08               mov ecx, dword ptr [esi + 8]
// 006c3210  8901                 mov dword ptr [ecx], eax
// 006c3212  c7410806000000       mov dword ptr [ecx + 8], 6
// 006c3219  8b461c               mov eax, dword ptr [esi + 0x1c]
// 006c321c  2b4608               sub eax, dword ptr [esi + 8]
// 006c321f  bf10000000           mov edi, 0x10
// 006c3224  3bc7                 cmp eax, edi
// 006c3226  7f27                 jg 0x6c324f
// 006c3228  8b462c               mov eax, dword ptr [esi + 0x2c]
// 006c322b  83f801               cmp eax, 1
// 006c322e  7c14                 jl 0x6c3244
// 006c3230  8d0c00               lea ecx, [eax + eax]
// 006c3233  51                   push ecx
// 006c3234  56                   push esi
// 006c3235  e8a6faffff           call 0x6c2ce0
// 006c323a  83c408               add esp, 8
// 006c323d  017e08               add dword ptr [esi + 8], edi
// 006c3240  5f                   pop edi
// 006c3241  5e                   pop esi
// 006c3242  5b                   pop ebx
// 006c3243  c3                   ret 
// 006c3244  40                   inc eax
// 006c3245  50                   push eax
// 006c3246  56                   push esi
// 006c3247  e894faffff           call 0x6c2ce0
// 006c324c  83c408               add esp, 8
// 006c324f  017e08               add dword ptr [esi + 8], edi
// 006c3252  5f                   pop edi
// 006c3253  5e                   pop esi
// 006c3254  5b                   pop ebx
// 006c3255  c3                   ret 
// library lua-5.1.4/ldo.c (function _f_parser)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ldo.c
