// roc 2009-06 006edaa0  unit: seg_006e0000  size: 311 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006edaa0
//
// 006edaa0  83ec08               sub esp, 8
// 006edaa3  53                   push ebx
// 006edaa4  55                   push ebp
// 006edaa5  56                   push esi
// 006edaa6  8b37                 mov esi, dword ptr [edi]
// 006edaa8  0fb64e48             movzx ecx, byte ptr [esi + 0x48]
// 006edaac  8b6e24               mov ebp, dword ptr [esi + 0x24]
// 006edaaf  8d5e24               lea ebx, [esi + 0x24]
// 006edab2  33c0                 xor eax, eax
// 006edab4  896c2410             mov dword ptr [esp + 0x10], ebp
// 006edab8  85c9                 test ecx, ecx
// 006edaba  7e3e                 jle 0x6edafa
// 006edabc  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 006edac0  8b11                 mov edx, dword ptr [ecx]
// 006edac2  8954240c             mov dword ptr [esp + 0xc], edx
// 006edac6  8d4f34               lea ecx, [edi + 0x34]
// 006edac9  8da42400000000       lea esp, [esp]
// 006edad0  0fb651ff             movzx edx, byte ptr [ecx - 1]
// 006edad4  3b54240c             cmp edx, dword ptr [esp + 0xc]
// 006edad8  7510                 jne 0x6edaea
// 006edada  0fb611               movzx edx, byte ptr [ecx]
// 006edadd  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 006edae1  3b5508               cmp edx, dword ptr [ebp + 8]
// 006edae4  0f84e6000000         je 0x6edbd0
// 006edaea  0fb65648             movzx edx, byte ptr [esi + 0x48]
// 006edaee  40                   inc eax
// 006edaef  83c102               add ecx, 2
// 006edaf2  3bc2                 cmp eax, edx
// 006edaf4  7cda                 jl 0x6edad0
// 006edaf6  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 006edafa  0fb64648             movzx eax, byte ptr [esi + 0x48]
// 006edafe  40                   inc eax
// 006edaff  83f83c               cmp eax, 0x3c
// 006edb02  7e42                 jle 0x6edb46
// 006edb04  8b463c               mov eax, dword ptr [esi + 0x3c]
// 006edb07  686cde8e00           push 0x8ede6c
// 006edb0c  6a3c                 push 0x3c
// 006edb0e  85c0                 test eax, eax
// 006edb10  7513                 jne 0x6edb25
// 006edb12  8b4710               mov eax, dword ptr [edi + 0x10]
// 006edb15  68f0dd8e00           push 0x8eddf0
// 006edb1a  50                   push eax
// 006edb1b  e880b5fdff           call 0x6c90a0
// 006edb20  83c410               add esp, 0x10
// 006edb23  eb12                 jmp 0x6edb37
// 006edb25  8b4f10               mov ecx, dword ptr [edi + 0x10]
// 006edb28  50                   push eax
// 006edb29  68c8dd8e00           push 0x8eddc8
// 006edb2e  51                   push ecx
// 006edb2f  e86cb5fdff           call 0x6c90a0
// 006edb34  83c414               add esp, 0x14
// 006edb37  8b570c               mov edx, dword ptr [edi + 0xc]
// 006edb3a  6a00                 push 0
// 006edb3c  50                   push eax
// 006edb3d  52                   push edx
// 006edb3e  e80d370000           call 0x6f1250
// 006edb43  83c40c               add esp, 0xc
// 006edb46  0fb64648             movzx eax, byte ptr [esi + 0x48]
// 006edb4a  40                   inc eax
// 006edb4b  3b03                 cmp eax, dword ptr [ebx]
// 006edb4d  7e20                 jle 0x6edb6f
// 006edb4f  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 006edb52  8b5710               mov edx, dword ptr [edi + 0x10]
// 006edb55  6816d28a00           push 0x8ad216
// 006edb5a  68fdffff7f           push 0x7ffffffd
// 006edb5f  6a04                 push 4
// 006edb61  53                   push ebx
// 006edb62  51                   push ecx
// 006edb63  52                   push edx
// 006edb64  e847fcffff           call 0x6ed7b0
// 006edb69  83c418               add esp, 0x18
// 006edb6c  89461c               mov dword ptr [esi + 0x1c], eax
// 006edb6f  3b2b                 cmp ebp, dword ptr [ebx]
// 006edb71  7d0f                 jge 0x6edb82
// 006edb73  8b461c               mov eax, dword ptr [esi + 0x1c]
// 006edb76  c704a800000000       mov dword ptr [eax + ebp*4], 0
// 006edb7d  45                   inc ebp
// 006edb7e  3b2b                 cmp ebp, dword ptr [ebx]
// 006edb80  7cf1                 jl 0x6edb73
// 006edb82  0fb64e48             movzx ecx, byte ptr [esi + 0x48]
// 006edb86  8b442418             mov eax, dword ptr [esp + 0x18]
// 006edb8a  8b561c               mov edx, dword ptr [esi + 0x1c]
// 006edb8d  89048a               mov dword ptr [edx + ecx*4], eax
// 006edb90  f6400503             test byte ptr [eax + 5], 3
// 006edb94  7414                 je 0x6edbaa
// 006edb96  f6460504             test byte ptr [esi + 5], 4
// 006edb9a  740e                 je 0x6edbaa
// 006edb9c  50                   push eax
// 006edb9d  8b4710               mov eax, dword ptr [edi + 0x10]
// 006edba0  56                   push esi
// 006edba1  50                   push eax
// 006edba2  e809c1ffff           call 0x6e9cb0
// 006edba7  83c40c               add esp, 0xc
// 006edbaa  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 006edbae  0fb610               movzx edx, byte ptr [eax]
// 006edbb1  0fb64e48             movzx ecx, byte ptr [esi + 0x48]
// 006edbb5  88544f33             mov byte ptr [edi + ecx*2 + 0x33], dl
// 006edbb9  0fb64e48             movzx ecx, byte ptr [esi + 0x48]
// 006edbbd  0fb65008             movzx edx, byte ptr [eax + 8]
// 006edbc1  88544f34             mov byte ptr [edi + ecx*2 + 0x34], dl
// 006edbc5  8a4e48               mov cl, byte ptr [esi + 0x48]
// 006edbc8  0fb6c1               movzx eax, cl
// 006edbcb  fec1                 inc cl
// 006edbcd  884e48               mov byte ptr [esi + 0x48], cl
// 006edbd0  5e                   pop esi
// 006edbd1  5d                   pop ebp
// 006edbd2  5b                   pop ebx
// 006edbd3  83c408               add esp, 8
// 006edbd6  c3                   ret 
// library lua-5.1.2/roc_espeon_nativeparlistcontext810a97d37dd18cf0.cpp (function ?indexupvalue@@YAHPAUFuncState@@PATTString@@PAUexpdesc@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.2 roc_espeon_nativeparlistcontext810a97d37dd18cf0.cpp
