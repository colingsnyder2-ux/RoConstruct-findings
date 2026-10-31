// roc 2010-06 0077ec20  unit: seg_00770000  size: 158 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0077ec20
//
// 0077ec20  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0077ec24  53                   push ebx
// 0077ec25  55                   push ebp
// 0077ec26  8b6930               mov ebp, dword ptr [ecx + 0x30]
// 0077ec29  0fbf4530             movsx eax, word ptr [ebp + 0x30]
// 0077ec2d  56                   push esi
// 0077ec2e  57                   push edi
// 0077ec2f  8b7d00               mov edi, dword ptr [ebp]
// 0077ec32  8b7738               mov esi, dword ptr [edi + 0x38]
// 0077ec35  8d5f38               lea ebx, [edi + 0x38]
// 0077ec38  40                   inc eax
// 0077ec39  3bc6                 cmp eax, esi
// 0077ec3b  7e24                 jle 0x77ec61
// 0077ec3d  8b5718               mov edx, dword ptr [edi + 0x18]
// 0077ec40  8b4134               mov eax, dword ptr [ecx + 0x34]
// 0077ec43  68c030a500           push 0xa530c0
// 0077ec48  68ff7f0000           push 0x7fff
// 0077ec4d  6a0c                 push 0xc
// 0077ec4f  53                   push ebx
// 0077ec50  52                   push edx
// 0077ec51  50                   push eax
// 0077ec52  e8f9fdffff           call 0x77ea50
// 0077ec57  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0077ec5b  83c418               add esp, 0x18
// 0077ec5e  894718               mov dword ptr [edi + 0x18], eax
// 0077ec61  3b33                 cmp esi, dword ptr [ebx]
// 0077ec63  7d1d                 jge 0x77ec82
// 0077ec65  8d0476               lea eax, [esi + esi*2]
// 0077ec68  03c0                 add eax, eax
// 0077ec6a  03c0                 add eax, eax
// 0077ec6c  8d642400             lea esp, [esp]
// 0077ec70  8b5718               mov edx, dword ptr [edi + 0x18]
// 0077ec73  c7041000000000       mov dword ptr [eax + edx], 0
// 0077ec7a  46                   inc esi
// 0077ec7b  83c00c               add eax, 0xc
// 0077ec7e  3b33                 cmp esi, dword ptr [ebx]
// 0077ec80  7cee                 jl 0x77ec70
// 0077ec82  0fbf4530             movsx eax, word ptr [ebp + 0x30]
// 0077ec86  8b7718               mov esi, dword ptr [edi + 0x18]
// 0077ec89  8d1440               lea edx, [eax + eax*2]
// 0077ec8c  8b442418             mov eax, dword ptr [esp + 0x18]
// 0077ec90  890496               mov dword ptr [esi + edx*4], eax
// 0077ec93  f6400503             test byte ptr [eax + 5], 3
// 0077ec97  7414                 je 0x77ecad
// 0077ec99  f6470504             test byte ptr [edi + 5], 4
// 0077ec9d  740e                 je 0x77ecad
// 0077ec9f  50                   push eax
// 0077eca0  8b4134               mov eax, dword ptr [ecx + 0x34]
// 0077eca3  57                   push edi
// 0077eca4  50                   push eax
// 0077eca5  e8a6c2ffff           call 0x77af50
// 0077ecaa  83c40c               add esp, 0xc
// 0077ecad  0fb74d30             movzx ecx, word ptr [ebp + 0x30]
// 0077ecb1  5f                   pop edi
// 0077ecb2  0fbfc1               movsx eax, cx
// 0077ecb5  41                   inc ecx
// 0077ecb6  5e                   pop esi
// 0077ecb7  66894d30             mov word ptr [ebp + 0x30], cx
// 0077ecbb  5d                   pop ebp
// 0077ecbc  5b                   pop ebx
// 0077ecbd  c3                   ret 
// library lua-5.1.2/roc_espeon_nativeparlistcontext810a97d37dd18cf0.cpp (function ?registerlocalvar@@YAHPAULexState@@PATTString@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.2 roc_espeon_nativeparlistcontext810a97d37dd18cf0.cpp
