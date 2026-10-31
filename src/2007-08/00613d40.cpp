// roc 2007-08 00613d40  unit: seg_00610000  size: 327 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00613d40
//
// 00613d40  83ec08               sub esp, 8
// 00613d43  53                   push ebx
// 00613d44  55                   push ebp
// 00613d45  56                   push esi
// 00613d46  8b37                 mov esi, dword ptr [edi]
// 00613d48  0fb64e48             movzx ecx, byte ptr [esi + 0x48]
// 00613d4c  8b6e24               mov ebp, dword ptr [esi + 0x24]
// 00613d4f  8d5e24               lea ebx, [esi + 0x24]
// 00613d52  33c0                 xor eax, eax
// 00613d54  85c9                 test ecx, ecx
// 00613d56  896c2410             mov dword ptr [esp + 0x10], ebp
// 00613d5a  7e40                 jle 0x613d9c
// 00613d5c  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00613d60  8b11                 mov edx, dword ptr [ecx]
// 00613d62  8954240c             mov dword ptr [esp + 0xc], edx
// 00613d66  8d4f34               lea ecx, [edi + 0x34]
// 00613d69  8da42400000000       lea esp, [esp]
// 00613d70  0fb651ff             movzx edx, byte ptr [ecx - 1]
// 00613d74  3b54240c             cmp edx, dword ptr [esp + 0xc]
// 00613d78  7510                 jne 0x613d8a
// 00613d7a  0fb611               movzx edx, byte ptr [ecx]
// 00613d7d  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 00613d81  3b5508               cmp edx, dword ptr [ebp + 8]
// 00613d84  0f84f6000000         je 0x613e80
// 00613d8a  0fb65648             movzx edx, byte ptr [esi + 0x48]
// 00613d8e  83c001               add eax, 1
// 00613d91  83c102               add ecx, 2
// 00613d94  3bc2                 cmp eax, edx
// 00613d96  7cd8                 jl 0x613d70
// 00613d98  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 00613d9c  0fb64648             movzx eax, byte ptr [esi + 0x48]
// 00613da0  83c001               add eax, 1
// 00613da3  83f83c               cmp eax, 0x3c
// 00613da6  7e42                 jle 0x613dea
// 00613da8  8b463c               mov eax, dword ptr [esi + 0x3c]
// 00613dab  85c0                 test eax, eax
// 00613dad  6824347c00           push 0x7c3424
// 00613db2  6a3c                 push 0x3c
// 00613db4  7513                 jne 0x613dc9
// 00613db6  8b4710               mov eax, dword ptr [edi + 0x10]
// 00613db9  68a8337c00           push 0x7c33a8
// 00613dbe  50                   push eax
// 00613dbf  e8ccb0ffff           call 0x60ee90
// 00613dc4  83c410               add esp, 0x10
// 00613dc7  eb12                 jmp 0x613ddb
// 00613dc9  8b4f10               mov ecx, dword ptr [edi + 0x10]
// 00613dcc  50                   push eax
// 00613dcd  6880337c00           push 0x7c3380
// 00613dd2  51                   push ecx
// 00613dd3  e8b8b0ffff           call 0x60ee90
// 00613dd8  83c414               add esp, 0x14
// 00613ddb  8b570c               mov edx, dword ptr [edi + 0xc]
// 00613dde  6a00                 push 0
// 00613de0  50                   push eax
// 00613de1  52                   push edx
// 00613de2  e839370000           call 0x617520
// 00613de7  83c40c               add esp, 0xc
// 00613dea  0fb64648             movzx eax, byte ptr [esi + 0x48]
// 00613dee  83c001               add eax, 1
// 00613df1  3b03                 cmp eax, dword ptr [ebx]
// 00613df3  7e20                 jle 0x613e15
// 00613df5  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 00613df8  8b5710               mov edx, dword ptr [edi + 0x10]
// 00613dfb  6854597800           push 0x785954
// 00613e00  68fdffff7f           push 0x7ffffffd
// 00613e05  6a04                 push 4
// 00613e07  53                   push ebx
// 00613e08  51                   push ecx
// 00613e09  52                   push edx
// 00613e0a  e831fcffff           call 0x613a40
// 00613e0f  83c418               add esp, 0x18
// 00613e12  89461c               mov dword ptr [esi + 0x1c], eax
// 00613e15  3b2b                 cmp ebp, dword ptr [ebx]
// 00613e17  7d18                 jge 0x613e31
// 00613e19  8da42400000000       lea esp, [esp]
// 00613e20  8b461c               mov eax, dword ptr [esi + 0x1c]
// 00613e23  c704a800000000       mov dword ptr [eax + ebp*4], 0
// 00613e2a  83c501               add ebp, 1
// 00613e2d  3b2b                 cmp ebp, dword ptr [ebx]
// 00613e2f  7cef                 jl 0x613e20
// 00613e31  0fb64e48             movzx ecx, byte ptr [esi + 0x48]
// 00613e35  8b442418             mov eax, dword ptr [esp + 0x18]
// 00613e39  8b561c               mov edx, dword ptr [esi + 0x1c]
// 00613e3c  89048a               mov dword ptr [edx + ecx*4], eax
// 00613e3f  f6400503             test byte ptr [eax + 5], 3
// 00613e43  7414                 je 0x613e59
// 00613e45  f6460504             test byte ptr [esi + 5], 4
// 00613e49  740e                 je 0x613e59
// 00613e4b  50                   push eax
// 00613e4c  8b4710               mov eax, dword ptr [edi + 0x10]
// 00613e4f  56                   push esi
// 00613e50  50                   push eax
// 00613e51  e89ac0ffff           call 0x60fef0
// 00613e56  83c40c               add esp, 0xc
// 00613e59  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00613e5d  0fb610               movzx edx, byte ptr [eax]
// 00613e60  0fb64e48             movzx ecx, byte ptr [esi + 0x48]
// 00613e64  88544f33             mov byte ptr [edi + ecx*2 + 0x33], dl
// 00613e68  0fb64e48             movzx ecx, byte ptr [esi + 0x48]
// 00613e6c  0fb65008             movzx edx, byte ptr [eax + 8]
// 00613e70  88544f34             mov byte ptr [edi + ecx*2 + 0x34], dl
// 00613e74  8a4e48               mov cl, byte ptr [esi + 0x48]
// 00613e77  0fb6c1               movzx eax, cl
// 00613e7a  80c101               add cl, 1
// 00613e7d  884e48               mov byte ptr [esi + 0x48], cl
// 00613e80  5e                   pop esi
// 00613e81  5d                   pop ebp
// 00613e82  5b                   pop ebx
// 00613e83  83c408               add esp, 8
// 00613e86  c3                   ret 
// library lua-5.1.2/roc_espeon_nativeparlistcontext810a97d37dd18cf0.cpp (function ?indexupvalue@@YAHPAUFuncState@@PATTString@@PAUexpdesc@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.2 roc_espeon_nativeparlistcontext810a97d37dd18cf0.cpp
