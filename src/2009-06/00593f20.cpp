// from server: 100% by auto
// roc 2009-06 00593f20  unit: seg_00590000  size: 745 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00593f20
//
// 00593f20  83ec10               sub esp, 0x10
// 00593f23  817c241cff000000     cmp dword ptr [esp + 0x1c], 0xff
// 00593f2b  7544                 jne 0x593f71
// 00593f2d  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00593f31  8a810b010000         mov al, byte ptr [ecx + 0x10b]
// 00593f37  3c08                 cmp al, 8
// 00593f39  0fb6c0               movzx eax, al
// 00593f3c  720c                 jb 0x593f4a
// 00593f3e  c1e803               shr eax, 3
// 00593f41  0faf81c8000000       imul eax, dword ptr [ecx + 0xc8]
// 00593f48  eb0d                 jmp 0x593f57
// 00593f4a  0faf81c8000000       imul eax, dword ptr [ecx + 0xc8]
// 00593f51  83c007               add eax, 7
// 00593f54  c1e803               shr eax, 3
// 00593f57  50                   push eax
// 00593f58  8b81ec000000         mov eax, dword ptr [ecx + 0xec]
// 00593f5e  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00593f62  40                   inc eax
// 00593f63  50                   push eax
// 00593f64  51                   push ecx
// 00593f65  e84c5f1800           call 0x719eb6
// 00593f6a  83c40c               add esp, 0xc
// 00593f6d  83c410               add esp, 0x10
// 00593f70  c3                   ret 
// 00593f71  8b442414             mov eax, dword ptr [esp + 0x14]
// 00593f75  0fb6880b010000       movzx ecx, byte ptr [eax + 0x10b]
// 00593f7c  53                   push ebx
// 00593f7d  55                   push ebp
// 00593f7e  56                   push esi
// 00593f7f  8bb0ec000000         mov esi, dword ptr [eax + 0xec]
// 00593f85  8bd1                 mov edx, ecx
// 00593f87  46                   inc esi
// 00593f88  83ea01               sub edx, 1
// 00593f8b  57                   push edi
// 00593f8c  0f84c6010000         je 0x594158
// 00593f92  83ea01               sub edx, 1
// 00593f95  0f8408010000         je 0x5940a3
// 00593f9b  83ea02               sub edx, 2
// 00593f9e  7451                 je 0x593ff1
// 00593fa0  8b80c8000000         mov eax, dword ptr [eax + 0xc8]
// 00593fa6  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 00593faa  c1e903               shr ecx, 3
// 00593fad  8bf9                 mov edi, ecx
// 00593faf  b380                 mov bl, 0x80
// 00593fb1  85c0                 test eax, eax
// 00593fb3  0f8648020000         jbe 0x594201
// 00593fb9  89442410             mov dword ptr [esp + 0x10], eax
// 00593fbd  8d4900               lea ecx, [ecx]
// 00593fc0  8a54242c             mov dl, byte ptr [esp + 0x2c]
// 00593fc4  84da                 test dl, bl
// 00593fc6  740b                 je 0x593fd3
// 00593fc8  57                   push edi
// 00593fc9  56                   push esi
// 00593fca  55                   push ebp
// 00593fcb  e8e65e1800           call 0x719eb6
// 00593fd0  83c40c               add esp, 0xc
// 00593fd3  03f7                 add esi, edi
// 00593fd5  03ef                 add ebp, edi
// 00593fd7  80fb01               cmp bl, 1
// 00593fda  7504                 jne 0x593fe0
// 00593fdc  b380                 mov bl, 0x80
// 00593fde  eb02                 jmp 0x593fe2
// 00593fe0  d0eb                 shr bl, 1
// 00593fe2  836c241001           sub dword ptr [esp + 0x10], 1
// 00593fe7  75d7                 jne 0x593fc0
// 00593fe9  5f                   pop edi
// 00593fea  5e                   pop esi
// 00593feb  5d                   pop ebp
// 00593fec  5b                   pop ebx
// 00593fed  83c410               add esp, 0x10
// 00593ff0  c3                   ret 
// 00593ff1  f7407000000100       test dword ptr [eax + 0x70], 0x10000
// 00593ff8  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 00593ffc  8b88c8000000         mov ecx, dword ptr [eax + 0xc8]
// 00594002  c744241080000000     mov dword ptr [esp + 0x10], 0x80
// 0059400a  7411                 je 0x59401d
// 0059400c  b804000000           mov eax, 4
// 00594011  33ed                 xor ebp, ebp
// 00594013  89442414             mov dword ptr [esp + 0x14], eax
// 00594017  89442418             mov dword ptr [esp + 0x18], eax
// 0059401b  eb15                 jmp 0x594032
// 0059401d  bd04000000           mov ebp, 4
// 00594022  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0059402a  c7442418fcffffff     mov dword ptr [esp + 0x18], 0xfffffffc
// 00594032  8bd5                 mov edx, ebp
// 00594034  85c9                 test ecx, ecx
// 00594036  0f86c5010000         jbe 0x594201
// 0059403c  894c241c             mov dword ptr [esp + 0x1c], ecx
// 00594040  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00594044  85442410             test dword ptr [esp + 0x10], eax
// 00594048  7422                 je 0x59406c
// 0059404a  0fb606               movzx eax, byte ptr [esi]
// 0059404d  8aca                 mov cl, dl
// 0059404f  d3e8                 shr eax, cl
// 00594051  b904000000           mov ecx, 4
// 00594056  2bca                 sub ecx, edx
// 00594058  bb0f0f0000           mov ebx, 0xf0f
// 0059405d  d3fb                 sar ebx, cl
// 0059405f  83e00f               and eax, 0xf
// 00594062  8bca                 mov ecx, edx
// 00594064  d2e0                 shl al, cl
// 00594066  221f                 and bl, byte ptr [edi]
// 00594068  0ad8                 or bl, al
// 0059406a  881f                 mov byte ptr [edi], bl
// 0059406c  3b542414             cmp edx, dword ptr [esp + 0x14]
// 00594070  7506                 jne 0x594078
// 00594072  46                   inc esi
// 00594073  8bd5                 mov edx, ebp
// 00594075  47                   inc edi
// 00594076  eb04                 jmp 0x59407c
// 00594078  03542418             add edx, dword ptr [esp + 0x18]
// 0059407c  b801000000           mov eax, 1
// 00594081  39442410             cmp dword ptr [esp + 0x10], eax
// 00594085  750a                 jne 0x594091
// 00594087  c744241080000000     mov dword ptr [esp + 0x10], 0x80
// 0059408f  eb04                 jmp 0x594095
// 00594091  d17c2410             sar dword ptr [esp + 0x10], 1
// 00594095  2944241c             sub dword ptr [esp + 0x1c], eax
// 00594099  75a5                 jne 0x594040
// 0059409b  5f                   pop edi
// 0059409c  5e                   pop esi
// 0059409d  5d                   pop ebp
// 0059409e  5b                   pop ebx
// 0059409f  83c410               add esp, 0x10
// 005940a2  c3                   ret 
// 005940a3  f7407000000100       test dword ptr [eax + 0x70], 0x10000
// 005940aa  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 005940ae  8b88c8000000         mov ecx, dword ptr [eax + 0xc8]
// 005940b4  c744241080000000     mov dword ptr [esp + 0x10], 0x80
// 005940bc  7414                 je 0x5940d2
// 005940be  33ed                 xor ebp, ebp
// 005940c0  c744241c06000000     mov dword ptr [esp + 0x1c], 6
// 005940c8  c744241802000000     mov dword ptr [esp + 0x18], 2
// 005940d0  eb15                 jmp 0x5940e7
// 005940d2  bd06000000           mov ebp, 6
// 005940d7  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 005940df  c7442418feffffff     mov dword ptr [esp + 0x18], 0xfffffffe
// 005940e7  8bd5                 mov edx, ebp
// 005940e9  85c9                 test ecx, ecx
// 005940eb  0f8610010000         jbe 0x594201
// 005940f1  894c2414             mov dword ptr [esp + 0x14], ecx
// 005940f5  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 005940f9  854c2410             test dword ptr [esp + 0x10], ecx
// 005940fd  7422                 je 0x594121
// 005940ff  0fb606               movzx eax, byte ptr [esi]
// 00594102  8aca                 mov cl, dl
// 00594104  d3e8                 shr eax, cl
// 00594106  b906000000           mov ecx, 6
// 0059410b  2bca                 sub ecx, edx
// 0059410d  bb3f3f0000           mov ebx, 0x3f3f
// 00594112  d3fb                 sar ebx, cl
// 00594114  83e003               and eax, 3
// 00594117  8bca                 mov ecx, edx
// 00594119  d2e0                 shl al, cl
// 0059411b  221f                 and bl, byte ptr [edi]
// 0059411d  0ad8                 or bl, al
// 0059411f  881f                 mov byte ptr [edi], bl
// 00594121  3b54241c             cmp edx, dword ptr [esp + 0x1c]
// 00594125  7506                 jne 0x59412d
// 00594127  46                   inc esi
// 00594128  8bd5                 mov edx, ebp
// 0059412a  47                   inc edi
// 0059412b  eb04                 jmp 0x594131
// 0059412d  03542418             add edx, dword ptr [esp + 0x18]
// 00594131  b801000000           mov eax, 1
// 00594136  39442410             cmp dword ptr [esp + 0x10], eax
// 0059413a  750a                 jne 0x594146
// 0059413c  c744241080000000     mov dword ptr [esp + 0x10], 0x80
// 00594144  eb04                 jmp 0x59414a
// 00594146  d17c2410             sar dword ptr [esp + 0x10], 1
// 0059414a  29442414             sub dword ptr [esp + 0x14], eax
// 0059414e  75a5                 jne 0x5940f5
// 00594150  5f                   pop edi
// 00594151  5e                   pop esi
// 00594152  5d                   pop ebp
// 00594153  5b                   pop ebx
// 00594154  83c410               add esp, 0x10
// 00594157  c3                   ret 
// 00594158  f7407000000100       test dword ptr [eax + 0x70], 0x10000
// 0059415f  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 00594163  8b88c8000000         mov ecx, dword ptr [eax + 0xc8]
// 00594169  c744241080000000     mov dword ptr [esp + 0x10], 0x80
// 00594171  7414                 je 0x594187
// 00594173  33ed                 xor ebp, ebp
// 00594175  c744241c07000000     mov dword ptr [esp + 0x1c], 7
// 0059417d  c744241801000000     mov dword ptr [esp + 0x18], 1
// 00594185  eb15                 jmp 0x59419c
// 00594187  bd07000000           mov ebp, 7
// 0059418c  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 00594194  c7442418ffffffff     mov dword ptr [esp + 0x18], 0xffffffff
// 0059419c  8bd5                 mov edx, ebp
// 0059419e  85c9                 test ecx, ecx
// 005941a0  765f                 jbe 0x594201
// 005941a2  894c2414             mov dword ptr [esp + 0x14], ecx
// 005941a6  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 005941aa  85442410             test dword ptr [esp + 0x10], eax
// 005941ae  7422                 je 0x5941d2
// 005941b0  0fb606               movzx eax, byte ptr [esi]
// 005941b3  8aca                 mov cl, dl
// 005941b5  d3e8                 shr eax, cl
// 005941b7  b907000000           mov ecx, 7
// 005941bc  2bca                 sub ecx, edx
// 005941be  bb7f7f0000           mov ebx, 0x7f7f
// 005941c3  d3fb                 sar ebx, cl
// 005941c5  83e001               and eax, 1
// 005941c8  8bca                 mov ecx, edx
// 005941ca  d2e0                 shl al, cl
// 005941cc  221f                 and bl, byte ptr [edi]
// 005941ce  0ad8                 or bl, al
// 005941d0  881f                 mov byte ptr [edi], bl
// 005941d2  3b54241c             cmp edx, dword ptr [esp + 0x1c]
// 005941d6  7506                 jne 0x5941de
// 005941d8  46                   inc esi
// 005941d9  8bd5                 mov edx, ebp
// 005941db  47                   inc edi
// 005941dc  eb04                 jmp 0x5941e2
// 005941de  03542418             add edx, dword ptr [esp + 0x18]
// 005941e2  b801000000           mov eax, 1
// 005941e7  39442410             cmp dword ptr [esp + 0x10], eax
// 005941eb  750a                 jne 0x5941f7
// 005941ed  c744241080000000     mov dword ptr [esp + 0x10], 0x80
// 005941f5  eb04                 jmp 0x5941fb
// 005941f7  d17c2410             sar dword ptr [esp + 0x10], 1
// 005941fb  29442414             sub dword ptr [esp + 0x14], eax
// 005941ff  75a5                 jne 0x5941a6
// 00594201  5f                   pop edi
// 00594202  5e                   pop esi
// 00594203  5d                   pop ebp
// 00594204  5b                   pop ebx
// 00594205  83c410               add esp, 0x10
// 00594208  c3                   ret 
// library libpng-1.2.6/pngrutil.c (function _png_combine_row)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.6 pngrutil.c
