// roc 2009-12 007d1af0  unit: seg_007d0000  size: 311 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007d1af0
//
// 007d1af0  83ec08               sub esp, 8
// 007d1af3  53                   push ebx
// 007d1af4  55                   push ebp
// 007d1af5  56                   push esi
// 007d1af6  8b37                 mov esi, dword ptr [edi]
// 007d1af8  0fb64e48             movzx ecx, byte ptr [esi + 0x48]
// 007d1afc  8b6e24               mov ebp, dword ptr [esi + 0x24]
// 007d1aff  8d5e24               lea ebx, [esi + 0x24]
// 007d1b02  33c0                 xor eax, eax
// 007d1b04  896c2410             mov dword ptr [esp + 0x10], ebp
// 007d1b08  85c9                 test ecx, ecx
// 007d1b0a  7e3e                 jle 0x7d1b4a
// 007d1b0c  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 007d1b10  8b11                 mov edx, dword ptr [ecx]
// 007d1b12  8954240c             mov dword ptr [esp + 0xc], edx
// 007d1b16  8d4f34               lea ecx, [edi + 0x34]
// 007d1b19  8da42400000000       lea esp, [esp]
// 007d1b20  0fb651ff             movzx edx, byte ptr [ecx - 1]
// 007d1b24  3b54240c             cmp edx, dword ptr [esp + 0xc]
// 007d1b28  7510                 jne 0x7d1b3a
// 007d1b2a  0fb611               movzx edx, byte ptr [ecx]
// 007d1b2d  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 007d1b31  3b5508               cmp edx, dword ptr [ebp + 8]
// 007d1b34  0f84e6000000         je 0x7d1c20
// 007d1b3a  0fb65648             movzx edx, byte ptr [esi + 0x48]
// 007d1b3e  40                   inc eax
// 007d1b3f  83c102               add ecx, 2
// 007d1b42  3bc2                 cmp eax, edx
// 007d1b44  7cda                 jl 0x7d1b20
// 007d1b46  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 007d1b4a  0fb64648             movzx eax, byte ptr [esi + 0x48]
// 007d1b4e  40                   inc eax
// 007d1b4f  83f83c               cmp eax, 0x3c
// 007d1b52  7e42                 jle 0x7d1b96
// 007d1b54  8b463c               mov eax, dword ptr [esi + 0x3c]
// 007d1b57  6884ee9e00           push 0x9eee84
// 007d1b5c  6a3c                 push 0x3c
// 007d1b5e  85c0                 test eax, eax
// 007d1b60  7513                 jne 0x7d1b75
// 007d1b62  8b4710               mov eax, dword ptr [edi + 0x10]
// 007d1b65  6808ee9e00           push 0x9eee08
// 007d1b6a  50                   push eax
// 007d1b6b  e8108afcff           call 0x79a580
// 007d1b70  83c410               add esp, 0x10
// 007d1b73  eb12                 jmp 0x7d1b87
// 007d1b75  8b4f10               mov ecx, dword ptr [edi + 0x10]
// 007d1b78  50                   push eax
// 007d1b79  68e0ed9e00           push 0x9eede0
// 007d1b7e  51                   push ecx
// 007d1b7f  e8fc89fcff           call 0x79a580
// 007d1b84  83c414               add esp, 0x14
// 007d1b87  8b570c               mov edx, dword ptr [edi + 0xc]
// 007d1b8a  6a00                 push 0
// 007d1b8c  50                   push eax
// 007d1b8d  52                   push edx
// 007d1b8e  e80d370000           call 0x7d52a0
// 007d1b93  83c40c               add esp, 0xc
// 007d1b96  0fb64648             movzx eax, byte ptr [esi + 0x48]
// 007d1b9a  40                   inc eax
// 007d1b9b  3b03                 cmp eax, dword ptr [ebx]
// 007d1b9d  7e20                 jle 0x7d1bbf
// 007d1b9f  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 007d1ba2  8b5710               mov edx, dword ptr [edi + 0x10]
// 007d1ba5  6856fd9900           push 0x99fd56
// 007d1baa  68fdffff7f           push 0x7ffffffd
// 007d1baf  6a04                 push 4
// 007d1bb1  53                   push ebx
// 007d1bb2  51                   push ecx
// 007d1bb3  52                   push edx
// 007d1bb4  e847fcffff           call 0x7d1800
// 007d1bb9  83c418               add esp, 0x18
// 007d1bbc  89461c               mov dword ptr [esi + 0x1c], eax
// 007d1bbf  3b2b                 cmp ebp, dword ptr [ebx]
// 007d1bc1  7d0f                 jge 0x7d1bd2
// 007d1bc3  8b461c               mov eax, dword ptr [esi + 0x1c]
// 007d1bc6  c704a800000000       mov dword ptr [eax + ebp*4], 0
// 007d1bcd  45                   inc ebp
// 007d1bce  3b2b                 cmp ebp, dword ptr [ebx]
// 007d1bd0  7cf1                 jl 0x7d1bc3
// 007d1bd2  0fb64e48             movzx ecx, byte ptr [esi + 0x48]
// 007d1bd6  8b442418             mov eax, dword ptr [esp + 0x18]
// 007d1bda  8b561c               mov edx, dword ptr [esi + 0x1c]
// 007d1bdd  89048a               mov dword ptr [edx + ecx*4], eax
// 007d1be0  f6400503             test byte ptr [eax + 5], 3
// 007d1be4  7414                 je 0x7d1bfa
// 007d1be6  f6460504             test byte ptr [esi + 5], 4
// 007d1bea  740e                 je 0x7d1bfa
// 007d1bec  50                   push eax
// 007d1bed  8b4710               mov eax, dword ptr [edi + 0x10]
// 007d1bf0  56                   push esi
// 007d1bf1  50                   push eax
// 007d1bf2  e809c1ffff           call 0x7cdd00
// 007d1bf7  83c40c               add esp, 0xc
// 007d1bfa  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 007d1bfe  0fb610               movzx edx, byte ptr [eax]
// 007d1c01  0fb64e48             movzx ecx, byte ptr [esi + 0x48]
// 007d1c05  88544f33             mov byte ptr [edi + ecx*2 + 0x33], dl
// 007d1c09  0fb64e48             movzx ecx, byte ptr [esi + 0x48]
// 007d1c0d  0fb65008             movzx edx, byte ptr [eax + 8]
// 007d1c11  88544f34             mov byte ptr [edi + ecx*2 + 0x34], dl
// 007d1c15  8a4e48               mov cl, byte ptr [esi + 0x48]
// 007d1c18  0fb6c1               movzx eax, cl
// 007d1c1b  fec1                 inc cl
// 007d1c1d  884e48               mov byte ptr [esi + 0x48], cl
// 007d1c20  5e                   pop esi
// 007d1c21  5d                   pop ebp
// 007d1c22  5b                   pop ebx
// 007d1c23  83c408               add esp, 8
// 007d1c26  c3                   ret 
// library lua-5.1.2/roc_espeon_nativeparlistcontext810a97d37dd18cf0.cpp (function ?indexupvalue@@YAHPAUFuncState@@PATTString@@PAUexpdesc@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.2 roc_espeon_nativeparlistcontext810a97d37dd18cf0.cpp
