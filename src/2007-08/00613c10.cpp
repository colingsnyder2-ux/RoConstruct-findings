// roc 2007-08 00613c10  unit: seg_00610000  size: 162 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00613c10
//
// 00613c10  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00613c14  53                   push ebx
// 00613c15  55                   push ebp
// 00613c16  8b6930               mov ebp, dword ptr [ecx + 0x30]
// 00613c19  0fbf4530             movsx eax, word ptr [ebp + 0x30]
// 00613c1d  56                   push esi
// 00613c1e  57                   push edi
// 00613c1f  8b7d00               mov edi, dword ptr [ebp]
// 00613c22  8b7738               mov esi, dword ptr [edi + 0x38]
// 00613c25  8d5f38               lea ebx, [edi + 0x38]
// 00613c28  83c001               add eax, 1
// 00613c2b  3bc6                 cmp eax, esi
// 00613c2d  7e24                 jle 0x613c53
// 00613c2f  8b5718               mov edx, dword ptr [edi + 0x18]
// 00613c32  8b4134               mov eax, dword ptr [ecx + 0x34]
// 00613c35  68f8337c00           push 0x7c33f8
// 00613c3a  68ff7f0000           push 0x7fff
// 00613c3f  6a0c                 push 0xc
// 00613c41  53                   push ebx
// 00613c42  52                   push edx
// 00613c43  50                   push eax
// 00613c44  e8f7fdffff           call 0x613a40
// 00613c49  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00613c4d  83c418               add esp, 0x18
// 00613c50  894718               mov dword ptr [edi + 0x18], eax
// 00613c53  3b33                 cmp esi, dword ptr [ebx]
// 00613c55  7d1d                 jge 0x613c74
// 00613c57  8d0476               lea eax, [esi + esi*2]
// 00613c5a  03c0                 add eax, eax
// 00613c5c  03c0                 add eax, eax
// 00613c5e  8bff                 mov edi, edi
// 00613c60  8b5718               mov edx, dword ptr [edi + 0x18]
// 00613c63  c7041000000000       mov dword ptr [eax + edx], 0
// 00613c6a  83c601               add esi, 1
// 00613c6d  83c00c               add eax, 0xc
// 00613c70  3b33                 cmp esi, dword ptr [ebx]
// 00613c72  7cec                 jl 0x613c60
// 00613c74  0fbf4530             movsx eax, word ptr [ebp + 0x30]
// 00613c78  8b7718               mov esi, dword ptr [edi + 0x18]
// 00613c7b  8d1440               lea edx, [eax + eax*2]
// 00613c7e  8b442418             mov eax, dword ptr [esp + 0x18]
// 00613c82  890496               mov dword ptr [esi + edx*4], eax
// 00613c85  f6400503             test byte ptr [eax + 5], 3
// 00613c89  7414                 je 0x613c9f
// 00613c8b  f6470504             test byte ptr [edi + 5], 4
// 00613c8f  740e                 je 0x613c9f
// 00613c91  50                   push eax
// 00613c92  8b4134               mov eax, dword ptr [ecx + 0x34]
// 00613c95  57                   push edi
// 00613c96  50                   push eax
// 00613c97  e854c2ffff           call 0x60fef0
// 00613c9c  83c40c               add esp, 0xc
// 00613c9f  0fb74d30             movzx ecx, word ptr [ebp + 0x30]
// 00613ca3  5f                   pop edi
// 00613ca4  0fbfc1               movsx eax, cx
// 00613ca7  83c101               add ecx, 1
// 00613caa  5e                   pop esi
// 00613cab  66894d30             mov word ptr [ebp + 0x30], cx
// 00613caf  5d                   pop ebp
// 00613cb0  5b                   pop ebx
// 00613cb1  c3                   ret 
// library lua-5.1.2/roc_espeon_nativeparlistcontext810a97d37dd18cf0.cpp (function ?registerlocalvar@@YAHPAULexState@@PATTString@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.2 roc_espeon_nativeparlistcontext810a97d37dd18cf0.cpp
