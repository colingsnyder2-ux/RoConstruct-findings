// roc 2009-06 006ed980  unit: seg_006e0000  size: 158 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006ed980
//
// 006ed980  8b4c2404             mov ecx, dword ptr [esp + 4]
// 006ed984  53                   push ebx
// 006ed985  55                   push ebp
// 006ed986  8b6930               mov ebp, dword ptr [ecx + 0x30]
// 006ed989  0fbf4530             movsx eax, word ptr [ebp + 0x30]
// 006ed98d  56                   push esi
// 006ed98e  57                   push edi
// 006ed98f  8b7d00               mov edi, dword ptr [ebp]
// 006ed992  8b7738               mov esi, dword ptr [edi + 0x38]
// 006ed995  8d5f38               lea ebx, [edi + 0x38]
// 006ed998  40                   inc eax
// 006ed999  3bc6                 cmp eax, esi
// 006ed99b  7e24                 jle 0x6ed9c1
// 006ed99d  8b5718               mov edx, dword ptr [edi + 0x18]
// 006ed9a0  8b4134               mov eax, dword ptr [ecx + 0x34]
// 006ed9a3  6840de8e00           push 0x8ede40
// 006ed9a8  68ff7f0000           push 0x7fff
// 006ed9ad  6a0c                 push 0xc
// 006ed9af  53                   push ebx
// 006ed9b0  52                   push edx
// 006ed9b1  50                   push eax
// 006ed9b2  e8f9fdffff           call 0x6ed7b0
// 006ed9b7  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 006ed9bb  83c418               add esp, 0x18
// 006ed9be  894718               mov dword ptr [edi + 0x18], eax
// 006ed9c1  3b33                 cmp esi, dword ptr [ebx]
// 006ed9c3  7d1d                 jge 0x6ed9e2
// 006ed9c5  8d0476               lea eax, [esi + esi*2]
// 006ed9c8  03c0                 add eax, eax
// 006ed9ca  03c0                 add eax, eax
// 006ed9cc  8d642400             lea esp, [esp]
// 006ed9d0  8b5718               mov edx, dword ptr [edi + 0x18]
// 006ed9d3  c7041000000000       mov dword ptr [eax + edx], 0
// 006ed9da  46                   inc esi
// 006ed9db  83c00c               add eax, 0xc
// 006ed9de  3b33                 cmp esi, dword ptr [ebx]
// 006ed9e0  7cee                 jl 0x6ed9d0
// 006ed9e2  0fbf4530             movsx eax, word ptr [ebp + 0x30]
// 006ed9e6  8b7718               mov esi, dword ptr [edi + 0x18]
// 006ed9e9  8d1440               lea edx, [eax + eax*2]
// 006ed9ec  8b442418             mov eax, dword ptr [esp + 0x18]
// 006ed9f0  890496               mov dword ptr [esi + edx*4], eax
// 006ed9f3  f6400503             test byte ptr [eax + 5], 3
// 006ed9f7  7414                 je 0x6eda0d
// 006ed9f9  f6470504             test byte ptr [edi + 5], 4
// 006ed9fd  740e                 je 0x6eda0d
// 006ed9ff  50                   push eax
// 006eda00  8b4134               mov eax, dword ptr [ecx + 0x34]
// 006eda03  57                   push edi
// 006eda04  50                   push eax
// 006eda05  e8a6c2ffff           call 0x6e9cb0
// 006eda0a  83c40c               add esp, 0xc
// 006eda0d  0fb74d30             movzx ecx, word ptr [ebp + 0x30]
// 006eda11  5f                   pop edi
// 006eda12  0fbfc1               movsx eax, cx
// 006eda15  41                   inc ecx
// 006eda16  5e                   pop esi
// 006eda17  66894d30             mov word ptr [ebp + 0x30], cx
// 006eda1b  5d                   pop ebp
// 006eda1c  5b                   pop ebx
// 006eda1d  c3                   ret 
// library lua-5.1.2/roc_espeon_nativeparlistcontext810a97d37dd18cf0.cpp (function ?registerlocalvar@@YAHPAULexState@@PATTString@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.2 roc_espeon_nativeparlistcontext810a97d37dd18cf0.cpp
