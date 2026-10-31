// roc 2012-06 00938570  unit: seg_00930000  size: 158 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00938570
//
// 00938570  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00938574  53                   push ebx
// 00938575  55                   push ebp
// 00938576  8b6930               mov ebp, dword ptr [ecx + 0x30]
// 00938579  0fbf4530             movsx eax, word ptr [ebp + 0x30]
// 0093857d  56                   push esi
// 0093857e  57                   push edi
// 0093857f  8b7d00               mov edi, dword ptr [ebp]
// 00938582  8b7738               mov esi, dword ptr [edi + 0x38]
// 00938585  8d5f38               lea ebx, [edi + 0x38]
// 00938588  40                   inc eax
// 00938589  3bc6                 cmp eax, esi
// 0093858b  7e24                 jle 0x9385b1
// 0093858d  8b5718               mov edx, dword ptr [edi + 0x18]
// 00938590  8b4134               mov eax, dword ptr [ecx + 0x34]
// 00938593  68b4fbbf00           push 0xbffbb4
// 00938598  68ff7f0000           push 0x7fff
// 0093859d  6a0c                 push 0xc
// 0093859f  53                   push ebx
// 009385a0  52                   push edx
// 009385a1  50                   push eax
// 009385a2  e809eaffff           call 0x936fb0
// 009385a7  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 009385ab  83c418               add esp, 0x18
// 009385ae  894718               mov dword ptr [edi + 0x18], eax
// 009385b1  3b33                 cmp esi, dword ptr [ebx]
// 009385b3  7d1d                 jge 0x9385d2
// 009385b5  8d0476               lea eax, [esi + esi*2]
// 009385b8  03c0                 add eax, eax
// 009385ba  03c0                 add eax, eax
// 009385bc  8d642400             lea esp, [esp]
// 009385c0  8b5718               mov edx, dword ptr [edi + 0x18]
// 009385c3  c7041000000000       mov dword ptr [eax + edx], 0
// 009385ca  46                   inc esi
// 009385cb  83c00c               add eax, 0xc
// 009385ce  3b33                 cmp esi, dword ptr [ebx]
// 009385d0  7cee                 jl 0x9385c0
// 009385d2  0fbf4530             movsx eax, word ptr [ebp + 0x30]
// 009385d6  8b7718               mov esi, dword ptr [edi + 0x18]
// 009385d9  8d1440               lea edx, [eax + eax*2]
// 009385dc  8b442418             mov eax, dword ptr [esp + 0x18]
// 009385e0  890496               mov dword ptr [esi + edx*4], eax
// 009385e3  f6400503             test byte ptr [eax + 5], 3
// 009385e7  7414                 je 0x9385fd
// 009385e9  f6470504             test byte ptr [edi + 5], 4
// 009385ed  740e                 je 0x9385fd
// 009385ef  50                   push eax
// 009385f0  8b4134               mov eax, dword ptr [ecx + 0x34]
// 009385f3  57                   push edi
// 009385f4  50                   push eax
// 009385f5  e8a6adffff           call 0x9333a0
// 009385fa  83c40c               add esp, 0xc
// 009385fd  0fb74d30             movzx ecx, word ptr [ebp + 0x30]
// 00938601  5f                   pop edi
// 00938602  0fbfc1               movsx eax, cx
// 00938605  41                   inc ecx
// 00938606  5e                   pop esi
// 00938607  66894d30             mov word ptr [ebp + 0x30], cx
// 0093860b  5d                   pop ebp
// 0093860c  5b                   pop ebx
// 0093860d  c3                   ret 
// library lua-5.1.2/roc_espeon_nativeparlistcontext810a97d37dd18cf0.cpp (function ?registerlocalvar@@YAHPAULexState@@PATTString@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.2 roc_espeon_nativeparlistcontext810a97d37dd18cf0.cpp
