// roc 2009-12 007d19d0  unit: seg_007d0000  size: 158 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007d19d0
//
// 007d19d0  8b4c2404             mov ecx, dword ptr [esp + 4]
// 007d19d4  53                   push ebx
// 007d19d5  55                   push ebp
// 007d19d6  8b6930               mov ebp, dword ptr [ecx + 0x30]
// 007d19d9  0fbf4530             movsx eax, word ptr [ebp + 0x30]
// 007d19dd  56                   push esi
// 007d19de  57                   push edi
// 007d19df  8b7d00               mov edi, dword ptr [ebp]
// 007d19e2  8b7738               mov esi, dword ptr [edi + 0x38]
// 007d19e5  8d5f38               lea ebx, [edi + 0x38]
// 007d19e8  40                   inc eax
// 007d19e9  3bc6                 cmp eax, esi
// 007d19eb  7e24                 jle 0x7d1a11
// 007d19ed  8b5718               mov edx, dword ptr [edi + 0x18]
// 007d19f0  8b4134               mov eax, dword ptr [ecx + 0x34]
// 007d19f3  6858ee9e00           push 0x9eee58
// 007d19f8  68ff7f0000           push 0x7fff
// 007d19fd  6a0c                 push 0xc
// 007d19ff  53                   push ebx
// 007d1a00  52                   push edx
// 007d1a01  50                   push eax
// 007d1a02  e8f9fdffff           call 0x7d1800
// 007d1a07  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 007d1a0b  83c418               add esp, 0x18
// 007d1a0e  894718               mov dword ptr [edi + 0x18], eax
// 007d1a11  3b33                 cmp esi, dword ptr [ebx]
// 007d1a13  7d1d                 jge 0x7d1a32
// 007d1a15  8d0476               lea eax, [esi + esi*2]
// 007d1a18  03c0                 add eax, eax
// 007d1a1a  03c0                 add eax, eax
// 007d1a1c  8d642400             lea esp, [esp]
// 007d1a20  8b5718               mov edx, dword ptr [edi + 0x18]
// 007d1a23  c7041000000000       mov dword ptr [eax + edx], 0
// 007d1a2a  46                   inc esi
// 007d1a2b  83c00c               add eax, 0xc
// 007d1a2e  3b33                 cmp esi, dword ptr [ebx]
// 007d1a30  7cee                 jl 0x7d1a20
// 007d1a32  0fbf4530             movsx eax, word ptr [ebp + 0x30]
// 007d1a36  8b7718               mov esi, dword ptr [edi + 0x18]
// 007d1a39  8d1440               lea edx, [eax + eax*2]
// 007d1a3c  8b442418             mov eax, dword ptr [esp + 0x18]
// 007d1a40  890496               mov dword ptr [esi + edx*4], eax
// 007d1a43  f6400503             test byte ptr [eax + 5], 3
// 007d1a47  7414                 je 0x7d1a5d
// 007d1a49  f6470504             test byte ptr [edi + 5], 4
// 007d1a4d  740e                 je 0x7d1a5d
// 007d1a4f  50                   push eax
// 007d1a50  8b4134               mov eax, dword ptr [ecx + 0x34]
// 007d1a53  57                   push edi
// 007d1a54  50                   push eax
// 007d1a55  e8a6c2ffff           call 0x7cdd00
// 007d1a5a  83c40c               add esp, 0xc
// 007d1a5d  0fb74d30             movzx ecx, word ptr [ebp + 0x30]
// 007d1a61  5f                   pop edi
// 007d1a62  0fbfc1               movsx eax, cx
// 007d1a65  41                   inc ecx
// 007d1a66  5e                   pop esi
// 007d1a67  66894d30             mov word ptr [ebp + 0x30], cx
// 007d1a6b  5d                   pop ebp
// 007d1a6c  5b                   pop ebx
// 007d1a6d  c3                   ret 
// library lua-5.1.2/roc_espeon_nativeparlistcontext810a97d37dd18cf0.cpp (function ?registerlocalvar@@YAHPAULexState@@PATTString@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.2 roc_espeon_nativeparlistcontext810a97d37dd18cf0.cpp
