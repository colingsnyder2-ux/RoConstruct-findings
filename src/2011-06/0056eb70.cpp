// from server: 100% by auto
// roc 2011-06 0056eb70  unit: seg_00560000  size: 745 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0056eb70
//
// 0056eb70  83ec10               sub esp, 0x10
// 0056eb73  817c241cff000000     cmp dword ptr [esp + 0x1c], 0xff
// 0056eb7b  7544                 jne 0x56ebc1
// 0056eb7d  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0056eb81  8a810b010000         mov al, byte ptr [ecx + 0x10b]
// 0056eb87  3c08                 cmp al, 8
// 0056eb89  0fb6c0               movzx eax, al
// 0056eb8c  720c                 jb 0x56eb9a
// 0056eb8e  c1e803               shr eax, 3
// 0056eb91  0faf81c8000000       imul eax, dword ptr [ecx + 0xc8]
// 0056eb98  eb0d                 jmp 0x56eba7
// 0056eb9a  0faf81c8000000       imul eax, dword ptr [ecx + 0xc8]
// 0056eba1  83c007               add eax, 7
// 0056eba4  c1e803               shr eax, 3
// 0056eba7  50                   push eax
// 0056eba8  8b81ec000000         mov eax, dword ptr [ecx + 0xec]
// 0056ebae  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0056ebb2  40                   inc eax
// 0056ebb3  50                   push eax
// 0056ebb4  51                   push ecx
// 0056ebb5  e822ca2900           call 0x80b5dc
// 0056ebba  83c40c               add esp, 0xc
// 0056ebbd  83c410               add esp, 0x10
// 0056ebc0  c3                   ret 
// 0056ebc1  8b442414             mov eax, dword ptr [esp + 0x14]
// 0056ebc5  0fb6880b010000       movzx ecx, byte ptr [eax + 0x10b]
// 0056ebcc  53                   push ebx
// 0056ebcd  55                   push ebp
// 0056ebce  56                   push esi
// 0056ebcf  8bb0ec000000         mov esi, dword ptr [eax + 0xec]
// 0056ebd5  8bd1                 mov edx, ecx
// 0056ebd7  46                   inc esi
// 0056ebd8  83ea01               sub edx, 1
// 0056ebdb  57                   push edi
// 0056ebdc  0f84c6010000         je 0x56eda8
// 0056ebe2  83ea01               sub edx, 1
// 0056ebe5  0f8408010000         je 0x56ecf3
// 0056ebeb  83ea02               sub edx, 2
// 0056ebee  7451                 je 0x56ec41
// 0056ebf0  8b80c8000000         mov eax, dword ptr [eax + 0xc8]
// 0056ebf6  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 0056ebfa  c1e903               shr ecx, 3
// 0056ebfd  8bf9                 mov edi, ecx
// 0056ebff  b380                 mov bl, 0x80
// 0056ec01  85c0                 test eax, eax
// 0056ec03  0f8648020000         jbe 0x56ee51
// 0056ec09  89442410             mov dword ptr [esp + 0x10], eax
// 0056ec0d  8d4900               lea ecx, [ecx]
// 0056ec10  8a54242c             mov dl, byte ptr [esp + 0x2c]
// 0056ec14  84da                 test dl, bl
// 0056ec16  740b                 je 0x56ec23
// 0056ec18  57                   push edi
// 0056ec19  56                   push esi
// 0056ec1a  55                   push ebp
// 0056ec1b  e8bcc92900           call 0x80b5dc
// 0056ec20  83c40c               add esp, 0xc
// 0056ec23  03f7                 add esi, edi
// 0056ec25  03ef                 add ebp, edi
// 0056ec27  80fb01               cmp bl, 1
// 0056ec2a  7504                 jne 0x56ec30
// 0056ec2c  b380                 mov bl, 0x80
// 0056ec2e  eb02                 jmp 0x56ec32
// 0056ec30  d0eb                 shr bl, 1
// 0056ec32  836c241001           sub dword ptr [esp + 0x10], 1
// 0056ec37  75d7                 jne 0x56ec10
// 0056ec39  5f                   pop edi
// 0056ec3a  5e                   pop esi
// 0056ec3b  5d                   pop ebp
// 0056ec3c  5b                   pop ebx
// 0056ec3d  83c410               add esp, 0x10
// 0056ec40  c3                   ret 
// 0056ec41  f7407000000100       test dword ptr [eax + 0x70], 0x10000
// 0056ec48  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 0056ec4c  8b88c8000000         mov ecx, dword ptr [eax + 0xc8]
// 0056ec52  c744241080000000     mov dword ptr [esp + 0x10], 0x80
// 0056ec5a  7411                 je 0x56ec6d
// 0056ec5c  b804000000           mov eax, 4
// 0056ec61  33ed                 xor ebp, ebp
// 0056ec63  89442414             mov dword ptr [esp + 0x14], eax
// 0056ec67  89442418             mov dword ptr [esp + 0x18], eax
// 0056ec6b  eb15                 jmp 0x56ec82
// 0056ec6d  bd04000000           mov ebp, 4
// 0056ec72  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0056ec7a  c7442418fcffffff     mov dword ptr [esp + 0x18], 0xfffffffc
// 0056ec82  8bd5                 mov edx, ebp
// 0056ec84  85c9                 test ecx, ecx
// 0056ec86  0f86c5010000         jbe 0x56ee51
// 0056ec8c  894c241c             mov dword ptr [esp + 0x1c], ecx
// 0056ec90  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0056ec94  85442410             test dword ptr [esp + 0x10], eax
// 0056ec98  7422                 je 0x56ecbc
// 0056ec9a  0fb606               movzx eax, byte ptr [esi]
// 0056ec9d  8aca                 mov cl, dl
// 0056ec9f  d3e8                 shr eax, cl
// 0056eca1  b904000000           mov ecx, 4
// 0056eca6  2bca                 sub ecx, edx
// 0056eca8  bb0f0f0000           mov ebx, 0xf0f
// 0056ecad  d3fb                 sar ebx, cl
// 0056ecaf  83e00f               and eax, 0xf
// 0056ecb2  8bca                 mov ecx, edx
// 0056ecb4  d2e0                 shl al, cl
// 0056ecb6  221f                 and bl, byte ptr [edi]
// 0056ecb8  0ad8                 or bl, al
// 0056ecba  881f                 mov byte ptr [edi], bl
// 0056ecbc  3b542414             cmp edx, dword ptr [esp + 0x14]
// 0056ecc0  7506                 jne 0x56ecc8
// 0056ecc2  46                   inc esi
// 0056ecc3  8bd5                 mov edx, ebp
// 0056ecc5  47                   inc edi
// 0056ecc6  eb04                 jmp 0x56eccc
// 0056ecc8  03542418             add edx, dword ptr [esp + 0x18]
// 0056eccc  b801000000           mov eax, 1
// 0056ecd1  39442410             cmp dword ptr [esp + 0x10], eax
// 0056ecd5  750a                 jne 0x56ece1
// 0056ecd7  c744241080000000     mov dword ptr [esp + 0x10], 0x80
// 0056ecdf  eb04                 jmp 0x56ece5
// 0056ece1  d17c2410             sar dword ptr [esp + 0x10], 1
// 0056ece5  2944241c             sub dword ptr [esp + 0x1c], eax
// 0056ece9  75a5                 jne 0x56ec90
// 0056eceb  5f                   pop edi
// 0056ecec  5e                   pop esi
// 0056eced  5d                   pop ebp
// 0056ecee  5b                   pop ebx
// 0056ecef  83c410               add esp, 0x10
// 0056ecf2  c3                   ret 
// 0056ecf3  f7407000000100       test dword ptr [eax + 0x70], 0x10000
// 0056ecfa  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 0056ecfe  8b88c8000000         mov ecx, dword ptr [eax + 0xc8]
// 0056ed04  c744241080000000     mov dword ptr [esp + 0x10], 0x80
// 0056ed0c  7414                 je 0x56ed22
// 0056ed0e  33ed                 xor ebp, ebp
// 0056ed10  c744241c06000000     mov dword ptr [esp + 0x1c], 6
// 0056ed18  c744241802000000     mov dword ptr [esp + 0x18], 2
// 0056ed20  eb15                 jmp 0x56ed37
// 0056ed22  bd06000000           mov ebp, 6
// 0056ed27  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 0056ed2f  c7442418feffffff     mov dword ptr [esp + 0x18], 0xfffffffe
// 0056ed37  8bd5                 mov edx, ebp
// 0056ed39  85c9                 test ecx, ecx
// 0056ed3b  0f8610010000         jbe 0x56ee51
// 0056ed41  894c2414             mov dword ptr [esp + 0x14], ecx
// 0056ed45  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0056ed49  854c2410             test dword ptr [esp + 0x10], ecx
// 0056ed4d  7422                 je 0x56ed71
// 0056ed4f  0fb606               movzx eax, byte ptr [esi]
// 0056ed52  8aca                 mov cl, dl
// 0056ed54  d3e8                 shr eax, cl
// 0056ed56  b906000000           mov ecx, 6
// 0056ed5b  2bca                 sub ecx, edx
// 0056ed5d  bb3f3f0000           mov ebx, 0x3f3f
// 0056ed62  d3fb                 sar ebx, cl
// 0056ed64  83e003               and eax, 3
// 0056ed67  8bca                 mov ecx, edx
// 0056ed69  d2e0                 shl al, cl
// 0056ed6b  221f                 and bl, byte ptr [edi]
// 0056ed6d  0ad8                 or bl, al
// 0056ed6f  881f                 mov byte ptr [edi], bl
// 0056ed71  3b54241c             cmp edx, dword ptr [esp + 0x1c]
// 0056ed75  7506                 jne 0x56ed7d
// 0056ed77  46                   inc esi
// 0056ed78  8bd5                 mov edx, ebp
// 0056ed7a  47                   inc edi
// 0056ed7b  eb04                 jmp 0x56ed81
// 0056ed7d  03542418             add edx, dword ptr [esp + 0x18]
// 0056ed81  b801000000           mov eax, 1
// 0056ed86  39442410             cmp dword ptr [esp + 0x10], eax
// 0056ed8a  750a                 jne 0x56ed96
// 0056ed8c  c744241080000000     mov dword ptr [esp + 0x10], 0x80
// 0056ed94  eb04                 jmp 0x56ed9a
// 0056ed96  d17c2410             sar dword ptr [esp + 0x10], 1
// 0056ed9a  29442414             sub dword ptr [esp + 0x14], eax
// 0056ed9e  75a5                 jne 0x56ed45
// 0056eda0  5f                   pop edi
// 0056eda1  5e                   pop esi
// 0056eda2  5d                   pop ebp
// 0056eda3  5b                   pop ebx
// 0056eda4  83c410               add esp, 0x10
// 0056eda7  c3                   ret 
// 0056eda8  f7407000000100       test dword ptr [eax + 0x70], 0x10000
// 0056edaf  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 0056edb3  8b88c8000000         mov ecx, dword ptr [eax + 0xc8]
// 0056edb9  c744241080000000     mov dword ptr [esp + 0x10], 0x80
// 0056edc1  7414                 je 0x56edd7
// 0056edc3  33ed                 xor ebp, ebp
// 0056edc5  c744241c07000000     mov dword ptr [esp + 0x1c], 7
// 0056edcd  c744241801000000     mov dword ptr [esp + 0x18], 1
// 0056edd5  eb15                 jmp 0x56edec
// 0056edd7  bd07000000           mov ebp, 7
// 0056eddc  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 0056ede4  c7442418ffffffff     mov dword ptr [esp + 0x18], 0xffffffff
// 0056edec  8bd5                 mov edx, ebp
// 0056edee  85c9                 test ecx, ecx
// 0056edf0  765f                 jbe 0x56ee51
// 0056edf2  894c2414             mov dword ptr [esp + 0x14], ecx
// 0056edf6  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0056edfa  85442410             test dword ptr [esp + 0x10], eax
// 0056edfe  7422                 je 0x56ee22
// 0056ee00  0fb606               movzx eax, byte ptr [esi]
// 0056ee03  8aca                 mov cl, dl
// 0056ee05  d3e8                 shr eax, cl
// 0056ee07  b907000000           mov ecx, 7
// 0056ee0c  2bca                 sub ecx, edx
// 0056ee0e  bb7f7f0000           mov ebx, 0x7f7f
// 0056ee13  d3fb                 sar ebx, cl
// 0056ee15  83e001               and eax, 1
// 0056ee18  8bca                 mov ecx, edx
// 0056ee1a  d2e0                 shl al, cl
// 0056ee1c  221f                 and bl, byte ptr [edi]
// 0056ee1e  0ad8                 or bl, al
// 0056ee20  881f                 mov byte ptr [edi], bl
// 0056ee22  3b54241c             cmp edx, dword ptr [esp + 0x1c]
// 0056ee26  7506                 jne 0x56ee2e
// 0056ee28  46                   inc esi
// 0056ee29  8bd5                 mov edx, ebp
// 0056ee2b  47                   inc edi
// 0056ee2c  eb04                 jmp 0x56ee32
// 0056ee2e  03542418             add edx, dword ptr [esp + 0x18]
// 0056ee32  b801000000           mov eax, 1
// 0056ee37  39442410             cmp dword ptr [esp + 0x10], eax
// 0056ee3b  750a                 jne 0x56ee47
// 0056ee3d  c744241080000000     mov dword ptr [esp + 0x10], 0x80
// 0056ee45  eb04                 jmp 0x56ee4b
// 0056ee47  d17c2410             sar dword ptr [esp + 0x10], 1
// 0056ee4b  29442414             sub dword ptr [esp + 0x14], eax
// 0056ee4f  75a5                 jne 0x56edf6
// 0056ee51  5f                   pop edi
// 0056ee52  5e                   pop esi
// 0056ee53  5d                   pop ebp
// 0056ee54  5b                   pop ebx
// 0056ee55  83c410               add esp, 0x10
// 0056ee58  c3                   ret 
// library libpng-1.2.6/pngrutil.c (function _png_combine_row)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.6 pngrutil.c
