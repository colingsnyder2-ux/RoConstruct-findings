// roc 2007-03 005fd6f0  unit: seg_005f0000  size: 327 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005fd6f0
//
// 005fd6f0  83ec08               sub esp, 8
// 005fd6f3  53                   push ebx
// 005fd6f4  55                   push ebp
// 005fd6f5  56                   push esi
// 005fd6f6  8b37                 mov esi, dword ptr [edi]
// 005fd6f8  0fb64e48             movzx ecx, byte ptr [esi + 0x48]
// 005fd6fc  8b6e24               mov ebp, dword ptr [esi + 0x24]
// 005fd6ff  8d5e24               lea ebx, [esi + 0x24]
// 005fd702  33c0                 xor eax, eax
// 005fd704  85c9                 test ecx, ecx
// 005fd706  896c2410             mov dword ptr [esp + 0x10], ebp
// 005fd70a  7e40                 jle 0x5fd74c
// 005fd70c  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005fd710  8b11                 mov edx, dword ptr [ecx]
// 005fd712  8954240c             mov dword ptr [esp + 0xc], edx
// 005fd716  8d4f34               lea ecx, [edi + 0x34]
// 005fd719  8da42400000000       lea esp, [esp]
// 005fd720  0fb651ff             movzx edx, byte ptr [ecx - 1]
// 005fd724  3b54240c             cmp edx, dword ptr [esp + 0xc]
// 005fd728  7510                 jne 0x5fd73a
// 005fd72a  0fb611               movzx edx, byte ptr [ecx]
// 005fd72d  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 005fd731  3b5508               cmp edx, dword ptr [ebp + 8]
// 005fd734  0f84f6000000         je 0x5fd830
// 005fd73a  0fb65648             movzx edx, byte ptr [esi + 0x48]
// 005fd73e  83c001               add eax, 1
// 005fd741  83c102               add ecx, 2
// 005fd744  3bc2                 cmp eax, edx
// 005fd746  7cd8                 jl 0x5fd720
// 005fd748  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 005fd74c  0fb64648             movzx eax, byte ptr [esi + 0x48]
// 005fd750  83c001               add eax, 1
// 005fd753  83f83c               cmp eax, 0x3c
// 005fd756  7e42                 jle 0x5fd79a
// 005fd758  8b463c               mov eax, dword ptr [esi + 0x3c]
// 005fd75b  85c0                 test eax, eax
// 005fd75d  68dc047c00           push 0x7c04dc
// 005fd762  6a3c                 push 0x3c
// 005fd764  7513                 jne 0x5fd779
// 005fd766  8b4710               mov eax, dword ptr [edi + 0x10]
// 005fd769  6860047c00           push 0x7c0460
// 005fd76e  50                   push eax
// 005fd76f  e8ccb0ffff           call 0x5f8840
// 005fd774  83c410               add esp, 0x10
// 005fd777  eb12                 jmp 0x5fd78b
// 005fd779  8b4f10               mov ecx, dword ptr [edi + 0x10]
// 005fd77c  50                   push eax
// 005fd77d  6838047c00           push 0x7c0438
// 005fd782  51                   push ecx
// 005fd783  e8b8b0ffff           call 0x5f8840
// 005fd788  83c414               add esp, 0x14
// 005fd78b  8b570c               mov edx, dword ptr [edi + 0xc]
// 005fd78e  6a00                 push 0
// 005fd790  50                   push eax
// 005fd791  52                   push edx
// 005fd792  e839370000           call 0x600ed0
// 005fd797  83c40c               add esp, 0xc
// 005fd79a  0fb64648             movzx eax, byte ptr [esi + 0x48]
// 005fd79e  83c001               add eax, 1
// 005fd7a1  3b03                 cmp eax, dword ptr [ebx]
// 005fd7a3  7e20                 jle 0x5fd7c5
// 005fd7a5  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 005fd7a8  8b5710               mov edx, dword ptr [edi + 0x10]
// 005fd7ab  68ac497800           push 0x7849ac
// 005fd7b0  68fdffff7f           push 0x7ffffffd
// 005fd7b5  6a04                 push 4
// 005fd7b7  53                   push ebx
// 005fd7b8  51                   push ecx
// 005fd7b9  52                   push edx
// 005fd7ba  e831fcffff           call 0x5fd3f0
// 005fd7bf  83c418               add esp, 0x18
// 005fd7c2  89461c               mov dword ptr [esi + 0x1c], eax
// 005fd7c5  3b2b                 cmp ebp, dword ptr [ebx]
// 005fd7c7  7d18                 jge 0x5fd7e1
// 005fd7c9  8da42400000000       lea esp, [esp]
// 005fd7d0  8b461c               mov eax, dword ptr [esi + 0x1c]
// 005fd7d3  c704a800000000       mov dword ptr [eax + ebp*4], 0
// 005fd7da  83c501               add ebp, 1
// 005fd7dd  3b2b                 cmp ebp, dword ptr [ebx]
// 005fd7df  7cef                 jl 0x5fd7d0
// 005fd7e1  0fb64e48             movzx ecx, byte ptr [esi + 0x48]
// 005fd7e5  8b442418             mov eax, dword ptr [esp + 0x18]
// 005fd7e9  8b561c               mov edx, dword ptr [esi + 0x1c]
// 005fd7ec  89048a               mov dword ptr [edx + ecx*4], eax
// 005fd7ef  f6400503             test byte ptr [eax + 5], 3
// 005fd7f3  7414                 je 0x5fd809
// 005fd7f5  f6460504             test byte ptr [esi + 5], 4
// 005fd7f9  740e                 je 0x5fd809
// 005fd7fb  50                   push eax
// 005fd7fc  8b4710               mov eax, dword ptr [edi + 0x10]
// 005fd7ff  56                   push esi
// 005fd800  50                   push eax
// 005fd801  e89ac0ffff           call 0x5f98a0
// 005fd806  83c40c               add esp, 0xc
// 005fd809  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 005fd80d  0fb610               movzx edx, byte ptr [eax]
// 005fd810  0fb64e48             movzx ecx, byte ptr [esi + 0x48]
// 005fd814  88544f33             mov byte ptr [edi + ecx*2 + 0x33], dl
// 005fd818  0fb64e48             movzx ecx, byte ptr [esi + 0x48]
// 005fd81c  0fb65008             movzx edx, byte ptr [eax + 8]
// 005fd820  88544f34             mov byte ptr [edi + ecx*2 + 0x34], dl
// 005fd824  8a4e48               mov cl, byte ptr [esi + 0x48]
// 005fd827  0fb6c1               movzx eax, cl
// 005fd82a  80c101               add cl, 1
// 005fd82d  884e48               mov byte ptr [esi + 0x48], cl
// 005fd830  5e                   pop esi
// 005fd831  5d                   pop ebp
// 005fd832  5b                   pop ebx
// 005fd833  83c408               add esp, 8
// 005fd836  c3                   ret 
// library lua-5.1.2/roc_espeon_nativeparlistcontext810a97d37dd18cf0.cpp (function ?indexupvalue@@YAHPAUFuncState@@PATTString@@PAUexpdesc@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.2 roc_espeon_nativeparlistcontext810a97d37dd18cf0.cpp
