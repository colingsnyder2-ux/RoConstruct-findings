// roc 2007-03 005fd5c0  unit: seg_005f0000  size: 162 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005fd5c0
//
// 005fd5c0  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005fd5c4  53                   push ebx
// 005fd5c5  55                   push ebp
// 005fd5c6  8b6930               mov ebp, dword ptr [ecx + 0x30]
// 005fd5c9  0fbf4530             movsx eax, word ptr [ebp + 0x30]
// 005fd5cd  56                   push esi
// 005fd5ce  57                   push edi
// 005fd5cf  8b7d00               mov edi, dword ptr [ebp]
// 005fd5d2  8b7738               mov esi, dword ptr [edi + 0x38]
// 005fd5d5  8d5f38               lea ebx, [edi + 0x38]
// 005fd5d8  83c001               add eax, 1
// 005fd5db  3bc6                 cmp eax, esi
// 005fd5dd  7e24                 jle 0x5fd603
// 005fd5df  8b5718               mov edx, dword ptr [edi + 0x18]
// 005fd5e2  8b4134               mov eax, dword ptr [ecx + 0x34]
// 005fd5e5  68b0047c00           push 0x7c04b0
// 005fd5ea  68ff7f0000           push 0x7fff
// 005fd5ef  6a0c                 push 0xc
// 005fd5f1  53                   push ebx
// 005fd5f2  52                   push edx
// 005fd5f3  50                   push eax
// 005fd5f4  e8f7fdffff           call 0x5fd3f0
// 005fd5f9  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 005fd5fd  83c418               add esp, 0x18
// 005fd600  894718               mov dword ptr [edi + 0x18], eax
// 005fd603  3b33                 cmp esi, dword ptr [ebx]
// 005fd605  7d1d                 jge 0x5fd624
// 005fd607  8d0476               lea eax, [esi + esi*2]
// 005fd60a  03c0                 add eax, eax
// 005fd60c  03c0                 add eax, eax
// 005fd60e  8bff                 mov edi, edi
// 005fd610  8b5718               mov edx, dword ptr [edi + 0x18]
// 005fd613  c7041000000000       mov dword ptr [eax + edx], 0
// 005fd61a  83c601               add esi, 1
// 005fd61d  83c00c               add eax, 0xc
// 005fd620  3b33                 cmp esi, dword ptr [ebx]
// 005fd622  7cec                 jl 0x5fd610
// 005fd624  0fbf4530             movsx eax, word ptr [ebp + 0x30]
// 005fd628  8b7718               mov esi, dword ptr [edi + 0x18]
// 005fd62b  8d1440               lea edx, [eax + eax*2]
// 005fd62e  8b442418             mov eax, dword ptr [esp + 0x18]
// 005fd632  890496               mov dword ptr [esi + edx*4], eax
// 005fd635  f6400503             test byte ptr [eax + 5], 3
// 005fd639  7414                 je 0x5fd64f
// 005fd63b  f6470504             test byte ptr [edi + 5], 4
// 005fd63f  740e                 je 0x5fd64f
// 005fd641  50                   push eax
// 005fd642  8b4134               mov eax, dword ptr [ecx + 0x34]
// 005fd645  57                   push edi
// 005fd646  50                   push eax
// 005fd647  e854c2ffff           call 0x5f98a0
// 005fd64c  83c40c               add esp, 0xc
// 005fd64f  0fb74d30             movzx ecx, word ptr [ebp + 0x30]
// 005fd653  5f                   pop edi
// 005fd654  0fbfc1               movsx eax, cx
// 005fd657  83c101               add ecx, 1
// 005fd65a  5e                   pop esi
// 005fd65b  66894d30             mov word ptr [ebp + 0x30], cx
// 005fd65f  5d                   pop ebp
// 005fd660  5b                   pop ebx
// 005fd661  c3                   ret 
// library lua-5.1.2/roc_espeon_nativeparlistcontext810a97d37dd18cf0.cpp (function ?registerlocalvar@@YAHPAULexState@@PATTString@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.2 roc_espeon_nativeparlistcontext810a97d37dd18cf0.cpp
