// roc 2011-06 007db060  unit: seg_007d0000  size: 158 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007db060
//
// 007db060  8b4c2404             mov ecx, dword ptr [esp + 4]
// 007db064  53                   push ebx
// 007db065  55                   push ebp
// 007db066  8b6930               mov ebp, dword ptr [ecx + 0x30]
// 007db069  0fbf4530             movsx eax, word ptr [ebp + 0x30]
// 007db06d  56                   push esi
// 007db06e  57                   push edi
// 007db06f  8b7d00               mov edi, dword ptr [ebp]
// 007db072  8b7738               mov esi, dword ptr [edi + 0x38]
// 007db075  8d5f38               lea ebx, [edi + 0x38]
// 007db078  40                   inc eax
// 007db079  3bc6                 cmp eax, esi
// 007db07b  7e24                 jle 0x7db0a1
// 007db07d  8b5718               mov edx, dword ptr [edi + 0x18]
// 007db080  8b4134               mov eax, dword ptr [ecx + 0x34]
// 007db083  68b4e1ab00           push 0xabe1b4
// 007db088  68ff7f0000           push 0x7fff
// 007db08d  6a0c                 push 0xc
// 007db08f  53                   push ebx
// 007db090  52                   push edx
// 007db091  50                   push eax
// 007db092  e8f9fdffff           call 0x7dae90
// 007db097  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 007db09b  83c418               add esp, 0x18
// 007db09e  894718               mov dword ptr [edi + 0x18], eax
// 007db0a1  3b33                 cmp esi, dword ptr [ebx]
// 007db0a3  7d1d                 jge 0x7db0c2
// 007db0a5  8d0476               lea eax, [esi + esi*2]
// 007db0a8  03c0                 add eax, eax
// 007db0aa  03c0                 add eax, eax
// 007db0ac  8d642400             lea esp, [esp]
// 007db0b0  8b5718               mov edx, dword ptr [edi + 0x18]
// 007db0b3  c7041000000000       mov dword ptr [eax + edx], 0
// 007db0ba  46                   inc esi
// 007db0bb  83c00c               add eax, 0xc
// 007db0be  3b33                 cmp esi, dword ptr [ebx]
// 007db0c0  7cee                 jl 0x7db0b0
// 007db0c2  0fbf4530             movsx eax, word ptr [ebp + 0x30]
// 007db0c6  8b7718               mov esi, dword ptr [edi + 0x18]
// 007db0c9  8d1440               lea edx, [eax + eax*2]
// 007db0cc  8b442418             mov eax, dword ptr [esp + 0x18]
// 007db0d0  890496               mov dword ptr [esi + edx*4], eax
// 007db0d3  f6400503             test byte ptr [eax + 5], 3
// 007db0d7  7414                 je 0x7db0ed
// 007db0d9  f6470504             test byte ptr [edi + 5], 4
// 007db0dd  740e                 je 0x7db0ed
// 007db0df  50                   push eax
// 007db0e0  8b4134               mov eax, dword ptr [ecx + 0x34]
// 007db0e3  57                   push edi
// 007db0e4  50                   push eax
// 007db0e5  e8a6c1ffff           call 0x7d7290
// 007db0ea  83c40c               add esp, 0xc
// 007db0ed  0fb74d30             movzx ecx, word ptr [ebp + 0x30]
// 007db0f1  5f                   pop edi
// 007db0f2  0fbfc1               movsx eax, cx
// 007db0f5  41                   inc ecx
// 007db0f6  5e                   pop esi
// 007db0f7  66894d30             mov word ptr [ebp + 0x30], cx
// 007db0fb  5d                   pop ebp
// 007db0fc  5b                   pop ebx
// 007db0fd  c3                   ret 
// library lua-5.1.2/roc_espeon_nativeparlistcontext810a97d37dd18cf0.cpp (function ?registerlocalvar@@YAHPAULexState@@PATTString@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.2 roc_espeon_nativeparlistcontext810a97d37dd18cf0.cpp
