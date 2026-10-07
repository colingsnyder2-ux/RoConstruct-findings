// roc 2007-08 00520b30  unit: seg_00520000  size: 764 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00520b30
//
// 00520b30  83ec10               sub esp, 0x10
// 00520b33  817c241cff000000     cmp dword ptr [esp + 0x1c], 0xff
// 00520b3b  7546                 jne 0x520b83
// 00520b3d  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00520b41  8a810b010000         mov al, byte ptr [ecx + 0x10b]
// 00520b47  3c08                 cmp al, 8
// 00520b49  0fb6c0               movzx eax, al
// 00520b4c  720c                 jb 0x520b5a
// 00520b4e  c1e803               shr eax, 3
// 00520b51  0faf81c8000000       imul eax, dword ptr [ecx + 0xc8]
// 00520b58  eb0d                 jmp 0x520b67
// 00520b5a  0faf81c8000000       imul eax, dword ptr [ecx + 0xc8]
// 00520b61  83c007               add eax, 7
// 00520b64  c1e803               shr eax, 3
// 00520b67  50                   push eax
// 00520b68  8b81ec000000         mov eax, dword ptr [ecx + 0xec]
// 00520b6e  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00520b72  83c001               add eax, 1
// 00520b75  50                   push eax
// 00520b76  51                   push ecx
// 00520b77  e8d0011100           call 0x630d4c
// 00520b7c  83c40c               add esp, 0xc
// 00520b7f  83c410               add esp, 0x10
// 00520b82  c3                   ret 
// 00520b83  8b442414             mov eax, dword ptr [esp + 0x14]
// 00520b87  0fb6880b010000       movzx ecx, byte ptr [eax + 0x10b]
// 00520b8e  53                   push ebx
// 00520b8f  55                   push ebp
// 00520b90  56                   push esi
// 00520b91  8bb0ec000000         mov esi, dword ptr [eax + 0xec]
// 00520b97  8bd1                 mov edx, ecx
// 00520b99  83c601               add esi, 1
// 00520b9c  83ea01               sub edx, 1
// 00520b9f  57                   push edi
// 00520ba0  0f84d1010000         je 0x520d77
// 00520ba6  83ea01               sub edx, 1
// 00520ba9  0f8409010000         je 0x520cb8
// 00520baf  83ea02               sub edx, 2
// 00520bb2  744e                 je 0x520c02
// 00520bb4  8b80c8000000         mov eax, dword ptr [eax + 0xc8]
// 00520bba  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 00520bbe  c1e903               shr ecx, 3
// 00520bc1  85c0                 test eax, eax
// 00520bc3  8bf9                 mov edi, ecx
// 00520bc5  b380                 mov bl, 0x80
// 00520bc7  0f8657020000         jbe 0x520e24
// 00520bcd  89442410             mov dword ptr [esp + 0x10], eax
// 00520bd1  8a54242c             mov dl, byte ptr [esp + 0x2c]
// 00520bd5  84da                 test dl, bl
// 00520bd7  740b                 je 0x520be4
// 00520bd9  57                   push edi
// 00520bda  56                   push esi
// 00520bdb  55                   push ebp
// 00520bdc  e86b011100           call 0x630d4c
// 00520be1  83c40c               add esp, 0xc
// 00520be4  03f7                 add esi, edi
// 00520be6  03ef                 add ebp, edi
// 00520be8  80fb01               cmp bl, 1
// 00520beb  7504                 jne 0x520bf1
// 00520bed  b380                 mov bl, 0x80
// 00520bef  eb02                 jmp 0x520bf3
// 00520bf1  d0eb                 shr bl, 1
// 00520bf3  836c241001           sub dword ptr [esp + 0x10], 1
// 00520bf8  75d7                 jne 0x520bd1
// 00520bfa  5f                   pop edi
// 00520bfb  5e                   pop esi
// 00520bfc  5d                   pop ebp
// 00520bfd  5b                   pop ebx
// 00520bfe  83c410               add esp, 0x10
// 00520c01  c3                   ret 
// 00520c02  f7407000000100       test dword ptr [eax + 0x70], 0x10000
// 00520c09  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 00520c0d  8b88c8000000         mov ecx, dword ptr [eax + 0xc8]
// 00520c13  c744241080000000     mov dword ptr [esp + 0x10], 0x80
// 00520c1b  7411                 je 0x520c2e
// 00520c1d  b804000000           mov eax, 4
// 00520c22  33ed                 xor ebp, ebp
// 00520c24  89442414             mov dword ptr [esp + 0x14], eax
// 00520c28  89442418             mov dword ptr [esp + 0x18], eax
// 00520c2c  eb15                 jmp 0x520c43
// 00520c2e  bd04000000           mov ebp, 4
// 00520c33  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00520c3b  c7442418fcffffff     mov dword ptr [esp + 0x18], 0xfffffffc
// 00520c43  85c9                 test ecx, ecx
// 00520c45  8bd5                 mov edx, ebp
// 00520c47  0f86d7010000         jbe 0x520e24
// 00520c4d  894c241c             mov dword ptr [esp + 0x1c], ecx
// 00520c51  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00520c55  85442410             test dword ptr [esp + 0x10], eax
// 00520c59  7422                 je 0x520c7d
// 00520c5b  0fb606               movzx eax, byte ptr [esi]
// 00520c5e  8aca                 mov cl, dl
// 00520c60  d3e8                 shr eax, cl
// 00520c62  b904000000           mov ecx, 4
// 00520c67  2bca                 sub ecx, edx
// 00520c69  bb0f0f0000           mov ebx, 0xf0f
// 00520c6e  d3fb                 sar ebx, cl
// 00520c70  83e00f               and eax, 0xf
// 00520c73  8bca                 mov ecx, edx
// 00520c75  d2e0                 shl al, cl
// 00520c77  221f                 and bl, byte ptr [edi]
// 00520c79  0ad8                 or bl, al
// 00520c7b  881f                 mov byte ptr [edi], bl
// 00520c7d  3b542414             cmp edx, dword ptr [esp + 0x14]
// 00520c81  750a                 jne 0x520c8d
// 00520c83  83c601               add esi, 1
// 00520c86  8bd5                 mov edx, ebp
// 00520c88  83c701               add edi, 1
// 00520c8b  eb04                 jmp 0x520c91
// 00520c8d  03542418             add edx, dword ptr [esp + 0x18]
// 00520c91  b801000000           mov eax, 1
// 00520c96  39442410             cmp dword ptr [esp + 0x10], eax
// 00520c9a  750a                 jne 0x520ca6
// 00520c9c  c744241080000000     mov dword ptr [esp + 0x10], 0x80
// 00520ca4  eb04                 jmp 0x520caa
// 00520ca6  d17c2410             sar dword ptr [esp + 0x10], 1
// 00520caa  2944241c             sub dword ptr [esp + 0x1c], eax
// 00520cae  75a1                 jne 0x520c51
// 00520cb0  5f                   pop edi
// 00520cb1  5e                   pop esi
// 00520cb2  5d                   pop ebp
// 00520cb3  5b                   pop ebx
// 00520cb4  83c410               add esp, 0x10
// 00520cb7  c3                   ret 
// 00520cb8  f7407000000100       test dword ptr [eax + 0x70], 0x10000
// 00520cbf  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 00520cc3  8b88c8000000         mov ecx, dword ptr [eax + 0xc8]
// 00520cc9  c744241080000000     mov dword ptr [esp + 0x10], 0x80
// 00520cd1  7414                 je 0x520ce7
// 00520cd3  33ed                 xor ebp, ebp
// 00520cd5  c744241c06000000     mov dword ptr [esp + 0x1c], 6
// 00520cdd  c744241802000000     mov dword ptr [esp + 0x18], 2
// 00520ce5  eb15                 jmp 0x520cfc
// 00520ce7  bd06000000           mov ebp, 6
// 00520cec  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 00520cf4  c7442418feffffff     mov dword ptr [esp + 0x18], 0xfffffffe
// 00520cfc  85c9                 test ecx, ecx
// 00520cfe  8bd5                 mov edx, ebp
// 00520d00  0f861e010000         jbe 0x520e24
// 00520d06  894c2414             mov dword ptr [esp + 0x14], ecx
// 00520d0a  8d9b00000000         lea ebx, [ebx]
// 00520d10  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00520d14  854c2410             test dword ptr [esp + 0x10], ecx
// 00520d18  7422                 je 0x520d3c
// 00520d1a  0fb606               movzx eax, byte ptr [esi]
// 00520d1d  8aca                 mov cl, dl
// 00520d1f  d3e8                 shr eax, cl
// 00520d21  b906000000           mov ecx, 6
// 00520d26  2bca                 sub ecx, edx
// 00520d28  bb3f3f0000           mov ebx, 0x3f3f
// 00520d2d  d3fb                 sar ebx, cl
// 00520d2f  83e003               and eax, 3
// 00520d32  8bca                 mov ecx, edx
// 00520d34  d2e0                 shl al, cl
// 00520d36  221f                 and bl, byte ptr [edi]
// 00520d38  0ad8                 or bl, al
// 00520d3a  881f                 mov byte ptr [edi], bl
// 00520d3c  3b54241c             cmp edx, dword ptr [esp + 0x1c]
// 00520d40  750a                 jne 0x520d4c
// 00520d42  83c601               add esi, 1
// 00520d45  8bd5                 mov edx, ebp
// 00520d47  83c701               add edi, 1
// 00520d4a  eb04                 jmp 0x520d50
// 00520d4c  03542418             add edx, dword ptr [esp + 0x18]
// 00520d50  b801000000           mov eax, 1
// 00520d55  39442410             cmp dword ptr [esp + 0x10], eax
// 00520d59  750a                 jne 0x520d65
// 00520d5b  c744241080000000     mov dword ptr [esp + 0x10], 0x80
// 00520d63  eb04                 jmp 0x520d69
// 00520d65  d17c2410             sar dword ptr [esp + 0x10], 1
// 00520d69  29442414             sub dword ptr [esp + 0x14], eax
// 00520d6d  75a1                 jne 0x520d10
// 00520d6f  5f                   pop edi
// 00520d70  5e                   pop esi
// 00520d71  5d                   pop ebp
// 00520d72  5b                   pop ebx
// 00520d73  83c410               add esp, 0x10
// 00520d76  c3                   ret 
// 00520d77  f7407000000100       test dword ptr [eax + 0x70], 0x10000
// 00520d7e  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 00520d82  8b88c8000000         mov ecx, dword ptr [eax + 0xc8]
// 00520d88  c744241080000000     mov dword ptr [esp + 0x10], 0x80
// 00520d90  7414                 je 0x520da6
// 00520d92  33ed                 xor ebp, ebp
// 00520d94  c744241c07000000     mov dword ptr [esp + 0x1c], 7
// 00520d9c  c744241801000000     mov dword ptr [esp + 0x18], 1
// 00520da4  eb15                 jmp 0x520dbb
// 00520da6  bd07000000           mov ebp, 7
// 00520dab  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 00520db3  c7442418ffffffff     mov dword ptr [esp + 0x18], 0xffffffff
// 00520dbb  85c9                 test ecx, ecx
// 00520dbd  8bd5                 mov edx, ebp
// 00520dbf  7663                 jbe 0x520e24
// 00520dc1  894c2414             mov dword ptr [esp + 0x14], ecx
// 00520dc5  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00520dc9  85442410             test dword ptr [esp + 0x10], eax
// 00520dcd  7422                 je 0x520df1
// 00520dcf  0fb606               movzx eax, byte ptr [esi]
// 00520dd2  8aca                 mov cl, dl
// 00520dd4  d3e8                 shr eax, cl
// 00520dd6  b907000000           mov ecx, 7
// 00520ddb  2bca                 sub ecx, edx
// 00520ddd  bb7f7f0000           mov ebx, 0x7f7f
// 00520de2  d3fb                 sar ebx, cl
// 00520de4  83e001               and eax, 1
// 00520de7  8bca                 mov ecx, edx
// 00520de9  d2e0                 shl al, cl
// 00520deb  221f                 and bl, byte ptr [edi]
// 00520ded  0ad8                 or bl, al
// 00520def  881f                 mov byte ptr [edi], bl
// 00520df1  3b54241c             cmp edx, dword ptr [esp + 0x1c]
// 00520df5  750a                 jne 0x520e01
// 00520df7  83c601               add esi, 1
// 00520dfa  8bd5                 mov edx, ebp
// 00520dfc  83c701               add edi, 1
// 00520dff  eb04                 jmp 0x520e05
// 00520e01  03542418             add edx, dword ptr [esp + 0x18]
// 00520e05  b801000000           mov eax, 1
// 00520e0a  39442410             cmp dword ptr [esp + 0x10], eax
// 00520e0e  750a                 jne 0x520e1a
// 00520e10  c744241080000000     mov dword ptr [esp + 0x10], 0x80
// 00520e18  eb04                 jmp 0x520e1e
// 00520e1a  d17c2410             sar dword ptr [esp + 0x10], 1
// 00520e1e  29442414             sub dword ptr [esp + 0x14], eax
// 00520e22  75a1                 jne 0x520dc5
// 00520e24  5f                   pop edi
// 00520e25  5e                   pop esi
// 00520e26  5d                   pop ebp
// 00520e27  5b                   pop ebx
// 00520e28  83c410               add esp, 0x10
// 00520e2b  c3                   ret 
// library libpng-1.2.6/pngrutil.c (function _png_combine_row)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.6 pngrutil.c
