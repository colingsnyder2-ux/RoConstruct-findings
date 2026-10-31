// roc 2011-06 007db180  unit: seg_007d0000  size: 311 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007db180
//
// 007db180  83ec08               sub esp, 8
// 007db183  53                   push ebx
// 007db184  55                   push ebp
// 007db185  56                   push esi
// 007db186  8b37                 mov esi, dword ptr [edi]
// 007db188  0fb64e48             movzx ecx, byte ptr [esi + 0x48]
// 007db18c  8b6e24               mov ebp, dword ptr [esi + 0x24]
// 007db18f  8d5e24               lea ebx, [esi + 0x24]
// 007db192  33c0                 xor eax, eax
// 007db194  896c2410             mov dword ptr [esp + 0x10], ebp
// 007db198  85c9                 test ecx, ecx
// 007db19a  7e3e                 jle 0x7db1da
// 007db19c  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 007db1a0  8b11                 mov edx, dword ptr [ecx]
// 007db1a2  8954240c             mov dword ptr [esp + 0xc], edx
// 007db1a6  8d4f34               lea ecx, [edi + 0x34]
// 007db1a9  8da42400000000       lea esp, [esp]
// 007db1b0  0fb651ff             movzx edx, byte ptr [ecx - 1]
// 007db1b4  3b54240c             cmp edx, dword ptr [esp + 0xc]
// 007db1b8  7510                 jne 0x7db1ca
// 007db1ba  0fb611               movzx edx, byte ptr [ecx]
// 007db1bd  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 007db1c1  3b5508               cmp edx, dword ptr [ebp + 8]
// 007db1c4  0f84e6000000         je 0x7db2b0
// 007db1ca  0fb65648             movzx edx, byte ptr [esi + 0x48]
// 007db1ce  40                   inc eax
// 007db1cf  83c102               add ecx, 2
// 007db1d2  3bc2                 cmp eax, edx
// 007db1d4  7cda                 jl 0x7db1b0
// 007db1d6  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 007db1da  0fb64648             movzx eax, byte ptr [esi + 0x48]
// 007db1de  40                   inc eax
// 007db1df  83f83c               cmp eax, 0x3c
// 007db1e2  7e42                 jle 0x7db226
// 007db1e4  8b463c               mov eax, dword ptr [esi + 0x3c]
// 007db1e7  68e0e1ab00           push 0xabe1e0
// 007db1ec  6a3c                 push 0x3c
// 007db1ee  85c0                 test eax, eax
// 007db1f0  7513                 jne 0x7db205
// 007db1f2  8b4710               mov eax, dword ptr [edi + 0x10]
// 007db1f5  6864e1ab00           push 0xabe164
// 007db1fa  50                   push eax
// 007db1fb  e8201cfaff           call 0x77ce20
// 007db200  83c410               add esp, 0x10
// 007db203  eb12                 jmp 0x7db217
// 007db205  8b4f10               mov ecx, dword ptr [edi + 0x10]
// 007db208  50                   push eax
// 007db209  683ce1ab00           push 0xabe13c
// 007db20e  51                   push ecx
// 007db20f  e80c1cfaff           call 0x77ce20
// 007db214  83c414               add esp, 0x14
// 007db217  8b570c               mov edx, dword ptr [edi + 0xc]
// 007db21a  6a00                 push 0
// 007db21c  50                   push eax
// 007db21d  52                   push edx
// 007db21e  e8ad370000           call 0x7de9d0
// 007db223  83c40c               add esp, 0xc
// 007db226  0fb64648             movzx eax, byte ptr [esi + 0x48]
// 007db22a  40                   inc eax
// 007db22b  3b03                 cmp eax, dword ptr [ebx]
// 007db22d  7e20                 jle 0x7db24f
// 007db22f  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 007db232  8b5710               mov edx, dword ptr [edi + 0x10]
// 007db235  68cabea500           push 0xa5beca
// 007db23a  68fdffff7f           push 0x7ffffffd
// 007db23f  6a04                 push 4
// 007db241  53                   push ebx
// 007db242  51                   push ecx
// 007db243  52                   push edx
// 007db244  e847fcffff           call 0x7dae90
// 007db249  83c418               add esp, 0x18
// 007db24c  89461c               mov dword ptr [esi + 0x1c], eax
// 007db24f  3b2b                 cmp ebp, dword ptr [ebx]
// 007db251  7d0f                 jge 0x7db262
// 007db253  8b461c               mov eax, dword ptr [esi + 0x1c]
// 007db256  c704a800000000       mov dword ptr [eax + ebp*4], 0
// 007db25d  45                   inc ebp
// 007db25e  3b2b                 cmp ebp, dword ptr [ebx]
// 007db260  7cf1                 jl 0x7db253
// 007db262  0fb64e48             movzx ecx, byte ptr [esi + 0x48]
// 007db266  8b442418             mov eax, dword ptr [esp + 0x18]
// 007db26a  8b561c               mov edx, dword ptr [esi + 0x1c]
// 007db26d  89048a               mov dword ptr [edx + ecx*4], eax
// 007db270  f6400503             test byte ptr [eax + 5], 3
// 007db274  7414                 je 0x7db28a
// 007db276  f6460504             test byte ptr [esi + 5], 4
// 007db27a  740e                 je 0x7db28a
// 007db27c  50                   push eax
// 007db27d  8b4710               mov eax, dword ptr [edi + 0x10]
// 007db280  56                   push esi
// 007db281  50                   push eax
// 007db282  e809c0ffff           call 0x7d7290
// 007db287  83c40c               add esp, 0xc
// 007db28a  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 007db28e  0fb610               movzx edx, byte ptr [eax]
// 007db291  0fb64e48             movzx ecx, byte ptr [esi + 0x48]
// 007db295  88544f33             mov byte ptr [edi + ecx*2 + 0x33], dl
// 007db299  0fb64e48             movzx ecx, byte ptr [esi + 0x48]
// 007db29d  0fb65008             movzx edx, byte ptr [eax + 8]
// 007db2a1  88544f34             mov byte ptr [edi + ecx*2 + 0x34], dl
// 007db2a5  8a4e48               mov cl, byte ptr [esi + 0x48]
// 007db2a8  0fb6c1               movzx eax, cl
// 007db2ab  fec1                 inc cl
// 007db2ad  884e48               mov byte ptr [esi + 0x48], cl
// 007db2b0  5e                   pop esi
// 007db2b1  5d                   pop ebp
// 007db2b2  5b                   pop ebx
// 007db2b3  83c408               add esp, 8
// 007db2b6  c3                   ret 
// library lua-5.1.2/roc_espeon_nativeparlistcontext810a97d37dd18cf0.cpp (function ?indexupvalue@@YAHPAUFuncState@@PATTString@@PAUexpdesc@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.2 roc_espeon_nativeparlistcontext810a97d37dd18cf0.cpp
