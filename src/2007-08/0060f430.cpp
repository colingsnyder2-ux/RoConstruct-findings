// roc 2007-08 0060f430  unit: RBX::Ball  size: 148 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0060f430
//
// 0060f430  8b460c               mov eax, dword ptr [esi + 0xc]
// 0060f433  f6400503             test byte ptr [eax + 5], 3
// 0060f437  740a                 je 0x60f443
// 0060f439  50                   push eax
// 0060f43a  53                   push ebx
// 0060f43b  e8d0fbffff           call 0x60f010
// 0060f440  83c408               add esp, 8
// 0060f443  807e0600             cmp byte ptr [esi + 6], 0
// 0060f447  55                   push ebp
// 0060f448  57                   push edi
// 0060f449  7434                 je 0x60f47f
// 0060f44b  33ed                 xor ebp, ebp
// 0060f44d  807e0700             cmp byte ptr [esi + 7], 0
// 0060f451  766e                 jbe 0x60f4c1
// 0060f453  8d7e18               lea edi, [esi + 0x18]
// 0060f456  837f0804             cmp dword ptr [edi + 8], 4
// 0060f45a  7c12                 jl 0x60f46e
// 0060f45c  8b07                 mov eax, dword ptr [edi]
// 0060f45e  f6400503             test byte ptr [eax + 5], 3
// 0060f462  740a                 je 0x60f46e
// 0060f464  50                   push eax
// 0060f465  53                   push ebx
// 0060f466  e8a5fbffff           call 0x60f010
// 0060f46b  83c408               add esp, 8
// 0060f46e  0fb64607             movzx eax, byte ptr [esi + 7]
// 0060f472  83c501               add ebp, 1
// 0060f475  83c710               add edi, 0x10
// 0060f478  3be8                 cmp ebp, eax
// 0060f47a  7cda                 jl 0x60f456
// 0060f47c  5f                   pop edi
// 0060f47d  5d                   pop ebp
// 0060f47e  c3                   ret 
// 0060f47f  8b4610               mov eax, dword ptr [esi + 0x10]
// 0060f482  f6400503             test byte ptr [eax + 5], 3
// 0060f486  740a                 je 0x60f492
// 0060f488  50                   push eax
// 0060f489  53                   push ebx
// 0060f48a  e881fbffff           call 0x60f010
// 0060f48f  83c408               add esp, 8
// 0060f492  33ff                 xor edi, edi
// 0060f494  807e0700             cmp byte ptr [esi + 7], 0
// 0060f498  7627                 jbe 0x60f4c1
// 0060f49a  8d6e14               lea ebp, [esi + 0x14]
// 0060f49d  8d4900               lea ecx, [ecx]
// 0060f4a0  8b4500               mov eax, dword ptr [ebp]
// 0060f4a3  f6400503             test byte ptr [eax + 5], 3
// 0060f4a7  740a                 je 0x60f4b3
// 0060f4a9  50                   push eax
// 0060f4aa  53                   push ebx
// 0060f4ab  e860fbffff           call 0x60f010
// 0060f4b0  83c408               add esp, 8
// 0060f4b3  0fb64e07             movzx ecx, byte ptr [esi + 7]
// 0060f4b7  83c701               add edi, 1
// 0060f4ba  83c504               add ebp, 4
// 0060f4bd  3bf9                 cmp edi, ecx
// 0060f4bf  7cdf                 jl 0x60f4a0
// 0060f4c1  5f                   pop edi
// 0060f4c2  5d                   pop ebp
// 0060f4c3  c3                   ret 
// library lua-5.1.4/lgc.c (function _traverseclosure)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lgc.c
